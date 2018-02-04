/* made by EzioChiu
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNFixedSizePage : NSObject {
    <MTLBuffer> * _buffer;
    unsigned long long  _elementSize;
    NSMutableIndexSet * _freeIndices;
}

@property (nonatomic, readonly) <MTLBuffer> *buffer;

- (unsigned long long)_allocateElement;
- (id)buffer;
- (void)dealloc;
- (void)deallocateElementAtOffset:(unsigned long long)arg1;
- (bool)hasFreeElementsLeft;
- (id)initWithBuffer:(id)arg1 elementSize:(unsigned long long)arg2;
- (bool)isFull;
- (id)newSubBuffer;

@end
