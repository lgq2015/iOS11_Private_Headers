/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface AVArrayQueueFeeder : AVQueueFeeder {
    NSMutableArray * _items;
}

- (void)dealloc;
- (id)init;
- (id)initWithArray:(id)arg1;
- (void)insertObject:(id)arg1 atIndex:(unsigned int)arg2;
- (unsigned long long)itemCount;
- (id)itemForIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfPaths;
- (id)pathAtIndex:(unsigned long long)arg1;
- (void)removeObjectAtIndex:(unsigned int)arg1;
- (void)shuffleWithCurrentIndex:(unsigned int)arg1;

@end