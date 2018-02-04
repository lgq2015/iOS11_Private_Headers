/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKDateAlignmentEditOption : NTKEnumeratedEditOption

@property (nonatomic, readonly) unsigned long long alignment;

+ (id)_nameLocalizationKeyForValue:(unsigned long long)arg1;
+ (id)_orderedValues;
+ (id)_snapshotKeyForValue:(unsigned long long)arg1;
+ (id)optionWithAlignment:(unsigned long long)arg1;

- (id)_valueToFaceBundleStringDict;
- (unsigned long long)alignment;

@end
