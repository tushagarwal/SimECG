#ifndef ECGPRESETLIST_H
#define ECGPRESETLIST_H

#include "ecgpreset.h"

#include <QMap>

class ECGpresetList : public QObject
{
    Q_OBJECT
public:
    explicit ECGpresetList(QObject *parent = 0);

signals:

public slots:
    int createPreset(ECGpreset *);
    int removePreset(const QString &oldPreset);

private:
    // ECG memories
    QMap<QString, ECGpreset *> presetList;

private:
    int savePresets();
    int loadPresets();
};

#endif // ECGPRESETLIST_H
