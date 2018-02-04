/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSDivertedDownload : SSDownload {
    ASDJob * _job;
}

@property (nonatomic, retain) ASDJob *job;

- (void).cxx_destruct;
- (id)_XPCConnection;
- (id)_newAssetWithURL:(id)arg1 assetType:(id)arg2;
- (void)_resetStatus;
- (bool)addAsset:(id)arg1 forType:(id)arg2;
- (id)assets;
- (id)assetsForType:(id)arg1;
- (id)backgroundNetworkingJobGroupName;
- (long long)bytesDownloaded;
- (long long)bytesTotal;
- (id)downloadIdentifier;
- (id)downloadPhaseIdentifier;
- (id)downloadPolicy;
- (long long)downloadSizeLimit;
- (double)estimatedSecondsRemaining;
- (id)failureError;
- (void)handleWithDownloadHandler:(id)arg1 completionBlock:(id /* block */)arg2;
- (id)initWithDownloadMetadata:(id)arg1;
- (bool)isBackgroundNetworkingUserInitiated;
- (bool)isCancelable;
- (bool)isEligibleForRestore:(id*)arg1;
- (bool)isExternal;
- (id)job;
- (id)metadata;
- (id)networkConstraints;
- (void)pause;
- (double)percentComplete;
- (long long)persistentIdentifier;
- (void)prioritizeAboveDownload:(id)arg1 completionBlock:(id /* block */)arg2;
- (bool)removeAsset:(id)arg1;
- (void)restart;
- (void)resume;
- (void)setAssets:(id)arg1;
- (void)setBackgroundNetworkingJobGroupName:(id)arg1;
- (void)setBackgroundNetworkingUserInitiated:(bool)arg1;
- (void)setDownloadHandler:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)setDownloadPolicy:(id)arg1;
- (void)setJob:(id)arg1;
- (void)setMetadata:(id)arg1;
- (void)setNetworkConstraints:(id)arg1;
- (void)setStatus:(id)arg1;
- (void)setValuesWithStoreDownloadMetadata:(id)arg1;
- (id)status;
- (id)valueForProperty:(id)arg1;

@end
