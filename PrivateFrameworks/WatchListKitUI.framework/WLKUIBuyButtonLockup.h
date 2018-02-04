/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WatchListKitUI.framework/WatchListKitUI
 */

@interface WLKUIBuyButtonLockup : WLKUIUIStackView {
    UIButton * _button;
    NSLayoutConstraint * _buttonHeightConstraint;
    bool  _hasIAP;
    UILabel * _iAPLabel;
    long long  _lastOrientation;
}

@property (nonatomic, retain) UIButton *button;
@property (nonatomic) bool hasIAP;

- (void).cxx_destruct;
- (void)_contentSizeCategoryDidChange;
- (bool)_isLargeContentSize;
- (void)_updateForPreferredContentSize;
- (id)button;
- (void)dealloc;
- (bool)hasIAP;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setButton:(id)arg1;
- (void)setHasIAP:(bool)arg1;

@end
