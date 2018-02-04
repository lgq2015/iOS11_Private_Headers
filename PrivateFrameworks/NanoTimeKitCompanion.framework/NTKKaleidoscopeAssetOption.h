/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKKaleidoscopeAssetOption : NTKEnumeratedEditOption

@property (nonatomic, readonly) unsigned long long asset;

+ (id)_nameLocalizationKeyForValue:(unsigned long long)arg1;
+ (id)_orderedValues;
+ (id)_snapshotKeyForValue:(unsigned long long)arg1;
+ (id)optionWithAsset:(unsigned long long)arg1;

- (id)_valueToFaceBundleStringDict;
- (unsigned long long)asset;
- (long long)swatchStyle;

@end
