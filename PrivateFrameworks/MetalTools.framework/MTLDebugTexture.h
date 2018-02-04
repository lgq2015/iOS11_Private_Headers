/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
 */

@interface MTLDebugTexture : MTLToolsTexture {
    unsigned long long  _bytesPerRow;
    MTLDebugResource * _common;
    MTLDebugDevice * _debugDevice;
    MTLTextureDescriptor * _descriptor;
    unsigned long long  _offset;
    struct MTLPixelFormatInfo { 
        char *name; 
        unsigned int flags; 
        unsigned long long castClass; 
        union { 
            struct MTLNormalPixelFormatInfo { 
                unsigned long long pixelBytes; 
                unsigned char componentCount; 
                unsigned char alignment; 
                unsigned long long pixelBytesRender; 
                unsigned long long pixelBytesRenderMSAA; 
            } normal; 
            struct MTLCompressedPixelFormatInfo { 
                unsigned long long blockBytes; 
                unsigned long long blockWidth; 
                unsigned long long blockHeight; 
                unsigned long long blockDepth; 
            } compressed; 
        } type; 
    }  _pixelFormatInfo;
    unsigned long long  _plane;
    unsigned long long  _purgeableState;
    bool  _purgeableStateHasBeenSet;
    MTLDebugResourceAccessTracker * _resourceAccessTracker;
    unsigned int  _textureUsage;
    unsigned long long  _usageRequired;
}

@property (nonatomic, readonly) unsigned long long bytesPerRow;
@property (nonatomic, readonly) MTLDebugResource *common;
@property (nonatomic, readonly, copy) MTLTextureDescriptor *descriptor;
@property (nonatomic, readonly) unsigned long long offset;
@property (nonatomic, readonly) unsigned long long plane;
@property (nonatomic, readonly) unsigned long long purgeableState;
@property (nonatomic, readonly) bool purgeableStateHasBeenSet;
@property (nonatomic, readonly) bool resourceTrackingEnabled;
@property (nonatomic, readonly) unsigned int resourceUsage;
@property (nonatomic) unsigned int textureUsage;

- (void)_initResourceTrackingWithDevice:(id)arg1;
- (bool)_resourceHasMemory;
- (void)accessedByCPU;
- (void)accessedByGPU;
- (void)blitManagedToPrivate;
- (void)blitManagedToShared;
- (unsigned long long)bytesPerRow;
- (id)common;
- (void)dealloc;
- (id)description;
- (id)descriptor;
- (bool)doesAliasAllResources:(const id*)arg1 count:(unsigned long long)arg2;
- (bool)doesAliasAnyResources:(const id*)arg1 count:(unsigned long long)arg2;
- (bool)doesAliasResource:(id)arg1;
- (void)getBytes:(void*)arg1 bytesPerRow:(unsigned long long)arg2 bytesPerImage:(unsigned long long)arg3 fromRegion:(struct { struct { unsigned long long x_1_1_1; unsigned long long x_1_1_2; unsigned long long x_1_1_3; } x1; struct { unsigned long long x_2_1_1; unsigned long long x_2_1_2; unsigned long long x_2_1_3; } x2; })arg4 mipmapLevel:(unsigned long long)arg5 slice:(unsigned long long)arg6;
- (void)getBytes:(void*)arg1 bytesPerRow:(unsigned long long)arg2 bytesPerImage:(unsigned long long)arg3 fromRegion:(struct { struct { unsigned long long x_1_1_1; unsigned long long x_1_1_2; unsigned long long x_1_1_3; } x1; struct { unsigned long long x_2_1_1; unsigned long long x_2_1_2; unsigned long long x_2_1_3; } x2; })arg4 mipmapLevel:(unsigned long long)arg5 slice:(unsigned long long)arg6 options:(unsigned long long)arg7;
- (void)getBytes:(void*)arg1 bytesPerRow:(unsigned long long)arg2 fromRegion:(struct { struct { unsigned long long x_1_1_1; unsigned long long x_1_1_2; unsigned long long x_1_1_3; } x1; struct { unsigned long long x_2_1_1; unsigned long long x_2_1_2; unsigned long long x_2_1_3; } x2; })arg3 mipmapLevel:(unsigned long long)arg4;
- (id)heap;
- (id)initWithBaseTexture:(id)arg1 device:(id)arg2 buffer:(id)arg3 descriptor:(id)arg4 offset:(unsigned long long)arg5 bytesPerRow:(unsigned long long)arg6;
- (id)initWithBaseTexture:(id)arg1 device:(id)arg2 descriptor:(id)arg3;
- (id)initWithBaseTexture:(id)arg1 device:(id)arg2 descriptor:(id)arg3 plane:(unsigned long long)arg4;
- (id)initWithBaseTexture:(id)arg1 device:(id)arg2 texture:(id)arg3 descriptor:(id)arg4;
- (id)initWithBaseTexture:(id)arg1 device:(id)arg2 texture:(id)arg3 pixelFormat:(unsigned long long)arg4;
- (id)initWithBaseTexture:(id)arg1 device:(id)arg2 texture:(id)arg3 pixelFormat:(unsigned long long)arg4 textureType:(unsigned long long)arg5 levels:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg6 slices:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg7;
- (id)initWithBaseTexture:(id)arg1 heap:(id)arg2 device:(id)arg3 descriptor:(id)arg4;
- (void)makeAliasable;
- (id)newCompressedTextureViewWithPixelFormat:(unsigned long long)arg1 textureType:(unsigned long long)arg2 level:(unsigned long long)arg3 slice:(unsigned long long)arg4;
- (id)newTextureViewWithPixelFormat:(unsigned long long)arg1;
- (id)newTextureViewWithPixelFormat:(unsigned long long)arg1 textureType:(unsigned long long)arg2 levels:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 slices:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4;
- (id)newTextureViewWithPixelFormat:(unsigned long long)arg1 textureType:(unsigned long long)arg2 levels:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 slices:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4 swizzle:(unsigned long long)arg5;
- (unsigned long long)offset;
- (unsigned long long)plane;
- (unsigned long long)purgeableState;
- (bool)purgeableStateHasBeenSet;
- (void)replaceRegion:(struct { struct { unsigned long long x_1_1_1; unsigned long long x_1_1_2; unsigned long long x_1_1_3; } x1; struct { unsigned long long x_2_1_1; unsigned long long x_2_1_2; unsigned long long x_2_1_3; } x2; })arg1 mipmapLevel:(unsigned long long)arg2 slice:(unsigned long long)arg3 withBytes:(const void*)arg4 bytesPerRow:(unsigned long long)arg5 bytesPerImage:(unsigned long long)arg6;
- (void)replaceRegion:(struct { struct { unsigned long long x_1_1_1; unsigned long long x_1_1_2; unsigned long long x_1_1_3; } x1; struct { unsigned long long x_2_1_1; unsigned long long x_2_1_2; unsigned long long x_2_1_3; } x2; })arg1 mipmapLevel:(unsigned long long)arg2 slice:(unsigned long long)arg3 withBytes:(const void*)arg4 bytesPerRow:(unsigned long long)arg5 bytesPerImage:(unsigned long long)arg6 options:(unsigned long long)arg7;
- (void)replaceRegion:(struct { struct { unsigned long long x_1_1_1; unsigned long long x_1_1_2; unsigned long long x_1_1_3; } x1; struct { unsigned long long x_2_1_1; unsigned long long x_2_1_2; unsigned long long x_2_1_3; } x2; })arg1 mipmapLevel:(unsigned long long)arg2 withBytes:(const void*)arg3 bytesPerRow:(unsigned long long)arg4;
- (bool)requireUsage:(unsigned long long)arg1;
- (bool)resourceTrackingEnabled;
- (unsigned int)resourceUsage;
- (unsigned long long)setPurgeableState:(unsigned long long)arg1;
- (void)setTextureUsage:(unsigned int)arg1;
- (unsigned int)textureUsage;

@end
