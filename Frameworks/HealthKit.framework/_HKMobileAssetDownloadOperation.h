/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface _HKMobileAssetDownloadOperation : NSObject {
    ASAsset * _asset;
    long long  _attemptCount;
    id /* block */  _completion;
    NSDictionary * _downloadOptions;
    NSString * _operationName;
    NSObject<OS_dispatch_queue> * _queue;
    long long  _state;
}

- (void).cxx_destruct;
- (void)_handleDownloadProgressWithState:(id)arg1 error:(id)arg2;
- (void)_queue_assetStateUpdated;
- (void)_queue_assignDownloadHandlerForAsset;
- (void)_queue_callCompletionWithSuccess:(bool)arg1 error:(id)arg2;
- (void)_queue_downloadAsset;
- (void)_queue_resumeAssetDownload;
- (void)_queue_run;
- (void)_queue_transitionToCompleted;
- (void)_queue_transitionToDownloadingAsset;
- (void)_queue_transitionToFailureWithError:(id)arg1;
- (void)_queue_transitionToInitialized;
- (void)_queue_transitionToState:(long long)arg1;
- (id)initWithAsset:(id)arg1 serialQueue:(id)arg2 downloadOptions:(id)arg3 completion:(id /* block */)arg4;
- (void)run;

@end
