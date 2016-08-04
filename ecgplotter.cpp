/****************************************************************************
**
** Antonio Cardoso Martins    (digiplan.pt@gmail.com)
** Paulo Dias Costa           (mestre.do.pau@gmail.com)
** João Silva Marques         (joaomiguelsilvamarques@gmail.com)
**
** Copyright (c) 2009-2014 All Rights Reserved
**
** This file is part of simECG
**
** simECG is free software: you can redistribute it and/or modify
** it under the terms of the GNU General Public License as published by
** the Free Software Foundation, either version 3 of the License, or
** (at your option) any later version.
**
** simECG is distributed in the hope that it will be useful,
** but WITHOUT ANY WARRANTY; without even the implied warranty of
** MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
** GNU General Public License for more details.
**
** You should have received a copy of the GNU General Public License
** along with Foobar.  If not, see <http://www.gnu.org/licenses/>.
**
****************************************************************************/

#include "ecgplotter.h"
#include "qvectorplus.h"
#include "ecgpreset.h"
#include "ecgpresetlist.h"

#include <QtGlobal>
#include <QtWidgets/QInputDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMessageBox>

#include <cmath>


ECGplotter::ECGplotter(QWidget *parent) : Plotter(parent)
{
    // base_data is a vector [1, XELEMENTS] with values ranging from 0.01 to 2 in 0.01 steps
    base_data.reserve(XELEMENTS);
    //double step = (double)(plotSettings.maxX - plotSettings.minX) / XELEMENTS;
    //double value = plotSettings.minX;
	double step = 0.01;
	double value = plotSettings.minX;

    for (int i = 0; i < XELEMENTS; i++) {
        base_data.append(value);
        value += step;
    }
	timer = new QTimer(this);
	speed = 1;//default is 25mm
	connect(timer, SIGNAL(timeout()), this, SLOT(timeout()));
    // Prepare ECG waves
    pwave.reserve(XELEMENTS);
    qrswave.reserve(XELEMENTS);
    swave.reserve(XELEMENTS);
    twave.reserve(XELEMENTS);
    uwave.reserve(XELEMENTS);
    ecg.resize(XELEMENTS);

    generateSignal();
}

void ECGplotter::timeout()
{
	//TODO: NOT WORKING
	//scroll(10, 0);
	//update();
	//qDebug("Timeout");
	if (moving) {
		//moveBaseData(10);
		if(speed)//25mm/s
			plotSettings.scroll(2, 0);
		else//50mm/s
			plotSettings.scroll(4, 0);
		//double step = (double)(plotSettings.maxX - plotSettings.minX) / XELEMENTS;
		//double value = plotSettings.minX;
		double step = 0.01;
		double value = plotSettings.minX;
		for (int i = 0; i < XELEMENTS; i++) {
			base_data[i] = (value);
			value += step;
		}
		generateSignal();
	}
}

void ECGplotter::setRollingSpeed(const bool &rollingSpeed) {
	speed = rollingSpeed;
	/*
	if (speed)
		timer->start(40);
	else
		timer->start(20);
	*/
}

void ECGplotter::generateSignal()
{
	if(!moving)   
		qDebug("ECG regeneration has been requested ...");

    if (currentECG.getDisplayPWave()) {
        generate_P_wave();
    } else {
        pwave.resize(XELEMENTS);
        pwave.fill(0.0);
    }
    if (currentECG.getDisplayQWave()) {
        generate_Q_wave();
    } else {
        qwave.resize(XELEMENTS);
        qwave.fill(0.0);
    }
    if (currentECG.getDisplayQRSWave()) {
        generate_QRS_wave();
    } else {
        qrswave.resize(XELEMENTS);
        qrswave.fill(0.0);
    }
    if (currentECG.getDisplaySWave()) {
        generate_S_wave();
    } else {
        swave.resize(XELEMENTS);
        swave.fill(0.0);
    }
    if (currentECG.getDisplayTWave()) {
        generate_T_wave();
    } else {
        twave.resize(XELEMENTS);
        twave.fill(0.0);
    }
    if (currentECG.getDisplayUWave()) {
        generate_U_wave();
    } else {
        uwave.resize(XELEMENTS);
        uwave.fill(0.0);
    }

    // For testing only
    // setCurveData(1, generate_Sine_wave());

    // Add all matrixes into one
    double result;
    for (int i = 0; i < XELEMENTS; i++) {
        result = pwave[i] + qwave[i] + qrswave[i] + swave[i] + twave[i] + uwave[i];
        if (!currentECG.getNoiseFilter()) {
            // Initialize pseudo random number generator
            // Generate noise as a percentage of the signal
             double noise = (qrand() % (int)(MAXNOISE * 10000)) / 10000.0;
            // double noise = ((qrand() % (int)(MAXNOISE * result * 100.0)) / 100.0);
            // Noise can be positive or negative
            // noise -= MAXNOISE * result / 2.0;
            // Add noise
            // qDebug("Noise is %f", noise);
            result += noise;
        }
        ecg[i] = QPointF(base_data[i], result);
    }

    // update heart rate display
    Plotter::setHeartRate(currentECG.getHeartRate());

    setCurveData(0, ecg);

    /*
    // In case there is the need for a second signal
    QVector<QPointF> ecg1;
    ecg1.resize(XELEMENTS);
    for (int i = 0; i < XELEMENTS; i++) {
        ecg1[i] = QPointF(base_data[i], qwave[i]);
    }
    setCurveData(1, ecg1);
    */
}


void ECGplotter::setHeartRate(const int &value)
{
    currentECG.setHeartRate(value);
    generateSignal();
}


void ECGplotter::setNoiseFilter(const bool &status)
{
    currentECG.setNoiseFilter(status);
    generateSignal();
}

void ECGplotter::setDisplayStatic(const bool &status)
{
	if (status) {
		qDebug("Static View");
		moving = false;
		timer->stop();
	}
	else {
		qDebug("Rolling View");
		moving = true;
		//if (speed)
			timer->start(40);
		//else
			//timer->start(20);
	}
}

void ECGplotter::setAmplitude_P_wave(const double &value)
{
    currentECG.setAmplitude_P_wave(value);
    generateSignal();
}


void ECGplotter::setDuration_P_wave(const double &value)
{
    currentECG.setDuration_P_wave(value);
    generateSignal();
}


void ECGplotter::setInterval_P_wave(const double &value)
{
    currentECG.setInterval_P_wave(value);
    generateSignal();
}


void ECGplotter::setPositive_P_wave(const bool &status)
{
    currentECG.setPositive_P_wave(status);
    generateSignal();
}


void ECGplotter::setAmplitude_Q_wave(const double &value)
{
    currentECG.setAmplitude_Q_wave(value);
    generateSignal();
}


void ECGplotter::setDuration_Q_wave(const double &value)
{
    currentECG.setDuration_Q_wave(value);
    generateSignal();
}


void ECGplotter::setInterval_Q_wave(const double &value)
{
    currentECG.setInterval_Q_wave(value);
    generateSignal();
}


void ECGplotter::setAmplitude_QRS_wave(const double &value)
{
    currentECG.setAmplitude_QRS_wave(value);
    generateSignal();
}


void ECGplotter::setDuration_QRS_wave(const double &value)
{
    currentECG.setDuration_QRS_wave(value);
    generateSignal();
}


void ECGplotter::setPositive_QRS_wave(const bool &status)
{
    currentECG.setPositive_QRS_wave(status);
    generateSignal();
}


void ECGplotter::setAmplitude_S_wave(const double &value)
{
    currentECG.setAmplitude_S_wave(value);
    generateSignal();
}


void ECGplotter::setDuration_S_wave(const double &value)
{
    currentECG.setDuration_S_wave(value);
    generateSignal();
}


void ECGplotter::setInterval_S_wave(const double &value)
{
    currentECG.setInterval_S_wave(value);
    generateSignal();
}


void ECGplotter::setAmplitude_T_wave(const double &value)
{
    currentECG.setAmplitude_T_wave(value);
    generateSignal();
}


void ECGplotter::setDuration_T_wave(const double &value)
{
    currentECG.setDuration_T_wave(value);
    generateSignal();
}


void ECGplotter::setInterval_T_wave(const double &value)
{
    currentECG.setInterval_T_wave(value);
    generateSignal();
}


void ECGplotter::setPositive_T_wave(const bool &status)
{
    currentECG.setPositive_T_wave(status);
    generateSignal();
}


void ECGplotter::setAmplitude_U_wave(const double &value)
{
    currentECG.setAmplitude_U_wave(value);
    generateSignal();
}


void ECGplotter::setDuration_U_wave(const double &value)
{
    currentECG.setDuration_U_wave(value);
    generateSignal();
}


void ECGplotter::setInterval_U_wave(const double &value)
{
    currentECG.setInterval_U_wave(value);
    generateSignal();
}


//
// Other methods
//


//
// Returns a preset of the currently displayed ECG
//
ECGpreset ECGplotter::currentECGPlotted()
{
    return currentECG;
}


//
// Loads all configuration parameters from a preset
//
void ECGplotter::setCurrentECGPlotted(const ECGpreset &newECG)
{
    currentECG = newECG;
    generateSignal();
}


void ECGplotter::generate_P_wave()
{
    double li = 30 / (double)currentECG.getHeartRate();
    double b = (2.0 * li) / currentECG.getDuration_P_wave();
    //double p1 = 1.0 / li;
    double p1 = 0;
    int signal = currentECG.getPositive_P_wave() ? 1 : -1;

    // p2 is a matrix [1, 200] holding calculated values (initialized with zeroes)
    QVectorPlus p2(XELEMENTS, 0.0);
    QVectorPlus x(base_data);

    // Matrix add operation (all values are added with t_pwav)
    x.uniMatrixAdd(currentECG.getInterval_P_wave());

    for (int i = 1; i <= ITERATIONS; i++) {
        // Each value from x matrix is calculated using the formula bellow, resulting in a 1x200 matrix
        for (int counter = 0; counter < XELEMENTS; counter++) {
            p2[counter] = p2[counter] + (
                    ((sin((PI / (2 * b)) * (b - (2 * i)))) / (b - (2 * i)) +
                     (sin((PI / (2 * b)) * (b + (2 * i)))) / (b + (2 * i))) * (2 / PI)
                    ) * signal * cos(( i * PI * x[counter]) / li);
        }
    }

    // Matrix multiply operation (all values are multiplied by a_pwav)
    // Matrix add operation (all values in matrix p2 are added with p1)
    pwave = (p2.uniMatrixAdd(p1)).uniMatrixMultiply(currentECG.getAmplitude_P_wave());
}


void ECGplotter::generate_QRS_wave()
{
    double li = 30 / (double)currentECG.getHeartRate();
    double b = (2.0 * li) / currentECG.getDuration_QRS_wave();
    //double qrs1 = (a_qrswave / (2.0 * b)) * (2.0 - b);
    double qrs1 = 0;
    // TODO: wave could be positive or negative
    //int signal = displaySettings.getPositive_QRS_wave() ? 1 : -1;


    QVectorPlus qrs2(XELEMENTS, 0.0);

    for (int i = 1; i <= ITERATIONS; i++) {
        // Each value from x matrix is calculated using the formula bellow, resulting in a 1x200 matrix
        for (int counter = 0; counter < XELEMENTS; counter++) {
            qrs2[counter] = qrs2[counter] + (((2 * b * currentECG.getAmplitude_QRS_wave()) / (SQUARE(i) * SQUARE(PI))) *
                    (1 - cos((i * PI) / b))) * cos((i * PI * base_data[counter]) / li);
        }
    }
    qrswave = qrs2.uniMatrixAdd(qrs1);
}


void ECGplotter::generate_Q_wave()
{
    double li = 30 / (double)currentECG.getHeartRate();
    double b = (2.0 * li) / currentECG.getDuration_Q_wave();
    //double q1 = (a_qwave / (2.0 * b)) * (2.0 - b);
    double q1 = 0;

    // q2 is a matrix [1, 200] holding calculated values (initialized with zeroes)
    QVectorPlus q2(XELEMENTS, 0.0);
    QVectorPlus x(base_data);

    // Matrix add operation (all values are added with t_pwav)
    x.uniMatrixAdd(currentECG.getInterval_Q_wave());

    for (int i = 1; i <= ITERATIONS; i++) {
        // Each value from x matrix is calculated using the formula bellow, resulting in a 1x200 matrix
        for (int counter = 0; counter < XELEMENTS; counter++) {
            q2[counter] = q2[counter] + (((2 * b * currentECG.getAmplitude_Q_wave()) / (SQUARE(i) * SQUARE(PI))) * (1 - cos((i * PI) / b)))
                    * cos((i * PI * x[counter]) / li);
        }
    }
    qwave = (q2.uniMatrixAdd(q1)).uniMatrixMultiply(-1.0);
}


void ECGplotter::generate_S_wave()
{
    double li = 30 / (double)currentECG.getHeartRate();
    double b = (2.0 * li) / currentECG.getDuration_S_wave();
    //double s1 = (a_swave / (2.0 * b)) * (2.0 - b);
    double s1 = 0;

    // s2 is a matrix [1, 200] holding calculated values (initialized with zeroes)
    QVectorPlus s2(XELEMENTS, 0.0);
    QVectorPlus x(base_data);

    // Matrix add operation (all values are added with t_pwav)
    x.uniMatrixSubtract(currentECG.getInterval_S_wave());

    for (int i = 1; i <= ITERATIONS; i++) {
        // Each value from x matrix is calculated using the formula bellow, resulting in a 1x200 matrix
        for (int counter = 0; counter < XELEMENTS; counter++) {
            s2[counter] = s2[counter] + (((2 * b * currentECG.getAmplitude_S_wave()) / (SQUARE(i) * SQUARE(PI))) * (1 - cos((i * PI) / b))) *
                  cos((i * PI * x[counter]) / li);
        }
    }
    swave = (s2.uniMatrixAdd(s1)).uniMatrixMultiply(-1.0);
}


void ECGplotter::generate_T_wave()
{
    double li = 30 / (double)currentECG.getHeartRate();
    double b = (2.0 * li) / currentECG.getDuration_T_wave();
    //double t1 = 1.0 / li;
    double t1 = 0;
    int signal = currentECG.getPositive_T_wave() ? 1 : -1;

    QVectorPlus t2(XELEMENTS, 0.0);
    QVectorPlus x(base_data);

    // Matrix add operation (all values are added with t_pwav)
    x.uniMatrixSubtract(currentECG.getInterval_T_wave() - 0.045);

    for (int i = 1; i <= ITERATIONS; i++) {
        // Each value from x matrix is calculated using the formula bellow, resulting in a 1x200 matrix
        for (int counter = 0; counter < XELEMENTS; counter++) {
            t2[counter] = t2[counter] + (((sin((PI / (2 * b)) * (b - (2 * i)))) / (b - (2 * i)) + (sin((PI / (2 * b))
                          * (b + (2 * i)))) / (b + (2 * i))) * (2 / PI)) * signal * cos((i * PI * x[counter]) / li);
        }
    }
    twave = (t2.uniMatrixAdd(t1)).uniMatrixMultiply(currentECG.getAmplitude_T_wave());
}


void ECGplotter::generate_U_wave()
{
    double li = 30 / (double)currentECG.getHeartRate();
    double b = (2.0 * li) / currentECG.getDuration_U_wave();
    //double u1 = 1.0 / li;
    double u1 = 0;

    // u2 is a matrix [1, 200] holding calculated values (initialized with zeroes)
    QVectorPlus u2(XELEMENTS, 0.0);
    QVectorPlus x(base_data);

    // Matrix add operation (all values are added with t_pwav)
    x.uniMatrixSubtract(currentECG.getInterval_U_wave());

    for (int i = 1; i <= ITERATIONS; i++) {
        // Each value from x matrix is calculated using the formula bellow, resulting in a 1x200 matrix
        for (int counter = 0; counter < XELEMENTS; counter++) {
            u2[counter] = u2[counter] + (((sin((PI / (2 * b)) * (b - (2 * i)))) / (b - (2 * i)) + (sin((PI / (2 * b)) * (b + (2 * i))))
                        /(b + (2 * i))) * (2 / PI)) * cos(( i * PI * x[counter]) / li);
        }
    }

    uwave = (u2.uniMatrixAdd(u1)).uniMatrixMultiply(currentECG.getAmplitude_U_wave());
}


const QVector<QPointF> &ECGplotter::generate_Sine_wave()
{
    int size = 360;
    QVector<QPointF> *sinewave = new QVector<QPointF>();

    for (int i = 1; i <= size; i++) {
        sinewave->append(QPointF(i / 5, sin(i * PI / 180.0) ));
    }
    return *sinewave;
}

