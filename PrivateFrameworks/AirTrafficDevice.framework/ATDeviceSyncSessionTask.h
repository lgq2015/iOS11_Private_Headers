/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
 */

@interface ATDeviceSyncSessionTask : ATSessionTask <ATMessageLinkRequestHandler> {
    NSString * _dataClass;
    NSString * _linkIdentifier;
    ATConcreteMessageLink * _messageLink;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly) NSString *dataClass;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *linkIdentifier;
@property (nonatomic, readonly) ATConcreteMessageLink *messageLink;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)dataClass;
- (id)initWithDataClass:(id)arg1 onMessageLink:(id)arg2;
- (id)linkIdentifier;
- (id)messageLink;
- (void)messageLink:(id)arg1 didReceiveRequest:(id)arg2;
- (id)queue;
- (void)sendRequest:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)updateProgressWithCount:(unsigned long long)arg1 totalItemCount:(unsigned long long)arg2;

@end
