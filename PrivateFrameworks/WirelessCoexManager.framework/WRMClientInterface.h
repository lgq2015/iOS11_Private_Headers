/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WirelessCoexManager.framework/WirelessCoexManager
 */

@interface WRMClientInterface : NSObject {
    NSObject<OS_xpc_object> * mConnection;
    id /* block */  mNotificationBlock;
    int  mProcessId;
    NSObject<OS_dispatch_queue> * mQueue;
}

- (void)dealloc;
- (id)init;
- (void)registerClient:(int)arg1 queue:(id)arg2 notificationHandler:(id /* block */)arg3;
- (void)unregisterClient;

@end
