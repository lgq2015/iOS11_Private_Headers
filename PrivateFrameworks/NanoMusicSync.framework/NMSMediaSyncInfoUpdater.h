/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
 */

@interface NMSMediaSyncInfoUpdater : NSObject <ATAssetLinkControllerObserver> {
    ATAssetLinkController * _assetLinkController;
    NMSMutableMediaSyncInfo * _currentMusicSyncInfo;
    bool  _currentMusicSyncInfoNeedsSynchronize;
    NSObject<OS_dispatch_source> * _currentMusicSyncInfoSynchronizeTimer;
    bool  _observing;
    NSOperationQueue * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedMediaSyncInfoUpdater;

- (void).cxx_destruct;
- (void)_applyUpdatesFromAsset:(id)arg1 toSyncInfo:(id)arg2;
- (void)_handleMediaLibraryDidChangeNotification:(id)arg1;
- (void)_handleMediaPinningResultsInvalidatedNotification:(id)arg1;
- (void)_handleMusicRecommendationsDidUpdateNotification:(id)arg1;
- (void)_setNeedsMusicSyncInfoUpdate;
- (void)assetLinkController:(id)arg1 didEnqueueAsset:(id)arg2;
- (void)assetLinkController:(id)arg1 didFinishAsset:(id)arg2;
- (void)assetLinkController:(id)arg1 didUpdateAsset:(id)arg2;
- (void)assetLinkController:(id)arg1 didUpdateAssetState:(id)arg2;
- (void)beginUpdatingSyncInfo;
- (void)endUpdatingSyncInfo;
- (id)init;

@end
