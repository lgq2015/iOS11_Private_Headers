/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ControlCenterUIKit.framework/ControlCenterUIKit
 */

@interface CCUIMenuModuleItemView : UIControl {
    UIImage * _glyphImage;
    UIImageView * _glyphImageView;
    id /* block */  _handler;
    UIView * _highlightedBackgroundView;
    double  _preferredMaxLayoutWidth;
    UIView * _separatorView;
    bool  _separatorVisible;
    UILabel * _subtitleLabel;
    UILabel * _titleLabel;
    bool  _useTallLayout;
}

@property (nonatomic, readonly, copy) id /* block */ handler;
@property (nonatomic) double preferredMaxLayoutWidth;
@property (nonatomic) bool separatorVisible;
@property (nonatomic) bool useTallLayout;

- (void).cxx_destruct;
- (double)_glyphMargin;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_labelInsets;
- (void)_setContinuousCornerRadius:(double)arg1;
- (bool)_shouldCenterText;
- (double)_titleBaselineToBottom;
- (double)_titleBaselineToTop;
- (void)_updateForStateChange;
- (id /* block */)handler;
- (id)initWithTitle:(id)arg1 glyphImage:(id)arg2 handler:(id /* block */)arg3;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 glyphImage:(id)arg3 handler:(id /* block */)arg4;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (double)preferredMaxLayoutWidth;
- (bool)separatorVisible;
- (void)setEnabled:(bool)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setPreferredMaxLayoutWidth:(double)arg1;
- (void)setSelected:(bool)arg1;
- (void)setSeparatorVisible:(bool)arg1;
- (void)setUseTallLayout:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (bool)useTallLayout;

@end
