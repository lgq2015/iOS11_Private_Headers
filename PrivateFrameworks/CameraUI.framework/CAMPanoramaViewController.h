/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMPanoramaViewController : UIViewController <CAMPanoramaChangeDelegate, CAMPanoramaViewDelegate> {
    CUCaptureController * __captureController;
    long long  __captureOrientation;
    UITapGestureRecognizer * __directionChangeGestureRecognizer;
    CMMotionManager * __motionManager;
    long long  _layoutStyle;
    bool  _painting;
}

@property (nonatomic, readonly) CUCaptureController *_captureController;
@property (setter=_setCaptureOrientation:, nonatomic) long long _captureOrientation;
@property (nonatomic, readonly) UITapGestureRecognizer *_directionChangeGestureRecognizer;
@property (setter=_setMotionManager:, nonatomic, retain) CMMotionManager *_motionManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long layoutStyle;
@property (getter=isPainting, setter=_setPainting:, nonatomic) bool painting;
@property (nonatomic, readonly) CAMPanoramaView *panoramaView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_captureController;
- (long long)_captureOrientation;
- (void)_createMotionManagerIfNecessary;
- (id)_directionChangeGestureRecognizer;
- (void)_handleDirectionChange:(id)arg1;
- (id)_motionManager;
- (void)_setCaptureOrientation:(long long)arg1;
- (void)_setMotionManager:(id)arg1;
- (void)_setPainting:(bool)arg1;
- (void)_updateWithAccelerometerData:(id)arg1 captureOrientation:(long long)arg2;
- (void)dealloc;
- (void)didChangeToCaptureOrientation:(long long)arg1;
- (void)didChangeToMode:(long long)arg1 device:(long long)arg2;
- (void)finishedProcessingPanorama;
- (id)initWithCaptureController:(id)arg1 layoutStyle:(long long)arg2;
- (id)initWithCoder:(id)arg1;
- (bool)isPainting;
- (long long)layoutStyle;
- (void)loadView;
- (void)panoramaConfigurationDidChangeWithDirection:(long long)arg1;
- (id)panoramaView;
- (void)panoramaViewDidRequestSynchronizedDirectionChange:(id)arg1 toDirection:(long long)arg2;
- (void)setLayoutStyle:(long long)arg1;
- (void)startPainting;
- (void)startProcessingPanorama;
- (void)stopPainting;
- (void)updateToContentSize:(id)arg1;
- (void)updateWithStatus:(id)arg1;

@end
