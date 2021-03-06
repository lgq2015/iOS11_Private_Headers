/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUCameraView : UIView <UIScrollViewDelegate> {
    bool  _allowDigitalZoom;
    UIView * _backgroundView;
    double  _badgeInset;
    NSArray * _badgeInsetConstraints;
    NSLayoutYAxisAnchor * _badgeTopAnchor;
    HUCameraBadgeView * _badgeView;
    NSLayoutConstraint * _cameraAspectRatioConstraint;
    HURemoteContextHostingView * _cameraContainerView;
    UIView * _cameraDimmingView;
    UIView * _cameraOverlayView;
    UITapGestureRecognizer * _doubleTapRecognizer;
    HUCameraErrorContent * _errorContent;
    HUCameraErrorView * _errorView;
    unsigned long long  _maskedCameraCorners;
    HUCenteringScrollView * _scrollView;
    NADecayingTimer * _snapshotAgeUpdateTimer;
    NSArray * _staticConstraints;
}

@property (nonatomic) bool allowDigitalZoom;
@property (nonatomic, retain) UIView *backgroundView;
@property (getter=isBadgeHidden, nonatomic) bool badgeHidden;
@property (nonatomic) double badgeInset;
@property (nonatomic, retain) NSArray *badgeInsetConstraints;
@property (nonatomic, retain) NSLayoutYAxisAnchor *badgeTopAnchor;
@property (nonatomic, readonly) HUCameraBadgeView *badgeView;
@property (nonatomic, retain) NSLayoutConstraint *cameraAspectRatioConstraint;
@property (nonatomic, readonly) HURemoteContextHostingView *cameraContainerView;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } cameraContentFrame;
@property (nonatomic) long long cameraContentMode;
@property (nonatomic, readonly) UIView *cameraContentSnapshot;
@property (nonatomic, retain) UIView *cameraDimmingView;
@property (nonatomic, readonly) UIView *cameraOverlaySnapshot;
@property (nonatomic, readonly) UIView *cameraOverlayView;
@property (nonatomic, retain) HMCameraSource *cameraSource;
@property (nonatomic, readonly) HMCameraView *cameraView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UITapGestureRecognizer *doubleTapRecognizer;
@property (nonatomic, retain) HUCameraErrorContent *errorContent;
@property (nonatomic, retain) HUCameraErrorView *errorView;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long maskedCameraCorners;
@property (nonatomic, retain) HUCenteringScrollView *scrollView;
@property (nonatomic, retain) NADecayingTimer *snapshotAgeUpdateTimer;
@property (nonatomic, retain) NSArray *staticConstraints;
@property (readonly) Class superclass;

+ (bool)requiresConstraintBasedLayout;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_computeZoomRectForLocation:(struct CGPoint { double x1; double x2; })arg1 andScale:(double)arg2;
- (double)_continuousCornerRadius;
- (void)_createTapRecognizer;
- (void)_handleTaps:(id)arg1;
- (void)_scheduleNextSnapshotAgeUpdateForCaptureDate:(id)arg1;
- (void)_setContinuousCornerRadius:(double)arg1;
- (void)_updateBadgeView;
- (void)_updateBadgeViewReschedulingTimerIfNecessary:(bool)arg1;
- (void)_updateErrorVisibilityStateAnimated:(bool)arg1;
- (void)_updateMaskedCameraCorners;
- (bool)allowDigitalZoom;
- (id)backgroundColor;
- (id)backgroundView;
- (double)badgeInset;
- (id)badgeInsetConstraints;
- (id)badgeTopAnchor;
- (id)badgeView;
- (id)cameraAspectRatioConstraint;
- (id)cameraContainerView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })cameraContentFrame;
- (long long)cameraContentMode;
- (id)cameraContentSnapshot;
- (id)cameraDimmingView;
- (id)cameraOverlaySnapshot;
- (id)cameraOverlayView;
- (id)cameraSource;
- (id)cameraView;
- (void)dealloc;
- (id)doubleTapRecognizer;
- (id)errorContent;
- (id)errorView;
- (id)init;
- (id)initWithBadgeView:(id)arg1;
- (bool)isBadgeHidden;
- (void)layoutSubviews;
- (unsigned long long)maskedCameraCorners;
- (id)scrollView;
- (void)setAllowDigitalZoom:(bool)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setBackgroundView:(id)arg1;
- (void)setBadgeHidden:(bool)arg1;
- (void)setBadgeInset:(double)arg1;
- (void)setBadgeInsetConstraints:(id)arg1;
- (void)setBadgeTopAnchor:(id)arg1;
- (void)setCameraAspectRatioConstraint:(id)arg1;
- (void)setCameraContentMode:(long long)arg1;
- (void)setCameraDimmingView:(id)arg1;
- (void)setCameraSource:(id)arg1;
- (void)setCameraSource:(id)arg1 animated:(bool)arg2;
- (void)setDoubleTapRecognizer:(id)arg1;
- (void)setErrorContent:(id)arg1;
- (void)setErrorContent:(id)arg1 animated:(bool)arg2;
- (void)setErrorView:(id)arg1;
- (void)setMaskedCameraCorners:(unsigned long long)arg1;
- (void)setScrollView:(id)arg1;
- (void)setSnapshotAgeUpdateTimer:(id)arg1;
- (void)setStaticConstraints:(id)arg1;
- (id)snapshotAgeUpdateTimer;
- (id)staticConstraints;
- (void)updateConstraints;
- (id)viewForZoomingInScrollView:(id)arg1;

@end
