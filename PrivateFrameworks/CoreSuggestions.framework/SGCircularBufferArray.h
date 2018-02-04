/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

@interface SGCircularBufferArray : NSObject <NSFastEnumeration> {
    NSMutableArray * _backingStore;
    unsigned long long  _capacity;
    unsigned long long  _currentIndex;
    unsigned long long  _mutationDetector;
}

- (void).cxx_destruct;
- (void)addObject:(id)arg1;
- (id)allObjects;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (id)initWithCapacity:(unsigned long long)arg1;

@end