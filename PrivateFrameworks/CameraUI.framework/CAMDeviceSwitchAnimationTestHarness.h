/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMDeviceSwitchAnimationTestHarness : CAMModeAndDeviceConfigurationTestHarness {
    long long  _desiredDevicePosition;
    CAMViewfinderViewController * _viewfinder;
}

+ (id)harnessWithTestName:(id)arg1 viewfinder:(id)arg2 devicePosition:(long long)arg3;

- (void).cxx_destruct;
- (void)ensureCaptureDevicePosition:(long long)arg1 mode:(long long)arg2 thenPerform:(id /* block */)arg3;
- (id)initWithTestName:(id)arg1 viewfinder:(id)arg2 devicePosition:(long long)arg3;
- (void)startTesting;

@end
