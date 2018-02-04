/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

@interface AAUIArrowControlsView : UIView {
    <AAUIArrowControlsViewDelegate> * _delegate;
    UIButton * _downButton;
    long long  _interfaceOrientation;
    UIButton * _upButton;
}

@property (nonatomic) <AAUIArrowControlsViewDelegate> *delegate;
@property (nonatomic, readonly) UIButton *downButton;
@property (nonatomic) long long interfaceOrientation;
@property (nonatomic, readonly) UIButton *upButton;

+ (double)defaultHeightForOrientation:(long long)arg1;
+ (double)defaultWidthForOrientation:(long long)arg1;

- (void).cxx_destruct;
- (void)_arrowButtonWasTapped:(id)arg1;
- (id)delegate;
- (id)downButton;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (long long)interfaceOrientation;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg1;
- (void)setInterfaceOrientation:(long long)arg1;
- (id)upButton;

@end
