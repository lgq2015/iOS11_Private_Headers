/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKTimelapseThemeEditOption : NTKEnumeratedEditOption

@property (nonatomic, readonly) NSString *resourceBaseName;
@property (nonatomic, readonly) NSString *resourceName;
@property (nonatomic, readonly) unsigned long long timelapseTheme;

+ (id)_nameLocalizationKeyForValue:(unsigned long long)arg1;
+ (id)_orderedValues;
+ (id)_resourceBaseNameForTheme:(unsigned long long)arg1;
+ (id)_resourceNameForTheme:(unsigned long long)arg1 videoIndex:(long long)arg2;
+ (id)_snapshotKeyForValue:(unsigned long long)arg1;
+ (id)optionWithTimelapseTheme:(unsigned long long)arg1;
+ (id)optionsDescription;

- (id)_valueToFaceBundleStringDict;
- (id)resourceBaseName;
- (id)resourceName;
- (id)resourceNameWithVideoIndex:(long long)arg1;
- (long long)swatchStyle;
- (unsigned long long)timelapseTheme;

@end
