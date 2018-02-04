/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CMKCameraSpec : NSObject

@property (nonatomic, readonly) bool shouldCreateAvalancheIndicator;
@property (nonatomic, readonly) bool shouldCreateElapsedTimeView;
@property (nonatomic, readonly) bool shouldCreateFiltersButton;
@property (nonatomic, readonly) bool shouldCreateFlashButton;
@property (nonatomic, readonly) bool shouldCreateFlipButton;
@property (nonatomic, readonly) bool shouldCreateHDRButton;
@property (nonatomic, readonly) bool shouldCreateImageWell;
@property (nonatomic, readonly) bool shouldCreateModeDial;
@property (nonatomic, readonly) bool shouldCreatePanoramaView;
@property (nonatomic, readonly) bool shouldCreateShutterButton;
@property (nonatomic, readonly) bool shouldCreateSlalomIndicator;
@property (nonatomic, readonly) bool shouldCreateStillDuringVideo;
@property (nonatomic, readonly) bool shouldCreateTimerButton;
@property (nonatomic, readonly) bool shouldCreateZoomSlider;

+ (id)specForCurrentPlatform;
+ (id)specForPad;
+ (id)specForPhone;

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })initialFrameForOrientation:(long long)arg1;
- (bool)isCameraApp;
- (int)rotationStyle;
- (bool)shouldCreateAvalancheIndicator;
- (bool)shouldCreateElapsedTimeView;
- (bool)shouldCreateFiltersButton;
- (bool)shouldCreateFlashButton;
- (bool)shouldCreateFlipButton;
- (bool)shouldCreateHDRButton;
- (bool)shouldCreateImageWell;
- (bool)shouldCreateModeDial;
- (bool)shouldCreatePanoramaView;
- (bool)shouldCreateShutterButton;
- (bool)shouldCreateSlalomIndicator;
- (bool)shouldCreateStillDuringVideo;
- (bool)shouldCreateTimerButton;
- (bool)shouldCreateZoomSlider;

@end
