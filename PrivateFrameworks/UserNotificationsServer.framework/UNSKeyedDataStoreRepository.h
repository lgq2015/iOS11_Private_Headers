/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
 */

@interface UNSKeyedDataStoreRepository : NSObject {
    NSString * _directory;
    long long  _maxObjectsPerKey;
    NSString * _pathExtension;
}

- (void).cxx_destruct;
- (id)_addObject:(id)arg1 replaceObjectUsingTest:(id /* block */)arg2 atPath:(id)arg3;
- (id)_dataAtPath:(id)arg1;
- (id)_objectsAtPath:(id)arg1;
- (id)_pathForKey:(id)arg1;
- (void)_removeItemAtPath:(id)arg1;
- (id)_removeObjectsPassingTest:(id /* block */)arg1 atPath:(id)arg2;
- (bool)_saveObjects:(id)arg1 atPath:(id)arg2;
- (void)_setObjects:(id)arg1 atPath:(id)arg2;
- (id)addObject:(id)arg1 forKey:(id)arg2;
- (id)addObject:(id)arg1 replaceObjectUsingTest:(id /* block */)arg2 forKey:(id)arg3;
- (id)allKeys;
- (id)initWithDirectory:(id)arg1 pathExtension:(id)arg2 maxObjectsPerKey:(long long)arg3;
- (id)objectsForKey:(id)arg1;
- (void)removeAllObjectsForKey:(id)arg1;
- (void)removeDataStoreRepository;
- (id)removeObjectsPassingTest:(id /* block */)arg1 forKey:(id)arg2;
- (void)removeStoreForKey:(id)arg1;
- (void)setObjects:(id)arg1 forKey:(id)arg2;

@end
