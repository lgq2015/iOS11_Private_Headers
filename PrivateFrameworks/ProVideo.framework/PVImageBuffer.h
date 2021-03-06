/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

@interface PVImageBuffer : NSObject {
    <PVImageBufferImpl> * _imageBufferImpl;
    struct HGSynchronizable { int (**x1)(); struct _opaque_pthread_mutex_t { long long x_2_1_1; BOOL x_2_1_2[56]; } x2; struct _opaque_pthread_t {} *x3; unsigned long long x4; struct _opaque_pthread_cond_t { long long x_5_1_1; BOOL x_5_1_2[40]; } x5; } * _lock;
}

+ (id)imageWithCGImage:(struct CGImage { }*)arg1;
+ (id)imageWithCVPixelBuffer:(struct __CVBuffer { }*)arg1;
+ (id)imageWithHGCVPixelBuffer:(struct HGRef<HGCVPixelBuffer> { struct HGCVPixelBuffer {} *x1; })arg1;
+ (id)imageWithUIImage:(id)arg1;

- (void).cxx_destruct;
- (bool)canCreateCVPixelBuffer;
- (struct CGImage { }*)cgImage;
- (struct __CVBuffer { }*)cvPixelBuffer;
- (bool)cvPixelBufferRequiresCopy;
- (struct __CVBuffer { }*)cvPixelBufferWithColorSpace:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)initWithImageBufferImpl:(id)arg1;
- (struct CGSize { double x1; double x2; })size;
- (id)uiImage;

@end
