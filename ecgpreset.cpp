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
#include <QFile>
#include <qxmlstream.h>
#include <qdatastream.h>
#include <QtDebug>

ECGpreset::ECGpreset()
{
    setCommonValues();
}

QList<ECGpreset>* ECGpreset::getCustomPresets(QString  & filename) {
	//Construct ECGPreset from XML file
	QXmlStreamReader Rxml;
	QList<ECGpreset> * temp = new QList<ECGpreset>();
	QFile file(filename);
	if (!file.open(QFile::ReadOnly | QFile::Text))
	{
		qDebug () << "Error: Cannot read file " << qPrintable(filename)
			<< ": " << qPrintable(file.errorString());
	}
	
	Rxml.setDevice(&file);
	Rxml.readNext();
	int i = 0;
	while (!Rxml.atEnd()) {
		ECGpreset * curr = new ECGpreset();
		//First Search for Start Element: Preset
		bool found = false;
		while (!Rxml.atEnd() && !found) {
			//check for start to be preset
			if (Rxml.isStartElement()) {
				if (Rxml.name() == "Preset")
					found = true;
			}
			Rxml.readNext();
		}
		if (!found) {
			//First Element isnt Preset
			qDebug() << "Error: File not a preset XML "
				<< qPrintable(filename);
			return NULL;
		}
		else {
			i++;
			while (!Rxml.atEnd() && Rxml.name().toString() != "Preset") {
				QString first = Rxml.name().toString();
				if (Rxml.isStartElement()) {
					QString temp = Rxml.name().toString();
					if (temp == "Start") {
						while (!Rxml.isEndElement()) {
							if (Rxml.name().toString() == "Heart_Rate") {
								QString a = Rxml.readElementText();
								curr->heartRate = a.toInt();
							}
							else if (Rxml.name().toString() == "Name") {
								curr->name = Rxml.readElementText();
							}
							else if (Rxml.name().toString() == "Noise_Filter") {
								curr->noiseFilter = Rxml.readElementText().toInt();
							}
							Rxml.readNext();
						}
					}
					else if (temp == "P_Wave") {
						Rxml.readNext();
						while (!Rxml.isEndElement()) {
							QString name = Rxml.name().toString();
							if (name == "Show")
								curr->showPWave = Rxml.readElementText().toInt();
							else if (name == "A")
								curr->a_pwave = Rxml.readElementText().toDouble();
							else if (name == "D")
								curr->d_pwave = Rxml.readElementText().toDouble();
							else if (name == "T")
								curr->t_pwave = Rxml.readElementText().toDouble();
							else if (name == "Positive")
								curr->positive_pwave = Rxml.readElementText().toInt();
							Rxml.readNext();
						}
					}
					else if (temp == "Q_Wave") {
						Rxml.readNext();
						while (!Rxml.isEndElement()) {
							QString name = Rxml.name().toString();
							if (name == "Show")
								curr->showQWave = Rxml.readElementText().toInt();
							else if (name == "A")
								curr->a_qwave = Rxml.readElementText().toDouble();
							else if (name == "D")
								curr->d_qwave = Rxml.readElementText().toDouble();
							else if (name == "T")
								curr->t_qwave = Rxml.readElementText().toDouble();
							Rxml.readNext();
						}
					}
					else if (temp == "QRS_Wave") {
						Rxml.readNext();
						while (!Rxml.isEndElement()) {
							QString name = Rxml.name().toString();
							if (name == "Show")
								curr->showQRSWave = Rxml.readElementText().toInt();
							else if (name == "A")
								curr->a_qrswave = Rxml.readElementText().toDouble();
							else if (name == "D")
								curr->d_qrswave = Rxml.readElementText().toDouble();
							else if (name == "Positive")
								curr->positive_qrswave = Rxml.readElementText().toInt();
							Rxml.readNext();
						}
					}
					else if (temp == "S_Wave") {
						Rxml.readNext();
						while (!Rxml.isEndElement()) {
							QString name = Rxml.name().toString();
							if (name == "Show")
								curr->showSWave = Rxml.readElementText().toInt();
							else if (name == "A")
								curr->a_swave = Rxml.readElementText().toDouble();
							else if (name == "D")
								curr->d_swave = Rxml.readElementText().toDouble();
							else if (name == "T")
								curr->t_swave = Rxml.readElementText().toDouble();
							Rxml.readNext();
						}
					}
					else if (temp == "T_Wave") {
						Rxml.readNext();
						while (!Rxml.isEndElement()) {
							QString name = Rxml.name().toString();
							if (name == "Show")
								curr->showTWave = Rxml.readElementText().toInt();
							else if (name == "A")
								curr->a_twave = Rxml.readElementText().toDouble();
							else if (name == "D")
								curr->d_twave = Rxml.readElementText().toDouble();
							else if (name == "T")
								curr->t_twave = Rxml.readElementText().toDouble();
							else if (name == "Positive")
								curr->positive_twave = Rxml.readElementText().toInt();
							Rxml.readNext();
						}
					}
					else if (temp == "U_Wave") {
						Rxml.readNext();
						while (!Rxml.isEndElement()) {
							QString name = Rxml.name().toString();
							if (name == "Show")
								curr->showUWave = Rxml.readElementText().toInt();
							else if (name == "A")
								curr->a_uwave = Rxml.readElementText().toDouble();
							else if (name == "D")
								curr->d_uwave = Rxml.readElementText().toDouble();
							else if (name == "T")
								curr->t_uwave = Rxml.readElementText().toDouble();
							Rxml.readNext();
						}
					}
				}
				Rxml.readNext();
			}
			temp->append(*curr);
		}
	}
	
	if (Rxml.hasError())
	{
		qDebug() << "Error: Failed to parse file "
			<< qPrintable(filename) << ": "
			<< qPrintable(Rxml.errorString());
		file.close();
		return NULL;
	}
	else if (file.error() != QFile::NoError)
	{
		qDebug() << "Error: Cannot read file " << qPrintable(filename)
			<< ": " << qPrintable(file.errorString());
		file.close();
		return NULL;
	}
	file.close();
	qDebug() << "Read " << i << " elements. Size of list: " << temp->size();
	return temp;
}

// This method sets common values for the ECG signal properties
// These values DOES NOT include the name of the signal
// or the signal description
void ECGpreset::saveXMLFile(QString &filename) {
	QFile file(filename);
	file.open(QIODevice::Append);

	QXmlStreamWriter xmlWriter(&file);
	xmlWriter.setAutoFormatting(true);
	xmlWriter.writeStartDocument();

	xmlWriter.writeStartElement("Preset");

	xmlWriter.writeStartElement("Start");
		xmlWriter.writeTextElement("Heart_Rate", QString::number(heartRate));
		xmlWriter.writeTextElement("Noise_Filter", QString::number(noiseFilter));
	xmlWriter.writeEndElement();

	xmlWriter.writeStartElement("P_Wave");
		xmlWriter.writeTextElement("Show", QString::number(showPWave));
		xmlWriter.writeTextElement("A", QString::number(a_pwave));
		xmlWriter.writeTextElement("D", QString::number(d_pwave));
		xmlWriter.writeTextElement("T", QString::number(t_pwave));
		xmlWriter.writeTextElement("Positive", QString::number(positive_pwave));
	xmlWriter.writeEndElement();

	xmlWriter.writeStartElement("Q_Wave");
		xmlWriter.writeTextElement("Show", QString::number(showQWave));
		xmlWriter.writeTextElement("A", QString::number(a_qwave));
		xmlWriter.writeTextElement("D", QString::number(d_qwave));
		xmlWriter.writeTextElement("T", QString::number(t_qwave));
		//xmlWriter.writeTextElement("Positive", QString::number(positive_pwave));
	xmlWriter.writeEndElement();

	xmlWriter.writeStartElement("QRS_Wave");
		xmlWriter.writeTextElement("Show", QString::number(showQRSWave));
		xmlWriter.writeTextElement("A", QString::number(a_qrswave));
		xmlWriter.writeTextElement("D", QString::number(d_qrswave));
		//xmlWriter.writeTextElement("T", QString::number(t_qrswave));
		xmlWriter.writeTextElement("Positive", QString::number(positive_qrswave));
	xmlWriter.writeEndElement();

	xmlWriter.writeStartElement("S_Wave");
		xmlWriter.writeTextElement("Show", QString::number(showSWave));
		xmlWriter.writeTextElement("A", QString::number(a_swave));
		xmlWriter.writeTextElement("D", QString::number(d_swave));
		xmlWriter.writeTextElement("T", QString::number(t_swave));
		//xmlWriter.writeTextElement("Positive", QString::number(positive_swave));
	xmlWriter.writeEndElement();

	xmlWriter.writeStartElement("T_Wave");
		xmlWriter.writeTextElement("Show", QString::number(showTWave));
		xmlWriter.writeTextElement("A", QString::number(a_twave));
		xmlWriter.writeTextElement("D", QString::number(d_twave));
		xmlWriter.writeTextElement("T", QString::number(t_twave));
		xmlWriter.writeTextElement("Positive", QString::number(positive_twave));
	xmlWriter.writeEndElement();

	xmlWriter.writeStartElement("U_Wave");
		xmlWriter.writeTextElement("Show", QString::number(showUWave));
		xmlWriter.writeTextElement("A", QString::number(a_uwave));
		xmlWriter.writeTextElement("D", QString::number(d_uwave));
		xmlWriter.writeTextElement("T", QString::number(t_uwave));
	//xmlWriter.writeTextElement("Positive", QString::number(positive_pwave));
	xmlWriter.writeEndElement();

	xmlWriter.writeEndElement();
	xmlWriter.writeEndDocument();
	file.close();
}

void ECGpreset::setCommonValues()
{
    heartRate = 70;
    noiseFilter = true;
	removeable = false;
	
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
    t_swave = 0.07;

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

QDataStream &operator <<(QDataStream &out, const ECGpreset &ecg) {
	return ecg.writeData(out);
}

QDataStream &operator >> (QDataStream &in, ECGpreset &ecg) {
	return ecg.readData(in);
}

QDataStream & ECGpreset::writeData(QDataStream& out) const{
	out << name;
	out << description;
	out << removeable;
	out << disabled;
	out.writeRawData((char *)heartRate, sizeof(heartRate));
	out << noiseFilter;

	//P Wave
	out << showPWave;
	out << a_pwave;
	out << d_pwave;
	out << t_pwave;
	out << positive_pwave;

	//Q Wave
	out << showQWave;
	out << a_qwave;
	out << d_qwave;
	out << t_qwave;
	
	//QRS Wave
	out << showQRSWave;
	out << a_qrswave;
	out << d_qrswave;
	out << positive_qrswave;

	//S Wave
	out << showSWave;
	out << a_swave;
	out << d_swave;
	out << t_swave;

	//T Wave
	out << showTWave;
	out << a_twave;
	out << d_twave;
	out << t_twave;
	out << positive_twave;

	//U Wave
	out << showUWave;
	out << a_uwave;
	out << d_uwave;
	out << t_uwave;
	
	return out;
}

QDataStream & ECGpreset::readData(QDataStream& in) {
	in >> name;
	in >> description;
	in >> removeable;
	in >> disabled;
	in.readRawData((char *)heartRate, sizeof(heartRate));
	in >> noiseFilter;

	//P Wave
	in >> showPWave;
	in >> a_pwave;
	in >> d_pwave;
	in >> t_pwave;
	in >> positive_pwave;

	//Q Wave
	in >> showQWave;
	in >> a_qwave;
	in >> d_qwave;
	in >> t_qwave;

	//QRS Wave
	in >> showQRSWave;
	in >> a_qrswave;
	in >> d_qrswave;
	in >> positive_qrswave;

	//S Wave
	in >> showSWave;
	in >> a_swave;
	in >> d_swave;
	in >> t_swave;

	//T Wave
	in >> showTWave;
	in >> a_twave;
	in >> d_twave;
	in >> t_twave;
	in >> positive_twave;

	//U Wave
	in >> showUWave;
	in >> a_uwave;
	in >> d_uwave;
	in >> t_uwave;

	return in;
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
	//t_qwave = 0.;
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
	showPWave = false;
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
}


// TODO: Not implemented yet
void ECGpreset::isolatedMonoVE()
{
    name = QObject::tr("Isolated monomorphic PVC");
    description = QObject::tr("Displays a sinus rythm strip with isolated premature ventricular contractions (single form)");
    removeable = false;
    disabled = true;

    setCommonValues();
}


// TODO: Not implemented yet
void ECGpreset::isolatedPolyVE()
{
    name = QObject::tr("Isolated polymorphic PVC");
    description = QObject::tr("Displays a sinus rythm strip with isolated premature ventricular contractions (multiple forms)");
    removeable = false;
    disabled = true;

    setCommonValues();
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
}


// TODO: Not implemented yet
void ECGpreset::ventricularFibrillation()
{
    name = QObject::tr("Ventricular Fibrillation");
    description = QObject::tr("Displays a ventricular fibrillation strip");
    removeable = false;
    disabled = true;

    setCommonValues();
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
}


// TODO: Not implemented yet
void ECGpreset::type2AVBlock()
{
    name = QObject::tr("Type II 2nd degree AV block");
    description = QObject::tr("Displays a sinus rhythm strip with a type II 2nd degree atrio-ventricular block");
    removeable = false;
    disabled = true;

    setCommonValues();
}


// TODO: Not implemented yet
void ECGpreset::twoOneAVBlock()
{
    name = QObject::tr("2nd degree AV block (2:1)");
    description = QObject::tr("Displays a 2nd degree atrio-ventricular block (2:1) strip");
    removeable = false;
    disabled = true;

    setCommonValues();
}


// TODO: Not implemented yet
void ECGpreset::dissociation()
{
    name = QObject::tr("AV dissociation");
    description = QObject::tr("Displays a strip with atrio-ventricular dissociation");
    removeable = false;
    disabled = true;

    setCommonValues();
}
