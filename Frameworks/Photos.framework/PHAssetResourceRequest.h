/* made by EzioChiu
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHAssetResourceRequest : NSOperation {
    PHInternalAssetResource * _assetResource;
    NSObject<OS_dispatch_semaphore> * _cloudResourceDownloadWaitSemaphore;
    int  _cloudResourceRequestID;
    id /* block */  _dataHandler;
    NSError * _error;
    PHAssetResourceRequestOptions * _options;
    NSObject<OS_dispatch_queue> * _queue;
    int  _requestID;
}

@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly, copy) PHAssetResourceRequestOptions *options;
@property (nonatomic, readonly) int requestID;

- (void).cxx_destruct;
- (bool)_downloadResourceForAssetWithLocalIdentifier:(id)arg1 progress:(id /* block */)arg2 error:(id*)arg3;
- (void)_onQueueSync:(id /* block */)arg1;
- (long long)_streamDataAtURL:(id)arg1 progress:(id /* block */)arg2 dataHandler:(id /* block */)arg3 error:(id*)arg4;
- (void)cancel;
- (id)error;
- (id)initWithRequestID:(int)arg1 assetResource:(id)arg2 options:(id)arg3 dataHandler:(id /* block */)arg4;
- (void)main;
- (id)options;
- (int)requestID;

@end
