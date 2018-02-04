/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBWorkspaceConnectionListener : NSObject <BSXPCConnectionListenerHandler> {
    NSObject<OS_dispatch_queue> * _connectionDispatcherQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void)dealloc;
- (void)handleIncomingConnection:(id)arg1 forService:(id)arg2;
- (id)init;

@end
