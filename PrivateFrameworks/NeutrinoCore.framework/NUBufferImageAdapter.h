/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUBufferImageAdapter : NSObject <NUBufferImage> {
    <NUBuffer> * _buffer;
    NUColorSpace * _colorSpace;
    NUImageLayout * _layout;
    NURegion * _validRegion;
}

@property (readonly) NUColorSpace *colorSpace;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NUPixelFormat *format;
@property (readonly) unsigned long long hash;
@property (readonly) NUImageLayout *layout;
@property (readonly) struct { long long x1; long long x2; } size;
@property (readonly) Class superclass;
@property (readonly, copy) NURegion *validRegion;

- (void).cxx_destruct;
- (id)colorSpace;
- (id)format;
- (id)immutableImageCopy;
- (id)init;
- (id)initWithBuffer:(id)arg1 colorSpace:(id)arg2 validRegion:(id)arg3;
- (id)layout;
- (id)mutableImageCopy;
- (id)mutablePurgeableImageCopy;
- (id)purgeableImageCopy;
- (void)readBufferRegion:(id)arg1 withBlock:(id /* block */)arg2;
- (struct { long long x1; long long x2; })size;
- (id)validRegion;

@end
