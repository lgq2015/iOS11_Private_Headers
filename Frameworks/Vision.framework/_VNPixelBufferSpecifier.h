/* made by EzioChiu
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface _VNPixelBufferSpecifier : VNImageSpecifier {
    struct __CVBuffer { } * _pixelBuffer;
}

- (void)dealloc;
- (id)description;
- (id)initWithCVPixelBuffer:(struct __CVBuffer { }*)arg1;
- (id)newImageBufferWithOptions:(id)arg1 error:(id*)arg2;
- (id)observationsCacheKey;
- (struct __CVBuffer { }*)pixelBuffer;

@end
