/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
 */

@interface BLRetouchBlurLayer : BLRetouchEffectLayer {
    int  _radius;
    double  _radiusScale;
    bool  _sharpen;
}

@property (nonatomic) int radius;
@property (nonatomic) double radiusScale;
@property (nonatomic) bool sharpen;

+ (id)layerWithBlur:(int)arg1;
+ (id)layerWithSharpen:(int)arg1;

- (bool)hasAmount;
- (struct CGContext { }*)newContextForRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inDestRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 andScale:(double)arg3;
- (struct CGContext { }*)newContextWithEffect:(struct CGContext { }*)arg1;
- (int)radius;
- (double)radiusScale;
- (int)radiusToApply;
- (void)setRadius:(int)arg1;
- (void)setRadiusScale:(double)arg1;
- (void)setSharpen:(bool)arg1;
- (bool)sharpen;

@end
