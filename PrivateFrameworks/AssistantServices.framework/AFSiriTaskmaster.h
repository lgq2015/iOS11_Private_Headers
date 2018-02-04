/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFSiriTaskmaster : NSObject <AFSiriRequestFailureHandling, AFSiriRequestHandling, AFSiriUsageResultHandling, NSXPCListenerDelegate> {
    <AFSiriTaskmasterDelegate> * _delegate;
    NSMapTable * _executorForRequest;
    NSObject<OS_dispatch_queue> * _queue;
    <AFSiriTaskDelivering> * _taskDeliverer;
    NSXPCListener * _usageResultListener;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AFSiriTaskmasterDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)taskmasterForMachServiceForAppWithBundleIdentifier:(id)arg1;
+ (id)taskmasterForMachServiceWithName:(id)arg1;
+ (id)taskmasterForUIApplicationWithBundleIdentifier:(id)arg1;

- (void).cxx_destruct;
- (void)_handleFailureOfRequest:(id)arg1 error:(id)arg2 atTime:(unsigned long long)arg3;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (void)handleFailureOfRequest:(id)arg1 error:(id)arg2 atTime:(unsigned long long)arg3;
- (void)handleSiriRequest:(id)arg1 deliveryHandler:(id /* block */)arg2 completionHandler:(id /* block */)arg3;
- (void)handleSiriTaskUsageResult:(id)arg1 fromRequest:(id)arg2;
- (id)initWithTaskDeliverer:(id)arg1;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)setDelegate:(id)arg1;

@end
