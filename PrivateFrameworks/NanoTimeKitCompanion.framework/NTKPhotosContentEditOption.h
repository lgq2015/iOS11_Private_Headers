/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKPhotosContentEditOption : NTKEnumeratedEditOption

@property (nonatomic, readonly) unsigned long long photosContent;

+ (id)_localizedNameForActionForValue:(unsigned long long)arg1;
+ (id)_nameLocalizationKeyForValue:(unsigned long long)arg1;
+ (id)_orderedValues;
+ (id)_snapshotKeyForValue:(unsigned long long)arg1;
+ (id)optionWithPhotosContent:(unsigned long long)arg1;

- (id)_valueToFaceBundleStringDict;
- (unsigned long long)photosContent;

@end
