/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFSiriTaskExecution : NSObject <AFSiriRequestFailureHandling, AFSiriResponseHandling, NSXPCListenerDelegate> {
    id /* block */  _completionHandler;
    id /* block */  _deliveryHandler;
    NSObject<OS_dispatch_queue> * _queue;
    AFSiriRequest * _request;
    long long  _state;
    <AFSiriTaskDelivering> * _taskDeliverer;
    NSXPCListener * _taskResponseListener;
    AFWatchdogTimer * _taskResponseWatchdogTimer;
    NSXPCListener * _usageResultListener;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_completeWithError:(id)arg1;
- (void)_completeWithResponse:(id)arg1;
- (void)_completeWithResponse:(id)arg1 error:(id)arg2;
- (void)dealloc;
- (void)handleFailureOfRequest:(id)arg1 error:(id)arg2 atTime:(unsigned long long)arg3;
- (void)handleSiriResponse:(id)arg1 atTime:(unsigned long long)arg2;
- (id)init;
- (id)initWithRequest:(id)arg1 taskDeliverer:(id)arg2 usageResultListener:(id)arg3;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setDeliveryHandler:(id /* block */)arg1;
- (void)start;

@end
