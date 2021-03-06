/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPStoreAssetInfoPlaybackCache : NSObject {
    NSMutableArray * _accessOrderedRequests;
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSMutableDictionary * _requestToCachedResponse;
}

+ (id)sharedCache;

- (void).cxx_destruct;
- (id)_init;
- (void)addCachedResponse:(id)arg1 forRequest:(id)arg2;
- (id)cachedResponseForRequest:(id)arg1;
- (void)updateForPlaybackOfFileAsset:(id)arg1 fromResponse:(id)arg2;

@end
