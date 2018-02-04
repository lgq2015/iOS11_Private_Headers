/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AdID.framework/AdID
 */

@interface ADIDManagerService : ADSingleton <ADIDManager_XPC, NSXPCListenerDelegate> {
    NSObject<OS_dispatch_queue> * _forceReconcileQueue;
    NSXPCListener * _listener;
    NSMutableArray * _reconcileArray;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) NSXPCListener *listener;
@property (nonatomic, retain) NSMutableArray *reconcileArray;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (unsigned long long)delayForNewForceReconcileRequest;
- (void)forceReconcile:(id /* block */)arg1;
- (id)init;
- (id)listener;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)reconcileArray;
- (void)setListener:(id)arg1;
- (void)setReconcileArray:(id)arg1;

@end
