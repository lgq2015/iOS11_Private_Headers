/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSKGradientShapeLayer : CAShapeLayer {
    CAGradientLayer * _gradient;
    CAShapeLayer * _shapeMask;
}

@property (copy) NSArray *colors;
@property struct CGPoint { double x1; double x2; } endPoint;
@property (nonatomic, retain) CAGradientLayer *gradient;
@property (copy) NSArray *locations;
@property (nonatomic, retain) CAShapeLayer *shapeMask;
@property struct CGPoint { double x1; double x2; } startPoint;
@property (copy) NSString *type;

- (id)colors;
- (void)dealloc;
- (struct CGPoint { double x1; double x2; })endPoint;
- (id)gradient;
- (bool)isGradientTree;
- (id)locations;
- (void)p_createGradientTreeIfNeeded;
- (void)p_flatten;
- (void)setColors:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEndPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setFillColor:(struct CGColor { }*)arg1;
- (void)setFillRule:(id)arg1;
- (void)setGradient:(id)arg1;
- (void)setLineCap:(id)arg1;
- (void)setLineDashPattern:(id)arg1;
- (void)setLineDashPhase:(double)arg1;
- (void)setLineJoin:(id)arg1;
- (void)setLineWidth:(double)arg1;
- (void)setLocations:(id)arg1;
- (void)setMiterLimit:(double)arg1;
- (void)setPath:(struct CGPath { }*)arg1;
- (void)setShapeMask:(id)arg1;
- (void)setStartPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setStrokeColor:(struct CGColor { }*)arg1;
- (void)setStrokeEnd:(double)arg1;
- (void)setStrokeStart:(double)arg1;
- (void)setType:(id)arg1;
- (id)shapeMask;
- (struct CGPoint { double x1; double x2; })startPoint;
- (id)type;

@end
