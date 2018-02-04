/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMApplication : UIApplication {
    CAMPerformanceTestHarness * _currentTestHarness;
}

@property (nonatomic, retain) CAMPerformanceTestHarness *currentTestHarness;

- (void).cxx_destruct;
- (void)_configureExtendedLaunchTestIfNeeded;
- (id)_extendLaunchTest;
- (void)_registerPreviewStartBlock:(id /* block */)arg1;
- (id)currentTestHarness;
- (void)didChangeToMode:(long long)arg1 device:(long long)arg2;
- (void)didCloseViewfinderForReason:(long long)arg1;
- (void)didOpenViewfinderForReason:(long long)arg1;
- (void)prepareForDefaultImageSnapshotForScreen:(id)arg1;
- (bool)runPresentTestWithName:(id)arg1 options:(id)arg2;
- (bool)runSwitchCamerasTestWithName:(id)arg1 options:(id)arg2;
- (bool)runSwitchModesTestWithName:(id)arg1 options:(id)arg2;
- (bool)runSwitchToPortraitFrontWithTestWithName:(id)arg1 options:(id)arg2;
- (bool)runTakePictureFrontPortraitTest:(id)arg1 options:(id)arg2 prototype:(id)arg3;
- (bool)runTakePicturePortraitTest:(id)arg1 options:(id)arg2 prototype:(id)arg3;
- (bool)runTakePictureTestWithFrontCamera:(id)arg1 options:(id)arg2 prototype:(id)arg3;
- (bool)runTakePictureTestWithTestName:(id)arg1 options:(id)arg2 prototype:(id)arg3;
- (bool)runTest:(id)arg1 options:(id)arg2;
- (void)setCurrentTestHarness:(id)arg1;
- (unsigned long long)supportedInterfaceOrientationsForWindow:(id)arg1;
- (void)willCloseViewfinderForReason:(long long)arg1;
- (void)willOpenViewfinderForReason:(long long)arg1;

@end
