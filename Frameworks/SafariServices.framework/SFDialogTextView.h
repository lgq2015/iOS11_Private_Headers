/* made by EzioChiu
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface SFDialogTextView : UIView {
    CAGradientLayer * _bottomGradient;
    NSString * _message;
    UIFont * _messageFont;
    UIFont * _messageFontWithTitle;
    double  _preferredMaxLayoutWidth;
    UITextView * _textView;
    NSString * _title;
    UIFont * _titleFont;
    NSParagraphStyle * _titleParagraphStyle;
    CAGradientLayer * _topGradient;
}

- (void).cxx_destruct;
- (void)_updateFontStyling;
- (void)_updateText;
- (void)flashScrollIndicators;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutMarginsDidChange;
- (void)layoutSubviews;
- (void)setMessage:(id)arg1;
- (void)setPreferredMaxLayoutWidth:(double)arg1;
- (void)setTitle:(id)arg1;

@end
