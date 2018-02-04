/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoBoothEffects.framework/PhotoBoothEffects
 */

@interface PBSqueezeFilter : PBFilter {
    float  _inputAmount;
    bool  firstTime;
    struct CGPoint { 
        double x; 
        double y; 
    }  inputPoint;
    float  lastInputRadius;
    float  lastInputScale;
    float  lastInputX;
    float  lastInputY;
}

@property float inputAmount;
@property struct CGPoint { double x1; double x2; } inputPoint;

- (void)applyParametersToCIFilter:(bool)arg1 extent:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)ciFilterName;
- (float)inputAmount;
- (struct CGPoint { double x1; double x2; })inputPoint;
- (bool)needsWrapMirror;
- (void)setDefaults;
- (void)setInputAmount:(float)arg1;
- (void)setInputPoint:(struct CGPoint { double x1; double x2; })arg1;

@end
