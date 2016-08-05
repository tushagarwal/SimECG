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
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
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
    QGridLayout *gridLayout_3;
    ECGplotter *ECGplot;
    QMenuBar *menuBar;
    QMenu *menu_File;
    QMenu *menu_Help;
    QMenu *menuTechinical;
    QMenu *menuCalibration;
    QMenu *menuAmplitude;
    QMenu *menuSpeed;
    QMenu *menuFilter;
    QMenu *menuDisplay;
    QMenu *menuBackground;
    QStatusBar *statusBar;
    QDockWidget *dockWindow;
    QWidget *dockWidgetContents;
    QGridLayout *gridLayout_5;
    QTabWidget *ECGoptions;
    QWidget *presetsTab;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_2;
    QListWidget *presetListWidget;
    QWidget *customSettingsTab;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout_2;
    QLabel *heartratelabel;
    QSpinBox *heartratespinBox;
    QLabel *prlabel;
    QDoubleSpinBox *prduration;
    QLabel *pwavelabel;
    QDoubleSpinBox *pwaveamplitude;
    QDoubleSpinBox *pwaveduration;
    QComboBox *pwavepositiveness;
    QLabel *qrslabel;
    QDoubleSpinBox *qrsamplitude;
    QDoubleSpinBox *qrsduration;
    QComboBox *qrspositiveness;
    QLabel *twavelabel;
    QDoubleSpinBox *twaveamplitude;
    QDoubleSpinBox *twaveduration;
    QComboBox *twavepositiveness;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer;
    QLabel *label_3;
    QGridLayout *gridLayout_4;
    QCheckBox *svecheckbox;
    QSpinBox *numberofsve;
    QDoubleSpinBox *couplingofsve;
    QCheckBox *vecheckbox;
    QSpinBox *numberofve;
    QDoubleSpinBox *couplingofve;
    QComboBox *morphologyofve;
    QVBoxLayout *verticalLayout;
    QLabel *labelSpecialConditions;
    QComboBox *specialConditionsComboBox;
    QLabel *labelOtherConditions;
    QCheckBox *atrialfibrillation;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *startRecording;
    QSpacerItem *horizontalSpacer;
    QPushButton *stopRecording;
    QSpacerItem *horizontalSpacer_3;
    QWidget *assessmentTab;

    void setupUi(QMainWindow *myMainWindowClass)
    {
        if (myMainWindowClass->objectName().isEmpty())
            myMainWindowClass->setObjectName(QStringLiteral("myMainWindowClass"));
        myMainWindowClass->resize(900, 600);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(myMainWindowClass->sizePolicy().hasHeightForWidth());
        myMainWindowClass->setSizePolicy(sizePolicy);
        myMainWindowClass->setMinimumSize(QSize(900, 600));
        myMainWindowClass->setMaximumSize(QSize(900, 600));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/simecg-logo-32x32.png"), QSize(), QIcon::Normal, QIcon::Off);
        myMainWindowClass->setWindowIcon(icon);
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
        gridLayout_3 = new QGridLayout(centralWidget);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        ECGplot = new ECGplotter(centralWidget);
        ECGplot->setObjectName(QStringLiteral("ECGplot"));
        ECGplot->setCursor(QCursor(Qt::BlankCursor));

        gridLayout_3->addWidget(ECGplot, 1, 0, 1, 1);

        myMainWindowClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(myMainWindowClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 900, 21));
        menu_File = new QMenu(menuBar);
        menu_File->setObjectName(QStringLiteral("menu_File"));
        menu_Help = new QMenu(menuBar);
        menu_Help->setObjectName(QStringLiteral("menu_Help"));
        menuTechinical = new QMenu(menuBar);
        menuTechinical->setObjectName(QStringLiteral("menuTechinical"));
        menuCalibration = new QMenu(menuTechinical);
        menuCalibration->setObjectName(QStringLiteral("menuCalibration"));
        menuAmplitude = new QMenu(menuCalibration);
        menuAmplitude->setObjectName(QStringLiteral("menuAmplitude"));
        menuSpeed = new QMenu(menuCalibration);
        menuSpeed->setObjectName(QStringLiteral("menuSpeed"));
        menuFilter = new QMenu(menuTechinical);
        menuFilter->setObjectName(QStringLiteral("menuFilter"));
        menuDisplay = new QMenu(menuTechinical);
        menuDisplay->setObjectName(QStringLiteral("menuDisplay"));
        menuBackground = new QMenu(menuTechinical);
        menuBackground->setObjectName(QStringLiteral("menuBackground"));
        myMainWindowClass->setMenuBar(menuBar);
        statusBar = new QStatusBar(myMainWindowClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        myMainWindowClass->setStatusBar(statusBar);
        dockWindow = new QDockWidget(myMainWindowClass);
        dockWindow->setObjectName(QStringLiteral("dockWindow"));
        dockWindow->setMinimumSize(QSize(900, 210));
        dockWindow->setMouseTracking(true);
        dockWindow->setFloating(false);
        dockWindow->setFeatures(QDockWidget::NoDockWidgetFeatures);
        dockWindow->setAllowedAreas(Qt::BottomDockWidgetArea|Qt::TopDockWidgetArea);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QStringLiteral("dockWidgetContents"));
        gridLayout_5 = new QGridLayout(dockWidgetContents);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        ECGoptions = new QTabWidget(dockWidgetContents);
        ECGoptions->setObjectName(QStringLiteral("ECGoptions"));
        ECGoptions->setIconSize(QSize(20, 20));
        presetsTab = new QWidget();
        presetsTab->setObjectName(QStringLiteral("presetsTab"));
        gridLayout = new QGridLayout(presetsTab);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        presetListWidget = new QListWidget(presetsTab);
        presetListWidget->setObjectName(QStringLiteral("presetListWidget"));

        horizontalLayout_2->addWidget(presetListWidget);


        gridLayout->addLayout(horizontalLayout_2, 0, 0, 1, 1);

        ECGoptions->addTab(presetsTab, QString());
        customSettingsTab = new QWidget();
        customSettingsTab->setObjectName(QStringLiteral("customSettingsTab"));
        layoutWidget = new QWidget(customSettingsTab);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(1, 0, 859, 131));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        heartratelabel = new QLabel(layoutWidget);
        heartratelabel->setObjectName(QStringLiteral("heartratelabel"));
        QFont font;
        font.setFamily(QStringLiteral("Sans Serif"));
        font.setPointSize(8);
        font.setBold(true);
        font.setWeight(75);
        heartratelabel->setFont(font);
        heartratelabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(heartratelabel, 0, 0, 1, 1);

        heartratespinBox = new QSpinBox(layoutWidget);
        heartratespinBox->setObjectName(QStringLiteral("heartratespinBox"));
        sizePolicy.setHeightForWidth(heartratespinBox->sizePolicy().hasHeightForWidth());
        heartratespinBox->setSizePolicy(sizePolicy);
        heartratespinBox->setMinimumSize(QSize(83, 23));
        heartratespinBox->setMaximumSize(QSize(83, 23));
        QFont font1;
        font1.setFamily(QStringLiteral("Sans Serif"));
        font1.setPointSize(8);
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

        prlabel = new QLabel(layoutWidget);
        prlabel->setObjectName(QStringLiteral("prlabel"));
        prlabel->setFont(font);
        prlabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(prlabel, 0, 2, 1, 1);

        prduration = new QDoubleSpinBox(layoutWidget);
        prduration->setObjectName(QStringLiteral("prduration"));
        sizePolicy.setHeightForWidth(prduration->sizePolicy().hasHeightForWidth());
        prduration->setSizePolicy(sizePolicy);
        prduration->setMinimumSize(QSize(83, 23));
        prduration->setMaximumSize(QSize(83, 23));
        prduration->setFont(font1);
        prduration->setDecimals(2);
        prduration->setMinimum(0.08);
        prduration->setMaximum(0.3);
        prduration->setSingleStep(0.01);
        prduration->setValue(0.15);

        gridLayout_2->addWidget(prduration, 0, 3, 1, 1);

        pwavelabel = new QLabel(layoutWidget);
        pwavelabel->setObjectName(QStringLiteral("pwavelabel"));
        pwavelabel->setFont(font);
        pwavelabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(pwavelabel, 1, 0, 1, 1);

        pwaveamplitude = new QDoubleSpinBox(layoutWidget);
        pwaveamplitude->setObjectName(QStringLiteral("pwaveamplitude"));
        sizePolicy.setHeightForWidth(pwaveamplitude->sizePolicy().hasHeightForWidth());
        pwaveamplitude->setSizePolicy(sizePolicy);
        pwaveamplitude->setMinimumSize(QSize(83, 23));
        pwaveamplitude->setMaximumSize(QSize(83, 23));
        pwaveamplitude->setFont(font1);
        pwaveamplitude->setDecimals(2);
        pwaveamplitude->setMinimum(0.05);
        pwaveamplitude->setMaximum(0.4);
        pwaveamplitude->setSingleStep(0.05);
        pwaveamplitude->setValue(0.2);

        gridLayout_2->addWidget(pwaveamplitude, 1, 1, 1, 1);

        pwaveduration = new QDoubleSpinBox(layoutWidget);
        pwaveduration->setObjectName(QStringLiteral("pwaveduration"));
        pwaveduration->setMinimumSize(QSize(83, 23));
        pwaveduration->setMaximumSize(QSize(83, 23));
        pwaveduration->setFont(font1);
        pwaveduration->setDecimals(2);
        pwaveduration->setMinimum(0.04);
        pwaveduration->setMaximum(0.14);
        pwaveduration->setSingleStep(0.01);
        pwaveduration->setValue(0.09);

        gridLayout_2->addWidget(pwaveduration, 1, 2, 1, 1);

        pwavepositiveness = new QComboBox(layoutWidget);
        pwavepositiveness->setObjectName(QStringLiteral("pwavepositiveness"));
        sizePolicy.setHeightForWidth(pwavepositiveness->sizePolicy().hasHeightForWidth());
        pwavepositiveness->setSizePolicy(sizePolicy);
        pwavepositiveness->setMinimumSize(QSize(83, 23));
        pwavepositiveness->setMaximumSize(QSize(83, 23));
        pwavepositiveness->setFont(font1);

        gridLayout_2->addWidget(pwavepositiveness, 1, 3, 1, 1);

        qrslabel = new QLabel(layoutWidget);
        qrslabel->setObjectName(QStringLiteral("qrslabel"));
        qrslabel->setFont(font);
        qrslabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(qrslabel, 2, 0, 1, 1);

        qrsamplitude = new QDoubleSpinBox(layoutWidget);
        qrsamplitude->setObjectName(QStringLiteral("qrsamplitude"));
        qrsamplitude->setMinimumSize(QSize(83, 23));
        qrsamplitude->setMaximumSize(QSize(83, 23));
        qrsamplitude->setFont(font1);
        qrsamplitude->setDecimals(2);
        qrsamplitude->setMinimum(0.5);
        qrsamplitude->setMaximum(2);
        qrsamplitude->setSingleStep(0.5);
        qrsamplitude->setValue(1);

        gridLayout_2->addWidget(qrsamplitude, 2, 1, 1, 1);

        qrsduration = new QDoubleSpinBox(layoutWidget);
        qrsduration->setObjectName(QStringLiteral("qrsduration"));
        sizePolicy.setHeightForWidth(qrsduration->sizePolicy().hasHeightForWidth());
        qrsduration->setSizePolicy(sizePolicy);
        qrsduration->setMinimumSize(QSize(83, 23));
        qrsduration->setMaximumSize(QSize(83, 23));
        qrsduration->setFont(font1);
        qrsduration->setDecimals(2);
        qrsduration->setMinimum(0.08);
        qrsduration->setMaximum(0.16);
        qrsduration->setSingleStep(0.01);
        qrsduration->setValue(0.1);

        gridLayout_2->addWidget(qrsduration, 2, 2, 1, 1);

        qrspositiveness = new QComboBox(layoutWidget);
        qrspositiveness->setObjectName(QStringLiteral("qrspositiveness"));
        qrspositiveness->setEnabled(false);
        sizePolicy.setHeightForWidth(qrspositiveness->sizePolicy().hasHeightForWidth());
        qrspositiveness->setSizePolicy(sizePolicy);
        qrspositiveness->setMinimumSize(QSize(83, 23));
        qrspositiveness->setMaximumSize(QSize(83, 23));
        qrspositiveness->setFont(font1);

        gridLayout_2->addWidget(qrspositiveness, 2, 3, 1, 1);

        twavelabel = new QLabel(layoutWidget);
        twavelabel->setObjectName(QStringLiteral("twavelabel"));
        twavelabel->setFont(font);
        twavelabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(twavelabel, 3, 0, 1, 1);

        twaveamplitude = new QDoubleSpinBox(layoutWidget);
        twaveamplitude->setObjectName(QStringLiteral("twaveamplitude"));
        sizePolicy.setHeightForWidth(twaveamplitude->sizePolicy().hasHeightForWidth());
        twaveamplitude->setSizePolicy(sizePolicy);
        twaveamplitude->setMinimumSize(QSize(83, 23));
        twaveamplitude->setMaximumSize(QSize(83, 23));
        twaveamplitude->setFont(font1);
        twaveamplitude->setDecimals(2);
        twaveamplitude->setMinimum(0.1);
        twaveamplitude->setMaximum(0.5);
        twaveamplitude->setSingleStep(0.05);
        twaveamplitude->setValue(0.1);

        gridLayout_2->addWidget(twaveamplitude, 3, 1, 1, 1);

        twaveduration = new QDoubleSpinBox(layoutWidget);
        twaveduration->setObjectName(QStringLiteral("twaveduration"));
        sizePolicy.setHeightForWidth(twaveduration->sizePolicy().hasHeightForWidth());
        twaveduration->setSizePolicy(sizePolicy);
        twaveduration->setMinimumSize(QSize(83, 23));
        twaveduration->setMaximumSize(QSize(83, 23));
        twaveduration->setFont(font1);
        twaveduration->setDecimals(2);
        twaveduration->setMinimum(0.1);
        twaveduration->setMaximum(0.4);
        twaveduration->setSingleStep(0.01);
        twaveduration->setValue(0.16);

        gridLayout_2->addWidget(twaveduration, 3, 2, 1, 1);

        twavepositiveness = new QComboBox(layoutWidget);
        twavepositiveness->setObjectName(QStringLiteral("twavepositiveness"));
        sizePolicy.setHeightForWidth(twavepositiveness->sizePolicy().hasHeightForWidth());
        twavepositiveness->setSizePolicy(sizePolicy);
        twavepositiveness->setMinimumSize(QSize(83, 23));
        twavepositiveness->setMaximumSize(QSize(83, 23));
        twavepositiveness->setFont(font1);

        gridLayout_2->addWidget(twavepositiveness, 3, 3, 1, 1);


        horizontalLayout->addLayout(gridLayout_2);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalSpacer = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(true);
        font2.setWeight(75);
        label_3->setFont(font2);

        verticalLayout_2->addWidget(label_3);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setSpacing(6);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        svecheckbox = new QCheckBox(layoutWidget);
        svecheckbox->setObjectName(QStringLiteral("svecheckbox"));
        svecheckbox->setEnabled(false);
        svecheckbox->setFont(font1);

        gridLayout_4->addWidget(svecheckbox, 0, 0, 1, 1);

        numberofsve = new QSpinBox(layoutWidget);
        numberofsve->setObjectName(QStringLiteral("numberofsve"));
        numberofsve->setEnabled(false);
        numberofsve->setFont(font1);
        numberofsve->setCursor(QCursor(Qt::ArrowCursor));
        numberofsve->setWrapping(true);
        numberofsve->setButtonSymbols(QAbstractSpinBox::PlusMinus);
        numberofsve->setMinimum(1);
        numberofsve->setMaximum(99);
        numberofsve->setValue(3);

        gridLayout_4->addWidget(numberofsve, 0, 1, 1, 1);

        couplingofsve = new QDoubleSpinBox(layoutWidget);
        couplingofsve->setObjectName(QStringLiteral("couplingofsve"));
        couplingofsve->setEnabled(false);
        couplingofsve->setFont(font1);
        couplingofsve->setDecimals(0);
        couplingofsve->setMinimum(100);
        couplingofsve->setMaximum(600);
        couplingofsve->setSingleStep(10);
        couplingofsve->setValue(200);

        gridLayout_4->addWidget(couplingofsve, 0, 2, 1, 1);

        vecheckbox = new QCheckBox(layoutWidget);
        vecheckbox->setObjectName(QStringLiteral("vecheckbox"));
        vecheckbox->setEnabled(false);
        vecheckbox->setFont(font1);
        vecheckbox->setTristate(false);

        gridLayout_4->addWidget(vecheckbox, 1, 0, 1, 1);

        numberofve = new QSpinBox(layoutWidget);
        numberofve->setObjectName(QStringLiteral("numberofve"));
        numberofve->setEnabled(false);
        numberofve->setFont(font1);
        numberofve->setCursor(QCursor(Qt::ArrowCursor));
        numberofve->setWrapping(true);
        numberofve->setButtonSymbols(QAbstractSpinBox::PlusMinus);
        numberofve->setMinimum(1);
        numberofve->setMaximum(99);
        numberofve->setValue(3);

        gridLayout_4->addWidget(numberofve, 1, 1, 1, 1);

        couplingofve = new QDoubleSpinBox(layoutWidget);
        couplingofve->setObjectName(QStringLiteral("couplingofve"));
        couplingofve->setEnabled(false);
        couplingofve->setFont(font1);
        couplingofve->setDecimals(0);
        couplingofve->setMinimum(100);
        couplingofve->setMaximum(600);
        couplingofve->setSingleStep(10);
        couplingofve->setValue(200);

        gridLayout_4->addWidget(couplingofve, 1, 2, 1, 1);

        morphologyofve = new QComboBox(layoutWidget);
        morphologyofve->setObjectName(QStringLiteral("morphologyofve"));
        morphologyofve->setEnabled(false);
        morphologyofve->setFont(font1);

        gridLayout_4->addWidget(morphologyofve, 1, 3, 1, 1);


        verticalLayout_2->addLayout(gridLayout_4);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        labelSpecialConditions = new QLabel(layoutWidget);
        labelSpecialConditions->setObjectName(QStringLiteral("labelSpecialConditions"));
        labelSpecialConditions->setMaximumSize(QSize(170, 16777215));
        labelSpecialConditions->setFont(font2);

        verticalLayout->addWidget(labelSpecialConditions);

        specialConditionsComboBox = new QComboBox(layoutWidget);
        specialConditionsComboBox->setObjectName(QStringLiteral("specialConditionsComboBox"));
        specialConditionsComboBox->setEnabled(false);
        specialConditionsComboBox->setMaximumSize(QSize(170, 16777215));
        specialConditionsComboBox->setFont(font1);

        verticalLayout->addWidget(specialConditionsComboBox);

        labelOtherConditions = new QLabel(layoutWidget);
        labelOtherConditions->setObjectName(QStringLiteral("labelOtherConditions"));
        labelOtherConditions->setMaximumSize(QSize(170, 16777215));
        labelOtherConditions->setFont(font2);

        verticalLayout->addWidget(labelOtherConditions);

        atrialfibrillation = new QCheckBox(layoutWidget);
        atrialfibrillation->setObjectName(QStringLiteral("atrialfibrillation"));
        atrialfibrillation->setEnabled(false);
        atrialfibrillation->setMaximumSize(QSize(170, 16777215));
        atrialfibrillation->setFont(font1);

        verticalLayout->addWidget(atrialfibrillation);


        horizontalLayout->addLayout(verticalLayout);

        horizontalLayoutWidget = new QWidget(customSettingsTab);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(-1, 129, 861, 81));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        startRecording = new QPushButton(horizontalLayoutWidget);
        startRecording->setObjectName(QStringLiteral("startRecording"));

        horizontalLayout_3->addWidget(startRecording);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        stopRecording = new QPushButton(horizontalLayoutWidget);
        stopRecording->setObjectName(QStringLiteral("stopRecording"));
        stopRecording->setEnabled(true);

        horizontalLayout_3->addWidget(stopRecording);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        ECGoptions->addTab(customSettingsTab, QString());
        assessmentTab = new QWidget();
        assessmentTab->setObjectName(QStringLiteral("assessmentTab"));
        ECGoptions->addTab(assessmentTab, QString());

        gridLayout_5->addWidget(ECGoptions, 0, 0, 1, 1);

        dockWindow->setWidget(dockWidgetContents);
        myMainWindowClass->addDockWidget(static_cast<Qt::DockWidgetArea>(8), dockWindow);
#ifndef QT_NO_SHORTCUT
        heartratelabel->setBuddy(heartratespinBox);
        pwavelabel->setBuddy(pwaveamplitude);
        qrslabel->setBuddy(qrsamplitude);
        twavelabel->setBuddy(twaveamplitude);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(heartratespinBox, prduration);
        QWidget::setTabOrder(prduration, pwaveamplitude);
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
        QWidget::setTabOrder(morphologyofve, specialConditionsComboBox);
        QWidget::setTabOrder(specialConditionsComboBox, atrialfibrillation);

        menuBar->addAction(menu_File->menuAction());
        menuBar->addAction(menuTechinical->menuAction());
        menuBar->addAction(menu_Help->menuAction());
        menu_File->addAction(actionLoad_Training_Settings_as_Preset);
        menu_File->addAction(actionSave_as_Preset);
        menu_File->addAction(action_Exit);
        menu_Help->addAction(action_About);
        menuTechinical->addAction(menuCalibration->menuAction());
        menuTechinical->addAction(menuFilter->menuAction());
        menuTechinical->addAction(menuDisplay->menuAction());
        menuTechinical->addAction(menuBackground->menuAction());
        menuCalibration->addAction(menuSpeed->menuAction());
        menuCalibration->addAction(menuAmplitude->menuAction());
        menuAmplitude->addAction(actionAmplitude5mm);
        menuAmplitude->addAction(actionAmplitude10mm);
        menuSpeed->addAction(actionSpeed25mm);
        menuSpeed->addAction(actionSpeed50mm);
        menuFilter->addAction(actionFilterOn);
        menuFilter->addAction(actionFilterOff);
        menuDisplay->addAction(actionBackStatic);
        menuDisplay->addAction(actionBackRolling);
        menuBackground->addAction(actionBackgroundPaper);
        menuBackground->addAction(actionBackgroundMonitor);

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

        ECGoptions->setCurrentIndex(1);
        qrspositiveness->setCurrentIndex(1);
        specialConditionsComboBox->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(myMainWindowClass);
    } // setupUi

    void retranslateUi(QMainWindow *myMainWindowClass)
    {
        myMainWindowClass->setWindowTitle(QApplication::translate("myMainWindowClass", "simECG - The OpenSource ECG simulator", "Application title name"));
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
        menu_File->setTitle(QApplication::translate("myMainWindowClass", "&File", 0));
        menu_Help->setTitle(QApplication::translate("myMainWindowClass", "&Help", 0));
        menuTechinical->setTitle(QApplication::translate("myMainWindowClass", "Pr&eferences", 0));
        menuCalibration->setTitle(QApplication::translate("myMainWindowClass", "&Calibration", 0));
        menuAmplitude->setTitle(QApplication::translate("myMainWindowClass", "&Amplitude", 0));
        menuSpeed->setTitle(QApplication::translate("myMainWindowClass", "&Speed", 0));
        menuFilter->setTitle(QApplication::translate("myMainWindowClass", "&Filters", 0));
        menuDisplay->setTitle(QApplication::translate("myMainWindowClass", "&Display", 0));
        menuBackground->setTitle(QApplication::translate("myMainWindowClass", "&Background", 0));
        ECGoptions->setTabText(ECGoptions->indexOf(presetsTab), QApplication::translate("myMainWindowClass", "Presets", 0));
        heartratelabel->setText(QApplication::translate("myMainWindowClass", "Heart Rate", 0));
#ifndef QT_NO_TOOLTIP
        heartratespinBox->setToolTip(QApplication::translate("myMainWindowClass", "Defines the heart rate. Ranges from 30 bpm to 200 bpm.", 0));
#endif // QT_NO_TOOLTIP
        heartratespinBox->setSuffix(QApplication::translate("myMainWindowClass", " bpm", "bpm = beats per minute"));
        prlabel->setText(QApplication::translate("myMainWindowClass", "PR", "Do not translate"));
#ifndef QT_NO_TOOLTIP
        prduration->setToolTip(QApplication::translate("myMainWindowClass", "Defines the duration of the PR interval. Ranges from 0.08 s to 0.30 s. Inactive when AF is checked.", "PR Interval (do not translate PR)"));
#endif // QT_NO_TOOLTIP
        prduration->setSuffix(QApplication::translate("myMainWindowClass", " s", "seconds"));
        pwavelabel->setText(QApplication::translate("myMainWindowClass", "P Wa&ve", "Do not translate P"));
#ifndef QT_NO_TOOLTIP
        pwaveamplitude->setToolTip(QApplication::translate("myMainWindowClass", "Defines the amplitude of the P wave. Ranges from 0.05 mV to 0.40 mV. Inactive when AF is checked.", 0));
#endif // QT_NO_TOOLTIP
        pwaveamplitude->setSuffix(QApplication::translate("myMainWindowClass", " mV", "milivolts"));
#ifndef QT_NO_TOOLTIP
        pwaveduration->setToolTip(QApplication::translate("myMainWindowClass", "Defines the duration of the P wave. Ranges from 0.04 s to 0.14 s. Inactive when AF is checked", 0));
#endif // QT_NO_TOOLTIP
        pwaveduration->setSuffix(QApplication::translate("myMainWindowClass", " s", "seconds"));
        pwavepositiveness->clear();
        pwavepositiveness->insertItems(0, QStringList()
         << QApplication::translate("myMainWindowClass", "Positive", 0)
         << QApplication::translate("myMainWindowClass", "Negative", 0)
        );
#ifndef QT_NO_TOOLTIP
        pwavepositiveness->setToolTip(QApplication::translate("myMainWindowClass", "Defines the orientation of the P wave. Can be set as positive or negative. Inactive when AF is checked.", "Tooltip"));
#endif // QT_NO_TOOLTIP
        qrslabel->setText(QApplication::translate("myMainWindowClass", "&QRS ", "Do not translate QRS"));
#ifndef QT_NO_TOOLTIP
        qrsamplitude->setToolTip(QApplication::translate("myMainWindowClass", "Defines the amplitude of the QRS complex. Can range from 0.50 mV to 2.00 mV. ", 0));
#endif // QT_NO_TOOLTIP
        qrsamplitude->setSuffix(QApplication::translate("myMainWindowClass", " mV", "milivolts"));
#ifndef QT_NO_TOOLTIP
        qrsduration->setToolTip(QApplication::translate("myMainWindowClass", "Defines the duration of the QRS complex. Can range from 0.08 s to 0.16 s. ", 0));
#endif // QT_NO_TOOLTIP
        qrsduration->setSuffix(QApplication::translate("myMainWindowClass", " s", "seconds"));
        qrspositiveness->clear();
        qrspositiveness->insertItems(0, QStringList()
         << QApplication::translate("myMainWindowClass", "Normal", 0)
         << QApplication::translate("myMainWindowClass", "RBBB", 0)
         << QApplication::translate("myMainWindowClass", "LBBB", 0)
        );
#ifndef QT_NO_TOOLTIP
        qrspositiveness->setToolTip(QApplication::translate("myMainWindowClass", "Defines the morphology of the QRS complex. Can be set as normal intarventricular conduction, intraventricular conduction disturbance with RBBB or as intraventricular conduction disturbance with LBBB. ", "Tooltip"));
#endif // QT_NO_TOOLTIP
        twavelabel->setText(QApplication::translate("myMainWindowClass", "T Wave", "Do not translate T"));
#ifndef QT_NO_TOOLTIP
        twaveamplitude->setToolTip(QApplication::translate("myMainWindowClass", "Defines the amplitude of the T wave. Ranges from 0.10 mV to 0.50 mV. ", 0));
#endif // QT_NO_TOOLTIP
        twaveamplitude->setSuffix(QApplication::translate("myMainWindowClass", " mV", "milivolts"));
#ifndef QT_NO_TOOLTIP
        twaveduration->setToolTip(QApplication::translate("myMainWindowClass", "Defines the duration of the T wave. Ranges from 0.10 s to 0.40 s", 0));
#endif // QT_NO_TOOLTIP
        twaveduration->setSuffix(QApplication::translate("myMainWindowClass", " s", "seconds"));
        twavepositiveness->clear();
        twavepositiveness->insertItems(0, QStringList()
         << QApplication::translate("myMainWindowClass", "Positive", 0)
         << QApplication::translate("myMainWindowClass", "Negative", 0)
        );
#ifndef QT_NO_TOOLTIP
        twavepositiveness->setToolTip(QApplication::translate("myMainWindowClass", "Defines the orientation of the T wave. Can be set as positive or negative", "List box can be Positive or Negative T Wave value"));
#endif // QT_NO_TOOLTIP
        label_3->setText(QApplication::translate("myMainWindowClass", "Premature beats", 0));
#ifndef QT_NO_TOOLTIP
        svecheckbox->setToolTip(QApplication::translate("myMainWindowClass", "Activates the presence of premature atrial contractions.\n"
"Inactive when AF is checked.", "Tooltip"));
#endif // QT_NO_TOOLTIP
        svecheckbox->setText(QApplication::translate("myMainWindowClass", "PAC", "PAC = Premature Atrial Contractions (check box)"));
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
        numberofve->setToolTip(QApplication::translate("myMainWindowClass", "Defines the number of premature beats. Ranges from 1 to 99.", "Tooltip"));
#endif // QT_NO_TOOLTIP
        numberofve->setPrefix(QString());
#ifndef QT_NO_TOOLTIP
        couplingofve->setToolTip(QApplication::translate("myMainWindowClass", "Defines the coupling of premature beats. Ranges from 100 ms to 600 ms. You can only define a fixed coupling interval.", "Tooltip"));
#endif // QT_NO_TOOLTIP
        couplingofve->setPrefix(QString());
        couplingofve->setSuffix(QApplication::translate("myMainWindowClass", " ms", "miliseconds"));
        morphologyofve->clear();
        morphologyofve->insertItems(0, QStringList()
         << QApplication::translate("myMainWindowClass", "RBBB", 0)
         << QApplication::translate("myMainWindowClass", "LBBB", 0)
        );
#ifndef QT_NO_TOOLTIP
        morphologyofve->setToolTip(QApplication::translate("myMainWindowClass", "Defines the morphology of the intraventricular conduction disturbance. Can be set as intraventricular conduction disturbance with RBBB or as intraventricular conduction disturbance with LBBB.", "Morphology of the intraventricular conduction disturbance"));
#endif // QT_NO_TOOLTIP
        labelSpecialConditions->setText(QApplication::translate("myMainWindowClass", "Special conditions", 0));
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
#ifndef QT_NO_TOOLTIP
        atrialfibrillation->setToolTip(QApplication::translate("myMainWindowClass", "When checked this option simulates an atrial fibrillation.\n"
"When checked turns inactive PR and P wave characteristics, as well as special conditions.", "Tooltip"));
#endif // QT_NO_TOOLTIP
        atrialfibrillation->setText(QApplication::translate("myMainWindowClass", "AF", "AF means Atrial Fibrilation (in a check box)"));
        startRecording->setText(QApplication::translate("myMainWindowClass", "Start Recording", 0));
        stopRecording->setText(QApplication::translate("myMainWindowClass", "Stop Recording", 0));
        ECGoptions->setTabText(ECGoptions->indexOf(customSettingsTab), QApplication::translate("myMainWindowClass", "Custom settings", 0));
        ECGoptions->setTabText(ECGoptions->indexOf(assessmentTab), QApplication::translate("myMainWindowClass", "Assessment", 0));
    } // retranslateUi

};

namespace Ui {
    class myMainWindowClass: public Ui_myMainWindowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYMAINWINDOW_H
