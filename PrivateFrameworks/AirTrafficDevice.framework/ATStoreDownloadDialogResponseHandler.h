/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
 */

@interface ATStoreDownloadDialogResponseHandler : ICStoreDialogResponseHandler {
    ATAsset * _downloadAsset;
}

- (void).cxx_destruct;
- (void)handleStoreDialogResponse:(id)arg1 usingRequestContext:(id)arg2 withDialogTimeout:(double)arg3 withCompletionHandler:(id /* block */)arg4;
- (id)initWithDownloadAsset:(id)arg1;

@end
