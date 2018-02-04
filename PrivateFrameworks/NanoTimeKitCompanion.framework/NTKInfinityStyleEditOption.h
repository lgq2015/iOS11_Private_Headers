/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKInfinityStyleEditOption : NTKEnumeratedEditOption

@property (nonatomic, readonly) unsigned long long style;

+ (id)_localizedNameForValue:(unsigned long long)arg1;
+ (id)_nameLocalizationKeyForValue:(unsigned long long)arg1;
+ (id)_orderedValues;
+ (id)_snapshotKeyForValue:(unsigned long long)arg1;
+ (id)optionWithStyle:(unsigned long long)arg1;

- (id)_valueToFaceBundleStringDict;
- (unsigned long long)style;
- (long long)swatchStyle;

@end
