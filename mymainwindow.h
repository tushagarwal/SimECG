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

#ifndef MYMAINWINDOW_H
#define MYMAINWINDOW_H

#include "assessmentframe.h"
#include "ecgpreset.h"


#include <QtWidgets/QtWidgets>
#include <QtWidgets/QAbstractButton>
#include <QSettings>
//#include "QVideoEncoder.h"

#define PRESETSTAB      0
#define CUSTOMTAB       1
#define ASSESSMENTTAB   2

namespace Ui
{
    class myMainWindowClass;
}

class myMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    myMainWindow(QWidget *parent = 0);
    ~myMainWindow();
	// All preset ECG signals
	ECGpresetList presets;
    // TODO: Remove this
    // QList<QAbstractButton *> getPresetsButtons();

private slots:
    void changePWavePositiveness(int);
    void changeTWavePositiveness(int);
	void AF(int);
	void selectPreset(const QString &);
	void selectCustom(const QString &);
	void closePreset();
	void addCustomPreset();
	void saveCustomSetting();
	void saveAsCustomSetting();
	void loadCustomSetting();
	void saveImage();
	void record();
	void showPwave(int);
	void showQRSwave(int);
	void showSwave(int);
	void showTwave(int);



private:
	enum presetMode{ addHMode =1,
		   customMode = 2,
		   predefinedMode = 3
			};
	presetMode currentMode;
    Ui::myMainWindowClass *ui;
	void adHocMode();
	void custMode();
	void predefMode();
    
    // Temporary preset when the user changed tabs
    ECGpreset tempECGPreset;
    // The assessment frame
    AssessmentFrame *assessment;
    int currentTab;
    QString m_sPreferencesFile;
	
	bool recording;
	QProcess * recProcess;
	QString recFilename;

private:
    void loadPreferences();
    void savePreferences();
	void updateControls();
	void startRecording();
	void stopRecording();

private slots:
    void on_action_About_triggered();
	void on_action_Exit_triggered();
};

#endif
