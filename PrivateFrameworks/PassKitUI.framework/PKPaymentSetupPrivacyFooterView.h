/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPaymentSetupPrivacyFooterView : UIView <UITextViewDelegate> {
    long long  _context;
    <PKPaymentSetupPrivacyFooterViewDelegate> * _delegate;
    NSString * _deviceTypeName;
    UIColor * _linkColor;
    UIColor * _messageColor;
    UITextView * _messageView;
    NSString * _paymentNetwork;
    NSString * _privacyText;
    bool  _showFooterLink;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKPaymentSetupPrivacyFooterViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) UIColor *linkColor;
@property (nonatomic, copy) UIColor *messageColor;
@property (nonatomic, copy) NSString *privacyText;
@property (nonatomic) bool showFooterLink;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_defaultLinkColor;
- (id)_defaultMessageColor;
- (id)_linkTextAttributes;
- (void)_loadMessageView;
- (void)_loadMessageViewIfNecessary;
- (id)_textAttributes;
- (void)dealloc;
- (id)delegate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 context:(long long)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 context:(long long)arg2 paymentNetwork:(id)arg3 deviceTypeName:(id)arg4;
- (void)layoutSubviews;
- (id)linkColor;
- (id)messageColor;
- (void)pk_applyAppearance:(id)arg1;
- (id)pk_childrenForAppearance;
- (id)privacyText;
- (void)setDelegate:(id)arg1;
- (void)setLinkColor:(id)arg1;
- (void)setMessageColor:(id)arg1;
- (void)setPrivacyText:(id)arg1;
- (void)setShowFooterLink:(bool)arg1;
- (bool)showFooterLink;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (void)traitCollectionDidChange:(id)arg1;

@end
