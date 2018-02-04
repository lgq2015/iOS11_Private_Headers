/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

@interface CUMobileDeviceDiscovery : NSObject {
    bool  _activateCalled;
    unsigned int  _changeFlags;
    id /* block */  _deviceChangedHandler;
    id /* block */  _deviceFoundHandler;
    id /* block */  _deviceLostHandler;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    bool  _invalidateCalled;
    id /* block */  _invalidationHandler;
    CURunLoopThread * _mdRunLoopThread;
}

@property (nonatomic) unsigned int changeFlags;
@property (nonatomic, copy) id /* block */ deviceChangedHandler;
@property (nonatomic, copy) id /* block */ deviceFoundHandler;
@property (nonatomic, copy) id /* block */ deviceLostHandler;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, copy) id /* block */ invalidationHandler;

+ (void)getDevicesWithQueue:(id)arg1 completion:(id /* block */)arg2;

- (void).cxx_destruct;
- (void)_invalidated;
- (void)_mdThreadFinalize;
- (void)_mdThreadInitialize;
- (void)activate;
- (unsigned int)changeFlags;
- (id /* block */)deviceChangedHandler;
- (id /* block */)deviceFoundHandler;
- (id /* block */)deviceLostHandler;
- (id)dispatchQueue;
- (id)init;
- (void)invalidate;
- (id /* block */)invalidationHandler;
- (void)setChangeFlags:(unsigned int)arg1;
- (void)setDeviceChangedHandler:(id /* block */)arg1;
- (void)setDeviceFoundHandler:(id /* block */)arg1;
- (void)setDeviceLostHandler:(id /* block */)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;

@end
