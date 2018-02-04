/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUBufferAdapter : NSObject <NUBuffer> {
    const void * _bytes;
    NUPixelFormat * _format;
    long long  _rowBytes;
    struct { 
        long long width; 
        long long height; 
    }  _size;
    bool  _valid;
}

@property (nonatomic, readonly) const void*bytes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NUPixelFormat *format;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long rowBytes;
@property (nonatomic, readonly) struct { long long x1; long long x2; } size;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (const void*)bytes;
- (const void*)bytesAtPoint:(struct { long long x1; long long x2; })arg1;
- (id)format;
- (id)init;
- (id)initWithBuffer:(id)arg1;
- (id)initWithSize:(struct { long long x1; long long x2; })arg1 format:(id)arg2 rowBytes:(long long)arg3 bytes:(const void*)arg4;
- (void)invalidate;
- (long long)rowBytes;
- (struct { long long x1; long long x2; })size;

@end
