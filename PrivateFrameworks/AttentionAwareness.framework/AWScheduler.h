/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AttentionAwareness.framework/AttentionAwareness
 */

@interface AWScheduler : NSObject <AWScheduler, NSXPCListenerDelegate> {
    AWAttentionSampler * _attentionSampler;
    NSMutableArray * _clients;
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_dispatch_source> * _timer;
    AWAttentionSampler * _unitTestSampler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedScheduler;

- (void).cxx_destruct;
- (void)addClient:(id)arg1 clientConfig:(id)arg2 reply:(id /* block */)arg3;
- (void)armEvents;
- (void)getDebugPreferences:(id /* block */)arg1;
- (void)getSupportedEventsWithReply:(id /* block */)arg1;
- (void)getUnitTestSamplerWithReply:(id /* block */)arg1;
- (id)init;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)outputPowerLogWithReply:(id /* block */)arg1;
- (void)processHIDEvent:(unsigned long long)arg1 timestamp:(unsigned long long)arg2;
- (void)removeClientsForConnection:(id)arg1;
- (void)removeInvalidClients;
- (void)removeInvalidClientsWithConnection:(id)arg1;
- (void)setDebugPreference:(id)arg1 reply:(id /* block */)arg2;

@end
