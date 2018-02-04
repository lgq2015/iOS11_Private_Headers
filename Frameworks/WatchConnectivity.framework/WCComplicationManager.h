/* made by EzioChiu
   Image: /System/Library/Frameworks/WatchConnectivity.framework/WatchConnectivity
 */

@interface WCComplicationManager : NSObject <WCPrivateXPCManagerDelegate> {
    NSObject<WCComplicationManagerDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSObject<WCComplicationManagerDelegate> *delegate;
@property (readonly) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)delegate;
- (id)delegateQueue;
- (id)init;
- (void)setDelegate:(id)arg1;
- (void)xpcManager:(id)arg1 handlePairedSyncComplicationsStartedWithCompletionHandler:(id /* block */)arg2;
- (void)xpcManager:(id)arg1 handlePingForExtensionBundleID:(id)arg2;
- (void)xpcManager:(id)arg1 isExtensionPrivileged:(id)arg2 completionHandler:(id /* block */)arg3;

@end
