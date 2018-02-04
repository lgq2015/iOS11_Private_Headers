/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
 */

@interface ATDevicePairedSyncManager : NSObject <ATMessageLinkObserver, ATSessionObserver, PSYInitialSyncStateObserverDelegate> {
    ATDeviceService * _deviceService;
    PSYInitialSyncStateObserver * _initialSyncStateObserver;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)activePairedDevicePairingId;
+ (id)devicePairingId;
+ (id)sharedPairedSyncManager;

- (void).cxx_destruct;
- (void)_attemptNanoRadioPrelaunchIfAllowed;
- (void)_cleanupSyncState;
- (void)_triggerInitialSync;
- (void)deviceBecameActive:(id)arg1;
- (void)handleDevicePairedNotification;
- (void)handleDeviceUnPairedNotification;
- (bool)hasRestriction;
- (id)init;
- (void)initialSyncStateObserver:(id)arg1 initialSyncDidCompleteForPairingIdentifier:(id)arg2;
- (void)initialSyncStateObserver:(id)arg1 syncDidCompleteForPairingIdentifier:(id)arg2;
- (void)initialSyncStateObserver:(id)arg1 syncDidResetForPairingIdentifier:(id)arg2;
- (void)start;
- (void)stop;

@end
