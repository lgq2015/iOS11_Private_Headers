/* made by EzioChiu
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface _HMCameraProfile : _HMAccessoryProfile {
    _HMCameraAudioControl * _microphoneControl;
    _HMCameraSettingsControl * _settingsControl;
    _HMCameraSnapshotControl * _snapshotControlInternal;
    _HMCameraAudioControl * _speakerControl;
    _HMCameraStreamControl * _streamControlInternal;
}

@property (nonatomic, readonly) NSArray *controls;
@property (nonatomic, readonly) _HMCameraAudioControl *microphoneControl;
@property (nonatomic, readonly) _HMCameraSettingsControl *settingsControl;
@property (nonatomic, readonly) _HMCameraSnapshotControl *snapshotControlInternal;
@property (nonatomic, readonly) _HMCameraAudioControl *speakerControl;
@property (nonatomic, readonly) _HMCameraStreamControl *streamControlInternal;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_createControls:(id)arg1;
- (void)_registerNotificationHandlers;
- (void)configureWithAccessory:(id)arg1 home:(id)arg2 context:(id)arg3;
- (id)controls;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)microphoneControl;
- (id)settingsControl;
- (id)snapshotControlInternal;
- (id)speakerControl;
- (id)streamControlInternal;

@end
