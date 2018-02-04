/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSUConcurrentMutableDictionaryCache : NSObject {
    NSMutableDictionary * _cache;
    unsigned long long  _count;
    NSString * _name;
    TSUReadWriteQueue * _readWriteQueue;
}

@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, readonly) TSUReadWriteQueue *readWriteQueue;

- (void).cxx_destruct;
- (void)addEntriesFromDictionary:(id)arg1;
- (unsigned long long)count;
- (id)description;
- (void)enumerateKeysAndObjectsUsingBlock:(id /* block */)arg1;
- (id)init;
- (id)initWithName:(id)arg1;
- (id)objectForKey:(id)arg1;
- (id)objectsForKeys:(id)arg1 notFoundMarker:(id)arg2;
- (void)p_didEnterBackground:(id)arg1;
- (void)p_didReceiveMemoryWarning:(id)arg1;
- (void)performSyncWriteWithUnderlyingDictionary:(id /* block */)arg1;
- (id)readWriteQueue;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1 andWait:(bool)arg2;
- (void)removeObjectsForKeys:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;

@end
