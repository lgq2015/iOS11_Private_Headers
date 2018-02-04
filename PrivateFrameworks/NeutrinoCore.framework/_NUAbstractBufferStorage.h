/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface _NUAbstractBufferStorage : _NUAbstractStorage {
    const void * _bytes;
    void * _mutableBytes;
    long long  _rowBytes;
}

@property (readonly) const void*bytes;
@property (readonly) void*mutableBytes;
@property (readonly) long long rowBytes;
@property (readonly) long long sizeInBytes;

- (const void*)bytes;
- (const void*)bytesAtPoint:(struct { long long x1; long long x2; })arg1;
- (long long)copyFromStorage:(id)arg1 region:(id)arg2;
- (void*)mutableBytes;
- (void*)mutableBytesAtPoint:(struct { long long x1; long long x2; })arg1;
- (long long)rowBytes;
- (long long)sizeInBytes;

@end
