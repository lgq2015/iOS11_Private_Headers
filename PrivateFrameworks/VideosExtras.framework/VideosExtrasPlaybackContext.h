/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideosExtras.framework/VideosExtras
 */

@interface VideosExtrasPlaybackContext : MPPlaybackContext {
    NSArray * _assetTypes;
    NSArray * _assets;
    NSMutableArray * _bookmarkTimes;
    bool  _isBackgroundContext;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly) NSArray *assets;
@property (nonatomic, readonly) bool isBackgroundContext;

+ (Class)queueFeederClass;

- (void).cxx_destruct;
- (id)assets;
- (id)descriptionComponents;
- (id)initWithMediaElements:(id)arg1 isBackgroundContent:(bool)arg2;
- (bool)isBackgroundContext;
- (long long)itemTypeForAssetAtIndex:(unsigned long long)arg1;
- (void)loadExtrasBookmarksWithCompletion:(id /* block */)arg1;
- (void)reloadWithPlaybackContext:(id)arg1 completionHandler:(id /* block */)arg2;
- (double)startTimeForAssetAtIndex:(unsigned long long)arg1;

@end
