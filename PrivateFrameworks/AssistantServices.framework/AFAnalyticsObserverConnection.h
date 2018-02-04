/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFAnalyticsObserverConnection : NSObject <AFAnalyticsObserver, AFInvalidating> {
    NSXPCConnection * _connection;
    id /* block */  _observation;
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_dispatch_semaphore> * _semaphore;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cleanUpConnection;
- (id)_connection;
- (void)_connectionInterrupted;
- (void)_connectionInvalidated;
- (void)dealloc;
- (oneway void)didObserveEvents:(id)arg1 completion:(id /* block */)arg2;
- (void)flushWithCompletion:(id /* block */)arg1;
- (id)initWithObservation:(id /* block */)arg1;
- (void)invalidate;
- (void)waitUntilInvalidated;

@end
