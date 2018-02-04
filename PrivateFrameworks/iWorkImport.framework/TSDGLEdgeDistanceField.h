/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSDGLEdgeDistanceField : NSObject {
    TSDGLShader * _combineShader;
    TSDGLShader * _drawShader;
    TSDGLFrameBuffer * _exteriorFramebuffer;
    TSDGLShader * _floodShader;
    TSDGLFrameBufferTextureConfig * _framebufferTextureConfig;
    TSDGLShader * _gradientShader;
    unsigned int  _inputTexture;
    TSDGLFrameBuffer * _interiorFramebuffer;
    int  _oldViewport;
    TSDGLDataBuffer * _rectDataBuffer;
    TSDGLShader * _seedShader;
    TSDGLDataBuffer * _squareDataBuffer;
    struct CGSize { 
        double width; 
        double height; 
    }  _squareSize;
    struct CGSize { 
        double width; 
        double height; 
    }  _textureSize;
}

+ (unsigned int)distanceFieldTextureWithTexture:(unsigned int)arg1 textureSize:(struct CGSize { double x1; double x2; })arg2 maxDistance:(double)arg3;

- (void)dealloc;
- (id)initWithTexture:(unsigned int)arg1 textureSize:(struct CGSize { double x1; double x2; })arg2;
- (unsigned int)p_combinedTextureWithCurrentGLFramebuffer:(int)arg1;
- (void)p_floodTextureInFramebuffer:(id)arg1 maxDistance:(double)arg2;
- (unsigned int)p_gradientTextureFromCombinedTexture:(unsigned int)arg1 withCurrentGLFramebuffer:(int)arg2;
- (void)p_seedTextureFromTexture:(unsigned int)arg1 invertSeed:(bool)arg2;
- (void)p_setupBuffers;
- (void)p_setupShaders;
- (void)p_writeIntoSquareTexture;
- (void)teardown;

@end
