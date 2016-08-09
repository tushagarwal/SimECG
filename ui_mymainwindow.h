/********************************************************************************
** Form generated from reading UI file 'mymainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYMAINWINDOW_H
#define UI_MYMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "ecgplotter.h"

QT_BEGIN_NAMESPACE

class Ui_myMainWindowClass
{
public:
    QAction *action_Exit;
    QAction *action_About;
    QAction *actionFilterOn;
    QAction *actionFilterOff;
    QAction *actionBackStatic;
    QAction *actionBackRolling;
    QAction *actionBackgroundPaper;
    QAction *actionBackgroundMonitor;
    QAction *actionSpeed25mm;
    QAction *actionSpeed50mm;
    QAction *actionAmplitude10mm;
    QAction *actionAmplitude5mm;
    QAction *actionSave_as_Preset;
    QAction *actionSave_Technical_Specifications_As;
    QAction *actionLoad_Training_Settings_as_Preset;
    QAction *actionLoad_preferences;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QFrame *ECGplotFrame;
    QVBoxLayout *verticalLayout;
    ECGplotter *ECGplot;
    QFrame *PreferencesFrame;
    QHBoxLayout *preference;
    QRadioButton *ecgRadio;
    QRadioButton *monitorRadio;
    QSpacerItem *horizontalSpacer;
    QCheckBox *rollingView;
    QCheckBox *noiseFilter;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *captureImage;
    QPushButton *startRecording;
    QFrame *PresetFrame;
    QVBoxLayout *PresetLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QPushButton *AddPreset;
    QListWidget *presetListWidget;
    QFrame *ParameterFrame;
    QVBoxLayout *ParameterLayout;
    QVBoxLayout *verticalLayout_2;
    QFrame *headFrame_2;
    QVBoxLayout *headFrame;
    QFrame *HeartRateFrame;
    QGridLayout *gridLayout_2;
    QSpinBox *heartratespinBox;
    QLabel *PresetNameLabel;
    QLabel *heartratelabel;
    QLineEdit *PresetNameEdit;
    QFrame *WaveFrame;
    QGridLayout *waveLayout;
    QDoubleSpinBox *pwaveamplitude;
    QLabel *twavelabel;
    QLabel *swavelabel;
    QLabel *ShowTitle;
    QLabel *AmpLabel;
    QLabel *label;
    QCheckBox *swaveshow;
    QLabel *DurationLabel;
    QLabel *pwavelabel;
    QCheckBox *twaveshow;
    QSpacerItem *horizontalSpacer_2;
    QDoubleSpinBox *twaveamplitude;
    QLabel *qrslabel;
    QDoubleSpinBox *twaveduration;
    QDoubleSpinBox *pwaveduration;
    QDoubleSpinBox *qrsamplitude;
    QCheckBox *qrswaveshow;
    QDoubleSpinBox *stduration;
    QLabel *label_3;
    QComboBox *qrspositiveness;
    QLabel *NameLabel;
    QCheckBox *pwaveshow;
    QComboBox *twavepositiveness;
    QDoubleSpinBox *qrsduration;
    QLabel *prlabel;
    QDoubleSpinBox *swaveduration;
    QLabel *stlabel;
    QDoubleSpinBox *prduration;
    QComboBox *pwavepositiveness;
    QDoubleSpinBox *swaveamplitude;
    QSpacerItem *horizontalSpacer_10;
    QSpacerItem *horizontalSpacer_9;
    QSpacerItem *horizontalSpacer_11;
    QSpacerItem *horizontalSpacer_12;
    QSpacerItem *horizontalSpacer_13;
    QFrame *preamtureFrame;
    QVBoxLayout *PrematureHeadLay;
    QLabel *PrematureBeatsLabel;
    QGridLayout *prematureBeatLayout;
    QSpinBox *numberofsve;
    QDoubleSpinBox *couplingofsve;
    QCheckBox *vecheckbox;
    QCheckBox *svecheckbox;
    QComboBox *morphologyofve;
    QDoubleSpinBox *couplingofve;
    QSpinBox *numberofve;
    QFrame *OtherFrame;
    QGridLayout *otherLayout;
    QLabel *labelSpecialConditions;
    QCheckBox *atrialfibrillation;
    QComboBox *specialConditionsComboBox;
    QLabel *labelOtherConditions;
    QFrame *saveFrame;
    QHBoxLayout *SaveLayout;
    QSpacerItem *horizontalSpacer_8;
    QPushButton *closePreset;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *Delete;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *Save;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *SaveAs;
    QSpacerItem *horizontalSpacer_6;

    void setupUi(QMainWindow *myMainWindowClass)
    {
        if (myMainWindowClass->objectName().isEmpty())
            myMainWindowClass->setObjectName(QStringLiteral("myMainWindowClass"));
        myMainWindowClass->resize(1229, 791);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(myMainWindowClass->sizePolicy().hasHeightForWidth());
        myMainWindowClass->setSizePolicy(sizePolicy);
        myMainWindowClass->setMinimumSize(QSize(900, 600));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/simecg-logo-32x32.png"), QSize(), QIcon::Normal, QIcon::Off);
        myMainWindowClass->setWindowIcon(icon);
        myMainWindowClass->setAutoFillBackground(true);
        myMainWindowClass->setTabShape(QTabWidget::Rounded);
        action_Exit = new QAction(myMainWindowClass);
        action_Exit->setObjectName(QStringLiteral("action_Exit"));
        action_About = new QAction(myMainWindowClass);
        action_About->setObjectName(QStringLiteral("action_About"));
        actionFilterOn = new QAction(myMainWindowClass);
        actionFilterOn->setObjectName(QStringLiteral("actionFilterOn"));
        actionFilterOn->setCheckable(true);
        actionFilterOn->setChecked(true);
        actionFilterOn->setEnabled(true);
        actionFilterOff = new QAction(myMainWindowClass);
        actionFilterOff->setObjectName(QStringLiteral("actionFilterOff"));
        actionFilterOff->setCheckable(true);
        actionFilterOff->setEnabled(true);
        actionBackStatic = new QAction(myMainWindowClass);
        actionBackStatic->setObjectName(QStringLiteral("actionBackStatic"));
        actionBackStatic->setCheckable(true);
        actionBackStatic->setChecked(false);
        actionBackStatic->setEnabled(true);
        actionBackRolling = new QAction(myMainWindowClass);
        actionBackRolling->setObjectName(QStringLiteral("actionBackRolling"));
        actionBackRolling->setCheckable(true);
        actionBackRolling->setEnabled(true);
        actionBackgroundPaper = new QAction(myMainWindowClass);
        actionBackgroundPaper->setObjectName(QStringLiteral("actionBackgroundPaper"));
        actionBackgroundPaper->setCheckable(true);
        actionBackgroundPaper->setEnabled(true);
        actionBackgroundMonitor = new QAction(myMainWindowClass);
        actionBackgroundMonitor->setObjectName(QStringLiteral("actionBackgroundMonitor"));
        actionBackgroundMonitor->setCheckable(true);
        actionBackgroundMonitor->setEnabled(true);
        actionSpeed25mm = new QAction(myMainWindowClass);
        actionSpeed25mm->setObjectName(QStringLiteral("actionSpeed25mm"));
        actionSpeed25mm->setCheckable(true);
        actionSpeed25mm->setChecked(false);
        actionSpeed25mm->setEnabled(true);
        actionSpeed50mm = new QAction(myMainWindowClass);
        actionSpeed50mm->setObjectName(QStringLiteral("actionSpeed50mm"));
        actionSpeed50mm->setCheckable(true);
        actionSpeed50mm->setEnabled(true);
        actionSpeed50mm->setAutoRepeat(false);
        actionAmplitude10mm = new QAction(myMainWindowClass);
        actionAmplitude10mm->setObjectName(QStringLiteral("actionAmplitude10mm"));
        actionAmplitude10mm->setCheckable(true);
        actionAmplitude10mm->setChecked(true);
        actionAmplitude10mm->setEnabled(false);
        actionAmplitude5mm = new QAction(myMainWindowClass);
        actionAmplitude5mm->setObjectName(QStringLiteral("actionAmplitude5mm"));
        actionAmplitude5mm->setCheckable(true);
        actionAmplitude5mm->setEnabled(false);
        actionSave_as_Preset = new QAction(myMainWindowClass);
        actionSave_as_Preset->setObjectName(QStringLiteral("actionSave_as_Preset"));
        actionSave_as_Preset->setEnabled(true);
        actionSave_Technical_Specifications_As = new QAction(myMainWindowClass);
        actionSave_Technical_Specifications_As->setObjectName(QStringLiteral("actionSave_Technical_Specifications_As"));
        actionSave_Technical_Specifications_As->setEnabled(false);
        actionLoad_Training_Settings_as_Preset = new QAction(myMainWindowClass);
        actionLoad_Training_Settings_as_Preset->setObjectName(QStringLiteral("actionLoad_Training_Settings_as_Preset"));
        actionLoad_Training_Settings_as_Preset->setEnabled(true);
        actionLoad_preferences = new QAction(myMainWindowClass);
        actionLoad_preferences->setObjectName(QStringLiteral("actionLoad_preferences"));
        actionLoad_preferences->setEnabled(false);
        centralWidget = new QWidget(myMainWindowClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setAutoFillBackground(true);
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        ECGplotFrame = new QFrame(centralWidget);
        ECGplotFrame->setObjectName(QStringLiteral("ECGplotFrame"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(ECGplotFrame->sizePolicy().hasHeightForWidth());
        ECGplotFrame->setSizePolicy(sizePolicy1);
        ECGplotFrame->setMinimumSize(QSize(750, 300));
        ECGplotFrame->setStyleSheet(QLatin1String("#PreferencesFrame{\n"
"	\n"
"}"));
        ECGplotFrame->setFrameShape(QFrame::Box);
        ECGplotFrame->setFrameShadow(QFrame::Raised);
        ECGplotFrame->setLineWidth(3);
        verticalLayout = new QVBoxLayout(ECGplotFrame);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        ECGplot = new ECGplotter(ECGplotFrame);
        ECGplot->setObjectName(QStringLiteral("ECGplot"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(ECGplot->sizePolicy().hasHeightForWidth());
        ECGplot->setSizePolicy(sizePolicy2);
        ECGplot->setMinimumSize(QSize(900, 350));
        ECGplot->setSizeIncrement(QSize(4, 3));
        ECGplot->setCursor(QCursor(Qt::BlankCursor));

        verticalLayout->addWidget(ECGplot);

        PreferencesFrame = new QFrame(ECGplotFrame);
        PreferencesFrame->setObjectName(QStringLiteral("PreferencesFrame"));
        PreferencesFrame->setStyleSheet(QLatin1String("#PreferencesFrame{\n"
"	background-color: rgb(255, 255, 255);\n"
"}"));
        PreferencesFrame->setFrameShape(QFrame::NoFrame);
        PreferencesFrame->setFrameShadow(QFrame::Raised);
        PreferencesFrame->setLineWidth(3);
        preference = new QHBoxLayout(PreferencesFrame);
        preference->setSpacing(6);
        preference->setContentsMargins(11, 11, 11, 11);
        preference->setObjectName(QStringLiteral("preference"));
        preference->setContentsMargins(5, 5, 5, 5);
        ecgRadio = new QRadioButton(PreferencesFrame);
        ecgRadio->setObjectName(QStringLiteral("ecgRadio"));
        ecgRadio->setChecked(true);

        preference->addWidget(ecgRadio);

        monitorRadio = new QRadioButton(PreferencesFrame);
        monitorRadio->setObjectName(QStringLiteral("monitorRadio"));

        preference->addWidget(monitorRadio);

        horizontalSpacer = new QSpacerItem(20, 0, QSizePolicy::Fixed, QSizePolicy::Minimum);

        preference->addItem(horizontalSpacer);

        rollingView = new QCheckBox(PreferencesFrame);
        rollingView->setObjectName(QStringLiteral("rollingView"));

        preference->addWidget(rollingView);

        noiseFilter = new QCheckBox(PreferencesFrame);
        noiseFilter->setObjectName(QStringLiteral("noiseFilter"));

        preference->addWidget(noiseFilter);

        horizontalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        preference->addItem(horizontalSpacer_3);

        captureImage = new QPushButton(PreferencesFrame);
        captureImage->setObjectName(QStringLiteral("captureImage"));
        captureImage->setMinimumSize(QSize(150, 0));

        preference->addWidget(captureImage);

        startRecording = new QPushButton(PreferencesFrame);
        startRecording->setObjectName(QStringLiteral("startRecording"));
        startRecording->setMinimumSize(QSize(150, 0));

        preference->addWidget(startRecording);


        verticalLayout->addWidget(PreferencesFrame);


        gridLayout->addWidget(ECGplotFrame, 0, 2, 1, 1);

        PresetFrame = new QFrame(centralWidget);
        PresetFrame->setObjectName(QStringLiteral("PresetFrame"));
        PresetFrame->setMinimumSize(QSize(200, 400));
        PresetFrame->setMaximumSize(QSize(300, 16777215));
        PresetLayout = new QVBoxLayout(PresetFrame);
        PresetLayout->setSpacing(0);
        PresetLayout->setContentsMargins(11, 11, 11, 11);
        PresetLayout->setObjectName(QStringLiteral("PresetLayout"));
        PresetLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_2 = new QLabel(PresetFrame);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setItalic(false);
        font.setWeight(75);
        label_2->setFont(font);

        horizontalLayout->addWidget(label_2);

        AddPreset = new QPushButton(PresetFrame);
        AddPreset->setObjectName(QStringLiteral("AddPreset"));
        AddPreset->setMaximumSize(QSize(100, 16777215));

        horizontalLayout->addWidget(AddPreset);


        PresetLayout->addLayout(horizontalLayout);

        presetListWidget = new QListWidget(PresetFrame);
        presetListWidget->setObjectName(QStringLiteral("presetListWidget"));
        presetListWidget->setMinimumSize(QSize(200, 0));
        presetListWidget->setMaximumSize(QSize(300, 16777215));

        PresetLayout->addWidget(presetListWidget);


        gridLayout->addWidget(PresetFrame, 0, 0, 4, 1);

        ParameterFrame = new QFrame(centralWidget);
        ParameterFrame->setObjectName(QStringLiteral("ParameterFrame"));
        ParameterFrame->setStyleSheet(QLatin1String("#ParameterFrame{\n"
"	\n"
"	border-color: rgb(255, 255, 255);\n"
"	\n"
"	alternate-background-color: rgb(85, 255, 255);\n"
"}"));
        ParameterFrame->setFrameShape(QFrame::Box);
        ParameterFrame->setFrameShadow(QFrame::Raised);
        ParameterFrame->setLineWidth(3);
        ParameterLayout = new QVBoxLayout(ParameterFrame);
        ParameterLayout->setSpacing(6);
        ParameterLayout->setContentsMargins(11, 11, 11, 11);
        ParameterLayout->setObjectName(QStringLiteral("ParameterLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(4, -1, -1, -1);
        headFrame_2 = new QFrame(ParameterFrame);
        headFrame_2->setObjectName(QStringLiteral("headFrame_2"));
        headFrame_2->setFrameShape(QFrame::Panel);
        headFrame_2->setFrameShadow(QFrame::Raised);
        headFrame_2->setLineWidth(3);
        headFrame = new QVBoxLayout(headFrame_2);
        headFrame->setSpacing(6);
        headFrame->setContentsMargins(11, 11, 11, 11);
        headFrame->setObjectName(QStringLiteral("headFrame"));
        headFrame->setContentsMargins(6, 6, 6, 6);
        HeartRateFrame = new QFrame(headFrame_2);
        HeartRateFrame->setObjectName(QStringLiteral("HeartRateFrame"));
        HeartRateFrame->setFrameShape(QFrame::NoFrame);
        HeartRateFrame->setFrameShadow(QFrame::Raised);
        HeartRateFrame->setLineWidth(3);
        gridLayout_2 = new QGridLayout(HeartRateFrame);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        heartratespinBox = new QSpinBox(HeartRateFrame);
        heartratespinBox->setObjectName(QStringLiteral("heartratespinBox"));
        sizePolicy.setHeightForWidth(heartratespinBox->sizePolicy().hasHeightForWidth());
        heartratespinBox->setSizePolicy(sizePolicy);
        heartratespinBox->setMinimumSize(QSize(83, 23));
        heartratespinBox->setMaximumSize(QSize(150, 35));
        QFont font1;
        font1.setFamily(QStringLiteral("Sans Serif"));
        font1.setPointSize(12);
        font1.setBold(false);
        font1.setWeight(50);
        heartratespinBox->setFont(font1);
        heartratespinBox->setCursor(QCursor(Qt::ArrowCursor));
        heartratespinBox->setWrapping(true);
        heartratespinBox->setButtonSymbols(QAbstractSpinBox::UpDownArrows);
        heartratespinBox->setMinimum(30);
        heartratespinBox->setMaximum(200);
        heartratespinBox->setValue(70);

        gridLayout_2->addWidget(heartratespinBox, 0, 1, 1, 1);

        PresetNameLabel = new QLabel(HeartRateFrame);
        PresetNameLabel->setObjectName(QStringLiteral("PresetNameLabel"));
        sizePolicy2.setHeightForWidth(PresetNameLabel->sizePolicy().hasHeightForWidth());
        PresetNameLabel->setSizePolicy(sizePolicy2);
        QFont font2;
        font2.setFamily(QStringLiteral("MS Sans Serif"));
        font2.setPointSize(10);
        font2.setBold(true);
        font2.setWeight(75);
        PresetNameLabel->setFont(font2);

        gridLayout_2->addWidget(PresetNameLabel, 0, 2, 1, 1);

        heartratelabel = new QLabel(HeartRateFrame);
        heartratelabel->setObjectName(QStringLiteral("heartratelabel"));
        heartratelabel->setEnabled(true);
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(heartratelabel->sizePolicy().hasHeightForWidth());
        heartratelabel->setSizePolicy(sizePolicy3);
        QFont font3;
        font3.setFamily(QStringLiteral("Sans Serif"));
        font3.setPointSize(10);
        font3.setBold(true);
        font3.setWeight(75);
        heartratelabel->setFont(font3);
        heartratelabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(heartratelabel, 0, 0, 1, 1, Qt::AlignLeft);

        PresetNameEdit = new QLineEdit(HeartRateFrame);
        PresetNameEdit->setObjectName(QStringLiteral("PresetNameEdit"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(PresetNameEdit->sizePolicy().hasHeightForWidth());
        PresetNameEdit->setSizePolicy(sizePolicy4);

        gridLayout_2->addWidget(PresetNameEdit, 0, 3, 1, 1);


        headFrame->addWidget(HeartRateFrame);

        WaveFrame = new QFrame(headFrame_2);
        WaveFrame->setObjectName(QStringLiteral("WaveFrame"));
        WaveFrame->setFrameShape(QFrame::NoFrame);
        WaveFrame->setFrameShadow(QFrame::Raised);
        WaveFrame->setLineWidth(3);
        WaveFrame->setMidLineWidth(1);
        waveLayout = new QGridLayout(WaveFrame);
        waveLayout->setSpacing(6);
        waveLayout->setContentsMargins(11, 11, 11, 11);
        waveLayout->setObjectName(QStringLiteral("waveLayout"));
        waveLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        waveLayout->setContentsMargins(0, 0, 0, 0);
        pwaveamplitude = new QDoubleSpinBox(WaveFrame);
        pwaveamplitude->setObjectName(QStringLiteral("pwaveamplitude"));
        sizePolicy4.setHeightForWidth(pwaveamplitude->sizePolicy().hasHeightForWidth());
        pwaveamplitude->setSizePolicy(sizePolicy4);
        pwaveamplitude->setMinimumSize(QSize(83, 23));
        pwaveamplitude->setMaximumSize(QSize(16777215, 23));
        QFont font4;
        font4.setFamily(QStringLiteral("Sans Serif"));
        font4.setPointSize(8);
        font4.setBold(false);
        font4.setWeight(50);
        pwaveamplitude->setFont(font4);
        pwaveamplitude->setDecimals(2);
        pwaveamplitude->setMinimum(0.05);
        pwaveamplitude->setMaximum(0.4);
        pwaveamplitude->setSingleStep(0.05);
        pwaveamplitude->setValue(0.2);

        waveLayout->addWidget(pwaveamplitude, 2, 3, 1, 1);

        twavelabel = new QLabel(WaveFrame);
        twavelabel->setObjectName(QStringLiteral("twavelabel"));
        QFont font5;
        font5.setFamily(QStringLiteral("Sans Serif"));
        font5.setPointSize(8);
        font5.setBold(true);
        font5.setWeight(75);
        twavelabel->setFont(font5);
        twavelabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        waveLayout->addWidget(twavelabel, 5, 1, 1, 1, Qt::AlignLeft);

        swavelabel = new QLabel(WaveFrame);
        swavelabel->setObjectName(QStringLiteral("swavelabel"));
        swavelabel->setFont(font5);
        swavelabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        waveLayout->addWidget(swavelabel, 4, 1, 1, 1, Qt::AlignLeft);

        ShowTitle = new QLabel(WaveFrame);
        ShowTitle->setObjectName(QStringLiteral("ShowTitle"));
        QSizePolicy sizePolicy5(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(ShowTitle->sizePolicy().hasHeightForWidth());
        ShowTitle->setSizePolicy(sizePolicy5);
        ShowTitle->setMaximumSize(QSize(35, 16777215));
        QFont font6;
        font6.setFamily(QStringLiteral("MS Sans Serif"));
        font6.setBold(true);
        font6.setWeight(75);
        ShowTitle->setFont(font6);

        waveLayout->addWidget(ShowTitle, 0, 0, 1, 1, Qt::AlignHCenter);

        AmpLabel = new QLabel(WaveFrame);
        AmpLabel->setObjectName(QStringLiteral("AmpLabel"));
        AmpLabel->setFont(font6);

        waveLayout->addWidget(AmpLabel, 0, 3, 1, 1);

        label = new QLabel(WaveFrame);
        label->setObjectName(QStringLiteral("label"));

        waveLayout->addWidget(label, 2, 10, 1, 1);

        swaveshow = new QCheckBox(WaveFrame);
        swaveshow->setObjectName(QStringLiteral("swaveshow"));
        sizePolicy.setHeightForWidth(swaveshow->sizePolicy().hasHeightForWidth());
        swaveshow->setSizePolicy(sizePolicy);
        swaveshow->setMaximumSize(QSize(35, 16777215));

        waveLayout->addWidget(swaveshow, 4, 0, 1, 1, Qt::AlignHCenter);

        DurationLabel = new QLabel(WaveFrame);
        DurationLabel->setObjectName(QStringLiteral("DurationLabel"));
        DurationLabel->setFont(font6);

        waveLayout->addWidget(DurationLabel, 0, 5, 1, 1);

        pwavelabel = new QLabel(WaveFrame);
        pwavelabel->setObjectName(QStringLiteral("pwavelabel"));
        pwavelabel->setFont(font5);
        pwavelabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        waveLayout->addWidget(pwavelabel, 2, 1, 1, 1, Qt::AlignLeft);

        twaveshow = new QCheckBox(WaveFrame);
        twaveshow->setObjectName(QStringLiteral("twaveshow"));
        sizePolicy.setHeightForWidth(twaveshow->sizePolicy().hasHeightForWidth());
        twaveshow->setSizePolicy(sizePolicy);
        twaveshow->setMaximumSize(QSize(35, 16777215));

        waveLayout->addWidget(twaveshow, 5, 0, 1, 1, Qt::AlignHCenter);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        waveLayout->addItem(horizontalSpacer_2, 2, 2, 1, 1);

        twaveamplitude = new QDoubleSpinBox(WaveFrame);
        twaveamplitude->setObjectName(QStringLiteral("twaveamplitude"));
        sizePolicy4.setHeightForWidth(twaveamplitude->sizePolicy().hasHeightForWidth());
        twaveamplitude->setSizePolicy(sizePolicy4);
        twaveamplitude->setMinimumSize(QSize(83, 23));
        twaveamplitude->setMaximumSize(QSize(16777215, 23));
        twaveamplitude->setFont(font4);
        twaveamplitude->setDecimals(2);
        twaveamplitude->setMinimum(0.1);
        twaveamplitude->setMaximum(0.5);
        twaveamplitude->setSingleStep(0.05);
        twaveamplitude->setValue(0.1);

        waveLayout->addWidget(twaveamplitude, 5, 3, 1, 1);

        qrslabel = new QLabel(WaveFrame);
        qrslabel->setObjectName(QStringLiteral("qrslabel"));
        qrslabel->setFont(font5);
        qrslabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        waveLayout->addWidget(qrslabel, 3, 1, 1, 1, Qt::AlignLeft);

        twaveduration = new QDoubleSpinBox(WaveFrame);
        twaveduration->setObjectName(QStringLiteral("twaveduration"));
        sizePolicy4.setHeightForWidth(twaveduration->sizePolicy().hasHeightForWidth());
        twaveduration->setSizePolicy(sizePolicy4);
        twaveduration->setMinimumSize(QSize(83, 23));
        twaveduration->setMaximumSize(QSize(16777215, 23));
        twaveduration->setFont(font4);
        twaveduration->setDecimals(2);
        twaveduration->setMinimum(0.1);
        twaveduration->setMaximum(0.4);
        twaveduration->setSingleStep(0.01);
        twaveduration->setValue(0.16);

        waveLayout->addWidget(twaveduration, 5, 5, 1, 1);

        pwaveduration = new QDoubleSpinBox(WaveFrame);
        pwaveduration->setObjectName(QStringLiteral("pwaveduration"));
        sizePolicy4.setHeightForWidth(pwaveduration->sizePolicy().hasHeightForWidth());
        pwaveduration->setSizePolicy(sizePolicy4);
        pwaveduration->setMinimumSize(QSize(83, 23));
        pwaveduration->setMaximumSize(QSize(16777215, 23));
        pwaveduration->setFont(font4);
        pwaveduration->setDecimals(2);
        pwaveduration->setMinimum(0.04);
        pwaveduration->setMaximum(0.14);
        pwaveduration->setSingleStep(0.01);
        pwaveduration->setValue(0.09);

        waveLayout->addWidget(pwaveduration, 2, 5, 1, 1);

        qrsamplitude = new QDoubleSpinBox(WaveFrame);
        qrsamplitude->setObjectName(QStringLiteral("qrsamplitude"));
        sizePolicy4.setHeightForWidth(qrsamplitude->sizePolicy().hasHeightForWidth());
        qrsamplitude->setSizePolicy(sizePolicy4);
        qrsamplitude->setMinimumSize(QSize(83, 23));
        qrsamplitude->setMaximumSize(QSize(16777215, 23));
        qrsamplitude->setFont(font4);
        qrsamplitude->setDecimals(2);
        qrsamplitude->setMinimum(0.5);
        qrsamplitude->setMaximum(2);
        qrsamplitude->setSingleStep(0.5);
        qrsamplitude->setValue(1);

        waveLayout->addWidget(qrsamplitude, 3, 3, 1, 1);

        qrswaveshow = new QCheckBox(WaveFrame);
        qrswaveshow->setObjectName(QStringLiteral("qrswaveshow"));
        sizePolicy.setHeightForWidth(qrswaveshow->sizePolicy().hasHeightForWidth());
        qrswaveshow->setSizePolicy(sizePolicy);
        qrswaveshow->setMaximumSize(QSize(35, 16777215));

        waveLayout->addWidget(qrswaveshow, 3, 0, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        stduration = new QDoubleSpinBox(WaveFrame);
        stduration->setObjectName(QStringLiteral("stduration"));
        sizePolicy4.setHeightForWidth(stduration->sizePolicy().hasHeightForWidth());
        stduration->setSizePolicy(sizePolicy4);
        stduration->setMinimumSize(QSize(83, 23));
        stduration->setMaximumSize(QSize(16777215, 23));
        stduration->setFont(font4);
        stduration->setDecimals(2);
        stduration->setMinimum(0.08);
        stduration->setMaximum(0.3);
        stduration->setSingleStep(0.01);
        stduration->setValue(0.15);

        waveLayout->addWidget(stduration, 4, 9, 1, 1);

        label_3 = new QLabel(WaveFrame);
        label_3->setObjectName(QStringLiteral("label_3"));
        QFont font7;
        font7.setFamily(QStringLiteral("MS Sans Serif"));
        font7.setPointSize(8);
        font7.setBold(true);
        font7.setWeight(75);
        label_3->setFont(font7);

        waveLayout->addWidget(label_3, 0, 7, 1, 1);

        qrspositiveness = new QComboBox(WaveFrame);
        qrspositiveness->setObjectName(QStringLiteral("qrspositiveness"));
        qrspositiveness->setEnabled(false);
        sizePolicy4.setHeightForWidth(qrspositiveness->sizePolicy().hasHeightForWidth());
        qrspositiveness->setSizePolicy(sizePolicy4);
        qrspositiveness->setMinimumSize(QSize(83, 23));
        qrspositiveness->setMaximumSize(QSize(16777215, 23));
        qrspositiveness->setFont(font4);

        waveLayout->addWidget(qrspositiveness, 3, 7, 1, 1);

        NameLabel = new QLabel(WaveFrame);
        NameLabel->setObjectName(QStringLiteral("NameLabel"));
        NameLabel->setMaximumSize(QSize(16777215, 16777215));
        NameLabel->setFont(font6);

        waveLayout->addWidget(NameLabel, 0, 1, 1, 1);

        pwaveshow = new QCheckBox(WaveFrame);
        pwaveshow->setObjectName(QStringLiteral("pwaveshow"));
        sizePolicy.setHeightForWidth(pwaveshow->sizePolicy().hasHeightForWidth());
        pwaveshow->setSizePolicy(sizePolicy);
        pwaveshow->setMaximumSize(QSize(35, 16777215));

        waveLayout->addWidget(pwaveshow, 2, 0, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        twavepositiveness = new QComboBox(WaveFrame);
        twavepositiveness->setObjectName(QStringLiteral("twavepositiveness"));
        sizePolicy4.setHeightForWidth(twavepositiveness->sizePolicy().hasHeightForWidth());
        twavepositiveness->setSizePolicy(sizePolicy4);
        twavepositiveness->setMinimumSize(QSize(83, 23));
        twavepositiveness->setMaximumSize(QSize(16777215, 23));
        twavepositiveness->setFont(font4);

        waveLayout->addWidget(twavepositiveness, 5, 7, 1, 1);

        qrsduration = new QDoubleSpinBox(WaveFrame);
        qrsduration->setObjectName(QStringLiteral("qrsduration"));
        sizePolicy4.setHeightForWidth(qrsduration->sizePolicy().hasHeightForWidth());
        qrsduration->setSizePolicy(sizePolicy4);
        qrsduration->setMinimumSize(QSize(83, 23));
        qrsduration->setMaximumSize(QSize(16777215, 23));
        qrsduration->setFont(font4);
        qrsduration->setDecimals(2);
        qrsduration->setMinimum(0.08);
        qrsduration->setMaximum(0.16);
        qrsduration->setSingleStep(0.01);
        qrsduration->setValue(0.1);

        waveLayout->addWidget(qrsduration, 3, 5, 1, 1);

        prlabel = new QLabel(WaveFrame);
        prlabel->setObjectName(QStringLiteral("prlabel"));
        prlabel->setFont(font5);
        prlabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        waveLayout->addWidget(prlabel, 2, 8, 1, 1);

        swaveduration = new QDoubleSpinBox(WaveFrame);
        swaveduration->setObjectName(QStringLiteral("swaveduration"));
        sizePolicy4.setHeightForWidth(swaveduration->sizePolicy().hasHeightForWidth());
        swaveduration->setSizePolicy(sizePolicy4);
        swaveduration->setMinimumSize(QSize(83, 23));
        swaveduration->setMaximumSize(QSize(16777215, 23));
        swaveduration->setFont(font4);
        swaveduration->setDecimals(2);
        swaveduration->setMinimum(0.1);
        swaveduration->setMaximum(0.4);
        swaveduration->setSingleStep(0.01);
        swaveduration->setValue(0.16);

        waveLayout->addWidget(swaveduration, 4, 5, 1, 1);

        stlabel = new QLabel(WaveFrame);
        stlabel->setObjectName(QStringLiteral("stlabel"));
        stlabel->setFont(font5);
        stlabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        waveLayout->addWidget(stlabel, 4, 8, 1, 1);

        prduration = new QDoubleSpinBox(WaveFrame);
        prduration->setObjectName(QStringLiteral("prduration"));
        sizePolicy4.setHeightForWidth(prduration->sizePolicy().hasHeightForWidth());
        prduration->setSizePolicy(sizePolicy4);
        prduration->setMinimumSize(QSize(83, 23));
        prduration->setMaximumSize(QSize(16777215, 23));
        prduration->setFont(font4);
        prduration->setDecimals(2);
        prduration->setMinimum(0.08);
        prduration->setMaximum(0.3);
        prduration->setSingleStep(0.01);
        prduration->setValue(0.15);

        waveLayout->addWidget(prduration, 2, 9, 1, 1);

        pwavepositiveness = new QComboBox(WaveFrame);
        pwavepositiveness->setObjectName(QStringLiteral("pwavepositiveness"));
        sizePolicy4.setHeightForWidth(pwavepositiveness->sizePolicy().hasHeightForWidth());
        pwavepositiveness->setSizePolicy(sizePolicy4);
        pwavepositiveness->setMinimumSize(QSize(83, 23));
        pwavepositiveness->setMaximumSize(QSize(16777215, 23));
        pwavepositiveness->setFont(font4);

        waveLayout->addWidget(pwavepositiveness, 2, 7, 1, 1);

        swaveamplitude = new QDoubleSpinBox(WaveFrame);
        swaveamplitude->setObjectName(QStringLiteral("swaveamplitude"));
        sizePolicy4.setHeightForWidth(swaveamplitude->sizePolicy().hasHeightForWidth());
        swaveamplitude->setSizePolicy(sizePolicy4);
        swaveamplitude->setMinimumSize(QSize(83, 23));
        swaveamplitude->setMaximumSize(QSize(16777215, 23));
        swaveamplitude->setFont(font4);
        swaveamplitude->setDecimals(2);
        swaveamplitude->setMinimum(0.1);
        swaveamplitude->setMaximum(0.5);
        swaveamplitude->setSingleStep(0.05);
        swaveamplitude->setValue(0.1);

        waveLayout->addWidget(swaveamplitude, 4, 3, 1, 1);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        waveLayout->addItem(horizontalSpacer_10, 3, 4, 1, 1);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        waveLayout->addItem(horizontalSpacer_9, 2, 4, 1, 1);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        waveLayout->addItem(horizontalSpacer_11, 2, 6, 1, 1);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        waveLayout->addItem(horizontalSpacer_12, 3, 6, 1, 1);

        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        waveLayout->addItem(horizontalSpacer_13, 4, 6, 1, 1);


        headFrame->addWidget(WaveFrame);


        verticalLayout_2->addWidget(headFrame_2);

        preamtureFrame = new QFrame(ParameterFrame);
        preamtureFrame->setObjectName(QStringLiteral("preamtureFrame"));
        preamtureFrame->setFrameShape(QFrame::Panel);
        preamtureFrame->setFrameShadow(QFrame::Raised);
        preamtureFrame->setLineWidth(3);
        PrematureHeadLay = new QVBoxLayout(preamtureFrame);
        PrematureHeadLay->setSpacing(6);
        PrematureHeadLay->setContentsMargins(11, 11, 11, 11);
        PrematureHeadLay->setObjectName(QStringLiteral("PrematureHeadLay"));
        PrematureHeadLay->setContentsMargins(6, 6, 6, 6);
        PrematureBeatsLabel = new QLabel(preamtureFrame);
        PrematureBeatsLabel->setObjectName(QStringLiteral("PrematureBeatsLabel"));
        QFont font8;
        font8.setPointSize(10);
        font8.setBold(true);
        font8.setWeight(75);
        PrematureBeatsLabel->setFont(font8);

        PrematureHeadLay->addWidget(PrematureBeatsLabel);

        prematureBeatLayout = new QGridLayout();
        prematureBeatLayout->setSpacing(6);
        prematureBeatLayout->setObjectName(QStringLiteral("prematureBeatLayout"));
        numberofsve = new QSpinBox(preamtureFrame);
        numberofsve->setObjectName(QStringLiteral("numberofsve"));
        numberofsve->setEnabled(false);
        numberofsve->setFont(font4);
        numberofsve->setCursor(QCursor(Qt::ArrowCursor));
        numberofsve->setWrapping(true);
        numberofsve->setButtonSymbols(QAbstractSpinBox::PlusMinus);
        numberofsve->setMinimum(1);
        numberofsve->setMaximum(99);
        numberofsve->setValue(3);

        prematureBeatLayout->addWidget(numberofsve, 0, 1, 1, 1);

        couplingofsve = new QDoubleSpinBox(preamtureFrame);
        couplingofsve->setObjectName(QStringLiteral("couplingofsve"));
        couplingofsve->setEnabled(false);
        couplingofsve->setFont(font4);
        couplingofsve->setDecimals(0);
        couplingofsve->setMinimum(100);
        couplingofsve->setMaximum(600);
        couplingofsve->setSingleStep(10);
        couplingofsve->setValue(200);

        prematureBeatLayout->addWidget(couplingofsve, 0, 2, 1, 1);

        vecheckbox = new QCheckBox(preamtureFrame);
        vecheckbox->setObjectName(QStringLiteral("vecheckbox"));
        vecheckbox->setEnabled(false);
        vecheckbox->setFont(font4);
        vecheckbox->setTristate(false);

        prematureBeatLayout->addWidget(vecheckbox, 1, 0, 1, 1);

        svecheckbox = new QCheckBox(preamtureFrame);
        svecheckbox->setObjectName(QStringLiteral("svecheckbox"));
        svecheckbox->setEnabled(false);
        svecheckbox->setFont(font4);

        prematureBeatLayout->addWidget(svecheckbox, 0, 0, 1, 1);

        morphologyofve = new QComboBox(preamtureFrame);
        morphologyofve->setObjectName(QStringLiteral("morphologyofve"));
        morphologyofve->setEnabled(false);
        morphologyofve->setFont(font4);

        prematureBeatLayout->addWidget(morphologyofve, 1, 3, 1, 1);

        couplingofve = new QDoubleSpinBox(preamtureFrame);
        couplingofve->setObjectName(QStringLiteral("couplingofve"));
        couplingofve->setEnabled(false);
        couplingofve->setFont(font4);
        couplingofve->setDecimals(0);
        couplingofve->setMinimum(100);
        couplingofve->setMaximum(600);
        couplingofve->setSingleStep(10);
        couplingofve->setValue(200);

        prematureBeatLayout->addWidget(couplingofve, 1, 2, 1, 1);

        numberofve = new QSpinBox(preamtureFrame);
        numberofve->setObjectName(QStringLiteral("numberofve"));
        numberofve->setEnabled(false);
        numberofve->setFont(font4);
        numberofve->setCursor(QCursor(Qt::ArrowCursor));
        numberofve->setWrapping(true);
        numberofve->setButtonSymbols(QAbstractSpinBox::PlusMinus);
        numberofve->setMinimum(1);
        numberofve->setMaximum(99);
        numberofve->setValue(3);

        prematureBeatLayout->addWidget(numberofve, 1, 1, 1, 1);


        PrematureHeadLay->addLayout(prematureBeatLayout);

        OtherFrame = new QFrame(preamtureFrame);
        OtherFrame->setObjectName(QStringLiteral("OtherFrame"));
        otherLayout = new QGridLayout(OtherFrame);
        otherLayout->setSpacing(6);
        otherLayout->setContentsMargins(11, 11, 11, 11);
        otherLayout->setObjectName(QStringLiteral("otherLayout"));
        otherLayout->setContentsMargins(0, 0, 0, 0);
        labelSpecialConditions = new QLabel(OtherFrame);
        labelSpecialConditions->setObjectName(QStringLiteral("labelSpecialConditions"));
        labelSpecialConditions->setMaximumSize(QSize(170, 16777215));
        labelSpecialConditions->setFont(font8);

        otherLayout->addWidget(labelSpecialConditions, 0, 2, 1, 1);

        atrialfibrillation = new QCheckBox(OtherFrame);
        atrialfibrillation->setObjectName(QStringLiteral("atrialfibrillation"));
        atrialfibrillation->setEnabled(true);
        atrialfibrillation->setMaximumSize(QSize(170, 16777215));
        atrialfibrillation->setFont(font4);

        otherLayout->addWidget(atrialfibrillation, 0, 1, 1, 1);

        specialConditionsComboBox = new QComboBox(OtherFrame);
        specialConditionsComboBox->setObjectName(QStringLiteral("specialConditionsComboBox"));
        specialConditionsComboBox->setEnabled(false);
        specialConditionsComboBox->setMaximumSize(QSize(170, 16777215));
        specialConditionsComboBox->setFont(font4);

        otherLayout->addWidget(specialConditionsComboBox, 0, 3, 1, 1);

        labelOtherConditions = new QLabel(OtherFrame);
        labelOtherConditions->setObjectName(QStringLiteral("labelOtherConditions"));
        labelOtherConditions->setMaximumSize(QSize(170, 16777215));
        labelOtherConditions->setFont(font8);

        otherLayout->addWidget(labelOtherConditions, 0, 0, 1, 1);


        PrematureHeadLay->addWidget(OtherFrame);


        verticalLayout_2->addWidget(preamtureFrame);


        ParameterLayout->addLayout(verticalLayout_2);

        saveFrame = new QFrame(ParameterFrame);
        saveFrame->setObjectName(QStringLiteral("saveFrame"));
        saveFrame->setFrameShape(QFrame::Panel);
        saveFrame->setFrameShadow(QFrame::Raised);
        saveFrame->setLineWidth(3);
        SaveLayout = new QHBoxLayout(saveFrame);
        SaveLayout->setSpacing(6);
        SaveLayout->setContentsMargins(11, 11, 11, 11);
        SaveLayout->setObjectName(QStringLiteral("SaveLayout"));
        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        SaveLayout->addItem(horizontalSpacer_8);

        closePreset = new QPushButton(saveFrame);
        closePreset->setObjectName(QStringLiteral("closePreset"));

        SaveLayout->addWidget(closePreset);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        SaveLayout->addItem(horizontalSpacer_7);

        Delete = new QPushButton(saveFrame);
        Delete->setObjectName(QStringLiteral("Delete"));

        SaveLayout->addWidget(Delete);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        SaveLayout->addItem(horizontalSpacer_4);

        Save = new QPushButton(saveFrame);
        Save->setObjectName(QStringLiteral("Save"));

        SaveLayout->addWidget(Save);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        SaveLayout->addItem(horizontalSpacer_5);

        SaveAs = new QPushButton(saveFrame);
        SaveAs->setObjectName(QStringLiteral("SaveAs"));

        SaveLayout->addWidget(SaveAs);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        SaveLayout->addItem(horizontalSpacer_6);


        ParameterLayout->addWidget(saveFrame);


        gridLayout->addWidget(ParameterFrame, 2, 2, 1, 1);

        myMainWindowClass->setCentralWidget(centralWidget);
        QWidget::setTabOrder(pwaveamplitude, pwaveduration);
        QWidget::setTabOrder(pwaveduration, pwavepositiveness);
        QWidget::setTabOrder(pwavepositiveness, qrsamplitude);
        QWidget::setTabOrder(qrsamplitude, qrsduration);
        QWidget::setTabOrder(qrsduration, qrspositiveness);
        QWidget::setTabOrder(qrspositiveness, twaveamplitude);
        QWidget::setTabOrder(twaveamplitude, twaveduration);
        QWidget::setTabOrder(twaveduration, twavepositiveness);
        QWidget::setTabOrder(twavepositiveness, svecheckbox);
        QWidget::setTabOrder(svecheckbox, numberofsve);
        QWidget::setTabOrder(numberofsve, couplingofsve);
        QWidget::setTabOrder(couplingofsve, vecheckbox);
        QWidget::setTabOrder(vecheckbox, numberofve);
        QWidget::setTabOrder(numberofve, couplingofve);
        QWidget::setTabOrder(couplingofve, morphologyofve);

        retranslateUi(myMainWindowClass);
        QObject::connect(actionBackgroundMonitor, SIGNAL(triggered()), actionBackgroundPaper, SLOT(toggle()));
        QObject::connect(actionBackgroundPaper, SIGNAL(triggered()), actionBackgroundMonitor, SLOT(toggle()));
        QObject::connect(actionBackRolling, SIGNAL(triggered()), actionBackStatic, SLOT(toggle()));
        QObject::connect(actionBackStatic, SIGNAL(triggered()), actionBackRolling, SLOT(toggle()));
        QObject::connect(actionFilterOff, SIGNAL(triggered()), actionFilterOn, SLOT(toggle()));
        QObject::connect(actionFilterOn, SIGNAL(triggered()), actionFilterOff, SLOT(toggle()));
        QObject::connect(actionAmplitude10mm, SIGNAL(triggered()), actionAmplitude5mm, SLOT(toggle()));
        QObject::connect(actionAmplitude5mm, SIGNAL(triggered()), actionAmplitude10mm, SLOT(toggle()));
        QObject::connect(actionSpeed25mm, SIGNAL(triggered()), actionSpeed50mm, SLOT(toggle()));
        QObject::connect(actionSpeed50mm, SIGNAL(triggered()), actionSpeed25mm, SLOT(toggle()));

        qrspositiveness->setCurrentIndex(1);
        specialConditionsComboBox->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(myMainWindowClass);
    } // setupUi

    void retranslateUi(QMainWindow *myMainWindowClass)
    {
        myMainWindowClass->setWindowTitle(QApplication::translate("myMainWindowClass", "simECG", "Application title name"));
        action_Exit->setText(QApplication::translate("myMainWindowClass", "E&xit", 0));
#ifndef QT_NO_TOOLTIP
        action_Exit->setToolTip(QApplication::translate("myMainWindowClass", "Exit simECG", 0));
#endif // QT_NO_TOOLTIP
        action_Exit->setShortcut(QString());
        action_About->setText(QApplication::translate("myMainWindowClass", "&About ...", 0));
#ifndef QT_NO_TOOLTIP
        action_About->setToolTip(QApplication::translate("myMainWindowClass", "About simECG", 0));
#endif // QT_NO_TOOLTIP
        actionFilterOn->setText(QApplication::translate("myMainWindowClass", "&On", 0));
#ifndef QT_NO_TOOLTIP
        actionFilterOn->setToolTip(QApplication::translate("myMainWindowClass", "Turn noise filter ON", 0));
#endif // QT_NO_TOOLTIP
        actionFilterOff->setText(QApplication::translate("myMainWindowClass", "O&ff", 0));
#ifndef QT_NO_TOOLTIP
        actionFilterOff->setToolTip(QApplication::translate("myMainWindowClass", "Turn noise filter OFF", 0));
#endif // QT_NO_TOOLTIP
        actionBackStatic->setText(QApplication::translate("myMainWindowClass", "&Static", 0));
#ifndef QT_NO_TOOLTIP
        actionBackStatic->setToolTip(QApplication::translate("myMainWindowClass", "Static signal display", 0));
#endif // QT_NO_TOOLTIP
        actionBackRolling->setText(QApplication::translate("myMainWindowClass", "&Rolling", 0));
#ifndef QT_NO_TOOLTIP
        actionBackRolling->setToolTip(QApplication::translate("myMainWindowClass", "Rolling signal display", 0));
#endif // QT_NO_TOOLTIP
        actionBackgroundPaper->setText(QApplication::translate("myMainWindowClass", "&ECG paper", 0));
#ifndef QT_NO_TOOLTIP
        actionBackgroundPaper->setToolTip(QApplication::translate("myMainWindowClass", "ECG paper background", 0));
#endif // QT_NO_TOOLTIP
        actionBackgroundMonitor->setText(QApplication::translate("myMainWindowClass", "&Monitor", 0));
#ifndef QT_NO_TOOLTIP
        actionBackgroundMonitor->setToolTip(QApplication::translate("myMainWindowClass", "Monitor display type", 0));
#endif // QT_NO_TOOLTIP
        actionSpeed25mm->setText(QApplication::translate("myMainWindowClass", "&25mm/s", 0));
#ifndef QT_NO_TOOLTIP
        actionSpeed25mm->setToolTip(QApplication::translate("myMainWindowClass", "Signal speed of 25mm/s", 0));
#endif // QT_NO_TOOLTIP
        actionSpeed50mm->setText(QApplication::translate("myMainWindowClass", "&50 mm/s", 0));
#ifndef QT_NO_TOOLTIP
        actionSpeed50mm->setToolTip(QApplication::translate("myMainWindowClass", "Signal speed of 50 mm/s", 0));
#endif // QT_NO_TOOLTIP
        actionAmplitude10mm->setText(QApplication::translate("myMainWindowClass", "&10 mm/mV", 0));
#ifndef QT_NO_TOOLTIP
        actionAmplitude10mm->setToolTip(QApplication::translate("myMainWindowClass", "Signal amplitude of 10 mm/mV", 0));
#endif // QT_NO_TOOLTIP
        actionAmplitude5mm->setText(QApplication::translate("myMainWindowClass", "&5 mm/mV", 0));
#ifndef QT_NO_TOOLTIP
        actionAmplitude5mm->setToolTip(QApplication::translate("myMainWindowClass", "Signal amplitude of 5 mm/mV", 0));
#endif // QT_NO_TOOLTIP
        actionSave_as_Preset->setText(QApplication::translate("myMainWindowClass", "Save c&ustom settings ...", 0));
        actionSave_Technical_Specifications_As->setText(QApplication::translate("myMainWindowClass", "&Save preferences ...", 0));
        actionLoad_Training_Settings_as_Preset->setText(QApplication::translate("myMainWindowClass", "Load &custom settings ...", 0));
        actionLoad_preferences->setText(QApplication::translate("myMainWindowClass", "&Load preferences ...", 0));
        actionLoad_preferences->setShortcut(QString());
        ecgRadio->setText(QApplication::translate("myMainWindowClass", "ECG Paper", 0));
        monitorRadio->setText(QApplication::translate("myMainWindowClass", "Monitor Display", 0));
        rollingView->setText(QApplication::translate("myMainWindowClass", "Rolling View", 0));
        noiseFilter->setText(QApplication::translate("myMainWindowClass", "Noise Filter", 0));
        captureImage->setText(QApplication::translate("myMainWindowClass", "Capture Image", 0));
        startRecording->setText(QApplication::translate("myMainWindowClass", "Start Video Capture", 0));
        label_2->setText(QApplication::translate("myMainWindowClass", "ECG Rythms", 0));
        AddPreset->setText(QApplication::translate("myMainWindowClass", "Add/Duplicate", 0));
#ifndef QT_NO_TOOLTIP
        heartratespinBox->setToolTip(QApplication::translate("myMainWindowClass", "Defines the heart rate. Ranges from 30 bpm to 200 bpm.", 0));
#endif // QT_NO_TOOLTIP
        heartratespinBox->setSuffix(QApplication::translate("myMainWindowClass", " bpm", "bpm = beats per minute"));
        PresetNameLabel->setText(QApplication::translate("myMainWindowClass", "  Preset Name", 0));
        heartratelabel->setText(QApplication::translate("myMainWindowClass", " Heart Rate      ", 0));
#ifndef QT_NO_TOOLTIP
        pwaveamplitude->setToolTip(QApplication::translate("myMainWindowClass", "Defines the amplitude of the P wave. Ranges from 0.05 mV to 0.40 mV. Inactive when AF is checked.", 0));
#endif // QT_NO_TOOLTIP
        pwaveamplitude->setSuffix(QApplication::translate("myMainWindowClass", " mV", "milivolts"));
        twavelabel->setText(QApplication::translate("myMainWindowClass", "T Wave", "Do not translate T"));
        swavelabel->setText(QApplication::translate("myMainWindowClass", "S Wave", "Do not translate T"));
        ShowTitle->setText(QApplication::translate("myMainWindowClass", "Show", 0));
        AmpLabel->setText(QApplication::translate("myMainWindowClass", "Amplitude                                        ", 0));
        label->setText(QString());
        swaveshow->setText(QString());
        DurationLabel->setText(QApplication::translate("myMainWindowClass", "Duration                               ", 0));
        pwavelabel->setText(QApplication::translate("myMainWindowClass", "P Wave", "Do not translate P"));
        twaveshow->setText(QString());
#ifndef QT_NO_TOOLTIP
        twaveamplitude->setToolTip(QApplication::translate("myMainWindowClass", "Defines the amplitude of the T wave. Ranges from 0.10 mV to 0.50 mV. ", 0));
#endif // QT_NO_TOOLTIP
        twaveamplitude->setSuffix(QApplication::translate("myMainWindowClass", " mV", "milivolts"));
        qrslabel->setText(QApplication::translate("myMainWindowClass", "QRS Wave", "Do not translate QRS"));
#ifndef QT_NO_TOOLTIP
        twaveduration->setToolTip(QApplication::translate("myMainWindowClass", "Defines the duration of the T wave. Ranges from 0.10 s to 0.40 s", 0));
#endif // QT_NO_TOOLTIP
        twaveduration->setSuffix(QApplication::translate("myMainWindowClass", " s", "seconds"));
#ifndef QT_NO_TOOLTIP
        pwaveduration->setToolTip(QApplication::translate("myMainWindowClass", "Defines the duration of the P wave. Ranges from 0.04 s to 0.14 s. Inactive when AF is checked", 0));
#endif // QT_NO_TOOLTIP
        pwaveduration->setSuffix(QApplication::translate("myMainWindowClass", " s", "seconds"));
#ifndef QT_NO_TOOLTIP
        qrsamplitude->setToolTip(QApplication::translate("myMainWindowClass", "Defines the amplitude of the QRS complex. Can range from 0.50 mV to 2.00 mV. ", 0));
#endif // QT_NO_TOOLTIP
        qrsamplitude->setSuffix(QApplication::translate("myMainWindowClass", " mV", "milivolts"));
        qrswaveshow->setText(QString());
#ifndef QT_NO_TOOLTIP
        stduration->setToolTip(QApplication::translate("myMainWindowClass", "Defines the duration of the ST interval. Ranges from 0.08 s to 0.30 s. Inactive when AF is checked.", "PR Interval (do not translate PR)"));
#endif // QT_NO_TOOLTIP
        stduration->setSuffix(QApplication::translate("myMainWindowClass", " s", "seconds"));
        label_3->setText(QApplication::translate("myMainWindowClass", "Sign                             ", 0));
        qrspositiveness->clear();
        qrspositiveness->insertItems(0, QStringList()
         << QApplication::translate("myMainWindowClass", "Normal", 0)
         << QApplication::translate("myMainWindowClass", "RBBB", 0)
         << QApplication::translate("myMainWindowClass", "LBBB", 0)
        );
#ifndef QT_NO_TOOLTIP
        qrspositiveness->setToolTip(QApplication::translate("myMainWindowClass", "Defines the morphology of the QRS complex. Can be set as normal intarventricular conduction, intraventricular conduction disturbance with RBBB or as intraventricular conduction disturbance with LBBB. ", "Tooltip"));
#endif // QT_NO_TOOLTIP
        NameLabel->setText(QApplication::translate("myMainWindowClass", " Name                                                 ", 0));
        pwaveshow->setText(QString());
        twavepositiveness->clear();
        twavepositiveness->insertItems(0, QStringList()
         << QApplication::translate("myMainWindowClass", "Positive", 0)
         << QApplication::translate("myMainWindowClass", "Negative", 0)
        );
#ifndef QT_NO_TOOLTIP
        twavepositiveness->setToolTip(QApplication::translate("myMainWindowClass", "Defines the orientation of the T wave. Can be set as positive or negative", "List box can be Positive or Negative T Wave value"));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        qrsduration->setToolTip(QApplication::translate("myMainWindowClass", "Defines the duration of the QRS complex. Can range from 0.08 s to 0.16 s. ", 0));
#endif // QT_NO_TOOLTIP
        qrsduration->setSuffix(QApplication::translate("myMainWindowClass", " s", "seconds"));
        prlabel->setText(QApplication::translate("myMainWindowClass", "             PR Interval", "Do not translate"));
#ifndef QT_NO_TOOLTIP
        swaveduration->setToolTip(QApplication::translate("myMainWindowClass", "Defines the duration of the S wave. Ranges from 0.10 s to 0.40 s", 0));
#endif // QT_NO_TOOLTIP
        swaveduration->setSuffix(QApplication::translate("myMainWindowClass", " s", "seconds"));
        stlabel->setText(QApplication::translate("myMainWindowClass", "ST Interval", "Do not translate"));
#ifndef QT_NO_TOOLTIP
        prduration->setToolTip(QApplication::translate("myMainWindowClass", "Defines the duration of the PR interval. Ranges from 0.08 s to 0.30 s. Inactive when AF is checked.", "PR Interval (do not translate PR)"));
#endif // QT_NO_TOOLTIP
        prduration->setSuffix(QApplication::translate("myMainWindowClass", " s", "seconds"));
        pwavepositiveness->clear();
        pwavepositiveness->insertItems(0, QStringList()
         << QApplication::translate("myMainWindowClass", "Positive", 0)
         << QApplication::translate("myMainWindowClass", "Negative", 0)
        );
#ifndef QT_NO_TOOLTIP
        pwavepositiveness->setToolTip(QApplication::translate("myMainWindowClass", "Defines the orientation of the P wave. Can be set as positive or negative. Inactive when AF is checked.", "Tooltip"));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        swaveamplitude->setToolTip(QApplication::translate("myMainWindowClass", "Defines the amplitude of the S wave. Ranges from 0.10 mV to 0.50 mV. ", 0));
#endif // QT_NO_TOOLTIP
        swaveamplitude->setSuffix(QApplication::translate("myMainWindowClass", " mV", "milivolts"));
        PrematureBeatsLabel->setText(QApplication::translate("myMainWindowClass", "Premature beats", 0));
#ifndef QT_NO_TOOLTIP
        numberofsve->setToolTip(QApplication::translate("myMainWindowClass", "Defines the number of premature beats. Ranges from 1 to 99.", "Tooltip"));
#endif // QT_NO_TOOLTIP
        numberofsve->setPrefix(QString());
#ifndef QT_NO_TOOLTIP
        couplingofsve->setToolTip(QApplication::translate("myMainWindowClass", "Defines the coupling of premature beats. Ranges from 100 ms to 600 ms. You can only define a fixed coupling interval.", "Tooltip"));
#endif // QT_NO_TOOLTIP
        couplingofsve->setPrefix(QString());
        couplingofsve->setSuffix(QApplication::translate("myMainWindowClass", " ms", "miliseconds"));
#ifndef QT_NO_TOOLTIP
        vecheckbox->setToolTip(QApplication::translate("myMainWindowClass", "Activates the presence of premature ventricular contractions.", "Tooltip"));
#endif // QT_NO_TOOLTIP
        vecheckbox->setText(QApplication::translate("myMainWindowClass", "PVC", "PVC = Premature Ventricular Contractions (check box)"));
#ifndef QT_NO_TOOLTIP
        svecheckbox->setToolTip(QApplication::translate("myMainWindowClass", "Activates the presence of premature atrial contractions.\n"
"Inactive when AF is checked.", "Tooltip"));
#endif // QT_NO_TOOLTIP
        svecheckbox->setText(QApplication::translate("myMainWindowClass", "PAC", "PAC = Premature Atrial Contractions (check box)"));
        morphologyofve->clear();
        morphologyofve->insertItems(0, QStringList()
         << QApplication::translate("myMainWindowClass", "RBBB", 0)
         << QApplication::translate("myMainWindowClass", "LBBB", 0)
        );
#ifndef QT_NO_TOOLTIP
        morphologyofve->setToolTip(QApplication::translate("myMainWindowClass", "Defines the morphology of the intraventricular conduction disturbance. Can be set as intraventricular conduction disturbance with RBBB or as intraventricular conduction disturbance with LBBB.", "Morphology of the intraventricular conduction disturbance"));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        couplingofve->setToolTip(QApplication::translate("myMainWindowClass", "Defines the coupling of premature beats. Ranges from 100 ms to 600 ms. You can only define a fixed coupling interval.", "Tooltip"));
#endif // QT_NO_TOOLTIP
        couplingofve->setPrefix(QString());
        couplingofve->setSuffix(QApplication::translate("myMainWindowClass", " ms", "miliseconds"));
#ifndef QT_NO_TOOLTIP
        numberofve->setToolTip(QApplication::translate("myMainWindowClass", "Defines the number of premature beats. Ranges from 1 to 99.", "Tooltip"));
#endif // QT_NO_TOOLTIP
        numberofve->setPrefix(QString());
        labelSpecialConditions->setText(QApplication::translate("myMainWindowClass", "Special conditions", 0));
#ifndef QT_NO_TOOLTIP
        atrialfibrillation->setToolTip(QApplication::translate("myMainWindowClass", "When checked this option simulates an atrial fibrillation.\n"
"When checked turns inactive PR and P wave characteristics, as well as special conditions.", "Tooltip"));
#endif // QT_NO_TOOLTIP
        atrialfibrillation->setText(QApplication::translate("myMainWindowClass", "AF", "AF means Atrial Fibrilation (in a check box)"));
        specialConditionsComboBox->clear();
        specialConditionsComboBox->insertItems(0, QStringList()
         << QApplication::translate("myMainWindowClass", "1st degree AV block", 0)
         << QApplication::translate("myMainWindowClass", "Type I 2nd degree AV block", 0)
         << QApplication::translate("myMainWindowClass", "Type II 2nd degree AV block", 0)
         << QApplication::translate("myMainWindowClass", "AV dissociation", 0)
        );
#ifndef QT_NO_TOOLTIP
        specialConditionsComboBox->setToolTip(QApplication::translate("myMainWindowClass", "This simulates advanced atrio-ventricular conduction disturbances, such as 2nd a 3rd degree atrio-ventricular blocks. \n"
"When AF is checked, this option is turned off.", "Tooltip for special conditions"));
#endif // QT_NO_TOOLTIP
        labelOtherConditions->setText(QApplication::translate("myMainWindowClass", "Other conditions", 0));
        closePreset->setText(QApplication::translate("myMainWindowClass", "Close Preset", 0));
        Delete->setText(QApplication::translate("myMainWindowClass", "Delete", 0));
        Save->setText(QApplication::translate("myMainWindowClass", "Save", 0));
        SaveAs->setText(QApplication::translate("myMainWindowClass", "Save As", 0));
    } // retranslateUi

};

namespace Ui {
    class myMainWindowClass: public Ui_myMainWindowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYMAINWINDOW_H
