#include "ecgpresetlist.h"

ECGpresetList::ECGpresetList(QObject *parent) : QObject(parent)
{
    ECGpreset *preset;

    // This will add all the application defined presets

    preset = new ECGpreset;
    preset->sinusRhythm();
    presetList.insert(preset->getName(), preset);

    preset = new ECGpreset;
    preset->sinusBradycardia();
    presetList.insert(preset->getName(), preset);

    preset = new ECGpreset;
    preset->sinusTachycardia();
    presetList.insert(preset->getName(), preset);

    preset = new ECGpreset;
    preset->firstDegreeAVBlock();
    presetList.insert(preset->getName(), preset);

    preset = new ECGpreset;
    preset->isolatedMonoVE();
    presetList.insert(preset->getName(), preset);

    preset = new ECGpreset;
    preset->sinusPause();
    presetList.insert(preset->getName(), preset);

    preset = new ECGpreset;
    preset->junctionalRhythm();
    presetList.insert(preset->getName(), preset);

    preset = new ECGpreset;
    preset->acceleratedJunctionalRhythm();
    presetList.insert(preset->getName(), preset);

    preset = new ECGpreset;
    preset->isolatedSVE();
    presetList.insert(preset->getName(), preset);

    preset = new ECGpreset;
    preset->pairedSVE();
    presetList.insert(preset->getName(), preset);

    preset = new ECGpreset;
    preset->isolatedPolyVE();
    presetList.insert(preset->getName(), preset);

    preset = new ECGpreset;
    preset->idioventricularRhythm();
    presetList.insert(preset->getName(), preset);

    preset = new ECGpreset;
    preset->acceleratedIdioventricularRhythm();
    presetList.insert(preset->getName(), preset);

    preset = new ECGpreset;
    preset->supraventricularTachychardia();
    presetList.insert(preset->getName(), preset);

    preset = new ECGpreset;
    preset->type2AVBlock();
    presetList.insert(preset->getName(), preset);

    preset = new ECGpreset;
    preset->monomorphicVT();
    presetList.insert(preset->getName(), preset);

    preset = new ECGpreset;
    preset->atrialFibrillation();
    presetList.insert(preset->getName(), preset);

    preset = new ECGpreset;
    preset->type1AVBlock();
    presetList.insert(preset->getName(), preset);

    preset = new ECGpreset;
    preset->twoOneAVBlock();
    presetList.insert(preset->getName(), preset);

    preset = new ECGpreset;
    preset->polymorphicVT();
    presetList.insert(preset->getName(), preset);

    preset = new ECGpreset;
    preset->fastAtrialFibrillation();
    presetList.insert(preset->getName(), preset);

    preset = new ECGpreset;
    preset->sinoAtrialBlock();
    presetList.insert(preset->getName(), preset);

    preset = new ECGpreset;
    preset->dissociation();
    presetList.insert(preset->getName(), preset);

    preset = new ECGpreset;
    preset->ventricularFibrillation();
    presetList.insert(preset->getName(), preset);
}

// TODO: Not implemented yet
// Creates a new preset signal
int ECGpresetList::createPreset(ECGpreset *newPreset)
{
    //TODO: Check that this new preset isn't already in the list
    Q_ASSERT(false);
    presetList.insert(newPreset->getName(), newPreset);
    return 0;
}


// TODO: Not implemented yet
// Creates a new preset signal
int ECGpresetList::removePreset(const QString &oldPreset)
{
    int retCode;

    //Make sure that this preset is removeable and not disabled
    Q_ASSERT(presetList.value(oldPreset)->getDisabled() == false);
    Q_ASSERT(presetList.value(oldPreset)->getRemoveable() == true);
    retCode = presetList.remove(oldPreset);
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
    //TODO: Save all presets to file
    Q_ASSERT(false);
    return 0;
}


// TODO: Not implemented yet
// Loads all presets from permanent storage
int ECGpresetList::loadPresets()
{
    //TODO: Read all presets from file
    Q_ASSERT(false);
    return 0;
}
