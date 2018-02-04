/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIStackedBarCell : UIButton {
    UIButton * _backButton;
    bool  _expanded;
    UILabel * _expandedLabel;
    UIView * _separator;
}

@property (nonatomic, readonly) UIButton *backButton;
@property (nonatomic) bool expanded;

- (void).cxx_destruct;
- (id)backButton;
- (bool)expanded;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setExpanded:(bool)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setTitle:(id)arg1 forState:(unsigned long long)arg2;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
