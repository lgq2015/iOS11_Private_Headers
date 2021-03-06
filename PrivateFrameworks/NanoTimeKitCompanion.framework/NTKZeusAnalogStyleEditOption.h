/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKZeusAnalogStyleEditOption : NTKEnumeratedEditOption

@property (nonatomic, readonly) unsigned long long style;

+ (id)_nameLocalizationKeyForValue:(unsigned long long)arg1;
+ (id)_orderedValues;
+ (id)_snapshotKeyForValue:(unsigned long long)arg1;
+ (id)optionWithStyle:(unsigned long long)arg1;

- (id)_valueToFaceBundleStringDict;
- (bool)optionExistsInOSVersion:(unsigned int)arg1;
- (unsigned long long)style;
- (long long)swatchStyle;

@end
