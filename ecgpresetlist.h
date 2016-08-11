#ifndef ECGPRESETLIST_H
#define ECGPRESETLIST_H

#include "ecgpreset.h"

#include <QMap>
#include <QListWidget>
#include <qcombobox.h>
#include <qstandarditemmodel.h>

class ECGpresetList : public QObject
{
    Q_OBJECT
public:
    explicit ECGpresetList(QObject *parent = 0);
    void populatePresetListWidget(QListWidget *listWidget);
	void populateCustomListWidget(QListWidget *listWidget, QListWidget * delList);
	void populateAddPresetCombo(QComboBox * comboBox);
	bool contains(const QString & name);
	bool insert(ECGpreset &);
    int presetSize() const;
	int customSize() const;
    const ECGpreset &at(const int &);
	const ECGpreset &getECGpreset(const QString &);

signals:

public slots:
    int createPreset(ECGpreset &);
    int removePreset(const QString &oldPreset);

private:
    // ECG presets
    QMap<QString, ECGpreset > presetList;
	QMap<QString, ECGpreset > customList;

private:
    // Save all presets to permanent storage
    int savePresets();
    // load all presets from permanent storage
    int loadPresets();
};

#endif // ECGPRESETLIST_H
