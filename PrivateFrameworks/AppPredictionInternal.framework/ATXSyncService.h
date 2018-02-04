/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface ATXSyncService : NSObject {
    SYService * _service;
    ATXSyncDelegate * _serviceDelegate;
}

@property (nonatomic, readonly) SYService *service;
@property (nonatomic, readonly) ATXSyncDelegate *serviceDelegate;

+ (id)sharedSyncService;

- (void).cxx_destruct;
- (id)_init;
- (void)attemptSync;
- (void)handleResultsSyncData:(id)arg1 completion:(id /* block */)arg2;
- (void)resumeSync;
- (void)sendData:(id)arg1 options:(struct NSDictionary { Class x1; }*)arg2 completion:(id /* block */)arg3;
- (id)service;
- (id)serviceDelegate;

@end
