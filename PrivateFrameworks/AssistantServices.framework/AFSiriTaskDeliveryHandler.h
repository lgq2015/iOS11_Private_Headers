/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFSiriTaskDeliveryHandler : NSObject <AFSiriTaskDelivering> {
    <AFSiriTaskServiceDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _queue;
    AFSiriTaskService * _service;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AFSiriTaskServiceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) AFSiriTaskService *service;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)delegate;
- (void)deliverSiriTask:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)queue;
- (id)service;
- (void)setDelegate:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setService:(id)arg1;

@end
