/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUFeedRecentsManager : NSObject <PLAssetChangeObserver, PLCloudFeedEntriesObserver, PLPhotoLibraryShouldReloadObserver> {
    NSOrderedSet * __cachedRecentAssets;
    NSArray * __cachedRecentPHAssets;
    long long  _count;
    <PUFeedRecentsManagerDelegate> * _delegate;
    NSMutableArray * _pendingAssetsChangeNotifications;
    NSMutableArray * _pendingFeedEntriesChangeNotifications;
    PLPhotoLibrary * _photoLibrary;
}

@property (setter=_setCachedRecentAssets:, nonatomic, copy) NSOrderedSet *_cachedRecentAssets;
@property (setter=_setCachedRecentPHAssets:, nonatomic, copy) NSArray *_cachedRecentPHAssets;
@property (setter=_setCount:, nonatomic) long long count;
@property (nonatomic) <PUFeedRecentsManagerDelegate> *delegate;
@property (setter=_setPhotoLibrary:, nonatomic, retain) PLPhotoLibrary *photoLibrary;
@property (nonatomic, readonly, copy) NSOrderedSet *recentAssets;
@property (nonatomic, readonly, copy) NSArray *recentPHAssets;

- (void).cxx_destruct;
- (id)_cachedRecentAssets;
- (id)_cachedRecentPHAssets;
- (void)_didFinishPostingNotifications:(id)arg1;
- (void)_invalidateCachedRecentAssets;
- (void)_setCachedRecentAssets:(id)arg1;
- (void)_setCachedRecentPHAssets:(id)arg1;
- (void)_setCount:(long long)arg1;
- (void)_setPhotoLibrary:(id)arg1;
- (bool)_updateCachedRecentAssets;
- (void)assetsDidChange:(id)arg1;
- (void)cloudFeedEntriesDidChange:(id)arg1;
- (long long)count;
- (void)dealloc;
- (id)delegate;
- (id)initWithPhotoLibrary:(id)arg1 count:(long long)arg2;
- (id)photoLibrary;
- (id)recentAssets;
- (id)recentPHAssets;
- (void)setDelegate:(id)arg1;
- (void)shouldReload:(id)arg1;

@end
