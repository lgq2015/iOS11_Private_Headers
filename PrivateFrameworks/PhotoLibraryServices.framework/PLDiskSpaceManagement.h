/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLDiskSpaceManagement : NSObject

+ (unsigned long long)_performCloudSharingSpaceManagementWithBytesToPurge:(unsigned long long)arg1 shouldFreeSpace:(bool)arg2 fromPhotoLibrary:(id)arg3 keepRecentlyViewedAssets:(bool)arg4;
+ (long long)_processCloudSharedAsset:(id)arg1 shouldFreeSpace:(bool)arg2;
+ (unsigned long long)_scanAndDeleteCacheFilesInDirectory:(id)arg1 shouldFreeSpace:(bool)arg2 bytesToPurge:(unsigned long long)arg3;
+ (unsigned long long)_scanFilesInCloudSharingCacheDataDirectoryShouldFreeSpace:(bool)arg1 bytesToPurge:(unsigned long long)arg2;
+ (unsigned long long)_scanFilesInPhotoMetadataDirectoryShouldFreeSpace:(bool)arg1 bytesToPurge:(unsigned long long)arg2 skipAssets:(id)arg3;
+ (unsigned long long)_scanFilesInReimportPhotoCloudSharingDataDirectoryShouldFreeSpace:(bool)arg1 bytesToPurge:(unsigned long long)arg2;
+ (unsigned long long)performCloudSharingSpaceManagementWithBytesToPurge:(unsigned long long)arg1 shouldFreeSpace:(bool)arg2 fromPhotoLibrary:(id)arg3;
+ (unsigned long long)purgeCloudSharingAssetsIfNotRecentlyViewedFromPhotoLibrary:(id)arg1;
+ (unsigned long long)purgeExpiredOutboundSharingAssets;

@end
