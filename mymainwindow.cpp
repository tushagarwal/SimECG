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

#include "mymainwindow.h"
#include "ui_mymainwindow.h"
#include "ui_addECGDialog.h"
#include "aboutdialog.h"
#include "version.h"
#include "dialog.h"
#include <windows.h>
#include <signal.h>
#include "ecgpresetlist.h"
#include <QtWidgets/QtWidgets>
#include <QtGlobal>

myMainWindow::myMainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::myMainWindowClass)
{
    ui->setupUi(this);
	recProcess = new QProcess(this);
    // General names for QSettings and others
    QCoreApplication::setOrganizationName("SimulationIQ");
    QCoreApplication::setOrganizationDomain("EMSPA");
    QCoreApplication::setApplicationName("ECG Simulator");

	showMaximized();
	adHocMode();
	
	QSizePolicy policy(QSizePolicy::Preferred, QSizePolicy::Preferred);
	policy.setHeightForWidth(true);
	ui->ECGplot->setSizePolicy(policy);
	
	
	//To disable maximize button
	/*
	Qt::WindowFlags flags = windowFlags();//  Qt::WindowMaximizeButtonHint;
	flags &= ~Qt::WindowMaximizeButtonHint;// &~Qt::WindowCloseButtonHint;
	setWindowFlags(flags);
	*/
	//
    // Command menu signals
    //

	//Save Custom Setting
	connect(ui->Save, SIGNAL(pressed()), this, SLOT(saveCustomSetting()));
	
	
    // ECG Calibration speed (25 or 50 mm/s)
    // TODO: Implement the connector when the method exists
	//connect(ui->actionSpeed25mm, SIGNAL(toggled(bool)), ui->ECGplot, SLOT(setRollingSpeed(bool)));

    // ECG Calibration amplitude (5 or 10 mm/mV)
    // TODO: Implement the connector when the method exists

    // ECG noise filter (ON or OFF)
	connect(ui->noiseFilter, SIGNAL(stateChanged(int)), ui->ECGplot, SLOT(setNoiseFilter(int)));

    // ECG display (static or rolling)
	connect(ui->rollingView, SIGNAL(stateChanged(int)), ui->ECGplot, SLOT(setDisplayStatic(int)));
    
	// ECG background paper/monitor
	connect(ui->ecgRadio, SIGNAL(toggled(bool)), ui->ECGplot, SLOT(setEcgBackground(bool)));

    // Load the previously saved preferences
    loadPreferences();

    //
    // Presets (tab)
    //

	connect(ui->AddPreset, SIGNAL(pressed()), this, SLOT(addCustomPreset()));

    // Populates all the presets in the List Widget
    presets.populatePresetListWidget(ui->presetListWidget);
	presets.populateCustomListWidget(ui->customListWidget, ui->deleteCustomListWidget);
	connect(ui->presetListWidget, SIGNAL(currentTextChanged(const QString &)), this, SLOT(selectPreset(const QString &)) );
	
	//Connect Custom list row to custom ecg
	//connect(ui->customListWidget, SIGNAL(currentItemChanged(QListWidgetItem *, QListWidgetItem *)), this, SLOT(selectCustom(QListWidgetItem *, QListWidgetItem *)));
	connect(ui->customListWidget, SIGNAL(currentTextChanged(const QString &)), this, SLOT(selectCustom(const QString &)) );
	//
    // Custom settings (tab)
    //

    // heart rate
    connect(ui->heartratespinBox, SIGNAL(valueChanged(int)), ui->ECGplot, SLOT(setHeartRate(int)));

    // P wave
	connect(ui->pwaveshow, SIGNAL(stateChanged(int)), this, SLOT(showPwave(int)));
  
    connect(ui->pwaveamplitude, SIGNAL(valueChanged(double)), ui->ECGplot, SLOT(setAmplitude_P_wave(double)));
   
    connect(ui->pwaveduration, SIGNAL(valueChanged(double)), ui->ECGplot, SLOT(setDuration_P_wave(double)));
  
    connect(ui->prduration, SIGNAL(valueChanged(double)), ui->ECGplot, SLOT(setInterval_P_wave(double)));
   
    connect(ui->pwavepositiveness, SIGNAL(currentIndexChanged(int)), this, SLOT(changePWavePositiveness(int)));

    // QRS wave
	connect(ui->qrswaveshow, SIGNAL(stateChanged(int)), this, SLOT(showQRSwave(int)));
 
    connect(ui->qrsamplitude, SIGNAL(valueChanged(double)), ui->ECGplot, SLOT(setAmplitude_QRS_wave(double)));
   
    connect(ui->qrsduration, SIGNAL(valueChanged(double)), ui->ECGplot, SLOT(setDuration_QRS_wave(double)));
    //qrspositiveness

	//S Wave

	connect(ui->swaveshow, SIGNAL(stateChanged(int)), this, SLOT(showSwave(int)));

	connect(ui->swaveamplitude, SIGNAL(valueChanged(double)), ui->ECGplot, SLOT(setAmplitude_S_wave(double)));

	connect(ui->swaveduration, SIGNAL(valueChanged(double)), ui->ECGplot, SLOT(setDuration_S_wave(double)));

    // T wave
	connect(ui->twaveshow, SIGNAL(stateChanged(int)), this, SLOT(showTwave(int)));
   
    connect(ui->twaveamplitude, SIGNAL(valueChanged(double)), ui->ECGplot, SLOT(setAmplitude_T_wave(double)));
  
    connect(ui->twaveduration, SIGNAL(valueChanged(double)), ui->ECGplot, SLOT(setDuration_T_wave(double)));
   
    connect(ui->twavepositiveness, SIGNAL(currentIndexChanged(int)), this, SLOT(changeTWavePositiveness(int)));
	
	connect(ui->stduration, SIGNAL(valueChanged(double)), ui->ECGplot, SLOT(setInterval_T_wave(double)));
	
	//AF
	connect(ui->atrialfibrillation, SIGNAL(stateChanged(int)), this, SLOT(AF(int)));
	
	
	
	updateControls();
    //
    // Assessment (tab)
    //

    // Attach assessment class to the assessment tab
    //assessment = new AssessmentFrame(ui->ECGoptions->widget(ASSESSMENTTAB));
    // Give the assessment class the reference to the list of ECG presets
    //assessment->setAssessmentAnswers(&presets);

    // Connect assessment to ECG plotter, so that when a question changes, the signal also changes
    //connect(assessment, SIGNAL(questionChanged(QString)), ui->ECGplot, SLOT(setCurrentECGPlotted(QString)));
    // Connect assessment to ECG plotter so that ECG is displayed only during the assessment
    //connect(assessment, SIGNAL(assessmentRunning(bool)), ui->ECGplot, SLOT(setDisplayData(bool)));

    // "custom settings" must be the default starting tab
    //currentTab = CUSTOMTAB;
    //ui->ECGoptions->setCurrentIndex(currentTab);


	//Start Recording
	connect(ui->startRecording, SIGNAL(pressed()), this, SLOT(record()));
	connect(ui->captureImage, SIGNAL(pressed()), this, SLOT(saveImage()));
	recording = false;
	//Stop Recording
	//connect(ui->stopRecording, SIGNAL(pressed()), this, SLOT(stopRecording()));

}


myMainWindow::~myMainWindow()
{
    savePreferences();

    delete ui;
}

void myMainWindow::addCustomPreset() {
	//Prompt for new name
	Dialog dialog(this);
	dialog.exec();
	if (dialog.result() == QDialog::Accepted) {
		ECGpreset temp = *(dialog.newPreset);
		if (presets.contains(temp.getName())) {
			QListWidgetItem *newItem = new QListWidgetItem(temp.getName(),ui->customListWidget);
			QListWidgetItem *newItem2 = new QListWidgetItem(QIcon("delete.png"), "", ui->deleteCustomListWidget);
			custMode();
			ui->customListWidget->setCurrentItem(newItem);
		}
	}
}



void myMainWindow::closePreset() {
	
	ui->ECGplot->setCurrentECGPlotted(ECGpreset());
	updateControls();
	adHocMode();
}


void myMainWindow::AF(int checked) {
	if (checked == 0) {
		ui->ECGplot->currentECG.setAF(false);
	}
	else {
		ui->ECGplot->currentECG.setAF(true);
	}

}

void myMainWindow::saveImage() {
	QPixmap pixmap(ui->ECGplot->size());
	ui->ECGplot->render(&pixmap, QPoint(), QRegion(ui->ECGplot->rect()));
	pixmap.save("temp.png");
}

void myMainWindow::record() {
	if (recording) {
		stopRecording();
		recording = false;
	}
	else {
		recording = true;
		startRecording();
	}
}

void myMainWindow::startRecording() {
	recFilename = "temp.mp4";
	QString filename = QString(recFilename);
	QFile::remove(filename);
	//Change Start Stop Buttons
	ui->startRecording->setEnabled(false);
	//setFixedSize()
	this->setFixedSize(width(),height());
	//Set Window Flags
	Qt::WindowFlags flags = windowFlags() | Qt::WindowStaysOnTopHint;
	flags &= ~Qt::WindowMinimizeButtonHint & ~Qt::WindowCloseButtonHint;
	setWindowFlags(flags);
	show();

	//Remove Cursor from graph window
	//ui->centralWidget->unsetCursor();
	//ui->centralWidget->setCursor(Qt::BlankCursor);

	//Start Exec Process
	recProcess->setProcessChannelMode(QProcess::ForwardedChannels);
	QString program = ".\\debug\\ffmpeg.exe";
	//QString program = "\"C:\\Users\\Tushar.Agarwal\\Documents\\GitHub\\SimECG\\debug\\ffmpeg.exe\"";
	recProcess->setProgram(program);

	int w = ui->ECGplot->width();
	int h = ui->ECGplot->height() - 30;
	int x_offset = (ui->ECGplotFrame->x()) + (ui->ECGplot->x());
	int y_offset = (ui->ECGplotFrame->y()) + (ui->ECGplot->y());
	QString argum = QString("-f gdigrab -framerate 25 -offset_x " + QString::number(x_offset) + " -offset_y " + 
					QString::number(y_offset) + " -s " + QString::number(w) + "*" + QString::number(h) 
					+ " -i title=\"simECG\" " + filename);
	recProcess->setNativeArguments(argum);
	recProcess->start();

	ui->startRecording->setEnabled(true);
	ui->startRecording->setText("Stop Video Recording");
	
}
void myMainWindow::stopRecording() {
	ui->startRecording->setEnabled(false);
	recording = false;
	QByteArray command("q\n");
	recProcess->write(command);//send quit signal to ffmpeg
	int i = 0;
	while (!recProcess->atEnd() && i < 5) {
		Sleep(uint(400));//sleep to allow ffmpeg to quit
		qDebug() << "Process didnt Exit";
		QByteArray comm("^C\n");
		recProcess->write(comm);
		i++;
	}
	bool showAlert = false;
	//Force quit if application still hasn't closed.
	if (!recProcess->atEnd()) {
		recProcess->close();
		showAlert = true;
	}
	else {
		showAlert = (recProcess->exitStatus() == QProcess::CrashExit) | (recProcess->exitCode() != 0);
	}

	Qt::WindowFlags flags = windowFlags() | Qt::WindowMinimizeButtonHint | Qt::WindowCloseButtonHint;
	flags &= ~Qt::WindowStaysOnTopHint;
	setWindowFlags(flags);
	show();

	if (showAlert) {
		QMessageBox alert;
		alert.setText("Couldn complete recording file");
		alert.setIcon(QMessageBox::Critical);
		alert.exec();
		qDebug() << "Couldnt record file";
		if(recFilename!=NULL && recFilename.size()!=0)
			QFile::remove(recFilename);//Delete file since it is unreadeable
	}
	else {
		QString filename = QFileDialog::getSaveFileName(this,
			tr("Save Recorded Video"), ".",
			tr("Video Files (*.mp4)"));
		if (filename.size() == 0)
			return;
		if (QFile::exists(filename)) {
			QFile::remove(filename);
		}
		QFile file(recFilename);
		file.rename(filename);
	}
	ui->startRecording->setEnabled(true);
	ui->startRecording->setText("Start Video Recording");
}

void myMainWindow::selectPreset(const QString & data) {
	if (data.count() <= 0)
		return;
	ui->customListWidget->setCurrentRow(-1, QItemSelectionModel::Clear);
	//ui->customListWidget->clearSelection();

	if (presets.contains(data))
	{
		const ECGpreset temp = presets.getECGpreset(data);
		ui->ECGplot->setCurrentECGPlotted(temp);

		//Change mode of application, depending on preset is removable or not.
		Q_ASSERT(!temp.isRemoveable());
		if (temp.isRemoveable())
			custMode();
		else
			predefMode();

		updateControls();
	}
}

void myMainWindow::selectCustom(const QString & data) {
	if (data.count() <= 0)
		return;

	//ui->presetListWidget->clearSelection();
	ui->presetListWidget->setCurrentRow(-1, QItemSelectionModel::Clear);
	if (presets.contains(data))
	{
		const ECGpreset temp = presets.getECGpreset(data);
		ui->ECGplot->setCurrentECGPlotted(temp);
		//Change mode of application, depending on preset is removable or not.
		Q_ASSERT(temp.isRemoveable());
		if (temp.isRemoveable())
			custMode();
		else
			predefMode();

		updateControls();
	}
	//const ECGpreset &temp = presets.at((const int)selected);
}

// When the user presses Exit on file menu
void myMainWindow::on_action_Exit_triggered()
{
    close();
}


// When the user presses About on the Help menu
void myMainWindow::on_action_About_triggered()
{
    AboutDialog dialog(this);
    dialog.setWindowTitle(QString(tr("About simECG - version ", "in about dialog title will show version number")) + BUILDVERSION);
    dialog.exec();
}

void myMainWindow::adHocMode() {
	currentMode = addHMode;
	ui->PresetNameLabel->setVisible(false);
	ui->PresetNameEdit->setVisible(false);
	ui->Delete->setEnabled(false);
	//ui->SaveAs->setEnabled(true);
	ui->Save->setEnabled(false);
	//ui->closePreset->setEnabled(false);
}

void myMainWindow::custMode() {
	currentMode = customMode;
	ui->PresetNameLabel->setVisible(true);
	ui->PresetNameEdit->setVisible(true);
	ui->PresetNameEdit->setReadOnly(false);
	ui->Delete->setEnabled(true);
	//ui->SaveAs->setEnabled(true);
	ui->Save->setEnabled(true);
	//ui->closePreset->setEnabled(true);
}

void myMainWindow::predefMode() {
	currentMode = predefinedMode;
	ui->PresetNameLabel->setVisible(true);
	ui->PresetNameEdit->setVisible(true);
	ui->PresetNameEdit->setReadOnly(true);
	ui->Delete->setEnabled(false);
	//ui->SaveAs->setEnabled(true);
	ui->Save->setEnabled(false);
	//ui->closePreset->setEnabled(true);
}



void myMainWindow::updateControls() {

	//Preset Name
	if (currentMode != addHMode)
		ui->PresetNameEdit->setText(ui->ECGplot->currentECG.getName());

	// heart rate
	ui->heartratespinBox->setValue(ui->ECGplot->currentECG.getHeartRate());

	// P wave
	ui->pwaveshow->setChecked(ui->ECGplot->currentECG.getDisplayPWave());
	ui->pwaveamplitude->setValue(ui->ECGplot->currentECG.getAmplitude_P_wave());
	ui->pwaveduration->setValue(ui->ECGplot->currentECG.getDuration_P_wave());
	ui->prduration->setValue(ui->ECGplot->currentECG.getInterval_P_wave());
	ui->pwavepositiveness->setCurrentIndex(ui->ECGplot->currentECG.getPositive_P_wave() ? 0 : 1);

	// QRS wave
	ui->qrswaveshow->setChecked(ui->ECGplot->currentECG.getDisplayQRSWave());
	ui->qrsamplitude->setValue(ui->ECGplot->currentECG.getAmplitude_QRS_wave());
	ui->qrsduration->setValue(ui->ECGplot->currentECG.getDuration_QRS_wave());
	//qrspositiveness

	//S Wave
	ui->swaveshow->setChecked(ui->ECGplot->currentECG.getDisplaySWave());
	ui->swaveamplitude->setValue(ui->ECGplot->currentECG.getAmplitude_S_wave());
	ui->swaveduration->setValue(ui->ECGplot->currentECG.getDuration_S_wave());


	// T wave
	ui->twaveshow->setChecked(ui->ECGplot->currentECG.getDisplayTWave());
	ui->twaveamplitude->setValue(ui->ECGplot->currentECG.getAmplitude_T_wave());
	ui->twaveduration->setValue(ui->ECGplot->currentECG.getDuration_T_wave());
	ui->twavepositiveness->setCurrentIndex(ui->ECGplot->currentECG.getPositive_T_wave() ? 0 : 1);
	ui->stduration->setValue(ui->ECGplot->currentECG.getInterval_T_wave());

	//AF wave
	ui->atrialfibrillation->setChecked(ui->ECGplot->currentECG.getAF());
}

// When the user moves to a new tab
/*
void myMainWindow::optionsTabChanged(int newTab)
{
    // Check if assessment is running
    if (currentTab == ASSESSMENTTAB && newTab != ASSESSMENTTAB && assessment->isAssessmentRunning()) {
        QMessageBox msgBox;

        msgBox.setText(QString(tr("You are currently answering an assessment.")));
        msgBox.setInformativeText(tr("Are you sure you want to abort the assessment ?"));
        msgBox.setStandardButtons(QMessageBox::Ok | QMessageBox::Cancel);
        int ret = msgBox.exec();
        switch (ret) {
        case QMessageBox::Ok:
            assessment->resetScore();
            break;
        case QMessageBox::Cancel:
            currentTab = ASSESSMENTTAB;
            //ui->ECGoptions->setCurrentIndex(currentTab);
            return;
            break;
        default:
            // should never be reached
            Q_ASSERT(false);
            break;
        }
    }

    switch (newTab) {
        // Preset tab selected
        case PRESETSTAB:
            if (currentTab == CUSTOMTAB) {
                // Saves settings
                tempECGPreset = ui->ECGplot->currentECGPlotted();
            } else if (currentTab == ASSESSMENTTAB) {
               ui->ECGplot->setDisplayData(true);
             }
            // Set Preset Button
            // Changes the ECG signal to match preset button
            // TODO: Something is wrong about here
            // ui->presetsButtonGroup->checkedButton()->click();
            currentTab = PRESETSTAB;
            break;
        // Custom tab selected
        case CUSTOMTAB:
            // Load custom settings
            if (currentTab == ASSESSMENTTAB) {
               ui->ECGplot->setDisplayData(true);
             }
            ui->ECGplot->setCurrentECGPlotted(tempECGPreset);
            currentTab = CUSTOMTAB;
            break;
        // Assessment tab selected
        case ASSESSMENTTAB:
            if (currentTab == CUSTOMTAB) {
                // Saves settings
                tempECGPreset = ui->ECGplot->currentECGPlotted();
            }
            ui->ECGplot->setDisplayData(false);
			assessment->setECGplot(ui->ECGplot);
            currentTab = ASSESSMENTTAB;
            break;
        default :
            Q_ASSERT(false);
    }
}
*/

void myMainWindow::changePWavePositiveness(int currentIndex)
{
    Q_ASSERT(currentIndex < 2);

    if (currentIndex == 0) {
        ui->ECGplot->setPositive_P_wave(true);
    } else {
        ui->ECGplot->setPositive_P_wave(false);
    }
}


void myMainWindow::changeTWavePositiveness(int currentIndex)
{
    Q_ASSERT(currentIndex < 2);

    if (currentIndex == 0) {
        ui->ECGplot->setPositive_T_wave(true);
    } else {
        ui->ECGplot->setPositive_T_wave(false);
    }
}

void myMainWindow::showPwave(int checkState) {
	if (checkState == 0) {//dont show p wave
		ui->prlabel->setEnabled(false);
		ui->prduration->setEnabled(false);
		ui->pwavelabel->setEnabled(false);
		ui->pwaveamplitude->setEnabled(false);
		ui->pwavepositiveness->setEnabled(false);
		ui->pwaveduration->setEnabled(false);
		ui->ECGplot->currentECG.setShowPwave(false);
	}
	else if (checkState == 2) {
		ui->prlabel->setEnabled(true);
		ui->prduration->setEnabled(true);
		ui->pwavelabel->setEnabled(true);
		ui->pwaveamplitude->setEnabled(true);
		ui->pwavepositiveness->setEnabled(true);
		ui->pwaveduration->setEnabled(true);
		ui->ECGplot->currentECG.setShowPwave(true);
	}
}
void myMainWindow::showQRSwave(int checkState) {
	if (checkState == 0) {//dont show p wave
		ui->qrslabel->setEnabled(false);
		ui->qrsamplitude->setEnabled(false);
		ui->qrsduration->setEnabled(false);
		ui->ECGplot->currentECG.setShowQRSwave(false);
	}
	else if (checkState == 2) {
		ui->qrslabel->setEnabled(true);
		ui->qrsamplitude->setEnabled(true);
		ui->qrsduration->setEnabled(true);
		ui->ECGplot->currentECG.setShowQRSwave(true);
	}
}
void myMainWindow::showSwave(int checkState) {
	if (checkState == 0) {//dont show p wave
		ui->stduration->setEnabled(false);
		ui->stlabel->setEnabled(false);
		ui->swavelabel->setEnabled(false);
		ui->swaveamplitude->setEnabled(false);
		ui->swaveduration->setEnabled(false);
		ui->ECGplot->currentECG.setShowSwave(false);
	}
	else if (checkState == 2) {
		ui->stduration->setEnabled(true);
		ui->stlabel->setEnabled(true);
		ui->swavelabel->setEnabled(true);
		ui->swaveamplitude->setEnabled(true);
		ui->swaveduration->setEnabled(true);
		ui->ECGplot->currentECG.setShowSwave(true);
	}
}
void myMainWindow::showTwave(int checkState) {
	if (checkState == 0) {//dont show p wave
		ui->twavelabel->setEnabled(false);
		ui->twaveamplitude->setEnabled(false);
		ui->twavepositiveness->setEnabled(false);
		ui->twaveduration->setEnabled(false);
		ui->ECGplot->currentECG.setShowTwave(false);
	}
	else if (checkState == 2) {
		ui->twavelabel->setEnabled(true);
		ui->twaveamplitude->setEnabled(true);
		ui->twavepositiveness->setEnabled(true);
		ui->twaveduration->setEnabled(true);
		ui->ECGplot->currentECG.setShowTwave(true);
	}
}


// Load user preferences when application starts
void myMainWindow::loadPreferences()
{
    QSettings preferences;
    Q_ASSERT(preferences.status() == QSettings::NoError);

    qDebug("Loading preferences ...");

    // Main window
    QSize windowSize = preferences.value("mainwindow/size").toSize();
    // If we have a valid value, ok, otherwise, accept the default of the window itself
    if (windowSize.isValid()) {
        qDebug("Window size is (%i, %i)", windowSize.width(), windowSize.height());
        resize(windowSize);
    }
    // move(preferences.value("pos", QPoint(200, 200)).toPoint());

    // ECG Calibration speed (25 or 50 mm/s)
    // TODO: To implement

    // ECG Calibration amplitude (5 or 10 mm/mV)
    // TODO: To implement

    // ECG noise filter (ON or OFF)
    // This is an ECG property. It may be changed during program execution, but
    //      not saved under preferences

    // ECG display (Static or Rolling)
    // TODO: To implement

    // ECG background paper/monitor
	
    qDebug("ECG background is %s", preferences.value("ECG/Background").toString().toLatin1().constData());
    if (preferences.value("ECG/Background", QString("Paper")) == "Paper") {
		ui->ecgRadio->setChecked(true);
		ui->monitorRadio->setChecked(false);
		ui->ECGplot->setEcgBackground(true);
    } else {
		ui->ecgRadio->setChecked(false);
		ui->monitorRadio->setChecked(true);
		ui->ECGplot->setEcgBackground(false);
	}
	
	ui->rollingView->setCheckState(Qt::Checked);
	ui->ECGplot->setDisplayStatic(2);

	ui->noiseFilter->setCheckState(Qt::Checked);
	ui->ECGplot->setNoiseFilter(2);


	//ui->actionSpeed25mm->setChecked(true);
	//ui->actionSpeed50mm->setChecked(false);
	ui->ECGplot->setRollingSpeed(true);// True means 25mm/s, False 50m/s

}


// Saves user preferences when application closes
void myMainWindow::savePreferences()
{
    QSettings preferences;

    qDebug("Saving preferences ...");

    // Main window
    qDebug("Saving window size of (%i, %i)", size().width(), size().height());
    preferences.setValue("mainwindow/size", size());

    // ECG Calibration speed (25 or 50 mm/s)
    // TODO: To implement

    // ECG Calibration amplitude (5 or 10 mm/mV)
    // TODO: To implement

    // ECG noise filter (ON or OFF)
    // This is an ECG property. It may be changed during program execution, but
    //      not saved under preferences

    // ECG display (Static or Rolling)
    // TODO: To implement

    // ECG background paper/monitor
    qDebug("ECG background is %s", ui->ECGplot->ecgBackground().toLatin1().constData());
    preferences.setValue("ECG/Background", ui->ECGplot->ecgBackground());
}
