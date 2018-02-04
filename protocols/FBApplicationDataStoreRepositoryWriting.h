/* made by EzioChiu.
 */

@protocol FBApplicationDataStoreRepositoryWriting <NSObject>

@required

- (void)beginBatchedUpdate;
- (void)endBatchedUpdate;
- (void)flushSynchronously;
- (void)removeAllObjectsForApplication:(NSString *)arg1;
- (void)removeObjectForKey:(NSString *)arg1 forApplication:(NSString *)arg2;
- (void)removeObjectsForKeys:(NSArray *)arg1 forApplication:(NSString *)arg2;
- (void)setObject:(id)arg1 forKey:(NSString *)arg2 forApplication:(NSString *)arg3;

@end
