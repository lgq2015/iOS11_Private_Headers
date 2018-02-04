/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
 */

@interface ATStoreAssetLink : NSObject <ATAssetLink, SSDownloadHandlerDelegate, SSDownloadManagerObserver> {
    NSMutableDictionary * _assetsByStoreID;
    NSObject<OS_dispatch_queue> * _callbackQueue;
    <ATAssetLinkDelegate> * _delegate;
    SSDownloadManager * _downloadManager;
    NSMapTable * _downloadsByAsset;
    bool  _open;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *callbackQueue;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ATAssetLinkDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isOpen, nonatomic, readonly) bool open;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_assetForDownload:(id)arg1;
- (id)_assetTypeForStoreKind:(id)arg1;
- (id)_dataClassForStoreKind:(id)arg1;
- (id)_downloadForAsset:(id)arg1 error:(id*)arg2;
- (void)_enqueueAssets:(id)arg1;
- (void)_finishAsset:(id)arg1 error:(id)arg2 retryable:(bool)arg3;
- (id)_storeKindForAssetType:(id)arg1;
- (void)_updateInstallProgress:(double)arg1 forAsset:(id)arg2;
- (id)callbackQueue;
- (bool)canEnqueueAsset:(id)arg1;
- (void)cancelAssets:(id)arg1;
- (void)close;
- (id)delegate;
- (id)downloadManager;
- (void)downloadManager:(id)arg1 downloadStatesDidChange:(id)arg2;
- (id)enqueueAssets:(id)arg1 force:(bool)arg2;
- (id)init;
- (bool)isOpen;
- (bool)linkIsReady;
- (unsigned long long)maximumBatchSize;
- (bool)open;
- (void)prioritizeAsset:(id)arg1;
- (unsigned long long)priority;
- (void)setCallbackQueue:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
