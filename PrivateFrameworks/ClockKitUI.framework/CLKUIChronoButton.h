/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ClockKitUI.framework/ClockKitUI
 */

@interface CLKUIChronoButton : UIControl {
    UIColor * _color;
    UIImageView * _fillView;
    UIColor * _highlightColor;
    struct CGPoint { 
        double x; 
        double y; 
    }  _originalCenter;
    UIColor * _ringColor;
    UIColor * _ringSwapColor;
    UIImageView * _ringView;
    UIColor * _swapColor;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _touchEdgeInsets;
}

@property (nonatomic, retain) UIColor *color;
@property (nonatomic, retain) UIColor *highlightColor;
@property (nonatomic, retain) UIColor *ringColor;
@property (nonatomic, retain) UIColor *ringSwapColor;
@property (nonatomic, retain) UIColor *swapColor;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } touchEdgeInsets;

- (void).cxx_destruct;
- (void)_performTouchAnimationThroughColor:(id)arg1 toColor:(id)arg2 toRingColor:(id)arg3;
- (void)_updateColors;
- (bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (id)color;
- (id)highlightColor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)ringColor;
- (id)ringSwapColor;
- (void)setColor:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setHighlightColor:(id)arg1;
- (void)setRingColor:(id)arg1;
- (void)setRingSwapColor:(id)arg1;
- (void)setSwapColor:(id)arg1;
- (void)setTouchEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (id)swapColor;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })touchEdgeInsets;

@end
