/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKMicaDocumentEditOption : NTKEnumeratedEditOption

@property (nonatomic, readonly) unsigned long long documentIndex;

+ (id)_nameLocalizationKeyForValue:(unsigned long long)arg1;
+ (id)_orderedValues;
+ (id)_snapshotKeyForValue:(unsigned long long)arg1;

- (id)_valueToFaceBundleStringDict;
- (unsigned long long)documentIndex;

@end
