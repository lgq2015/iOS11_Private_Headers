/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIMessageBanner : UIView {
    NSAttributedString * _attributedMessage;
    UIView * _borderView;
    UIButton * _button;
    UIButton * _clearButton;
    <SKUIMessageBannerDelegate> * _delegate;
    UILabel * _label;
}

@property (nonatomic, retain) NSAttributedString *attributedMessage;
@property (nonatomic) <SKUIMessageBannerDelegate> *delegate;
@property (nonatomic, retain) NSString *message;
@property (nonatomic) bool showsClearButton;

- (void).cxx_destruct;
- (void)_buttonAction:(id)arg1;
- (void)_clearButtonAction:(id)arg1;
- (id)attributedMessage;
- (id)delegate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)message;
- (void)setAttributedMessage:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setShowsClearButton:(bool)arg1;
- (bool)showsClearButton;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)value;

@end
