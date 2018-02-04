/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKQuestionAcknowledgmentGlyphView : CKAcknowledgmentGlyphView {
    UIImageView * _dot;
    UIImageView * _glyph;
}

@property (nonatomic, retain) UIImageView *dot;
@property (nonatomic, retain) UIImageView *glyph;

- (void).cxx_destruct;
- (long long)acknowledgmentType;
- (void)animateWithDelay:(double)arg1 completionDelay:(double)arg2 completion:(id /* block */)arg3;
- (double)animationDuration;
- (id)dot;
- (id)glyph;
- (struct CGPoint { double x1; double x2; })glyphOffset;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 color:(BOOL)arg2;
- (void)layoutSubviews;
- (void)setDot:(id)arg1;
- (void)setGlyph:(id)arg1;
- (void)setGlyphColor:(id)arg1;

@end
