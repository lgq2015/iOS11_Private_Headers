/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface _TVButton : UIControl {
    UIColor * __backgroundColor;
    _TVImageView * _accessoryView;
    long long  _backdropStyle;
    bool  _blurEnabled;
    double  _cornerRadius;
    NSString * _groupName;
    UIColor * _highlightColor;
    bool  _imageTrailsTextContent;
    _TVImageView * _imageView;
    UILabel * _textContentView;
    IKViewElement * _viewElement;
}

@property (nonatomic, retain) _TVImageView *accessoryView;
@property (nonatomic, readonly) long long backdropStyle;
@property (nonatomic, readonly) bool blurEnabled;
@property (nonatomic) double cornerRadius;
@property (getter=isDisabled, nonatomic) bool disabled;
@property (nonatomic, retain) NSString *groupName;
@property (nonatomic, copy) UIColor *highlightColor;
@property (nonatomic) bool imageTrailsTextContent;
@property (nonatomic, retain) _TVImageView *imageView;
@property (nonatomic, retain) UILabel *textContentView;
@property (nonatomic, retain) IKViewElement *viewElement;

- (void).cxx_destruct;
- (double)_imageMarginFromText;
- (void)_playButtonAction:(id)arg1;
- (void)_selectButtonAction:(id)arg1;
- (void)_setFocused:(bool)arg1 animationCoordinator:(id)arg2;
- (void)_updateBackgroundColorForState:(unsigned long long)arg1;
- (id)accessoryView;
- (long long)backdropStyle;
- (id)backgroundColor;
- (bool)blurEnabled;
- (bool)canBecomeFocused;
- (double)cornerRadius;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)groupName;
- (id)highlightColor;
- (bool)imageTrailsTextContent;
- (id)imageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 blurEffectStyle:(long long)arg2 blurEnabled:(bool)arg3;
- (bool)isDisabled;
- (void)layoutSubviews;
- (void)setAccessoryView:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setContentMotionRotation:(struct CGPoint { double x1; double x2; })arg1 translation:(struct CGPoint { double x1; double x2; })arg2;
- (void)setCornerRadius:(double)arg1;
- (void)setDisabled:(bool)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setGroupName:(id)arg1;
- (void)setHighlightColor:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setImageTrailsTextContent:(bool)arg1;
- (void)setImageView:(id)arg1;
- (void)setSelected:(bool)arg1;
- (void)setSelected:(bool)arg1 animated:(bool)arg2;
- (void)setSelected:(bool)arg1 animated:(bool)arg2 withAnimationCoordinator:(id)arg3;
- (void)setTextContentView:(id)arg1;
- (void)setViewElement:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)textContentView;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updatePreferredFocusedViewStateForFocus:(bool)arg1;
- (id)viewElement;

@end
