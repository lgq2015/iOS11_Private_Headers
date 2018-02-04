/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCMinHeap : NSObject <NSFastEnumeration> {
    id * _array;
    id /* block */  _comparator;
    unsigned long long  _count;
    unsigned long long  _mutation;
    NSMapTable * _objects;
    unsigned long long  _size;
}

@property (nonatomic, readonly) unsigned long long count;

- (void).cxx_destruct;
- (void)_moveDown:(id)arg1 index:(unsigned long long)arg2;
- (void)_moveUp:(id)arg1 index:(unsigned long long)arg2;
- (void)_moveUpOrDown:(id)arg1 index:(unsigned long long)arg2;
- (void)_shrink;
- (void)addObject:(id)arg1;
- (bool)check;
- (bool)containsObject:(id)arg1;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (void)dealloc;
- (id)description;
- (id)firstObject;
- (void)firstObjectWeightChanged;
- (id)init;
- (id)initWithComparator:(id /* block */)arg1;
- (void)objectWeightChanged:(id)arg1;
- (void)removeAllObjects;
- (void)removeFirstObject;
- (void)removeObject:(id)arg1;

@end
