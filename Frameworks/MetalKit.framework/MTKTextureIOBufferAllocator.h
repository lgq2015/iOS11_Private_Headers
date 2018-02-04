/* made by EzioChiu
   Image: /System/Library/Frameworks/MetalKit.framework/MetalKit
 */

@interface MTKTextureIOBufferAllocator : NSObject <TXRBufferAllocator> {
    <MTLDevice> * _device;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithDevice:(id)arg1;
- (id)newBufferWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2 deallocNotification:(id /* block */)arg3 error:(id*)arg4;
- (id)newBufferWithLength:(unsigned long long)arg1;

@end
