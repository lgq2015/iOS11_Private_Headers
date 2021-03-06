/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMCameraRollTestHarness : CAMPerformanceTestHarness {
    bool  _performPreload;
    double  _settlingDelay;
    bool  _testingAnimation;
    bool  _testingWarmPresentation;
    CAMViewfinderViewController * _viewfinderViewController;
}

@property (nonatomic, readonly) bool performPreload;
@property (nonatomic, readonly) double settlingDelay;
@property (getter=isTestingAnimation, nonatomic, readonly) bool testingAnimation;
@property (nonatomic, readonly) bool testingWarmPresentation;
@property (nonatomic, readonly) CAMViewfinderViewController *viewfinderViewController;

- (void).cxx_destruct;
- (void)_dismissCameraRollImmediately;
- (void)_handlePUDisplayLinkStarted:(id)arg1;
- (void)_performPreload;
- (void)_presentCameraRollAnimated;
- (id)initWithTestName:(id)arg1 viewfinderViewController:(id)arg2 testingAnimation:(bool)arg3 testingWarmPresentation:(bool)arg4 performPreload:(bool)arg5 settlingDelay:(double)arg6;
- (bool)isTestingAnimation;
- (bool)performPreload;
- (double)settlingDelay;
- (void)startTesting;
- (void)stopTesting;
- (bool)testingWarmPresentation;
- (id)viewfinderViewController;

@end
