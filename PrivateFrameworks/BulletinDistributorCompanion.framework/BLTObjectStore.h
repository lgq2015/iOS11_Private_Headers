/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

@interface BLTObjectStore : NSObject <BLTObjectCacheDelegate> {
    Class  _elementClass;
    NSString * _path;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithPath:(id)arg1 elementClass:(Class)arg2;
- (void)objectCache:(id)arg1 keysWithBlock:(id /* block */)arg2;
- (void)objectCache:(id)arg1 objectForKey:(id)arg2 withBlock:(id /* block */)arg3;
- (void)objectCache:(id)arg1 removeObjectForKey:(id)arg2 withBlock:(id /* block */)arg3;
- (void)objectCache:(id)arg1 storeObject:(id)arg2 withKey:(id)arg3 withBlock:(id /* block */)arg4;

@end
