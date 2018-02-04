/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLInMemoryResourceDownloadTask : CPLResourceTransferTask {
    CPLResource * _cloudResource;
    id /* block */  _completionHandler;
    id /* block */  _launchHandler;
    NSObject<OS_dispatch_queue> * _queue;
    <CPLEngineTransportTask> * _transportTask;
}

@property (nonatomic, retain) CPLResource *cloudResource;
@property (nonatomic, readonly) id /* block */ completionHandler;
@property (nonatomic, readonly) id /* block */ launchHandler;

+ (id)failedTaskForResource:(id)arg1 error:(id)arg2 completionHandler:(id /* block */)arg3;

- (void).cxx_destruct;
- (void)cancelTask;
- (id)cloudResource;
- (id /* block */)completionHandler;
- (void)finishWithData:(id)arg1 error:(id)arg2;
- (id)initWithLaunchHandler:(id /* block */)arg1 completionHandler:(id /* block */)arg2;
- (void)launch;
- (id /* block */)launchHandler;
- (void)launchTransportTask:(id)arg1;
- (void)setCloudResource:(id)arg1;

@end