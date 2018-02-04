/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMGraphConfigurationInspectionCommand : CAMCaptureCommand {
    CAMCaptureGraphConfiguration * __knownGraphConfiguration;
    CAMCaptureGraphConfiguration * __resolvedGraphConfiguration;
}

@property (nonatomic, readonly) CAMCaptureGraphConfiguration *_knownGraphConfiguration;
@property (setter=_setResolvedGraphConfiguration:, nonatomic, retain) CAMCaptureGraphConfiguration *_resolvedGraphConfiguration;

- (void).cxx_destruct;
- (id)_knownGraphConfiguration;
- (id)_resolvedGraphConfiguration;
- (long long)_resolvedVideoConfigurationFromContext:(id)arg1;
- (void)_setResolvedGraphConfiguration:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)executeWithContext:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithKnownGraphConfiguration:(id)arg1;
- (id)userInfo;

@end
