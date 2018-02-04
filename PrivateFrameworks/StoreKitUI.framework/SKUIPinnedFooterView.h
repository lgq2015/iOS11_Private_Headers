/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIPinnedFooterView : UITableViewHeaderFooterView {
    NSAttributedString * _attributedText;
    double  _horizontalPadding;
    UITextView * _textView;
}

@property (nonatomic, retain) NSAttributedString *attributedText;
@property (nonatomic) double horizontalPadding;
@property (nonatomic, retain) UITextView *textView;

- (void).cxx_destruct;
- (void)_configureTextViewTextStyling;
- (void)_initializeTextView;
- (id)attributedText;
- (double)horizontalPadding;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setAttributedText:(id)arg1;
- (void)setHorizontalPadding:(double)arg1;
- (void)setTextView:(id)arg1;
- (id)textView;

@end
