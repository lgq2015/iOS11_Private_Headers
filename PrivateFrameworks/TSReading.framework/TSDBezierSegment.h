/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSDBezierSegment : NSObject {
    struct CGPoint { 
        double x; 
        double y; 
    }  mA;
    struct CGPoint { 
        double x; 
        double y; 
    }  mB;
    struct CGPoint { 
        double x; 
        double y; 
    }  mIn;
    struct CGPoint { 
        double x; 
        double y; 
    }  mOut;
}

@property (nonatomic, readonly) bool bogusSegment;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } fromPoint;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } inPoint;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } outPoint;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } toPoint;

+ (id)segmentFromPoint:(struct CGPoint { double x1; double x2; })arg1 outPoint:(struct CGPoint { double x1; double x2; })arg2 inPoint:(struct CGPoint { double x1; double x2; })arg3 toPoint:(struct CGPoint { double x1; double x2; })arg4;

- (bool)bogusSegment;
- (struct CGPoint { double x1; double x2; })closestPointToPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)description;
- (struct CGPoint { double x1; double x2; })fromPoint;
- (struct CGPoint { double x1; double x2; })inPoint;
- (id)initFromPoint:(struct CGPoint { double x1; double x2; })arg1 outPoint:(struct CGPoint { double x1; double x2; })arg2 inPoint:(struct CGPoint { double x1; double x2; })arg3 toPoint:(struct CGPoint { double x1; double x2; })arg4;
- (struct CGPoint { double x1; double x2; })outPoint;
- (double)parametricValueForPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })pointAtParametricValue:(double)arg1;
- (void)splitAtParametricValue:(double)arg1 left:(id*)arg2 right:(id*)arg3;
- (struct CGPoint { double x1; double x2; })toPoint;

@end
