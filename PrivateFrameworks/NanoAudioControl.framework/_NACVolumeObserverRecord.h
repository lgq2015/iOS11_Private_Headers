/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoAudioControl.framework/NanoAudioControl
 */

@interface _NACVolumeObserverRecord : NSObject {
    float  _EUVolumeLimit;
    bool  _muted;
    MPAVRoutingController * _routingController;
    NACEventThrottler * _throttler;
    bool  _volumeControlAvailable;
    MPVolumeController * _volumeController;
    bool  _volumeWarningEnabled;
}

@property (nonatomic) float EUVolumeLimit;
@property (getter=isMuted, nonatomic) bool muted;
@property (nonatomic, retain) MPAVRoutingController *routingController;
@property (nonatomic, retain) NACEventThrottler *throttler;
@property (getter=isVolumeControlAvailable, nonatomic) bool volumeControlAvailable;
@property (nonatomic, retain) MPVolumeController *volumeController;
@property (getter=isVolumeWarningEnabled, nonatomic) bool volumeWarningEnabled;

- (void).cxx_destruct;
- (float)EUVolumeLimit;
- (bool)isMuted;
- (bool)isVolumeControlAvailable;
- (bool)isVolumeWarningEnabled;
- (id)routingController;
- (void)setEUVolumeLimit:(float)arg1;
- (void)setMuted:(bool)arg1;
- (void)setRoutingController:(id)arg1;
- (void)setThrottler:(id)arg1;
- (void)setVolumeControlAvailable:(bool)arg1;
- (void)setVolumeController:(id)arg1;
- (void)setVolumeWarningEnabled:(bool)arg1;
- (id)throttler;
- (id)volumeController;

@end
