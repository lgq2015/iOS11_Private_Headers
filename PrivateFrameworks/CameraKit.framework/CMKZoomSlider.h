/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CMKZoomSlider : UISlider {
    bool  __autozooming;
    UIView * __maxTrackMaskView;
    UIView * __minTrackMaskView;
    UIImageView * __thumbImageView;
    NSTimer * __visibilityTimer;
    <CMKZoomSliderDelegate> * _delegate;
    bool  _maximumAutozooming;
    bool  _minimumAutozooming;
}

@property (getter=_isAutozooming, setter=_setAutozooming:, nonatomic) bool _autozooming;
@property (nonatomic, readonly) UIView *_maxTrackMaskView;
@property (nonatomic, readonly) UIView *_minTrackMaskView;
@property (nonatomic, readonly) UIImageView *_thumbImageView;
@property (nonatomic, readonly) NSTimer *_visibilityTimer;
@property (nonatomic) <CMKZoomSliderDelegate> *delegate;
@property (getter=isMaximumAutozooming, setter=_setMaximumAutozooming:, nonatomic) bool maximumAutozooming;
@property (getter=isMinimumAutozooming, setter=_setMinimumAutozooming:, nonatomic) bool minimumAutozooming;

- (void).cxx_destruct;
- (void)_beginAutozooming;
- (void)_commonCMKZoomSliderInitialization;
- (void)_endAutozooming;
- (void)_hideZoomSlider:(id)arg1;
- (bool)_isAutozooming;
- (bool)_isMinimumOrMaximumAutozooming;
- (id)_maxTrackMaskView;
- (id)_minTrackMaskView;
- (void)_postHideZoomSliderAnimation;
- (void)_setAutozooming:(bool)arg1;
- (void)_setMaximumAutozooming:(bool)arg1;
- (void)_setMinimumAutozooming:(bool)arg1;
- (id)_thumbImageView;
- (void)_updateAutozooming;
- (id)_visibilityTimer;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })alignmentRectInsets;
- (bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (id)createThumbView;
- (void)dealloc;
- (id)delegate;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isMaximumAutozooming;
- (bool)isMinimumAutozooming;
- (void)layoutSubviews;
- (long long)locationOfTouch:(id)arg1;
- (void)makeInvisible;
- (void)makeVisible;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)startVisibilityTimer;
- (void)stopVisibilityTimer;
- (bool)visibilityTimerIsValid;

@end
