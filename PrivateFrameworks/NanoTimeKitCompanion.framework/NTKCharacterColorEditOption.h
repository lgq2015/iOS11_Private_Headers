/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKCharacterColorEditOption : NTKValueEditOption

@property (nonatomic, readonly) unsigned long long color;
@property (nonatomic, readonly) UIColor *colorValue;
@property (nonatomic, readonly) double desaturation;

+ (id)_localizedNameForValue:(unsigned long long)arg1;
+ (id)_snapshotKeyForValue:(unsigned long long)arg1;
+ (unsigned long long)indexOfOption:(id)arg1 forCharacter:(unsigned long long)arg2;
+ (unsigned long long)numberOfOptionsForCharacter:(unsigned long long)arg1;
+ (id)optionAtIndex:(unsigned long long)arg1 forCharacter:(unsigned long long)arg2;
+ (id)optionWithFaceColor:(unsigned long long)arg1;
+ (id)optionWithOption:(id)arg1 forCharacter:(unsigned long long)arg2;

- (id)_valueToFaceBundleStringDict;
- (unsigned long long)color;
- (id)colorValue;
- (double)desaturation;
- (long long)swatchStyle;

@end
