/********************************************************************************
** Form generated from reading UI file 'assessmentframe.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ASSESSMENTFRAME_H
#define UI_ASSESSMENTFRAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AssessmentFrame
{
public:
    QGroupBox *GroupBoxTime;
    QLCDNumber *lcdTimeCounter;
    QPushButton *pushButtonNext;
    QGroupBox *groupBoxControls;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButtonBegin;
    QSpacerItem *horizontalSpacer;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_3;
    QProgressBar *progressBar;
    QLabel *label;
    QGroupBox *groupBoxAnswers;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QRadioButton *radioAnswer1;
    QRadioButton *radioAnswer2;
    QRadioButton *radioAnswer3;

    void setupUi(QFrame *AssessmentFrame)
    {
        if (AssessmentFrame->objectName().isEmpty())
            AssessmentFrame->setObjectName(QStringLiteral("AssessmentFrame"));
        AssessmentFrame->resize(773, 140);
        AssessmentFrame->setWindowTitle(QStringLiteral("Frame"));
        AssessmentFrame->setFrameShape(QFrame::NoFrame);
        AssessmentFrame->setFrameShadow(QFrame::Plain);
        AssessmentFrame->setLineWidth(0);
        GroupBoxTime = new QGroupBox(AssessmentFrame);
        GroupBoxTime->setObjectName(QStringLiteral("GroupBoxTime"));
        GroupBoxTime->setGeometry(QRect(650, 0, 120, 129));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(GroupBoxTime->sizePolicy().hasHeightForWidth());
        GroupBoxTime->setSizePolicy(sizePolicy);
        GroupBoxTime->setMinimumSize(QSize(120, 0));
        QFont font;
        font.setPointSize(8);
        font.setBold(true);
        font.setWeight(75);
        GroupBoxTime->setFont(font);
        lcdTimeCounter = new QLCDNumber(GroupBoxTime);
        lcdTimeCounter->setObjectName(QStringLiteral("lcdTimeCounter"));
        lcdTimeCounter->setGeometry(QRect(30, 40, 61, 31));
        QFont font1;
        font1.setBold(false);
        font1.setWeight(50);
        lcdTimeCounter->setFont(font1);
        lcdTimeCounter->setFrameShape(QFrame::Panel);
        lcdTimeCounter->setFrameShadow(QFrame::Sunken);
        lcdTimeCounter->setSegmentStyle(QLCDNumber::Flat);
        pushButtonNext = new QPushButton(GroupBoxTime);
        pushButtonNext->setObjectName(QStringLiteral("pushButtonNext"));
        pushButtonNext->setGeometry(QRect(30, 80, 61, 31));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButtonNext->sizePolicy().hasHeightForWidth());
        pushButtonNext->setSizePolicy(sizePolicy1);
        pushButtonNext->setFont(font1);
        groupBoxControls = new QGroupBox(AssessmentFrame);
        groupBoxControls->setObjectName(QStringLiteral("groupBoxControls"));
        groupBoxControls->setGeometry(QRect(0, 0, 251, 131));
        groupBoxControls->setMinimumSize(QSize(250, 0));
        groupBoxControls->setFont(font);
        layoutWidget2 = new QWidget(groupBoxControls);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(11, 32, 231, 43));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButtonBegin = new QPushButton(layoutWidget2);
        pushButtonBegin->setObjectName(QStringLiteral("pushButtonBegin"));
        sizePolicy1.setHeightForWidth(pushButtonBegin->sizePolicy().hasHeightForWidth());
        pushButtonBegin->setSizePolicy(sizePolicy1);
        pushButtonBegin->setFont(font1);

        horizontalLayout_2->addWidget(pushButtonBegin);

        horizontalSpacer = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        layoutWidget3 = new QWidget(groupBoxControls);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(10, 90, 231, 26));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        progressBar = new QProgressBar(layoutWidget3);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setFont(font1);
        progressBar->setValue(24);

        horizontalLayout_3->addWidget(progressBar);

        label = new QLabel(layoutWidget3);
        label->setObjectName(QStringLiteral("label"));
        label->setFont(font1);

        horizontalLayout_3->addWidget(label);

        groupBoxAnswers = new QGroupBox(AssessmentFrame);
        groupBoxAnswers->setObjectName(QStringLiteral("groupBoxAnswers"));
        groupBoxAnswers->setGeometry(QRect(250, 0, 401, 131));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(groupBoxAnswers->sizePolicy().hasHeightForWidth());
        groupBoxAnswers->setSizePolicy(sizePolicy2);
        groupBoxAnswers->setMinimumSize(QSize(250, 0));
        groupBoxAnswers->setFont(font);
        layoutWidget = new QWidget(groupBoxAnswers);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(9, 36, 381, 81));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        radioAnswer1 = new QRadioButton(layoutWidget);
        radioAnswer1->setObjectName(QStringLiteral("radioAnswer1"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(radioAnswer1->sizePolicy().hasHeightForWidth());
        radioAnswer1->setSizePolicy(sizePolicy3);
        radioAnswer1->setFont(font1);
        radioAnswer1->setText(QStringLiteral("Answer 1"));

        verticalLayout->addWidget(radioAnswer1);

        radioAnswer2 = new QRadioButton(layoutWidget);
        radioAnswer2->setObjectName(QStringLiteral("radioAnswer2"));
        sizePolicy3.setHeightForWidth(radioAnswer2->sizePolicy().hasHeightForWidth());
        radioAnswer2->setSizePolicy(sizePolicy3);
        radioAnswer2->setFont(font1);
        radioAnswer2->setText(QStringLiteral("Answer 2"));

        verticalLayout->addWidget(radioAnswer2);

        radioAnswer3 = new QRadioButton(layoutWidget);
        radioAnswer3->setObjectName(QStringLiteral("radioAnswer3"));
        sizePolicy3.setHeightForWidth(radioAnswer3->sizePolicy().hasHeightForWidth());
        radioAnswer3->setSizePolicy(sizePolicy3);
        radioAnswer3->setFont(font1);
        radioAnswer3->setText(QStringLiteral("Answer 3"));

        verticalLayout->addWidget(radioAnswer3);


        retranslateUi(AssessmentFrame);

        QMetaObject::connectSlotsByName(AssessmentFrame);
    } // setupUi

    void retranslateUi(QFrame *AssessmentFrame)
    {
        GroupBoxTime->setTitle(QApplication::translate("AssessmentFrame", "Time", "Assessment group box"));
#ifndef QT_NO_TOOLTIP
        lcdTimeCounter->setToolTip(QApplication::translate("AssessmentFrame", "Counts the remaining time you have to accomplish the assessment", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        pushButtonNext->setToolTip(QApplication::translate("AssessmentFrame", "Go to the next question", 0));
#endif // QT_NO_TOOLTIP
        pushButtonNext->setText(QApplication::translate("AssessmentFrame", "Next", 0));
        groupBoxControls->setTitle(QApplication::translate("AssessmentFrame", "Controls", "Assessment group box"));
#ifndef QT_NO_TOOLTIP
        pushButtonBegin->setToolTip(QApplication::translate("AssessmentFrame", "Starts a new assessment. You will need to answer 10 questions.", 0));
#endif // QT_NO_TOOLTIP
        pushButtonBegin->setText(QApplication::translate("AssessmentFrame", "Begin", 0));
        label->setText(QApplication::translate("AssessmentFrame", "Complete", "Complete (percentage) in progress bar"));
        groupBoxAnswers->setTitle(QApplication::translate("AssessmentFrame", "Select answer", "Assessment group box"));
        Q_UNUSED(AssessmentFrame);
    } // retranslateUi

};

namespace Ui {
    class AssessmentFrame: public Ui_AssessmentFrame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ASSESSMENTFRAME_H
