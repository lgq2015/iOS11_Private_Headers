/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIGiftTextFieldTableViewCell : UITableViewCell {
    UILabel * _label;
    UITextField * _textField;
    UIView * _topBorderView;
}

@property (nonatomic, copy) NSAttributedString *attributedPlaceholder;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (nonatomic) long long keyboardType;
@property (nonatomic, copy) NSString *label;
@property (nonatomic, readonly) UIControl *textField;
@property (nonatomic) <UITextFieldDelegate> *textFieldDelegate;
@property (nonatomic, copy) NSString *value;

- (void).cxx_destruct;
- (id)attributedPlaceholder;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (bool)isEnabled;
- (long long)keyboardType;
- (id)label;
- (void)layoutSubviews;
- (void)setAttributedPlaceholder:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setKeyboardType:(long long)arg1;
- (void)setLabel:(id)arg1;
- (void)setTextFieldDelegate:(id)arg1;
- (void)setValue:(id)arg1;
- (id)textField;
- (id)textFieldDelegate;
- (id)value;

@end
