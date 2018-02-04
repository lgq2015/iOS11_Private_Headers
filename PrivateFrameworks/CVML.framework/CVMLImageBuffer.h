/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CVML.framework/CVML
 */

@interface CVMLImageBuffer : NSObject {
    int  _orientation;
    bool  _orientationPassedIn;
    struct CGImage { } * _origCGImage;
    CIImage * _origCIImage;
    NSData * _origData;
    unsigned long long  _origImageHeight;
    struct CGImageSource { } * _origImageSource;
    struct CGImageSource { } * _origImageSourceSubsample2;
    struct CGImageSource { } * _origImageSourceSubsample4;
    struct CGImageSource { } * _origImageSourceSubsample8;
    unsigned long long  _origImageWidth;
    struct __CVBuffer { } * _origPixelBuffer;
    NSURL * _origURL;
    struct __CFArray { } * _pixelBufferReps;
}

@property (readonly) NSURL *fileURL;
@property (readonly) unsigned long long height;
@property (readonly) unsigned long long width;

+ (id)imageBufferWithBuffer:(struct __CVBuffer { }*)arg1 options:(id)arg2;
+ (id)imageBufferWithBufferOrImage:(id)arg1 options:(id)arg2;
+ (id)imageBufferWithCGImage:(struct CGImage { }*)arg1 options:(id)arg2;
+ (id)imageBufferWithCIImage:(id)arg1 options:(id)arg2;
+ (id)imageBufferWithData:(id)arg1 options:(id)arg2;
+ (id)imageBufferWithURL:(id)arg1 options:(id)arg2;

- (void).cxx_destruct;
- (bool)_useCoreImageForFormat:(unsigned int)arg1;
- (struct __CVBuffer { }*)bufferWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 format:(unsigned int)arg3 options:(id)arg4 error:(id*)arg5;
- (struct CGColorSpace { }*)copyColorspaceForFormat:(unsigned int)arg1 bitmapInfo:(unsigned int*)arg2;
- (struct __CVBuffer { }*)createBufferWithMaxSideLengthOf:(unsigned long long)arg1 andPixelFormat:(unsigned int)arg2 andOptions:(id)arg3 error:(id*)arg4;
- (struct __CVBuffer { }*)createCroppedBufferWithMaxSideLengthOf:(unsigned long long)arg1 andCropBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 andPixelFormat:(unsigned int)arg3 andOptions:(id)arg4 error:(id*)arg5;
- (struct __CVBuffer { }*)croppedBufferWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 format:(unsigned int)arg3 cropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 options:(id)arg5 error:(id*)arg6;
- (void)dealloc;
- (id)fileURL;
- (unsigned long long)height;
- (id)initWithBuffer:(struct __CVBuffer { }*)arg1 options:(id)arg2;
- (id)initWithBufferOrImage:(id)arg1 options:(id)arg2;
- (id)initWithCGImage:(struct CGImage { }*)arg1 options:(id)arg2;
- (id)initWithCIImage:(id)arg1 options:(id)arg2;
- (id)initWithData:(id)arg1 options:(id)arg2;
- (id)initWithOptions:(id)arg1;
- (id)initWithURL:(id)arg1 options:(id)arg2;
- (bool)isBufferInMemoryWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 format:(unsigned int)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })makeClippedRectAgainstImageExtentUsingOriginalRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)processInChunksOfSize:(unsigned long long)arg1 overlapFraction:(float)arg2 options:(id)arg3 roi:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 handler:(id /* block */)arg5 error:(id*)arg6;
- (void)purgeCachedRepresentations;
- (unsigned long long)width;

@end
