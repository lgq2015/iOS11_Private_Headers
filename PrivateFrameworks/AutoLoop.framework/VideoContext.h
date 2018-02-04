/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AutoLoop.framework/AutoLoop
 */

@interface VideoContext : NSObject {
    bool  _colorManagement;
    CIContext * ciCtx;
    NSDictionary * pixelAttrs;
    unsigned int  pixelFormat;
    unsigned int  pixelFormatFlags;
    VideoWriter * writer;
}

@property (readonly) CIContext *ciCtx;
@property bool colorManagement;
@property (readonly) NSDictionary *pixelAttrs;
@property (readonly) unsigned int pixelFormat;
@property (readonly) unsigned int pixelFormatFlags;
@property (readonly) VideoWriter *writer;

- (void).cxx_destruct;
- (int)appendFrame:(id)arg1 frameTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 srcPixBuf:(struct __CVBuffer { }*)arg3;
- (id)ciCtx;
- (bool)colorManagement;
- (struct __CVBuffer { }*)createPixelBuffer;
- (struct __CVBuffer { }*)createPixelBuffer:(unsigned long long)arg1 height:(unsigned long long)arg2;
- (id)initWithWriter:(id)arg1 pixelFormatFlags:(unsigned int)arg2;
- (id)initWithWriter:(id)arg1 pixelFormatFlags:(unsigned int)arg2 colorManagement:(bool)arg3;
- (id)pixelAttrs;
- (struct __CVBuffer { }*)pixelBufferFromImage:(id)arg1;
- (struct __CVBuffer { }*)pixelBufferFromImage:(id)arg1 withAttachFrom:(struct __CVBuffer { }*)arg2;
- (unsigned int)pixelFormat;
- (unsigned int)pixelFormatFlags;
- (void)setColorManagement:(bool)arg1;
- (id)writer;

@end
