/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
 */

@interface ATAssetLinkController : NSObject <ATAssetLinkDelegate> {
    NSMutableOrderedSet * _assetLinks;
    NSMutableOrderedSet * _assetQueue;
    NSMapTable * _assetsToFailedLinks;
    NSMapTable * _assetsToLinks;
    NSObject<OS_dispatch_queue> * _callbackQueue;
    unsigned long long  _lastThermalPressureLevel;
    NSHashTable * _observers;
    NSObject<OS_dispatch_queue> * _queue;
    int  _thermalNotificationToken;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_addFailedLink:(id)arg1 forAsset:(id)arg2;
- (void)_assetsDidChange;
- (bool)_canEnqueueAsset:(id)arg1;
- (bool)_canEnqueueAsset:(id)arg1 onLink:(id)arg2;
- (void)_cancelAsset:(id)arg1 withError:(id)arg2;
- (void)_finishAsset:(id)arg1 withError:(id)arg2;
- (void)_handleEnqueue:(id)arg1 onLink:(id)arg2 withPriority:(bool)arg3;
- (void)_performSelectorOnObservers:(SEL)arg1 object:(id)arg2 object:(id)arg3;
- (void)_prioritizeAsset:(id)arg1 onLinkClass:(Class)arg2;
- (void)addAssetLink:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)allAssetLinks;
- (id)allAssets;
- (bool)assetIsEnqueued:(id)arg1;
- (void)assetLink:(id)arg1 didCloseWithOutstandingAssets:(id)arg2;
- (void)assetLink:(id)arg1 didFinishAsset:(id)arg2 error:(id)arg3 retryable:(bool)arg4;
- (void)assetLink:(id)arg1 didOpenWithPendingAssets:(id)arg2;
- (void)assetLink:(id)arg1 didTransitionAssetStates:(id)arg2;
- (void)assetLink:(id)arg1 didUpdateAsset:(id)arg2 progress:(double)arg3;
- (void)assetLinkDidChange:(id)arg1;
- (void)cancelAllAssetsMatchingPredicate:(id)arg1 withError:(id)arg2;
- (void)cancelAssets:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)cancelAssets:(id)arg1 withError:(id)arg2 completion:(id /* block */)arg3;
- (void)dealloc;
- (void)dispatchBlockOnControllerQueue:(id /* block */)arg1;
- (void)enqueueAssetForStoreDownload:(long long)arg1 withCompletion:(id /* block */)arg2;
- (void)enqueueAssets:(id)arg1;
- (void)enqueueAssets:(id)arg1 progress:(id /* block */)arg2 completion:(id /* block */)arg3;
- (id)getNonEnqueuedAssets:(id)arg1;
- (id)init;
- (void)prioritizeAsset:(id)arg1;
- (void)prioritizeAssetWithStoreForLibraryIdentifier:(long long)arg1 withCompletion:(id /* block */)arg2;
- (void)removeAssetLink:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)syncClient:(id)arg1 didProcessFinishedAsset:(id)arg2;

@end
