/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUStorageManagementUtility : NSObject

+ (id)_assetsInTrash;
+ (id)_defaultVideoAssetFetchOptionsWithSortOrder:(bool)arg1 fetchLimit:(unsigned long long)arg2 minimumFileSize:(unsigned long long)arg3;
+ (id)_deleteableVideoAssets;
+ (id)_sizeForLibraryKind:(unsigned long long)arg1;
+ (void)enableCPLWithCompletionBlock:(id /* block */)arg1;
+ (void)enableOptimizedMode:(bool)arg1;
+ (void)expungeRecentlyDeletedItemsWithCompletionBlock:(id /* block */)arg1;
+ (id)fetchVideoAssetsBySizeWithSortOrder:(bool)arg1;
+ (bool)isCPLEnabled;
+ (bool)isCPLInInitialUploadingState;
+ (bool)isDeletableItemsInTrash;
+ (bool)isOptimizedModeOn;
+ (id)originalSizeInLibrary;
+ (id)purgeableSizeInLibrary;
+ (bool)shouldHideCPL;
+ (id)significantItems;
+ (id)sizeForRecentlyDeletedItems;
+ (id)stringWithSizeUnitForValue:(id)arg1;
+ (unsigned long long)totalReclaimableSizeFromPurgingVideoClips;

@end
