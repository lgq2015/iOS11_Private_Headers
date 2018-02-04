/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BiometricKit.framework/BiometricKit
 */

@interface BKOperation : NSObject <BiometricKitDelegateXpcProtocol> {
    bool  _cancelPending;
    <BKOperationDelegate> * _delegate;
    BKDevice * _device;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _startPending;
    long long  _state;
    BiometricKitXPCClient * _xpcClient;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <BKOperationDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) BKDevice *device;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) long long state;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)cancel;
- (void)changeState:(long long)arg1;
- (void)dealloc;
- (id)delegate;
- (id)device;
- (id)dispatchQueue;
- (void)enrollFeedback:(id)arg1 client:(unsigned long long)arg2;
- (void)enrollResult:(id)arg1 client:(unsigned long long)arg2;
- (void)enrollUpdate:(id)arg1 client:(unsigned long long)arg2;
- (void)homeButtonPressed:(unsigned long long)arg1;
- (id)initWithDevice:(id)arg1;
- (bool)isDelegate;
- (void)matchResult:(id)arg1 details:(id)arg2 client:(unsigned long long)arg3;
- (void)operationEndsWithReason:(long long)arg1;
- (id)optionsDictionaryWithError:(id*)arg1;
- (id)queue;
- (void)setDelegate:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)startBioOperation:(bool)arg1 reply:(id /* block */)arg2;
- (void)startOperation:(bool)arg1 reply:(id /* block */)arg2;
- (bool)startWithError:(id*)arg1;
- (void)startWithReply:(id /* block */)arg1;
- (long long)state;
- (void)statusMessage:(unsigned int)arg1 client:(unsigned long long)arg2;
- (void)taskResumeStatus:(int)arg1 client:(unsigned long long)arg2;
- (void)templateUpdate:(id)arg1 details:(id)arg2 client:(unsigned long long)arg3;
- (void)touchIDButtonPressed:(bool)arg1 client:(unsigned long long)arg2;
- (id)userPresentWithError:(id*)arg1;

@end
