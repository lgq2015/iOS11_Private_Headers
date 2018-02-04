/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSCacheObjectStore : NSObject {
    SSDatabaseCache * _databaseCache;
    NSMutableSet * _factories;
    NSObject<OS_dispatch_queue> * _serialQueue;
    NSString * _sessionIdentifier;
}

- (id)_factoryForTypeIdentifier:(id)arg1;
- (void)addCacheObjectFactory:(id)arg1;
- (bool)addObject:(id)arg1 withItemIdentifier:(id)arg2;
- (id)cacheObjectWithItemIdentifier:(id)arg1;
- (void)clearSession;
- (void)dealloc;
- (id)description;
- (id)initWithSessionIdentifier:(id)arg1;
- (void)removeCacheObjectFactory:(id)arg1;
- (bool)removeObjectWithItemIdentifier:(id)arg1;

@end
