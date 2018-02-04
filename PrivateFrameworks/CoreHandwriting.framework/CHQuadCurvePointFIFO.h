/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

@interface CHQuadCurvePointFIFO : CHPointFIFO {
    struct vector<float __attribute__((ext_vector_type(4))), std::__1::allocator<float __attribute__((ext_vector_type(4)))> >="__begin_"^"__end_"^"__end_cap_"{__compressed_pair<float * __attribute__((ext_vector_type(4))), std::__1::allocator<float __attribute__((ext_vector_type(4)))> >="__first_"^ {}  _controlPoints;
    <CHPointFIFODrawingTarget> * _drawingTarget;
    id /* block */  _emissionHandler;
    bool  _emitInterpolatedPoints;
    void _lastPoint;
    double  _lineWidth;
    struct CGPath { } * _path;
    struct vector<float __attribute__((ext_vector_type(4))), std::__1::allocator<float __attribute__((ext_vector_type(4)))> >="__begin_"^"__end_"^"__end_cap_"{__compressed_pair<float * __attribute__((ext_vector_type(4))), std::__1::allocator<float __attribute__((ext_vector_type(4)))> >="__first_"^ {}  _points;
    struct vector<float __attribute__((ext_vector_type(4))), std::__1::allocator<float __attribute__((ext_vector_type(4)))> >="__begin_"^"__end_"^"__end_cap_"{__compressed_pair<float * __attribute__((ext_vector_type(4))), std::__1::allocator<float __attribute__((ext_vector_type(4)))> >="__first_"^ {}  _prevPoints;
    float  _unitScale;
    UIView * _view;
}

@property (nonatomic) /* Warning: unhandled struct encoding: '{vector<float __attribute__((ext_vector_type(4)))' */ struct  controlPoints; /* unknown property attribute:  std::__1::allocator<float __attribute__((ext_vector_type(4)))> >=^}} */
@property (nonatomic, retain) <CHPointFIFODrawingTarget> *drawingTarget;
@property (copy) id /* block */ emissionHandler;
@property (nonatomic) bool emitInterpolatedPoints;
@property (nonatomic) void lastPoint;
@property (nonatomic) double lineWidth;
@property (nonatomic) struct CGPath { }*path;
@property (nonatomic) /* Warning: unhandled struct encoding: '{vector<float __attribute__((ext_vector_type(4)))' */ struct  points; /* unknown property attribute:  std::__1::allocator<float __attribute__((ext_vector_type(4)))> >=^}} */
@property (nonatomic) /* Warning: unhandled struct encoding: '{vector<float __attribute__((ext_vector_type(4)))' */ struct  prevPoints; /* unknown property attribute:  std::__1::allocator<float __attribute__((ext_vector_type(4)))> >=^}} */
@property (nonatomic) float unitScale;
@property (nonatomic, retain) UIView *view;

+ (void)interpolateFromPoint:(void *)arg1 toPoint:(void *)arg2 controlPoint:(void *)arg3 time:(void *)arg4; // needs 4 arg types, found 1: float

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addPoint;
- (void)clear;
- (struct vector<float __attribute__((ext_vector_type(4))), std::__1::allocator<float __attribute__((ext_vector_type(4)))> >=^^{__compressed_pair<float * __attribute__((ext_vector_type(4))), std::__1::allocator<float __attribute__((ext_vector_type(4)))> >=^ {})controlPoints;
- (void)dealloc;
- (id)drawingTarget;
- (id /* block */)emissionHandler;
- (bool)emitInterpolatedPoints;
- (void)flush;
- (id)initWithFIFO:(id)arg1;
- (id)initWithFIFO:(id)arg1 drawingTarget:(id)arg2;
- (id)initWithFIFO:(id)arg1 strokeView:(id)arg2;
- (void)lastPoint;
- (double)lineWidth;
- (struct CGPath { }*)path;
- (struct vector<float __attribute__((ext_vector_type(4))), std::__1::allocator<float __attribute__((ext_vector_type(4)))> >=^^{__compressed_pair<float * __attribute__((ext_vector_type(4))), std::__1::allocator<float __attribute__((ext_vector_type(4)))> >=^ {})points;
- (struct vector<float __attribute__((ext_vector_type(4))), std::__1::allocator<float __attribute__((ext_vector_type(4)))> >=^^{__compressed_pair<float * __attribute__((ext_vector_type(4))), std::__1::allocator<float __attribute__((ext_vector_type(4)))> >=^ {})prevPoints;
- (void)setControlPoints:(struct vector<float __attribute__((ext_vector_type(4))), std::__1::allocator<float __attribute__((ext_vector_type(4)))> >=^^{__compressed_pair<float * __attribute__((ext_vector_type(4))), std::__1::allocator<float __attribute__((ext_vector_type(4)))> >=^ {})arg1;
- (void)setDrawingTarget:(id)arg1;
- (void)setEmissionHandler:(id /* block */)arg1;
- (void)setEmitInterpolatedPoints:(bool)arg1;
- (void)setLastPoint;
- (void)setLineWidth:(double)arg1;
- (void)setPath:(struct CGPath { }*)arg1;
- (void)setPoints:(struct vector<float __attribute__((ext_vector_type(4))), std::__1::allocator<float __attribute__((ext_vector_type(4)))> >=^^{__compressed_pair<float * __attribute__((ext_vector_type(4))), std::__1::allocator<float __attribute__((ext_vector_type(4)))> >=^ {})arg1;
- (void)setPrevPoints:(struct vector<float __attribute__((ext_vector_type(4))), std::__1::allocator<float __attribute__((ext_vector_type(4)))> >=^^{__compressed_pair<float * __attribute__((ext_vector_type(4))), std::__1::allocator<float __attribute__((ext_vector_type(4)))> >=^ {})arg1;
- (void)setUnitScale:(float)arg1;
- (void)setUnitScaleForViewSize:(struct CGSize { double x1; double x2; })arg1 normalizedSize:(struct CGSize { double x1; double x2; })arg2 contentScaleFactor:(double)arg3;
- (void)setView:(id)arg1;
- (float)unitScale;
- (id)view;

@end
