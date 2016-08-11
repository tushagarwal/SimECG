#include "ecgpresetlist.h"
#include <qpushbutton.h>

ECGpresetList::ECGpresetList(QObject *parent) : QObject(parent)
{
    ECGpreset *preset;

	//Load Custom Presets from disk
    // This will add all the application defined presets

    preset = new ECGpreset;
    preset->sinusRhythm();
	preset->setRemoveable(false);
    presetList.insert(preset->getName(), *preset);

    preset = new ECGpreset;
    preset->sinusBradycardia();
	preset->setRemoveable(false);
    presetList.insert(preset->getName(), *preset);

    preset = new ECGpreset;
    preset->sinusTachycardia();
	preset->setRemoveable(false);
    presetList.insert(preset->getName(), *preset);

    preset = new ECGpreset;
    preset->firstDegreeAVBlock();
	preset->setRemoveable(false);
    presetList.insert(preset->getName(), *preset);

    preset = new ECGpreset;
    preset->isolatedMonoVE();
	preset->setRemoveable(false);
    presetList.insert(preset->getName(), *preset);

    preset = new ECGpreset;
    preset->sinusPause();
	preset->setRemoveable(false);
    presetList.insert(preset->getName(), *preset);

    preset = new ECGpreset;
    preset->junctionalRhythm();
	preset->setRemoveable(false);
    presetList.insert(preset->getName(), *preset);

    preset = new ECGpreset;
    preset->acceleratedJunctionalRhythm();
	preset->setRemoveable(false);
    presetList.insert(preset->getName(), *preset);

    preset = new ECGpreset;
    preset->isolatedSVE();
	preset->setRemoveable(false);
    presetList.insert(preset->getName(), *preset);

    preset = new ECGpreset;
    preset->pairedSVE();
	preset->setRemoveable(false);
    presetList.insert(preset->getName(), *preset);

    preset = new ECGpreset;
    preset->isolatedPolyVE();
	preset->setRemoveable(false);
    presetList.insert(preset->getName(), *preset);

    preset = new ECGpreset;
    preset->idioventricularRhythm();
	preset->setRemoveable(false);
    presetList.insert(preset->getName(), *preset);

    preset = new ECGpreset;
    preset->acceleratedIdioventricularRhythm();
	preset->setRemoveable(false);
    presetList.insert(preset->getName(), *preset);

    preset = new ECGpreset;
    preset->supraventricularTachychardia();
	preset->setRemoveable(false);
    presetList.insert(preset->getName(), *preset);

    preset = new ECGpreset;
    preset->type2AVBlock();
	preset->setRemoveable(false);
    presetList.insert(preset->getName(), *preset);

    preset = new ECGpreset;
    preset->monomorphicVT();
	preset->setRemoveable(false);
    presetList.insert(preset->getName(), *preset);

    preset = new ECGpreset;
    preset->atrialFibrillation();
	preset->setRemoveable(false);
    presetList.insert(preset->getName(), *preset);

    preset = new ECGpreset;
    preset->type1AVBlock();
	preset->setRemoveable(false);
    presetList.insert(preset->getName(), *preset);

    preset = new ECGpreset;
    preset->twoOneAVBlock();
	preset->setRemoveable(false);
    presetList.insert(preset->getName(), *preset);

    preset = new ECGpreset;
    preset->polymorphicVT();
	preset->setRemoveable(false);
    presetList.insert(preset->getName(), *preset);

    preset = new ECGpreset;
    preset->fastAtrialFibrillation();
	preset->setRemoveable(false);
    presetList.insert(preset->getName(), *preset);

    preset = new ECGpreset;
    preset->sinoAtrialBlock();
	preset->setRemoveable(false);
    presetList.insert(preset->getName(),*preset);

    preset = new ECGpreset;
    preset->dissociation();
	preset->setRemoveable(false);
    presetList.insert(preset->getName(), *preset);

    preset = new ECGpreset;
    preset->ventricularFibrillation();
	preset->setRemoveable(false);
    presetList.insert(preset->getName(), *preset);
}


// Fills a list widget with all the existing presets
void ECGpresetList::populatePresetListWidget(QListWidget *listWidget)
{
    QMapIterator<QString, ECGpreset > i(presetList);
    while (i.hasNext()) {
        i.next();
        QListWidgetItem *newItem = new QListWidgetItem(i.key(), listWidget);
        if (i.value().isDisabled()) {
            newItem->setBackground(QBrush(Qt::lightGray));
        }
		//i.value()->setRemoveable(false);
        newItem->setToolTip(i.value().getDescription());
    }
}

// Fills a list widget with all the existing presets
void ECGpresetList::populateCustomListWidget(QListWidget *listWidget, QListWidget * delList)
{
	QMapIterator<QString, ECGpreset > i(customList);
	while (i.hasNext()) {
		i.next();
		QListWidgetItem *newItem = new QListWidgetItem(i.key(), listWidget);
		if (i.value().isDisabled()) {
			newItem->setBackground(QBrush(Qt::lightGray));
		}
		QListWidgetItem *newItem2 = new QListWidgetItem(QIcon("delete.png"),"", delList);
		//listWidget->setItemWidget(newItem2, delButton);
		//i.value()->setRemoveable(false);
		newItem->setToolTip(i.value().getDescription());
	}
}

//Fills a combo box with all the existing presets
void ECGpresetList::populateAddPresetCombo(QComboBox * comboBox)
{
	QMapIterator<QString, ECGpreset > i(presetList);
	while (i.hasNext()) {
		i.next();
		comboBox->addItem(i.key());
		//comboBox->insertItem(0, i.key());
		//comboBox->appendRow(new QStandardItem(i.key()));
	}
	QMapIterator<QString, ECGpreset > j(customList);
	while (j.hasNext()) {
		j.next();
		//comboBox->insertItem(0, i.key());
		comboBox->addItem(j.key());
		//comboBox->appendRow(new QStandardItem(j.key()));
	}

}


//Inserts ECGpreset to the map, 
// Return Value: False:if it contains a preset with the same name
//				 True :if it add the preset
bool ECGpresetList::insert(ECGpreset & newPreset) {
	//save list before returning
	if (contains(newPreset.getName())) {
		return false;
	}
	else {
		newPreset.setDisabled(false);
	 customList.insert(newPreset.getName(), newPreset);	
	 //save customlist to disk
	}
	return true;
}

// Returns the number of ECG preset signals
int ECGpresetList::presetSize() const{
    return presetList.size();
}

// Returns the number of ECG preset signals
int ECGpresetList::customSize() const {
	return customList.size();
}

bool ECGpresetList::contains(const QString & name) {
	return presetList.contains(name) | customList.contains(name);
}

const ECGpreset  & ECGpresetList::getECGpreset(const QString & name) {
	if (presetList.contains(name))
		return presetList[name];
	else if (customList.contains(name))
		return customList[name];
	else
		return ECGpreset();//Should never return this
}

// Returns the name of the ECG signal in a certain index position
const ECGpreset &ECGpresetList::at(const int &position)
{
    int pos=-1;
    // Make sure the requested position is valid
    Q_ASSERT(position < presetList.size());

    QMapIterator<QString, ECGpreset > i(presetList);
    while (i.hasNext() && pos < position) {
        i.next();
        pos++;
    }
	
    return i.value();
}


// TODO: Not implemented yet
// Creates a new preset signal
int ECGpresetList::createPreset(ECGpreset& newPreset)
{
    //TODO: Check that this new preset isn't already in the list
    //Q_ASSERT(false);
    presetList.insert(newPreset.getName(), newPreset);
    return 0;
}


// TODO: Not implemented yet
// Creates a new preset signal
int ECGpresetList::removePreset(const QString &oldPreset)
{
    int retCode;

    //Make sure that this preset is removeable and not disabled
    //Q_ASSERT(presetList.value(oldPreset)->getDisabled() == false);
    //Q_ASSERT(presetList.value(oldPreset)->getRemoveable() == true);
    retCode = customList.remove(oldPreset);
    switch (retCode) {
        case 0 :
            qDebug("The preset is not in the presets list (and should be)");
            break;
        case 1 :
            return 0;
        default :
            qDebug("More than one preset was remove from the presets list. Something went wrong.");
            break;
    }
    return 1;
}


// TODO: Not implemented yet
// Saves all presets to permanent storage
int ECGpresetList::savePresets()
{
	//QString filename = "C:/Qt/Test/st.txt";
	QFile file(customFile);

	if (!file.open(QIODevice::WriteOnly))
	{
		qDebug() << "Could not open " << customFile;
		return -1;
	}

	QDataStream in(&file);
	in.setVersion(QDataStream::Qt_5_7);
	in << customList;

	file.close();
	return 0;
}


// TODO: Not implemented yet
// Loads all presets from permanent storage
int ECGpresetList::loadPresets()
{
	
    return 0;
}
