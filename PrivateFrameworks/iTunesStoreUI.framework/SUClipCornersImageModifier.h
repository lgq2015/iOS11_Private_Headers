/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUClipCornersImageModifier : SUImageModifier {
    double  _cornerRadius;
    int  _corners;
}

@property (nonatomic) double cornerRadius;
@property (nonatomic) int corners;

- (struct CGPath { }*)_copyClippingPathForRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)cornerRadius;
- (int)corners;
- (void)drawAfterImageForContext:(struct CGContext { }*)arg1 imageFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 finalSize:(struct CGSize { double x1; double x2; })arg3;
- (void)drawBeforeImageForContext:(struct CGContext { }*)arg1 imageFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 finalSize:(struct CGSize { double x1; double x2; })arg3;
- (bool)isEqual:(id)arg1;
- (void)setCornerRadius:(double)arg1;
- (void)setCorners:(int)arg1;

@end
