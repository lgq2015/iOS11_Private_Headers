/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIOnboardingFooterView : UIView {
    UIButton * _leftButton;
    SKUIOnboardingProgressView * _progressView;
    UIButton * _rightButton;
}

@property (nonatomic, readonly) UIButton *leftButton;
@property (nonatomic, retain) SKUIOnboardingProgressView *progressView;
@property (nonatomic, readonly) UIButton *rightButton;

- (void).cxx_destruct;
- (void)_hideButton:(id)arg1 withAnimation:(long long)arg2;
- (id)_newButton;
- (void)_showButton:(id)arg1 withTitle:(id)arg2 animation:(long long)arg3;
- (void)hideLeftButtonWithAnimation:(long long)arg1;
- (void)hideRightButtonWithAnimation:(long long)arg1;
- (void)layoutSubviews;
- (id)leftButton;
- (id)progressView;
- (id)rightButton;
- (void)setProgressView:(id)arg1;
- (void)showLeftButtonWithTitle:(id)arg1 animation:(long long)arg2;
- (void)showRightButtonWithTitle:(id)arg1 animation:(long long)arg2;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
