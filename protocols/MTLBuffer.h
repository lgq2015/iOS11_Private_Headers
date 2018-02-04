/* made by EzioChiu.
 */

@protocol MTLBuffer <MTLResource>

@required

- (void)addDebugMarker:(NSString *)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void*)contents;
- (void)didModifyRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (unsigned long long)length;
- (<MTLTexture> *)newTextureWithDescriptor:(MTLTextureDescriptor *)arg1 offset:(unsigned long long)arg2 bytesPerRow:(unsigned long long)arg3;
- (void)removeAllDebugMarkers;

@end
