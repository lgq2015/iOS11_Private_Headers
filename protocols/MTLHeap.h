/* made by EzioChiu.
 */

@protocol MTLHeap <NSObject>

@required

- (unsigned long long)cpuCacheMode;
- (unsigned long long)currentAllocatedSize;
- (<MTLDevice> *)device;
- (NSString *)label;
- (unsigned long long)maxAvailableSizeWithAlignment:(unsigned long long)arg1;
- (<MTLBuffer> *)newBufferWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2;
- (<MTLTexture> *)newTextureWithDescriptor:(MTLTextureDescriptor *)arg1;
- (void)setLabel:(NSString *)arg1;
- (unsigned long long)setPurgeableState:(unsigned long long)arg1;
- (unsigned long long)size;
- (unsigned long long)storageMode;
- (unsigned long long)usedSize;

@end
