/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXMemoriesRelatedDiagnosticsHelper : NSObject

+ (id)_curationFullsetForMemory:(id)arg1;
+ (id)_datesAndAssetCountDictionaryForAssetCollection:(id)arg1;
+ (id)_featureVectorInfoGroupedByKeyForFeatureVector:(id)arg1;
+ (id)_sanitizedGraphDataDictionaryForArchivingDictionary:(id)arg1 memoryLocalIdentifier:(id)arg2;
+ (bool)generateSectionTitles:(out id*)arg1 andTableContent:(out id*)arg2 forIndex:(long long)arg3 sourceMemory:(id)arg4 sourceDictionary:(id)arg5;
+ (id)getSummaryFromProviderItem:(id)arg1;
+ (id)preprocessDictionary:(id)arg1 forMemoryWithLocalIdentifier:(id)arg2 algorithmsVersion:(unsigned short)arg3 inPhotoLibrary:(id)arg4;

@end
