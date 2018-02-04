/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMVideoRecordingCameraSelectionBehaviorCommand : CAMCaptureCommand {
    bool  __cameraSwitchingEnabled;
}

@property (getter=_isCameraSwitchingEnabled, nonatomic, readonly) bool _cameraSwitchingEnabled;

- (bool)_isCameraSwitchingEnabled;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)executeWithContext:(id)arg1;
- (id)initWithCameraSwitchingEnabled:(bool)arg1;
- (id)initWithCoder:(id)arg1;

@end
