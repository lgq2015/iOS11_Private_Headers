/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface SPCCurvePoint : NSObject {
    struct CGPoint { 
        double x; 
        double y; 
    }  _leftTangentPoint;
    struct CGPoint { 
        double x; 
        double y; 
    }  _rightTangentPoint;
    double  _roundness;
    double  _smoothness;
    double  _x;
    double  _y;
}

@property struct CGPoint { double x1; double x2; } CGPoint;
@property struct CGPoint { double x1; double x2; } leftTangentPoint;
@property struct CGPoint { double x1; double x2; } rightTangentPoint;
@property double roundness;
@property double smoothness;
@property double x;
@property double y;

+ (id)pointWithCGPoint:(struct CGPoint { double x1; double x2; })arg1;
+ (id)pointWithX:(double)arg1 y:(double)arg2;

- (struct CGPoint { double x1; double x2; })CGPoint;
- (id)initWithX:(double)arg1 y:(double)arg2;
- (struct CGPoint { double x1; double x2; })leftTangentPoint;
- (struct CGPoint { double x1; double x2; })rightTangentPoint;
- (double)roundness;
- (void)setCGPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setLeftTangentPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setRightTangentPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setRoundness:(double)arg1;
- (void)setSmoothness:(double)arg1;
- (void)setX:(double)arg1;
- (void)setY:(double)arg1;
- (double)smoothness;
- (double)x;
- (double)y;

@end
