/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFAudioPowerUpdater : NSObject {
    float  _averagePower;
    <AFAudioPowerUpdaterDelegate> * _delegate;
    long long  _frequency;
    float  _peakPower;
    <AFAudioPowerProviding> * _provider;
    NSObject<OS_dispatch_queue> * _queue;
    void * _sharedMemory;
    NSObject<OS_dispatch_source> * _timer;
}

@property (nonatomic, readonly) long long frequency;
@property (nonatomic, readonly) <AFAudioPowerProviding> *provider;

- (void).cxx_destruct;
- (void)_beginUpdate;
- (id)_createNewXPCWrapper;
- (void)_createNewXPCWrapperWithCompletion:(id /* block */)arg1;
- (bool)_createSharedMemory;
- (id)_createSharedMemoryXPCObject;
- (void)_destroySharedMemory;
- (void)_endUpdate;
- (void)_getPowerWithCompletion:(id /* block */)arg1;
- (void)_invalidate;
- (void)_timerFired;
- (float)_unsafeAveragePower;
- (float)_unsafePeakPower;
- (void)_updatePowerWithAveragePower:(float)arg1 andPeakPower:(float)arg2;
- (void)_writeSharedMemoryWithAveragePower:(float)arg1 peakPower:(float)arg2;
- (void)beginUpdate;
- (void)createNewXPCWrapperWithCompletion:(id /* block */)arg1;
- (void)dealloc;
- (void)endUpdate;
- (long long)frequency;
- (void)getPowerWithCompletion:(id /* block */)arg1;
- (id)initWithProvider:(id)arg1 queue:(id)arg2 frequency:(long long)arg3 delegate:(id)arg4;
- (void)invalidate;
- (id)provider;

@end
