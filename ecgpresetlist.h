#ifndef ECGPRESETLIST_H
#define ECGPRESETLIST_H

#include "ecgpreset.h"

#include <QMap>
#include <QListWidget>

class ECGpresetList : public QObject
{
    Q_OBJECT
public:
    explicit ECGpresetList(QObject *parent = 0);
    void populatePresetListWidget(QListWidget *listWidget);
    int size() const;
    const ECGpreset &at(const int &);

signals:

public slots:
    int createPreset(ECGpreset *);
    int removePreset(const QString &oldPreset);

private:
    // ECG presets
    QMap<QString, ECGpreset *> presetList;

private:
    // Save all presets to permanent storage
    int savePresets();
    // load all presets from permanent storage
    int loadPresets();
};

#endif // ECGPRESETLIST_H
