/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SiriClientFlow.framework/SiriClientFlow
 */

@interface CFCommandQueuer : NSObject {
    NSObject<OS_dispatch_queue> * _commandQueue;
}

@property (retain) NSObject<OS_dispatch_queue> *commandQueue;

- (void).cxx_destruct;
- (id)commandQueue;
- (void)dispatchBlock:(id /* block */)arg1;
- (void)dispatchCommand:(id)arg1 isOneWay:(bool)arg2 withServiceHelper:(id)arg3 reply:(id /* block */)arg4;
- (void)dispatchCommand:(id)arg1 withServiceHelper:(id)arg2 reply:(id /* block */)arg3;
- (void)dispatchOneWayCommand:(id)arg1 withServiceHelper:(id)arg2;
- (void)initQueuesWithIdentifier:(id)arg1;
- (id)initWithCommandIdentifier:(id)arg1;
- (bool)isPluginTimeoutDisabled;
- (void)setCommandQueue:(id)arg1;

@end
