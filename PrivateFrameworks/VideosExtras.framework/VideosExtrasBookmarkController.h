/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideosExtras.framework/VideosExtras
 */

@interface VideosExtrasBookmarkController : NSObject {
    SBCPlaybackPositionDomain * _domain;
    NSMutableDictionary * _entities;
    SBCPlaybackPositionValueService * _extrasService;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableDictionary * _updateTimeForEntities;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_loadAllBookmarksWithRemainingAssets:(id)arg1 bookmarkTimes:(id)arg2 completionBlock:(id /* block */)arg3;
- (id)_ubiquitousIdentifierForAsset:(id)arg1;
- (id)init;
- (void)pullBookmarksForAssets:(id)arg1 completionBlock:(id /* block */)arg2;
- (bool)pushBookmarkForAsset:(id)arg1 bookmarkTime:(double)arg2 playedToNominalLength:(bool)arg3;

@end
