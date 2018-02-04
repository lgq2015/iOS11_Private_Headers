/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
 */

@interface ATMusicRedownloadOperation : ATStoreDownloadOperation {
    ICMediaAssetDownloadRequest * _assetDownloadRequest;
    ICMediaRedownloadRequest * _redownloadRequest;
}

- (void).cxx_destruct;
- (long long)_assetProtectionTypeForEndpointType:(long long)arg1 fileAssetInfo:(id)arg2;
- (id)_musicAppBundleID;
- (void)_removeDRMUsingDownloadAsset:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)cancel;
- (void)execute;
- (void)finishWithError:(id)arg1;

@end
