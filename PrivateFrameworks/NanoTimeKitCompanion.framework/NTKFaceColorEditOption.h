/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKFaceColorEditOption : NTKEnumeratedEditOption

@property (nonatomic, readonly) unsigned long long faceColor;

+ (id)__allOrderedColors;
+ (id)__orderedValues;
+ (id)_localizedNameForValue:(unsigned long long)arg1;
+ (id)_orderedValues;
+ (id)_orderedValuesRestrictedByCurrentDeviceCollection;
+ (id)_snapshotKeyForValue:(unsigned long long)arg1;
+ (id)optionWithFaceColor:(unsigned long long)arg1;

- (id)_valueToFaceBundleStringDict;
- (unsigned long long)faceColor;
- (bool)optionExistsInOSVersion:(unsigned int)arg1;
- (long long)swatchStyle;

@end
