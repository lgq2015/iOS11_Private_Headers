/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKEnglishHaAcknowledgmentGlyphView : CKAcknowledgmentGlyphView {
    UIImageView * _a1;
    UIImageView * _a2;
    UIImageView * _h1;
    UIImageView * _h2;
}

@property (nonatomic, retain) UIImageView *a1;
@property (nonatomic, retain) UIImageView *a2;
@property (nonatomic, retain) UIImageView *h1;
@property (nonatomic, retain) UIImageView *h2;

- (void).cxx_destruct;
- (id)a1;
- (id)a2;
- (long long)acknowledgmentType;
- (void)animateWithDelay:(double)arg1 completionDelay:(double)arg2 completion:(id /* block */)arg3;
- (double)animationDuration;
- (struct CGPoint { double x1; double x2; })glyphOffset;
- (id)h1;
- (id)h2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 color:(BOOL)arg2;
- (void)layoutSubviews;
- (void)setA1:(id)arg1;
- (void)setA2:(id)arg1;
- (void)setGlyphColor:(id)arg1;
- (void)setH1:(id)arg1;
- (void)setH2:(id)arg1;

@end
