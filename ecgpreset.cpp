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

#include "ecgpreset.h"


ECGpreset::ECGpreset()
{
    setCommonValues();
}


// This method sets common values for the ECG signal properties
// These values DOES NOT include the name of the signal
// or the signal description
void ECGpreset::setCommonValues()
{
    heartRate = 70;
    noiseFilter = true;

    showPWave = true;
    a_pwave = 0.15;
    d_pwave = 0.08;
    t_pwave = 0.15;
    positive_pwave = true;

    showQWave = true;
    a_qwave = 0.025;
    d_qwave = 0.066;
    t_qwave = 0.166;

    showQRSWave = true;
    a_qrswave = 1.0;
    d_qrswave = 0.08;
    positive_qrswave = true;

    showSWave = true;
    a_swave = 0.25;
    d_swave = 0.066;
    t_swave = 0.09;

    showTWave = true;
    a_twave = 0.30;
    d_twave = 0.18;
    t_twave = 0.2;
    positive_twave = true;

    showUWave = false;
    a_uwave = 0.035;
    d_uwave = 0.0476;
    t_uwave = 0.433;
}


//
// Preset signals
//


void ECGpreset::sinusRhythm()
{
    name = QObject::QObject::tr("Sinus Rhythm");
    description = QObject::QObject::tr("Displays a sinus rythm strip");
    removeable = false;
    disabled = false;

    setCommonValues();
}


void ECGpreset::sinusBradycardia()
{
    name = QObject::tr("Sinus Bradycardia");
    description = QObject::tr("Displays a sinus bradycardia strip");
    removeable = false;
    disabled = false;

    setCommonValues();
    heartRate = 50;
}


void ECGpreset::sinusTachycardia()
{
    name = QObject::tr("Sinus Tachycardia");
    description = QObject::tr("Displays a sinus bradycardia strip");
    removeable = false;
    disabled = false;

    setCommonValues();
    heartRate = 110;
}


// TODO: Not implemented yet
// Atrial Fibrilation:
// Freq = 70; Without p-wave; qrs normal but irregular;
void ECGpreset::atrialFibrillation()
{
    name = QObject::tr("Atrial Fibrillation");
    description = QObject::tr("Displays an atrial fibrillation strip");
    removeable = false;
    disabled = true;

    setCommonValues();
	heartRate = 300;
	
	//Q_ASSERT(false);
}


// TODO: Not implemented yet
// Rapid Atrial Fibrilation:
// Same as atrial fibrilation but with fast rate (120);
void ECGpreset::fastAtrialFibrillation()
{
    name = QObject::tr("Fast Atrial Fibrillation");
    description = QObject::tr("Displays an atrial fibrillation with fast ventricular response strip");
    removeable = false;
    disabled = true;

    setCommonValues();
    //Q_ASSERT(false);
}


// TODO: Not implemented yet
// Isolated PAC (premature atrial contraction):
// Without P-wave; QRS must be premature;
void ECGpreset::isolatedSVE()
{
    name = QObject::tr("Isolated PAC");
    description = QObject::tr("Displays a sinus rythm strip with isolated premature atrial contraction");
    removeable = false;
    disabled = true;

    setCommonValues();
    //Q_ASSERT(false);
}


// TODO: Not implemented yet
// Paired PAC:
// Double premature QRS; coupling interval 300ms;
void ECGpreset::pairedSVE()
{
    name = QObject::tr("Paired PAC");
    description = QObject::tr("Displays a sinus rythm strip with paired premature atrial contractions");
    removeable = false;
    disabled = true;

    setCommonValues();
    //Q_ASSERT(false);
}


void ECGpreset::supraventricularTachychardia()
{
    name = QObject::tr("Supraventricular Tachycardia");
    description = QObject::tr("Displays a supraventricular tachycardia strip");
    removeable = false;
    disabled = false;

    setCommonValues();
    showPWave = false;
    heartRate = 180;
}


// TODO: Not implemented yet
// Introduce a pause between the 2 qrs complexes; > 2000ms; freq = 70;
void ECGpreset::sinusPause()
{
    name = QObject::tr("Sinus Pause");
    description = QObject::tr("Displays a sinus pause strip");
    removeable = false;
    disabled = true;

    setCommonValues();
    //Q_ASSERT(false);
}


void ECGpreset::junctionalRhythm()
{
    name = QObject::tr("Junctional Rhythm");
    description = QObject::tr("Displays a junctional rhythm strip");
    removeable = false;
    disabled = false;

    setCommonValues();
    heartRate = 47;
    showPWave = false;
    showQWave = false;
}


void ECGpreset::acceleratedJunctionalRhythm()
{
    name = QObject::tr("Accel. Junctional Rhythm");
    description = QObject::tr("Displays an accelerated junctional rhythm strip");
    removeable = false;
    disabled = false;

    setCommonValues();
    heartRate = 80;
    t_pwave = 0.12;
    showQWave = false;
    positive_pwave = false;
}


void ECGpreset::idioventricularRhythm()
{
    name = QObject::tr("Idioventricular Rhythm");
    description = QObject::tr("Displays an idioventricular rhythm strip");
    removeable = false;
    disabled = false;

    setCommonValues();
    heartRate = 35;
    showPWave = false;
    showQWave = false;
    d_qrswave = 0.16;
    positive_twave = false;
}


void ECGpreset::acceleratedIdioventricularRhythm()
{
    name = QObject::tr("Accel. Idiovent. Rhythm");
    description = QObject::tr("Displays an accelerated idioventricular rhythm strip");
    removeable = false;
    disabled = false;

    setCommonValues();
    heartRate = 65;
    showPWave = false;
    showQWave = false;
    d_qrswave = 0.16;
    positive_twave = false;
}


// TODO: Not implemented yet
void ECGpreset::sinoAtrialBlock()
{
    name = QObject::tr("Type II 2nd degree SA block");
    description = QObject::tr("Displays a type I 2nd degree sino-atrial block");
    removeable = false;
    disabled = true;

    setCommonValues();
   // Q_ASSERT(false);
}


// TODO: Not implemented yet
void ECGpreset::isolatedMonoVE()
{
    name = QObject::tr("Isolated monomorphic PVC");
    description = QObject::tr("Displays a sinus rythm strip with isolated premature ventricular contractions (single form)");
    removeable = false;
    disabled = true;

    setCommonValues();
    //Q_ASSERT(false);
}


// TODO: Not implemented yet
void ECGpreset::isolatedPolyVE()
{
    name = QObject::tr("Isolated polymorphic PVC");
    description = QObject::tr("Displays a sinus rythm strip with isolated premature ventricular contractions (multiple forms)");
    removeable = false;
    disabled = true;

    setCommonValues();
    //Q_ASSERT(false);
}


void ECGpreset::monomorphicVT()
{
    name = QObject::tr("Monomorphic VT");
    description = QObject::tr("Displays a monomorphic ventricular tachycardia strip");
    removeable = false;
    disabled = false;

    setCommonValues();
    heartRate = 195;
    t_pwave = 0.08;
    a_pwave = 0;
    d_pwave = 0.01;
    a_qrswave = 2;
    d_qrswave = 0.15;
    a_twave = 0.4;
    d_twave = 0.16;
    positive_twave = false;
}


// TODO: Not implemented yet
void ECGpreset::polymorphicVT()
{
    name = QObject::tr("Polymorphic VT");
    description = QObject::tr("Displays a polymorphic ventricular tachycardia strip");
    removeable = false;
    disabled = true;

    setCommonValues();
    //Q_ASSERT(false);
}


// TODO: Not implemented yet
void ECGpreset::ventricularFibrillation()
{
    name = QObject::tr("Ventricular Fibrillation");
    description = QObject::tr("Displays a ventricular fibrillation strip");
    removeable = false;
    disabled = true;

    setCommonValues();
   // Q_ASSERT(false);
}


void ECGpreset::firstDegreeAVBlock()
{
    name = QObject::tr("1st degree AV block");
    description = QObject::tr("Displays a sinus rhythm strip with a 1st degree atrio-ventricular block");
    removeable = false;
    disabled = false;

    setCommonValues();
    heartRate = 62;
    showQWave = false;
    t_pwave = 0.3;
}


// TODO: Not implemented yet
void ECGpreset::type1AVBlock()
{
    name = QObject::tr("Type I 2nd degree AV block");
    description = QObject::tr("Displays a strip in sinus rhythm with a type I 2nd degree atrio-ventricular block");
    removeable = false;
    disabled = false;

    setCommonValues();
    //Q_ASSERT(false);
}


// TODO: Not implemented yet
void ECGpreset::type2AVBlock()
{
    name = QObject::tr("Type II 2nd degree AV block");
    description = QObject::tr("Displays a sinus rhythm strip with a type II 2nd degree atrio-ventricular block");
    removeable = false;
    disabled = true;

    setCommonValues();
    //Q_ASSERT(false);
}


// TODO: Not implemented yet
void ECGpreset::twoOneAVBlock()
{
    name = QObject::tr("2nd degree AV block (2:1)");
    description = QObject::tr("Displays a 2nd degree atrio-ventricular block (2:1) strip");
    removeable = false;
    disabled = true;

    setCommonValues();
    //Q_ASSERT(false);
}


// TODO: Not implemented yet
void ECGpreset::dissociation()
{
    name = QObject::tr("AV dissociation");
    description = QObject::tr("Displays a strip with atrio-ventricular dissociation");
    removeable = false;
    disabled = true;

    setCommonValues();
    //Q_ASSERT(false);
}
