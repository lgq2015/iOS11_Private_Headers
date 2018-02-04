/* made by EzioChiu
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNMTLBufferAllocator : NSObject {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _allocatorLock;
    unsigned long long  _bufferSize;
    SCNFixedSizePage * _currentAllocatorPage;
    <MTLDevice> * _device;
    unsigned long long  _elementSize;
    NSString * _name;
    NSMutableArray * _pages;
}

@property (nonatomic, readonly) unsigned long long bufferSize;
@property (nonatomic, readonly) unsigned long long elementSize;

- (id)_newSubBuffer;
- (unsigned long long)bufferSize;
- (void)dealloc;
- (unsigned long long)elementSize;
- (id)initWithDevice:(id)arg1 fixedSizeElement:(unsigned long long)arg2 buffersize:(unsigned long long)arg3 name:(id)arg4;
- (id)newSubBufferWithBytes:(const void*)arg1 length:(unsigned long long)arg2 blitEncoder:(id)arg3;

@end
