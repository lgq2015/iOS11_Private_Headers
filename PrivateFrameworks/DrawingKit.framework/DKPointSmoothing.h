/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DrawingKit.framework/DrawingKit
 */

@interface DKPointSmoothing : NSObject {
    UIBoxcarFilterPointFIFO * _boxcarFIFO;
    bool  _emitInterpolatedPoints;
    UIQuadCurvePointFIFO * _interpolatingFIFO;
    float  _spacing;
    UIPointFIFO * _strokeFIFO;
    float  _unitScale;
    unsigned long long  _width;
}

@property (nonatomic, retain) UIBoxcarFilterPointFIFO *boxcarFIFO;
@property (nonatomic, copy) id /* block */ emissionHandler;
@property (nonatomic) bool emitInterpolatedPoints;
@property (nonatomic, retain) UIQuadCurvePointFIFO *interpolatingFIFO;
@property (nonatomic) float spacing;
@property (nonatomic, retain) UIPointFIFO *strokeFIFO;
@property (nonatomic) float unitScale;
@property (nonatomic) unsigned long long width;

+ (void)_interpolateFromPoint:(void *)arg1 toPoint:(void *)arg2 withControlPoint:(void *)arg3 atUnitScale:(void *)arg4 emissionHandler:(void *)arg5; // needs 5 arg types, found 2: float, id /* block */
+ (void)interpolateFromPoint:(void *)arg1 toPoint:(void *)arg2 controlPoint:(void *)arg3 time:(void *)arg4; // needs 4 arg types, found 1: float

- (void).cxx_destruct;
- (void)addPoint;
- (id)boxcarFIFO;
- (void)clear;
- (id /* block */)emissionHandler;
- (bool)emitInterpolatedPoints;
- (void)emitPoint;
- (void)flush;
- (id)init;
- (id)initWithWidth:(unsigned long long)arg1 spacing:(float)arg2;
- (id)interpolatingFIFO;
- (void)setBoxcarFIFO:(id)arg1;
- (void)setEmissionHandler:(id /* block */)arg1;
- (void)setEmitInterpolatedPoints:(bool)arg1;
- (void)setInterpolatingFIFO:(id)arg1;
- (void)setSpacing:(float)arg1;
- (void)setStrokeFIFO:(id)arg1;
- (void)setUnitScale:(float)arg1;
- (void)setWidth:(unsigned long long)arg1;
- (float)spacing;
- (id)strokeFIFO;
- (float)unitScale;
- (unsigned long long)width;

@end
