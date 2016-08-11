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

#ifndef DIALOG_H
#define DIALOG_H

#include <QtWidgets/QtWidgets>
#include "ecgpresetlist.h"
#include "mymainwindow.h"

namespace Ui {
    class Dialog;
}

class Dialog : public QDialog {
    Q_OBJECT
    Q_DISABLE_COPY(Dialog)
public:
    explicit Dialog(QWidget *parent = 0);
    virtual ~Dialog();
	void inline setPresetList(ECGpresetList & pre) { presets = &pre; }
	int index;
	ECGpreset * newPreset;
	Ui::Dialog *m_ui;

protected:
    //virtual void changeEvent(QEvent *e);

private:
	
	ECGpresetList * presets;
	myMainWindow * mainParent;

private slots:
	
	void checkbox(int);
	void okPressed();
	void cancelPressed();
	void nameChanged(const QString &);
	void comboChanged(const QString &);
};

#endif // DIALOG_H
