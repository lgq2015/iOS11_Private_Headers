/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AirPlayReceiver.framework/AirPlayReceiver
 */

@interface AirPlayControllerServer : NSObject <AirPlayControllerAsync, NSXPCListenerDelegate> {
    id /* block */  _copyPropertyBlock;
    id /* block */  _performCommandBlock;
    NSObject<OS_dispatch_queue> * _queue;
    NSString * _serviceName;
    id /* block */  _setPropertyBlock;
    NSXPCListener * _xpcListener;
}

@property (nonatomic, copy) id /* block */ copyPropertyBlock;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ performCommandBlock;
@property (nonatomic, copy) id /* block */ setPropertyBlock;
@property (readonly) Class superclass;

- (void)_connectionInvalidated:(id)arg1;
- (id /* block */)copyPropertyBlock;
- (void)dealloc;
- (id)dispatchQueue;
- (void)getProperty:(id)arg1 qualifier:(id)arg2 completion:(id /* block */)arg3;
- (void)invalidate;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)performCommand:(id)arg1 qualifier:(id)arg2 params:(id)arg3 completion:(id /* block */)arg4;
- (id /* block */)performCommandBlock;
- (void)postEvent:(id)arg1 qualifier:(id)arg2 params:(id)arg3 completion:(id /* block */)arg4;
- (void)setCopyPropertyBlock:(id /* block */)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setPerformCommandBlock:(id /* block */)arg1;
- (void)setProperty:(id)arg1 qualifier:(id)arg2 value:(id)arg3 completion:(id /* block */)arg4;
- (id /* block */)setPropertyBlock;
- (void)setSetPropertyBlock:(id /* block */)arg1;
- (void)startWithXPCName:(id)arg1;

@end
