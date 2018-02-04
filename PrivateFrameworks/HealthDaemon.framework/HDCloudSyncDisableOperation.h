/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCloudSyncDisableOperation : NSObject <NSProgressReporting> {
    id /* block */  _completion;
    HDCloudSyncOperationConfiguration * _configuration;
    HDCloudSyncFetchOperationResult * _fetchResult;
    NSProgress * _progress;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _queue_hasStarted;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSProgress *progress;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_finishWithSuccess:(bool)arg1 error:(id)arg2;
- (id)initWithConfiguration:(id)arg1 fetchResult:(id)arg2;
- (id)progress;
- (void)startWithCompletion:(id /* block */)arg1;

@end
