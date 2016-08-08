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

#ifndef ECGPLOTTER_H
#define ECGPLOTTER_H

#include <QObject>
#include <QVector>
#include <QString>
#include <cmath>
#include <QListWidget>

#include "plotter.h"
#include "qvectorplus.h"
#include "ecgpreset.h"

#define PI 3.14159265359
#define SQUARE(x) ((x) * (x))
#define ITERATIONS 100
#define XELEMENTS  600
#define XSTART       0
#define XEND         6

class ECGplotter : public Plotter
{
    Q_OBJECT

public:
    ECGplotter(QWidget *parent = 0);
    ECGpreset currentECGPlotted();
    void setCurrentECGPlotted(const ECGpreset &newECG);

    // The ECG signal that is being rendered to the user
    // TODO: Should change this to private member
    ECGpreset currentECG;

public slots:
    void setHeartRate(const int &);
    void setNoiseFilter(const int &);
	void setDisplayStatic(const int &);
	void setRollingSpeed(const bool &);
    // P wave
    void setAmplitude_P_wave(const double &);
    void setDuration_P_wave(const double &);
    void setInterval_P_wave(const double &);
    void setPositive_P_wave(const bool &);
    // Q wave
    void setAmplitude_Q_wave(const double &);
    void setDuration_Q_wave(const double &);
    void setInterval_Q_wave(const double &);
    // QRS wave
    void setAmplitude_QRS_wave(const double &);
    void setDuration_QRS_wave(const double &);
    void setPositive_QRS_wave(const bool &);
    // S wave
    void setAmplitude_S_wave(const double &);
    void setDuration_S_wave(const double &);
    void setInterval_S_wave(const double &);
    // T wave
    void setAmplitude_T_wave(const double &);
    void setDuration_T_wave(const double &);
    void setInterval_T_wave(const double &);
    void setPositive_T_wave(const bool &);
    // U wave
    void setAmplitude_U_wave(const double &);
    void setDuration_U_wave(const double &);
    void setInterval_U_wave(const double &);
	
	void timeout();
private:
    void generateSignal();
	
    //void customSignal(const ECGpreset *);

    // Presets
    // TODO: Remove
    // void presetSignalByName(const QString &);
    void generate_P_wave();
    void generate_QRS_wave();
    void generate_Q_wave();
    void generate_S_wave();
    void generate_T_wave();
    void generate_U_wave();

private:
	QTimer * timer;
    // Sine wave for testing purposes
    const QVector<QPointF> &generate_Sine_wave();
	bool speed;//1 is 25mm/s, 0 is 50 mm/s

    // The generated ECG arrays of data
    QVector<QPointF> ecg;
    QVectorPlus base_data;
    QVectorPlus pwave;
    QVectorPlus qrswave;
    QVectorPlus qwave;
    QVectorPlus swave;
    QVectorPlus twave;
    QVectorPlus uwave;
};

#endif // ECGPLOTTER_H
