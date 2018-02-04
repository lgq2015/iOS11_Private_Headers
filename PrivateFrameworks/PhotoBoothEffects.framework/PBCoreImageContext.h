/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoBoothEffects.framework/PhotoBoothEffects
 */

@interface PBCoreImageContext : PBContext {
    CIContext * _ciContext;
    EAGLContext * _glesContext;
    struct __CVBuffer { } * _inputPixelBuffer;
    struct __CVBuffer { } * _inputTexture;
    struct __CVPixelBufferPool { } * _largePool;
    struct CGSize { 
        double width; 
        double height; 
    }  _largePoolSize;
    struct _CAImageQueue { } * _outputImageQueue;
    struct __CVBuffer { } * _outputPixelBuffer;
    struct CGSize { 
        double width; 
        double height; 
    }  _outputSize;
    struct __CVBuffer { } * _outputTexture;
    bool  _render9Up;
    bool  _renderForSave;
    struct __CVPixelBufferPool { } * _smallPool;
    struct CGSize { 
        double width; 
        double height; 
    }  _smallPoolSize;
    struct __CVOpenGLESTextureCache { } * _textureCache;
}

- (void)_createPixelBuffer:(struct __CVBuffer {}**)arg1 withSize:(struct CGSize { double x1; double x2; })arg2;
- (id)ciContext;
- (struct __CVBuffer { }*)createCVPixelBufferForFilter:(id)arg1 inputPixelBuffer:(struct __CVBuffer { }*)arg2 mirrored:(bool)arg3;
- (void)dealloc;
- (id)initWithOptions:(id)arg1;
- (struct __CVBuffer { }*)inputPixelBuffer;
- (unsigned int)inputTexture;
- (struct __CVPixelBufferPool { }*)largePool;
- (struct _CAImageQueue { }*)outputImageQueue;
- (struct __CVBuffer { }*)outputPixelBuffer;
- (struct CGSize { double x1; double x2; })outputSize;
- (unsigned int)outputTexture;
- (bool)render9Up;
- (void)renderFilter:(id)arg1 inputPixelBuffer:(struct __CVBuffer { }*)arg2;
- (void)renderFilter:(id)arg1 inputPixelBuffer:(struct __CVBuffer { }*)arg2 mirrored:(bool)arg3;
- (bool)renderForSave;
- (void)renderNineUp:(id)arg1 inputPixelBuffer:(struct __CVBuffer { }*)arg2;
- (void)renderNineUp:(id)arg1 inputPixelBuffer:(struct __CVBuffer { }*)arg2 mirrored:(bool)arg3;
- (void)setInputPixelBuffer:(struct __CVBuffer { }*)arg1;
- (void)setInputPixelBuffer:(struct __CVBuffer { }*)arg1 mapTexture:(bool)arg2;
- (void)setLargePool:(struct __CVPixelBufferPool { }*)arg1;
- (void)setOutputImageQueue:(struct _CAImageQueue { }*)arg1;
- (void)setOutputPixelBuffer:(struct __CVBuffer { }*)arg1;
- (void)setOutputPixelBuffer:(struct __CVBuffer { }*)arg1 mapTexture:(bool)arg2;
- (void)setOutputSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setRender9Up:(bool)arg1;
- (void)setRenderForSave:(bool)arg1;
- (void)setSmallPool:(struct __CVPixelBufferPool { }*)arg1;
- (struct __CVPixelBufferPool { }*)smallPool;

@end
