/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

@interface ASDCheckQueueRequest : ASDBaseClient <NSXPCListenerDelegate> {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSObject<OS_dispatch_queue> * _calloutQueue;
    NSXPCConnection * _connection;
    ASDCheckQueueRequestOptions * _options;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_makeAutomaticQueueRequestWithCompletionBlock:(id /* block */)arg1;
- (void)_makeRequestWithCompletionBlock:(id /* block */)arg1;
- (void)_sendRequestWithCompletionBlock:(id /* block */)arg1;
- (void)_setupConnection;
- (void)checkAutomaticCheckWithCompletionBlock:(id /* block */)arg1;
- (void)checkPendingCheckWithCompletionBlock:(id /* block */)arg1;
- (id)initWithOptions:(id)arg1;
- (void)sendRequestCompletionBlock:(id /* block */)arg1;

@end
