/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
 */

@interface ATSessionProxyListener : NSObject <ATSessionObserver, NSXPCListenerDelegate> {
    NSMutableArray * _connections;
    NSXPCListener * _listener;
    NSObject<OS_dispatch_queue> * _queue;
    ATSession * _session;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) ATSession *session;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithSession:(id)arg1;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)session;
- (void)sessionDidFinish:(id)arg1;
- (void)start;
- (void)stop;

@end
