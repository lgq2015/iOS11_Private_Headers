/* made by EzioChiu
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMCameraProfile : HMAccessoryProfile {
    HMCameraAudioControl * _microphoneControl;
    HMCameraSettingsControl * _settingsControl;
    HMCameraSnapshotControl * _snapshotControl;
    HMCameraAudioControl * _speakerControl;
    HMCameraStreamControl * _streamControl;
}

@property (nonatomic, readonly) _HMCameraProfile *cameraProfile;
@property (nonatomic, readonly) HFCameraManager *hf_cameraManager;
@property (nonatomic, retain) HMCameraAudioControl *microphoneControl;
@property (nonatomic, retain) HMCameraSettingsControl *settingsControl;
@property (nonatomic, retain) HMCameraSnapshotControl *snapshotControl;
@property (nonatomic, retain) HMCameraAudioControl *speakerControl;
@property (nonatomic, retain) HMCameraStreamControl *streamControl;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

- (void).cxx_destruct;
- (bool)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (id)cameraProfile;
- (id)initWithCameraProfile:(id)arg1;
- (id)microphoneControl;
- (id)services;
- (void)setMicrophoneControl:(id)arg1;
- (void)setSettingsControl:(id)arg1;
- (void)setSnapshotControl:(id)arg1;
- (void)setSpeakerControl:(id)arg1;
- (void)setStreamControl:(id)arg1;
- (id)settingsControl;
- (id)snapshotControl;
- (id)speakerControl;
- (id)streamControl;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

- (id)hf_cameraManager;

@end
