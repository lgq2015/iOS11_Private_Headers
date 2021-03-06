/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPaymentAuthorizationFooterView : UIView {
    bool  _compact;
    unsigned long long  _confirmationStyle;
    long long  _constraintState;
    bool  _constraintsDirty;
    <PKPaymentAuthorizationFooterViewDelegate> * _delegate;
    NSMutableArray * _dynamicRegularConstraints;
    PKGlyphView * _glyphView;
    NSArray * _hiddenConstraints;
    UILabel * _labelView;
    PKPaymentAuthorizationLayout * _layout;
    UIView * _lockupView;
    UILabel * _passbookPaymentDetailsView;
    UIButton * _payWithPasscodeButton;
    long long  _queuedConstraintState;
    unsigned long long  _requestType;
    NSLayoutConstraint * _separatorLeftConstraint;
    UIView * _separatorView;
    long long  _state;
    NSArray * _staticRegularConstraints;
}

@property (nonatomic) unsigned long long confirmationStyle;
@property (nonatomic) <PKPaymentAuthorizationFooterViewDelegate> *delegate;
@property (nonatomic, retain) PKPaymentAuthorizationLayout *layout;
@property (nonatomic) unsigned long long requestType;
@property (nonatomic) long long state;

- (void).cxx_destruct;
- (void)_createSubviews;
- (void)_payWithPasscodePressed;
- (id)_payWithPasscodeTitleForState:(long long)arg1;
- (void)_prepareConstraints;
- (id)_titleAttributedStringForState:(long long)arg1;
- (id)_titleLabelAttributedString:(id)arg1;
- (unsigned long long)confirmationStyle;
- (id)defaultHeightConstraint;
- (id)delegate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 layout:(id)arg2;
- (id)layout;
- (unsigned long long)requestType;
- (void)setConfirmationStyle:(unsigned long long)arg1;
- (bool)setConstraintState:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHidden:(bool)arg1;
- (void)setLayout:(id)arg1;
- (void)setRequestType:(unsigned long long)arg1;
- (void)setState:(long long)arg1;
- (void)setState:(long long)arg1 string:(id)arg2 animated:(bool)arg3;
- (long long)state;
- (void)updateConstraints;

@end
