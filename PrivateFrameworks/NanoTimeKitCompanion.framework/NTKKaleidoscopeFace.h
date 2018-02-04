/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKKaleidoscopeFace : NTKFace

+ (bool)_customEditMode:(long long)arg1 hasActionForOption:(id)arg2;
+ (id)_localizedNameOverrideForCustomEditMode:(long long)arg1;

- (id)_complicationSlotDescriptors;
- (id)_customEditModes;
- (id)_defaultOptionForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (unsigned long long)_indexOfOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (unsigned long long)_numberOfOptionsForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (id)_optionAtIndex:(unsigned long long)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (Class)_optionClassForCustomEditMode:(long long)arg1;
- (Class)_optionClassForCustomEditMode:(long long)arg1 resourceDirectoryExists:(bool)arg2;
- (id)_orderedComplicationSlots;
- (id)_resourceDirectorySnapshotKey;
- (void)_updateForResourceDirectoryChange:(id)arg1;

@end
