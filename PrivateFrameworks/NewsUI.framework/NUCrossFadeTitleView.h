/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

@interface NUCrossFadeTitleView : UIView {
    NUCrossFadeViewAnimator * _animator;
    unsigned long long  _displayValueType;
    <NUTitleViewStyler> * _styler;
    NUTextAndGlyphView * _textAndGlyphView;
    UIImageView * _titleImageView;
    UILabel * _titleLabel;
}

@property (nonatomic, readonly) NUCrossFadeViewAnimator *animator;
@property (nonatomic) unsigned long long displayValueType;
@property (nonatomic, retain) <NUTitleViewStyler> *styler;
@property (nonatomic, readonly) NUTextAndGlyphView *textAndGlyphView;
@property (nonatomic, readonly) UIImageView *titleImageView;
@property (nonatomic, readonly) UILabel *titleLabel;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } visibleFrame;

- (void).cxx_destruct;
- (id)_applyStylesToText:(id)arg1 styleType:(unsigned long long)arg2;
- (id)_applyStylesToTextAndGlyph:(id)arg1 styleType:(unsigned long long)arg2;
- (id)animator;
- (id)applyStylesToValueFromTitleViewUpdate:(id)arg1;
- (unsigned long long)displayValueType;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithStyler:(id)arg1;
- (void)layoutSubviews;
- (void)setDisplayValueType:(unsigned long long)arg1;
- (void)setStyler:(id)arg1;
- (id)styler;
- (id)textAndGlyphView;
- (id)titleImageView;
- (id)titleLabel;
- (void)updateTitleViewWithUpdate:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (id)viewForValueType:(unsigned long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleFrame;

@end
