/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoAudioControl.framework/NanoAudioControl
 */

@interface NACXPCClient : NSObject <NACXPCInterface> {
    bool  _isObservingVolume;
    NSMutableSet * _routeObservingCategories;
    NSXPCConnection * _xpcConnection;
    NSObject<OS_dispatch_queue> * _xpcConnectionQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedClient;

- (void).cxx_destruct;
- (void)EULimitForCategory:(id)arg1 result:(id /* block */)arg2;
- (void)_createConnection;
- (id)_proxy;
- (void)_resumeRouteObservingIfNecessary;
- (void)_resumeVolumeObservingIfNecessary;
- (void)audioRoutesForCategory:(id)arg1 result:(id /* block */)arg2;
- (void)beginObservingAudioRoutesForCategory:(id)arg1;
- (void)beginObservingVolume;
- (void)endObservingAudioRoutesForCategory:(id)arg1;
- (void)endObservingVolume;
- (void)hapticIntensity:(id /* block */)arg1;
- (id)init;
- (void)mutedStateForCategory:(id)arg1 result:(id /* block */)arg2;
- (void)pickAudioRouteWithIdentifier:(id)arg1 category:(id)arg2;
- (void)playAudioAndHapticPreview;
- (void)playProminentHapticPreview;
- (void)prominentHapticEnabled:(id /* block */)arg1;
- (void)setHapticIntensity:(float)arg1;
- (void)setMuted:(bool)arg1 category:(id)arg2;
- (void)setProminentHapticEnabled:(bool)arg1;
- (void)setSystemMuted:(bool)arg1;
- (void)setVolumeValue:(float)arg1 category:(id)arg2;
- (void)systemMutedState:(id /* block */)arg1;
- (void)volumeControlAvailabilityForCategory:(id)arg1 result:(id /* block */)arg2;
- (void)volumeValueForCategory:(id)arg1 result:(id /* block */)arg2;
- (void)volumeWarningForCategory:(id)arg1 result:(id /* block */)arg2;

@end
