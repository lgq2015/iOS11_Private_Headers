/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKReaderModeProvisioningView : UIView {
    PKReaderModeAnimationView * _animationView;
    PKReaderModeHeaderView * _headerView;
    UIProgressView * _progressView;
}

- (void).cxx_destruct;
- (id)initWithContext:(long long)arg1 productDisplayName:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 context:(long long)arg2 productDisplayName:(id)arg3;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 productDisplayName:(id)arg2;
- (void)layoutSubviews;
- (void)setState:(unsigned long long)arg1 animated:(bool)arg2;
- (void)setTransferringProgress:(double)arg1 duration:(double)arg2;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
