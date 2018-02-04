/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKCharacterFace : NTKFace {
    NSMutableDictionary * _previousCharacterColors;
}

+ (id)_defaultSelectedComplicationSlot;
+ (id)_localizedNameOverrideForCustomEditMode:(long long)arg1;

- (void).cxx_destruct;
- (id)_complicationSlotDescriptors;
- (long long)_customEditModeForUniqueConfiguration;
- (id)_customEditModes;
- (id)_defaultName;
- (id)_defaultOptionForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (long long)_editModeForOldEncodingIndex:(long long)arg1;
- (id)_faceDescriptionKey;
- (unsigned long long)_indexOfOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_noteOptionChangedFrom:(id)arg1 to:(id)arg2 forCustomEditMode:(long long)arg3 slot:(id)arg4;
- (unsigned long long)_numberOfOptionsForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (id)_optionAtIndex:(unsigned long long)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (Class)_optionClassForCustomEditMode:(long long)arg1;
- (id)_orderedComplicationSlots;
- (unsigned long long)_selectedCharacter;

@end
