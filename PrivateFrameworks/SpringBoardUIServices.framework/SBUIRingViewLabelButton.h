/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

@interface SBUIRingViewLabelButton : UIControl {
    UILabel * _label;
    TPRevealingRingView * _ringView;
}

@property (nonatomic, readonly) TPRevealingRingView *backgroundRing;
@property (nonatomic, readonly) UILabel *label;

- (void).cxx_destruct;
- (id)backgroundRing;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)label;
- (void)setHighlighted:(bool)arg1;

@end
