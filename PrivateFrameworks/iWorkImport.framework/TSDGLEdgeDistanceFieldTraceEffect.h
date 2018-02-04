/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDGLEdgeDistanceFieldTraceEffect : NSObject {
    struct CGSize { 
        double width; 
        double height; 
    }  _bufferSize;
    bool  _canDraw;
    bool  _didTeardown;
    TSDGLTextureInfo * _edgeDistanceFieldTextureInfo;
    bool  _isValid;
    <TSDAnimationRandomGenerator> * _randomGenerator;
    struct CGPoint { 
        double x; 
        double y; 
    }  _randomStrokePoint;
    TSDGLShader * _shader;
    NSArray * _strokeLineSegment;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _textureEdgeInsetsAdjustmentMatrix;
    TSDGLTextureInfo * _traceTextureInfo;
    long long  _traceTextureMaxValue;
    struct __CFArray { } * _zeroesArray;
}

@property (nonatomic, readonly) TSDGLTextureInfo *edgeDistanceFieldTextureInfo;
@property (nonatomic, readonly) bool isValid;
@property (nonatomic, readonly) <TSDAnimationRandomGenerator> *randomGenerator;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } randomStrokePoint;
@property (nonatomic, readonly) TSDGLShader *shader;
@property (nonatomic, readonly) NSArray *strokeLineSegment;
@property (nonatomic, readonly) TSDGLTextureInfo *traceTextureInfo;

+ (void)didEndUsingShaders;
+ (void)willBeginUsingShaders;

- (void)dealloc;
- (id)description;
- (id)edgeDistanceFieldTextureInfo;
- (id)initWithTR:(id)arg1 strokeWidth:(double)arg2 downsampleScale:(double)arg3 clockwise:(bool)arg4 GLState:(id)arg5 randomGenerator:(id)arg6;
- (bool)isValid;
- (void)p_addNearbyPixelsToArray:(struct __CFArray { }*)arg1 pixel:(struct CGPoint { double x1; double x2; })arg2 edgeDataBuffer:(float*)arg3 dataBuffer:(char *)arg4 tempDataBuffer:(char *)arg5 localMaximumLookupBuffer:(bool*)arg6 bufferSize:(struct CGSize { double x1; double x2; })arg7;
- (void)p_fillFloatBuffer:(float*)arg1 withRGBAData:(char *)arg2 bufferSize:(struct CGSize { double x1; double x2; })arg3;
- (bool)p_generateTraceTextureInfoWithStrokeWidth:(double)arg1 clockwise:(bool)arg2 randomGenerator:(id)arg3;
- (id)p_houghTransformWithZeroes:(struct __CFArray { }*)arg1 bufferSize:(struct CGSize { double x1; double x2; })arg2;
- (struct CGPoint { double x1; double x2; })p_normalizedPointInTexturedRectangleFrameFromPoint:(struct CGPoint { double x1; double x2; })arg1 inBufferSize:(struct CGSize { double x1; double x2; })arg2;
- (id)randomGenerator;
- (struct CGPoint { double x1; double x2; })randomStrokePoint;
- (void)setupShaderWithPercent:(double)arg1 MVPMatrix:(struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })arg2 opacity:(double)arg3 color:(struct { float x1; float x2; float x3; float x4; })arg4 strokeFadeHardnessLeading:(double)arg5 strokeFadeHardnessTrailing:(double)arg6;
- (id)shader;
- (id)strokeLineSegment;
- (void)teardown;
- (id)traceTextureInfo;

@end
