/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

@interface SBUIPowerDownView : UIView <SBUIPowerDownViewInterface, _UIActionSliderDelegate> {
    _UIActionSlider * _actionSlider;
    NSTimer * _autoDismissTimer;
    UIView * _backdropView;
    UIButton * _cancelButton;
    UILabel * _cancelLabel;
    UIView * _darkeningOverlayView;
    SBUIShapeView * _darkeningUnderlayView;
    <SBUIPowerDownViewDelegate> * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SBUIPowerDownViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_animatePowerDown;
- (void)_cancelAutoDismissTimer;
- (void)_cancelButtonTapped;
- (void)_idleTimerFired;
- (bool)_isLandscapeAspectRatio;
- (void)_notifyDelegateCancelled;
- (void)_notifyDelegatePowerDown;
- (void)_powerDownSliderDidBeginSlide;
- (void)_powerDownSliderDidCancelSlide;
- (void)_powerDownSliderDidCompleteSlide;
- (void)_powerDownSliderDidUpdateSlideWithValue:(double)arg1;
- (void)_resetAutoDismissTimer;
- (void)_updateSliderExclusionPath;
- (void)_willAnimateIn;
- (void)_willAnimateOut;
- (void)actionSlider:(id)arg1 didUpdateSlideWithValue:(double)arg2;
- (void)actionSliderDidBeginSlide:(id)arg1;
- (void)actionSliderDidCancelSlide:(id)arg1;
- (void)actionSliderDidCompleteSlide:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)hideAnimated:(bool)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 vibrantSettings:(id)arg2;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg1;
- (void)showAnimated:(bool)arg1;

@end
