/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoBoothEffects.framework/PhotoBoothEffects
 */

@interface PBTwirlFilter : PBFilter {
    float  _inputAmount;
    bool  firstTime;
    struct CGPoint { 
        double x; 
        double y; 
    }  inputPoint;
    float  inputRotation;
    float  lastInputAngle;
    float  lastInputRadius;
    float  lastInputX;
    float  lastInputY;
}

@property float inputAmount;
@property struct CGPoint { double x1; double x2; } inputPoint;
@property float inputRotation;

- (void)applyParametersToCIFilter:(bool)arg1 extent:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)ciFilterName;
- (float)inputAmount;
- (struct CGPoint { double x1; double x2; })inputPoint;
- (float)inputRotation;
- (bool)needsWrapMirror;
- (void)setDefaults;
- (void)setInputAmount:(float)arg1;
- (void)setInputPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setInputRotation:(float)arg1;

@end
