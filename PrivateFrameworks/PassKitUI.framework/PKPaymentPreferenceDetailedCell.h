/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPaymentPreferenceDetailedCell : PKPaymentPreferenceCell {
    bool  _inlineEditingEnabled;
    bool  _isLeftToRight;
    UITextField * _textField;
}

@property (nonatomic) bool inlineEditingEnabled;
@property (nonatomic, readonly) UITextField *textField;

- (void).cxx_destruct;
- (id)initWithReuseIdentifier:(id)arg1;
- (bool)inlineEditingEnabled;
- (void)layoutSubviews;
- (void)pk_applyAppearance:(id)arg1;
- (id)pk_childrenForAppearance;
- (void)prepareForReuse;
- (void)setInlineEditingEnabled:(bool)arg1;
- (void)showTextField:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)textField;

@end
