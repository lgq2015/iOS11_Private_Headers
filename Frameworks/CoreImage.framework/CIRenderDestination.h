/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIRenderDestination : NSObject {
    void * _priv;
}

@property unsigned long long alphaMode;
@property (nonatomic, retain) CIBlendKernel *blendKernel;
@property bool blendsInDestinationColorSpace;
@property (getter=isClamped) bool clamped;
@property (nonatomic) struct CGColorSpace { }*colorSpace;
@property (getter=isDithered) bool dithered;
@property (getter=isFlipped) bool flipped;
@property (readonly) unsigned long long height;
@property (readonly) unsigned long long width;

- (id)_initWithInternalRenderDestination:(struct RenderDestination { int (**x1)(); struct atomic<unsigned int> { unsigned int x_2_1_1; } x2; }*)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 format:(int)arg4 colorspace:(struct CGColorSpace { }*)arg5;
- (struct RenderDestination { int (**x1)(); struct atomic<unsigned int> { unsigned int x_2_1_1; } x2; }*)_internalRenderDestination;
- (/* Warning: unhandled struct encoding: '{CIRenderDestinationInternal=^{RenderDestination}QQi^{CGColorSpace}QBBiBB@}' */ struct CIRenderDestinationInternal { struct RenderDestination {} *x1; unsigned long long x2; unsigned long long x3; int x4; struct CGColorSpace {} *x5; unsigned long long x6; bool x7; bool x8; int x9; bool x10; bool x11; id x12; }*)_internalRepresentation;
- (struct RenderTask { int (**x1)(); struct atomic<unsigned int> { unsigned int x_2_1_1; } x2; char *x3; int x4; int x5; bool x6; unsigned long long x7; struct Node {} *x8; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_9_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_9_1_2; } x9; int x10; unsigned long long x11; struct __CFString {} *x12; struct vector<std::__1::unique_ptr<CI::TileTask, CI::ObjectDeleter<CI::TileTask> >, std::__1::allocator<std::__1::unique_ptr<CI::TileTask, CI::ObjectDeleter<CI::TileTask> > > > { struct unique_ptr<CI::TileTask, CI::ObjectDeleter<CI::TileTask> > {} *x_13_1_1; struct unique_ptr<CI::TileTask, CI::ObjectDeleter<CI::TileTask> > {} *x_13_1_2; struct __compressed_pair<std::__1::unique_ptr<CI::TileTask, CI::ObjectDeleter<CI::TileTask> > *, std::__1::allocator<std::__1::unique_ptr<CI::TileTask, CI::ObjectDeleter<CI::TileTask> > > > { struct unique_ptr<CI::TileTask, CI::ObjectDeleter<CI::TileTask> > {} *x_3_2_1; } x_13_1_3; } x13; double x14; unsigned long long x15; unsigned long long x16; }*)_render:(struct Image { int (**x1)(); struct atomic<unsigned int> { unsigned int x_2_1_1; } x2; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_3_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_3_1_2; } x3; struct __CFURL {} *x4; void *x5; void *x6; unsigned int x7; }*)arg1 withContext:(struct Context { int (**x1)(); struct atomic<unsigned int> { unsigned int x_2_1_1; } x2; struct CGColorSpace {} *x3; struct CGColorSpace {} *x4; int x5; bool x6; bool x7; bool x8; bool x9; struct CGContext {} *x10; float x11; bool x12; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_13_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_13_1_2; } x13; struct CGAffineTransform { double x_14_1_1; double x_14_1_2; double x_14_1_3; double x_14_1_4; double x_14_1_5; double x_14_1_6; } x14; unsigned int x15; unsigned long long x16; unsigned long long x17; int x18; bool x19; struct TreeCacheElement { unsigned long long x_20_1_1; struct Kernel {} *x_20_1_2; } x20[1024]; unsigned long long x21; struct ObjectCache<CI::Node> {} *x22; struct ObjectCache<CI::Node> {} *x23; double x24; double x25; id x26; struct RenderTask {} x27; int x28; bool x29; unsigned long long x30; id x31; }*)arg2;
- (unsigned long long)alphaMode;
- (id)blendKernel;
- (bool)blendsInDestinationColorSpace;
- (struct CGColorSpace { }*)colorSpace;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (int)ditherDepth;
- (int)format;
- (unsigned long long)height;
- (id)imageRepresentation;
- (id)init;
- (id)initWithBitmapData:(void*)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 bytesPerRow:(unsigned long long)arg4 format:(int)arg5;
- (id)initWithGLTexture:(unsigned int)arg1 target:(unsigned int)arg2 width:(unsigned long long)arg3 height:(unsigned long long)arg4;
- (id)initWithIOSurface:(id)arg1;
- (id)initWithMTLTexture:(id)arg1 commandBuffer:(id)arg2;
- (id)initWithPixelBuffer:(struct __CVBuffer { }*)arg1;
- (id)initWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 pixelFormat:(unsigned int)arg3 colorSpace:(struct CGColorSpace { }*)arg4 pixelBufferProvider:(id /* block */)arg5;
- (id)initWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 pixelFormat:(unsigned int)arg3 colorSpace:(struct CGColorSpace { }*)arg4 surfaceProvider:(id /* block */)arg5;
- (id)initWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 pixelFormat:(unsigned long long)arg3 commandBuffer:(id)arg4 mtlTextureProvider:(id /* block */)arg5;
- (bool)isClamped;
- (bool)isDithered;
- (bool)isFlipped;
- (void)setAlphaMode:(unsigned long long)arg1;
- (void)setBlendKernel:(id)arg1;
- (void)setBlendsInDestinationColorSpace:(bool)arg1;
- (void)setClamped:(bool)arg1;
- (void)setColorSpace:(struct CGColorSpace { }*)arg1;
- (void)setDithered:(bool)arg1;
- (void)setFlipped:(bool)arg1;
- (unsigned long long)width;

@end