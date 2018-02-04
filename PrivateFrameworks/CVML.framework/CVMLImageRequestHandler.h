/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CVML.framework/CVML
 */

@interface CVMLImageRequestHandler : CVMLRequestHandler {
    CVMLImageBuffer * _imageBuffer;
    NSDictionary * _properties;
}

@property (readonly) CVMLImageBuffer *imageBuffer;
@property (readonly) NSDictionary *properties;

+ (id)handlerForBuffer:(struct __CVBuffer { }*)arg1 options:(id)arg2;
+ (id)handlerForCGImage:(struct CGImage { }*)arg1 options:(id)arg2;
+ (id)handlerForCIImage:(id)arg1 options:(id)arg2;
+ (id)handlerForData:(id)arg1 options:(id)arg2;
+ (id)handlerForURL:(id)arg1 options:(id)arg2;

- (void).cxx_destruct;
- (void)dealloc;
- (id)imageBuffer;
- (id)initWithBuffer:(struct __CVBuffer { }*)arg1 options:(id)arg2;
- (id)initWithCGImage:(struct CGImage { }*)arg1 options:(id)arg2;
- (id)initWithCIImage:(id)arg1 options:(id)arg2;
- (id)initWithData:(id)arg1 options:(id)arg2;
- (id)initWithURL:(id)arg1 options:(id)arg2;
- (id)properties;
- (void)releaseOriginalBuffer;
- (bool)useFullImageBufferForFaces:(id)arg1;

@end
