/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
 */

@interface ATStoreDownloadService : NSObject {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSObject<OS_dispatch_queue> * _callbackQueue;
    NSMutableDictionary * _downloadOperations;
    NSOperationQueue * _downloadQueue;
    NSMutableSet * _observers;
}

+ (id)sharedService;

- (void).cxx_destruct;
- (void)_finishAsset:(id)arg1 withError:(id)arg2;
- (id)_newDownloadOperationForAsset:(id)arg1;
- (void)_updateProgressForAsset:(id)arg1 progress:(float)arg2;
- (void)_updateStateForAsset:(id)arg1 oldState:(long long)arg2 newState:(long long)arg3;
- (void)addDownloadObserver:(id)arg1;
- (void)cancelAssetDownload:(id)arg1;
- (void)enqueueAssetDownload:(id)arg1;
- (id)init;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)prioritizeAssetDownload:(id)arg1;
- (void)removeDownloadObserver:(id)arg1;

@end
