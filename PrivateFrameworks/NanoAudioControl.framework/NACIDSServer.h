/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoAudioControl.framework/NanoAudioControl
 */

@interface NACIDSServer : NSObject <IDSServiceDelegate, MPAVRoutingControllerDelegate, MPVolumeControllerDelegate> {
    NACEventThrottler * _hapticThrottler;
    NSObject<OS_dispatch_queue> * _idsDispatchQueue;
    IDSService * _idsService;
    bool  _isProminentHapticEnabled;
    bool  _isSystemMuted;
    NSMutableDictionary * _messageRecords;
    NSMutableDictionary * _routesObservers;
    bool  _shouldObserveHapticIntensity;
    bool  _shouldObserveProminentHapticState;
    bool  _shouldObserveSystemMutedState;
    int  _systemMuteToken;
    NSArray * _volumeAudioCategories;
    NSMutableDictionary * _volumeObservers;
    NACRunAssertion * _volumeRunAssertion;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_beginObservingVolume;
- (void)_cancelRouteObservationForCategory:(id)arg1;
- (void)_cancelVolumeObservation;
- (void)_handleBeginObservingAudioRoutes:(id)arg1;
- (void)_handleBeginObservingVolume:(id)arg1;
- (void)_handleEndObservingAudioRoutes:(id)arg1;
- (void)_handleEndObservingVolume:(id)arg1;
- (void)_handlePickAudioRoute:(id)arg1;
- (void)_handleSetHapticIntensity:(id)arg1;
- (void)_handleSetMuted:(id)arg1;
- (void)_handleSetProminentHapticEnabled:(id)arg1;
- (void)_handleSetSystemMuted:(id)arg1;
- (void)_handleSetVolume:(id)arg1;
- (void)_hapticIntensityDidChangeNotification:(id)arg1;
- (bool)_hasRequestedVolumeAtLeastOnce;
- (void)_sendCurrentHapticIntensityValue;
- (void)_sendCurrentObservingValues;
- (void)_sendEUVolumeLimit:(float)arg1 category:(id)arg2;
- (void)_sendHapticIntensity:(float)arg1;
- (void)_sendMessage:(id)arg1 type:(long long)arg2 timeout:(double)arg3 queueOne:(id)arg4 retry:(bool)arg5;
- (void)_sendProminentHapticState:(bool)arg1;
- (void)_sendSystemMutedState:(bool)arg1;
- (void)_sendVolumeControlAvailability:(bool)arg1 category:(id)arg2;
- (void)_sendVolumeValue:(float)arg1 category:(id)arg2;
- (void)_sendVolumeWarningEnabled:(bool)arg1 category:(id)arg2;
- (void)_setRequestedVolumeAtLeastOnce;
- (bool)_shouldForceVolumeWarning;
- (void)_updateProminentHapticState;
- (void)_updateSystemMutedState;
- (void)beginObservingHapticIntensity;
- (void)beginObservingProminentHapticState;
- (void)beginObservingSystemMutedState;
- (void)dealloc;
- (id)initWithVolumeAudioCategories:(id)arg1;
- (void)routingControllerAvailableRoutesDidChange:(id)arg1;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(bool)arg4 error:(id)arg5;
- (void)volumeController:(id)arg1 EUVolumeLimitDidChange:(float)arg2;
- (void)volumeController:(id)arg1 mutedStateDidChange:(bool)arg2;
- (void)volumeController:(id)arg1 volumeValueDidChange:(float)arg2;
- (void)volumeController:(id)arg1 volumeWarningStateDidChange:(long long)arg2;

@end
