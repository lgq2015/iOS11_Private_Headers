/* made by EzioChiu
   Image: /System/Library/Frameworks/Social.framework/Social
 */

@interface SLSheetMasklayer : CALayer {
    UIColor * _backgroundColor;
    CALayer * _bottomLayer;
    UIColor * _clipBackgroundColor;
    double  _clipCornerRadius;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _lastBounds;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _lastMaskRect;
    CALayer * _leftLayer;
    CALayer * _rightLayer;
    _SLSheetMaskLayer * _sheetMaskLayer;
    CALayer * _solidSheetMaskLayer;
    CALayer * _topLayer;
}

@property (nonatomic, retain) UIColor *clipBackgroundColor;
@property (nonatomic) double clipCornerRadius;

- (void).cxx_destruct;
- (void)animateSheetMaskFromOldSheetFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 toSheetFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 duration:(double)arg3;
- (id)clipBackgroundColor;
- (double)clipCornerRadius;
- (id)initWithBackgroundColor:(id)arg1 cornerRadius:(double)arg2;
- (void)removeAllAnimations;
- (void)removeSheetCutout;
- (void)restoreSheetCutout;
- (void)setClipBackgroundColor:(id)arg1;
- (void)setClipCornerRadius:(double)arg1;
- (void)updateMaskWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 maskRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;

@end
