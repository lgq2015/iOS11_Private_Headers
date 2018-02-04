/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

@interface SBUIIconForceTouchIconViewWrapperView : SBFView {
    UIView * _iconView;
}

@property (nonatomic) double gaussianBlurRadius;
@property (nonatomic, readonly) UIView *iconView;

- (void).cxx_destruct;
- (double)gaussianBlurRadius;
- (id)iconView;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithIconView:(id)arg1;
- (void)setGaussianBlurRadius:(double)arg1;

@end
