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

#include "dialog.h"
#include "ui_addECGDialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    m_ui(new Ui::Dialog)
{
	newPreset = new ECGpreset();
    m_ui->setupUi(this);
	
	mainParent = (myMainWindow *)parent;
	//(myMainWindow)parent
	//(Ui::myMainWindowClass)parent->presets.populateAddPresetCombo(m_ui->ECGBox);
	//m_ui->ECGBox
	QStandardItemModel* model = new QStandardItemModel(this);
	mainParent->presets.populateAddPresetCombo(m_ui->ECGBox);
	//m_ui->ECGBox->model()->sort(0);
	
	m_ui->ECGBox->setEditable(false);
	m_ui->ECGBox->setEnabled(false);
	m_ui->ECGlabel->setEnabled(false);
	connect(m_ui->checkBox, SIGNAL(stateChanged(int)), this, SLOT(checkbox(int)) );
	connect(m_ui->nameEdit, SIGNAL(textEdited(const QString &)), this, SLOT(nameChanged(const QString &)));
	connect(m_ui->ECGBox, SIGNAL(currentTextChanged(const QString &)), this, SLOT(comboChanged(const QString &)));
	connect(m_ui->okButton, SIGNAL(pressed()), this, SLOT(okPressed()));
	connect(m_ui->cancelButton, SIGNAL(pressed()), this, SLOT(cancelPressed()));
}

Dialog::~Dialog()
{
    delete m_ui;
}

void Dialog::nameChanged( const QString & newName){
	newPreset->setName(newName);
}

void Dialog::checkbox(int selected) {
	if (selected == 2) {
		m_ui->ECGBox->setEnabled(true);
		m_ui->ECGlabel->setEnabled(true);
		QString temp = m_ui->ECGBox->currentText();
		if (mainParent->presets.contains(temp))
			newPreset->copyECGpreset(mainParent->presets.getECGpreset(temp));
		else {
			//Error preset not found
		}
	}
	else {
		m_ui->ECGBox->setEnabled(false);
		m_ui->ECGlabel->setEnabled(false);
		newPreset->resetECGpreset();
	}
}

void Dialog::comboChanged(const QString & text) {
	newPreset->copyECGpreset(mainParent->presets.getECGpreset(text));
}

void Dialog::okPressed() {
	bool ins = mainParent->presets.insert(*newPreset);
	if (ins) {
		this->setResult(QDialog::Accepted);
	}
	else {
		QMessageBox alert;
		alert.setText("ECG Name already exists! Please select different name.");
		alert.setIcon(QMessageBox::Critical);
		alert.exec();
		//alert name already exists
	}
}

void Dialog::cancelPressed() {
	this->setResult(QDialog::Rejected);
}