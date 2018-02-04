/* made by EzioChiu
   Image: /System/Library/Frameworks/Social.framework/Social
 */

@interface SLSheetContentView : UIView {
    UIView * _accessoryView;
    bool  _autoCompletionMode;
    UIView * _autoCompletionModeSeparator;
    double  _autoCompletionTextViewHeight;
    UIView * _bottomSeparator;
    NSMutableArray * _constraints;
    NSMutableDictionary * _intrinsicSizes;
    double  _previewTopMargin;
    UIView * _previewView;
    SLSheetTextComposeView * _textComposeView;
    double  _textViewTopMargin;
}

@property (nonatomic, retain) UIView *accessoryView;
@property (nonatomic, readonly) UILabel *placeholderLabel;
@property (nonatomic, retain) UIView *previewView;
@property (nonatomic, readonly) UITextView *textView;

- (void).cxx_destruct;
- (double)_previewMarginForContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_resetAccessoryView;
- (void)_setConstraints;
- (void)_setupConstraints;
- (void)_setupView;
- (double)_textTopMarginForContentSize:(struct CGSize { double x1; double x2; })arg1;
- (id)accessoryView;
- (void)adjustComposeViewForPreview;
- (void)beginAutoCompletionMode;
- (void)endAutoCompletionMode;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (id)placeholderLabel;
- (void)preflightAutoCompletionModeWithApparentHeight:(double)arg1;
- (id)previewView;
- (void)resetPreview;
- (void)setAccessoryView:(id)arg1;
- (void)setIntrinsicSize:(struct CGSize { double x1; double x2; })arg1 forVerticalSizeClass:(long long)arg2;
- (void)setPreviewView:(id)arg1;
- (id)textView;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateConstraints;
- (void)updatePreviewMargin;
- (void)updateTextViewMargin;

@end
