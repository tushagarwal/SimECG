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
#include "aboutdialog.h"
#include "version.h"

#include <QtWidgets/QtWidgets>

myMainWindow::myMainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::myMainWindowClass)
{
    ui->setupUi(this);

    // General names for QSettings and others
    QCoreApplication::setOrganizationName("simECG");
    QCoreApplication::setOrganizationDomain("simecg.sourceforge.net");
    QCoreApplication::setApplicationName("ECG simulator");

    //
    // Command menu signals
    //

    // ECG Calibration speed (25 or 50 mm/s)
    // TODO: Implement the connector when the method exists

    // ECG Calibration amplitude (5 or 10 mm/mV)
    // TODO: Implement the connector when the method exists

    // ECG noise filter (ON or OFF)
    connect(ui->actionFilterOn, SIGNAL(toggled(bool)), ui->ECGplot, SLOT(setNoiseFilter(bool)));

    // ECG display (static or rolling)
    // TODO: Implement the connector when the method exists

    // ECG background paper/monitor
    connect(ui->actionBackgroundPaper, SIGNAL(toggled(bool)), ui->ECGplot, SLOT(setEcgBackground(bool)));

    // Load the previously saved preferences
    loadPreferences();

    //
    // Presets
    //
    connect(ui->presetR0C0, SIGNAL(clicked(bool)),
            ui->ECGplot, SLOT(presetSinusRhythm(bool)));
    connect(ui->presetR0C1, SIGNAL(clicked(bool)),
            ui->ECGplot, SLOT(presetJunctionalRhythm(bool)));
    connect(ui->presetR0C2, SIGNAL(clicked(bool)),
            ui->ECGplot, SLOT(presetIsolatedSVE(bool)));
    connect(ui->presetR0C3, SIGNAL(clicked(bool)),
            ui->ECGplot, SLOT(presetFirstDegreeAVBlock(bool)));
    connect(ui->presetR0C4, SIGNAL(clicked(bool)),
            ui->ECGplot, SLOT(presetIsolatedMonoVE(bool)));
    connect(ui->presetR1C0, SIGNAL(clicked(bool)),
            ui->ECGplot, SLOT(presetSinusBradycardia(bool)));
    connect(ui->presetR1C1, SIGNAL(clicked(bool)),
            ui->ECGplot, SLOT(presetAcceleratedJunctionalRhythm(bool)));
    connect(ui->presetR1C2, SIGNAL(clicked(bool)),
            ui->ECGplot, SLOT(presetPairedSVE(bool)));
    connect(ui->presetR1C3, SIGNAL(clicked(bool)),
            ui->ECGplot, SLOT(presetType1AVBlock(bool)));
    connect(ui->presetR1C4, SIGNAL(clicked(bool)),
            ui->ECGplot, SLOT(presetIsolatedPolyVE(bool)));
    connect(ui->presetR2C0, SIGNAL(clicked(bool)),
            ui->ECGplot, SLOT(presetSinusTachycardia(bool)));
    connect(ui->presetR2C1, SIGNAL(clicked(bool)),
            ui->ECGplot, SLOT(presetIdioventricularRhythm(bool)));
    connect(ui->presetR2C2, SIGNAL(clicked(bool)),
            ui->ECGplot, SLOT(presetSupraventricularTachychardia(bool)));
    connect(ui->presetR2C3, SIGNAL(clicked(bool)),
            ui->ECGplot, SLOT(presetType2AVBlock(bool)));
    connect(ui->presetR2C4, SIGNAL(clicked(bool)),
            ui->ECGplot, SLOT(presetMonomorphicVT(bool)));
    connect(ui->presetR3C0, SIGNAL(clicked(bool)),
            ui->ECGplot, SLOT(presetAtrialFibrillation(bool)));
    connect(ui->presetR3C1, SIGNAL(clicked(bool)),
            ui->ECGplot, SLOT(presetAcceleratedIdioventricularRhythm(bool)));
    connect(ui->presetR3C2, SIGNAL(clicked(bool)),
            ui->ECGplot, SLOT(presetSinusPause(bool)));
    connect(ui->presetR3C3, SIGNAL(clicked(bool)),
            ui->ECGplot, SLOT(presetTwoOneAVBlock(bool)));
    connect(ui->presetR3C4, SIGNAL(clicked(bool)),
            ui->ECGplot, SLOT(presetPolymorphicVT(bool)));
    connect(ui->presetR4C0, SIGNAL(clicked(bool)),
            ui->ECGplot, SLOT(presetFastAtrialFibrillation(bool)));
    // R4C1 is emtpy
    connect(ui->presetR4C2, SIGNAL(clicked(bool)),
            ui->ECGplot, SLOT(presetSinoAtrialBlock(bool)));
    connect(ui->presetR4C3, SIGNAL(clicked(bool)),
            ui->ECGplot, SLOT(presetDissociation(bool)));
    connect(ui->presetR4C4, SIGNAL(clicked(bool)),
            ui->ECGplot, SLOT(presetVentricularFibrillation(bool)));

    connect(ui->ECGoptions, SIGNAL(currentChanged(int)),
            this, SLOT(optionsTabChanged(int)));

    //
    // Custom settings
    //

    // heart rate
    ui->heartratespinBox->setValue(ui->ECGplot->displaySettings.getHeartRate());
    connect(ui->heartratespinBox, SIGNAL(valueChanged(int)), ui->ECGplot, SLOT(setHeartRate(int)));

    // P wave
    ui->pwaveamplitude->setValue(ui->ECGplot->displaySettings.getAmplitude_P_wave());
    connect(ui->pwaveamplitude, SIGNAL(valueChanged(double)), ui->ECGplot, SLOT(setAmplitude_P_wave(double)));
    ui->pwaveduration->setValue(ui->ECGplot->displaySettings.getDuration_P_wave());
    connect(ui->pwaveduration, SIGNAL(valueChanged(double)), ui->ECGplot, SLOT(setDuration_P_wave(double)));
    ui->prduration->setValue(ui->ECGplot->displaySettings.getInterval_P_wave());
    connect(ui->prduration, SIGNAL(valueChanged(double)), ui->ECGplot, SLOT(setInterval_P_wave(double)));
    ui->pwavepositiveness->setCurrentIndex(ui->ECGplot->displaySettings.getPositive_P_wave() ? 0 : 1);
    connect(ui->pwavepositiveness, SIGNAL(currentIndexChanged(int)), this, SLOT(changePWavePositiveness(int)));

    // QRS wave
    ui->qrsamplitude->setValue(ui->ECGplot->displaySettings.getAmplitude_QRS_wave());
    connect(ui->qrsamplitude, SIGNAL(valueChanged(double)), ui->ECGplot, SLOT(setAmplitude_QRS_wave(double)));
    ui->qrsduration->setValue(ui->ECGplot->displaySettings.getDuration_QRS_wave());
    connect(ui->qrsduration, SIGNAL(valueChanged(double)), ui->ECGplot, SLOT(setDuration_QRS_wave(double)));
    //qrspositiveness

    // T wave
    ui->twaveamplitude->setValue(ui->ECGplot->displaySettings.getAmplitude_T_wave());
    connect(ui->twaveamplitude, SIGNAL(valueChanged(double)), ui->ECGplot, SLOT(setAmplitude_T_wave(double)));
    ui->twaveduration->setValue(ui->ECGplot->displaySettings.getDuration_T_wave());
    connect(ui->twaveduration, SIGNAL(valueChanged(double)), ui->ECGplot, SLOT(setDuration_T_wave(double)));
    ui->twavepositiveness->setCurrentIndex(ui->ECGplot->displaySettings.getPositive_T_wave() ? 0 : 1);
    connect(ui->twavepositiveness, SIGNAL(currentIndexChanged(int)), this, SLOT(changeTWavePositiveness(int)));

    // Attach assessment class to assessment tab
    assessment = new AssessmentFrame(ui->ECGoptions->widget(2));
    // Give the assessment class the reference to the list of preset buttons
    // that contain the textual names of the presets
    assessment->setAssessmentAnswers(ui->presetsButtonGroup->buttons());

    // Connect assessment to ECG plotter, so that when a question changes, the signal also changes
    connect(assessment, SIGNAL(questionChanged(QString)), ui->ECGplot, SLOT(presetSignalByName(QString)));
    // Connect assessment to ECG plotter so that ECG is displayed only during the assessment
    connect(assessment, SIGNAL(assessmentRunning(bool)), ui->ECGplot, SLOT(setDisplayData(bool)));

    // Starting tab must be the custom settings
    currentTab = 1;
    ui->ECGoptions->setCurrentIndex(currentTab);
}


myMainWindow::~myMainWindow()
{
    savePreferences();

    delete ui;
}


QList<QAbstractButton *> myMainWindow::getPresetsButtons() {
    return ui->presetsButtonGroup->buttons();
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


// When the user change tab
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
            ui->ECGoptions->setCurrentIndex(currentTab);
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
                ui->ECGplot->saveSettings(otherMemory);
            } else if (currentTab == ASSESSMENTTAB) {
               ui->ECGplot->setDisplayData(true);
             }
            // Set Preset Button
            // Changes the ECG signal to match preset button
            ui->presetsButtonGroup->checkedButton()->click();
            currentTab = PRESETSTAB;
            break;
        // Custom tab selected
        case CUSTOMTAB:
            // Load custom settings
            if (currentTab == ASSESSMENTTAB) {
               ui->ECGplot->setDisplayData(true);
             }
            ui->ECGplot->loadSettings(otherMemory);
            currentTab = CUSTOMTAB;
            break;
        // Assessment tab selected
        case ASSESSMENTTAB:
            if (currentTab == CUSTOMTAB) {
                // Saves settings
                ui->ECGplot->saveSettings(otherMemory);
            }
            ui->ECGplot->setDisplayData(false);
            currentTab = ASSESSMENTTAB;
            break;
        default :
            Q_ASSERT(false);
    }
}


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
        ui->actionBackgroundPaper->setChecked(true);
        ui->actionBackgroundMonitor->setChecked(false);
        ui->ECGplot->setEcgBackground(true);
    } else {
        ui->actionBackgroundPaper->setChecked(false);
        ui->actionBackgroundMonitor->setChecked(true);
        ui->ECGplot->setEcgBackground(false);
    }
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
