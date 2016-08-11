/********************************************************************************
** Form generated from reading UI file 'addECGDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDECGDIALOG_H
#define UI_ADDECGDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *hboxLayout;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *okButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *cancelButton;
    QSpacerItem *horizontalSpacer_3;
    QLabel *headLabel;
    QLabel *nameLabel;
    QCheckBox *checkBox;
    QLabel *ECGlabel;
    QComboBox *ECGBox;
    QLineEdit *nameEdit;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(393, 233);
        layoutWidget = new QWidget(Dialog);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 180, 351, 33));
        hboxLayout = new QHBoxLayout(layoutWidget);
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(horizontalSpacer_2);

        okButton = new QPushButton(layoutWidget);
        okButton->setObjectName(QStringLiteral("okButton"));

        hboxLayout->addWidget(okButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(horizontalSpacer);

        cancelButton = new QPushButton(layoutWidget);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));

        hboxLayout->addWidget(cancelButton);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(horizontalSpacer_3);

        headLabel = new QLabel(Dialog);
        headLabel->setObjectName(QStringLiteral("headLabel"));
        headLabel->setGeometry(QRect(20, 20, 331, 16));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        headLabel->setFont(font);
        nameLabel = new QLabel(Dialog);
        nameLabel->setObjectName(QStringLiteral("nameLabel"));
        nameLabel->setGeometry(QRect(20, 70, 47, 13));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        nameLabel->setFont(font1);
        checkBox = new QCheckBox(Dialog);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(20, 110, 231, 17));
        checkBox->setFont(font1);
        ECGlabel = new QLabel(Dialog);
        ECGlabel->setObjectName(QStringLiteral("ECGlabel"));
        ECGlabel->setGeometry(QRect(20, 140, 81, 16));
        ECGlabel->setFont(font1);
        ECGBox = new QComboBox(Dialog);
        ECGBox->setObjectName(QStringLiteral("ECGBox"));
        ECGBox->setGeometry(QRect(100, 140, 271, 22));
        ECGBox->setInsertPolicy(QComboBox::InsertAlphabetically);
        nameEdit = new QLineEdit(Dialog);
        nameEdit->setObjectName(QStringLiteral("nameEdit"));
        nameEdit->setGeometry(QRect(100, 70, 271, 20));
        headLabel->raise();
        nameLabel->raise();
        checkBox->raise();
        ECGlabel->raise();
        ECGBox->raise();
        nameEdit->raise();
        layoutWidget->raise();

        retranslateUi(Dialog);
        QObject::connect(okButton, SIGNAL(clicked()), Dialog, SLOT(accept()));
        QObject::connect(cancelButton, SIGNAL(clicked()), Dialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Add ECG Rhythm", 0));
        okButton->setText(QApplication::translate("Dialog", "OK", 0));
        cancelButton->setText(QApplication::translate("Dialog", "Cancel", 0));
        headLabel->setText(QApplication::translate("Dialog", "Create a New ECG Rhythm", 0));
#ifndef QT_NO_TOOLTIP
        nameLabel->setToolTip(QApplication::translate("Dialog", "The Name of the new ECG Rhythm", 0));
#endif // QT_NO_TOOLTIP
        nameLabel->setText(QApplication::translate("Dialog", "Name", 0));
        checkBox->setText(QApplication::translate("Dialog", "Copy parameters?", 0));
#ifndef QT_NO_TOOLTIP
        ECGlabel->setToolTip(QApplication::translate("Dialog", "The set of predeefined rhythms", 0));
#endif // QT_NO_TOOLTIP
        ECGlabel->setText(QApplication::translate("Dialog", "ECG Rythms", 0));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDECGDIALOG_H
