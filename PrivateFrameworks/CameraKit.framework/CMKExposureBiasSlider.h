/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CMKExposureBiasSlider : UIView {
    double  __lastInteractionTime;
    UIView * __maxTrackMaskView;
    UIView * __maxTrackView;
    UIView * __minTrackMaskView;
    UIView * __minTrackView;
    CMKExposureBiasSliderThumb * __thumbView;
    float  _exposureBiasMax;
    float  _exposureBiasMin;
    float  _exposureBiasValue;
    bool  _suspendTrackFadeOut;
}

@property (nonatomic, readonly) double _lastInteractionTime;
@property (nonatomic, readonly, retain) UIView *_maxTrackMaskView;
@property (nonatomic, readonly, retain) UIView *_maxTrackView;
@property (nonatomic, readonly, retain) UIView *_minTrackMaskView;
@property (nonatomic, readonly, retain) UIView *_minTrackView;
@property (nonatomic, readonly, retain) CMKExposureBiasSliderThumb *_thumbView;
@property (nonatomic) float exposureBiasMax;
@property (nonatomic) float exposureBiasMin;
@property (nonatomic) float exposureBiasValue;
@property (nonatomic) bool suspendTrackFadeOut;
@property (nonatomic, readonly) double thumbMaxExtension;

- (void).cxx_destruct;
- (void)_animateTrackAlpha:(double)arg1 withDuration:(double)arg2;
- (void)_cancelDelayedDim;
- (void)_dimTrackForInactivity;
- (double)_lastInteractionTime;
- (id)_maxTrackMaskView;
- (id)_maxTrackView;
- (id)_minTrackMaskView;
- (id)_minTrackView;
- (float)_normalizedExposureValue;
- (void)_scheduleDelayedDim;
- (struct CGPoint { double x1; double x2; })_sunCenterForNormalizedValue:(float)arg1;
- (id)_thumbView;
- (double)_trackAlpha;
- (void)_updateForChangedNormalizedExposureValue;
- (float)exposureBiasMax;
- (float)exposureBiasMin;
- (float)exposureBiasValue;
- (void)forceTrackDimmed;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setExposureBiasMax:(float)arg1;
- (void)setExposureBiasMin:(float)arg1;
- (void)setExposureBiasValue:(float)arg1;
- (void)setSuspendTrackFadeOut:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (bool)suspendTrackFadeOut;
- (double)thumbMaxExtension;
- (void)updateLastInteractionTime;

@end
