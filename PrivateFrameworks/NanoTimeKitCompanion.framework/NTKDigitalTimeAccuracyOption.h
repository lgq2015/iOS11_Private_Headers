/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKDigitalTimeAccuracyOption : NTKEnumeratedEditOption

@property (nonatomic, readonly) unsigned long long accuracy;

+ (id)_nameLocalizationKeyForValue:(unsigned long long)arg1;
+ (id)_orderedValues;
+ (id)_snapshotKeyForValue:(unsigned long long)arg1;
+ (long long)indexForAccuracy:(unsigned long long)arg1;
+ (id)optionWithAccuracy:(unsigned long long)arg1;

- (id)_valueToFaceBundleStringDict;
- (unsigned long long)accuracy;

@end
