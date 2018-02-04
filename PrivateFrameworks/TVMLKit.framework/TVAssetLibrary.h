/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface TVAssetLibrary : NSObject {
    NSString * _cachePath;
    NSMutableArray * _registeredGroups;
    NSObject<OS_dispatch_queue> * assetAccessQueue;
    NSObject<OS_dispatch_queue> * assetWriteQueue;
}

@property (nonatomic, copy) NSString *cachePath;
@property (nonatomic, retain) NSMutableArray *registeredGroups;

+ (void)_initializeAssetLibraryWithCachePath:(id)arg1 screensaverCache:(bool)arg2 purgeCacheOnLoad:(bool)arg3;
+ (void)initializeAssetLibraryWithCachePath:(id)arg1;
+ (void)initializeAssetLibraryWithCachePath:(id)arg1 purgeCacheOnLoad:(bool)arg2;
+ (void)intializeScreensaverSharedAssetLibrary;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)assetExpiryDateForKey:(id)arg1 inGroupOfType:(long long)arg2;
- (id)assetForKey:(id)arg1 inGroupOfType:(long long)arg2;
- (id)assetPathForKey:(id)arg1 inGroupOfType:(long long)arg2;
- (id)assetPathsForGroupOfType:(long long)arg1;
- (id)cachePath;
- (id)cachePathForGroupOfType:(long long)arg1;
- (id)groupWithGroupType:(long long)arg1;
- (id)initWithCachePath:(id)arg1 screensaverCache:(bool)arg2 purgeCacheOnLoad:(bool)arg3;
- (void)purgeAssetsInGroupOfType:(long long)arg1;
- (void)registerGroup:(id)arg1;
- (id)registeredGroups;
- (void)removeAssetForKey:(id)arg1 inGroupOfType:(long long)arg2;
- (void)setCachePath:(id)arg1;
- (void)setImageAsset:(id)arg1 forKey:(id)arg2 inGroupOfType:(long long)arg3 expiryDate:(id)arg4;
- (void)setImageAsset:(id)arg1 forKey:(id)arg2 inGroupOfType:(long long)arg3 expiryDate:(id)arg4 overWrite:(bool)arg5;
- (void)setImageAssetFromPath:(id)arg1 forKey:(id)arg2 inGroupOfType:(long long)arg3 expiryDate:(id)arg4;
- (void)setRegisteredGroups:(id)arg1;
- (void)unRegisterGroup:(long long)arg1;
- (void)updateAssetsInGroupOfType:(long long)arg1;

@end
