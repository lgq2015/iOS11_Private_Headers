/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
 */

@interface TLKSelectableGridButton : UIButton {
    TLKVibrantLabel * _bottomLabel;
    TLKStackView * _stackView;
    unsigned long long  _style;
    TLKVibrantLabel * _topLabel;
}

@property (retain) TLKVibrantLabel *bottomLabel;
@property (retain) TLKStackView *stackView;
@property (nonatomic) unsigned long long style;
@property (retain) TLKVibrantLabel *topLabel;

+ (id)selectableGridButton;

- (void).cxx_destruct;
- (id)_selectionColor;
- (id)bottomLabel;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (void)setBottomLabel:(id)arg1;
- (void)setSelected:(bool)arg1;
- (void)setStackView:(id)arg1;
- (void)setStyle:(unsigned long long)arg1;
- (void)setTitle:(id)arg1 subtitle:(id)arg2;
- (void)setTopLabel:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)stackView;
- (unsigned long long)style;
- (struct CGSize { double x1; double x2; })systemLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg1;
- (id)topLabel;

@end
