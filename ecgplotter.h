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

#include "plotter.h"
#include "qvectorplus.h"
#include "ecgpresetlist.h"

#define PI 3.14159265359
#define SQUARE(x) ((x) * (x))
#define ITERATIONS 100
#define XELEMENTS  400
#define XSTART       0
#define XEND         6

class ECGplotter : public Plotter
{
    Q_OBJECT

public:
    ECGplotter(QWidget *parent = 0);
    void saveSettings(ECGpreset &other);
    void loadSettings(const ECGpreset &other);

    // TODO: Remove this after the new ECGpresetList is implemented
    ECGpreset displaySettings;

public slots:
    void setHeartRate(const int &);
    void setNoiseFilter(const bool &);
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

private:
    void generateSignal();
    //void customSignal(const ECGpreset *);

    // Presets
    void presetSignalByName(const QString &);

    void generate_P_wave();
    void generate_QRS_wave();
    void generate_Q_wave();
    void generate_S_wave();
    void generate_T_wave();
    void generate_U_wave();

private:
    // TODO: Old presets. To REMOVE!
    void presetSinusRhythm(bool);
    void presetSinusBradycardia(bool);
    void presetSinusTachycardia(bool);
    void presetAtrialFibrillation(bool);
    void presetFastAtrialFibrillation(bool);
    void presetIsolatedSVE(bool);
    void presetPairedSVE(bool);
    void presetSupraventricularTachychardia(bool);
    void presetSinusPause(bool);
    void presetJunctionalRhythm(bool);
    void presetAcceleratedJunctionalRhythm(bool);
    void presetIdioventricularRhythm(bool);
    void presetAcceleratedIdioventricularRhythm(bool);
    void presetSinoAtrialBlock(bool);
    void presetIsolatedMonoVE(bool);
    void presetIsolatedPolyVE(bool);
    void presetMonomorphicVT(bool);
    void presetPolymorphicVT(bool);
    void presetVentricularFibrillation(bool);
    void presetFirstDegreeAVBlock(bool);
    void presetType1AVBlock(bool);
    void presetType2AVBlock(bool);
    void presetTwoOneAVBlock(bool);
    void presetDissociation(bool);

    // All preset signals in a QMap
    ECGpresetList presets;

    // Sine wave for testing purposes
    const QVector<QPointF> &generate_Sine_wave();

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
