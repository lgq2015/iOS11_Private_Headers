/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3SortMapFaultingEntryArray : NSMutableArray {
    ML3DatabaseConnection * _connection;
    NSMutableDictionary * _dirtyInserts;
}

- (void).cxx_destruct;
- (void)addObject:(id)arg1;
- (unsigned long long)count;
- (void)enumerateDirtyObjectsUsingBlock:(id /* block */)arg1;
- (id)initWithConnection:(id)arg1;
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)objectAtIndex:(unsigned long long)arg1;
- (void)removeLastObject;
- (void)removeObjectAtIndex:(unsigned long long)arg1;
- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;

@end
