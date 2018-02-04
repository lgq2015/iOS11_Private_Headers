/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPaymentPreferenceButtonCell : PKPaymentPreferenceCell {
    UIButton * _button;
    NSString * _buttonTitle;
    id /* block */  _handler;
}

@property (nonatomic, copy) NSString *buttonTitle;
@property (nonatomic, copy) id /* block */ handler;

- (void).cxx_destruct;
- (void)buttonTapped:(id)arg1;
- (id)buttonTitle;
- (void)dealloc;
- (id /* block */)handler;
- (id)initWithReuseIdentifier:(id)arg1;
- (void)layoutSubviews;
- (id)pk_childrenForAppearance;
- (void)setButtonTitle:(id)arg1;
- (void)setHandler:(id /* block */)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
