/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUTableTextFooterView : UIView {
    UIFont * _font;
    UIColor * _shadowColor;
    long long  _textAlignment;
    UIColor * _textColor;
    NSArray * _textLines;
}

@property (nonatomic, retain) UIFont *font;
@property (nonatomic, retain) UIColor *shadowColor;
@property (nonatomic) long long textAlignment;
@property (nonatomic, retain) UIColor *textColor;
@property (nonatomic, retain) NSArray *textLines;

- (void)dealloc;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)font;
- (void)setFont:(id)arg1;
- (void)setShadowColor:(id)arg1;
- (void)setTextAlignment:(long long)arg1;
- (void)setTextColor:(id)arg1;
- (void)setTextLines:(id)arg1;
- (id)shadowColor;
- (void)sizeToFit;
- (long long)textAlignment;
- (id)textColor;
- (id)textLines;

@end
