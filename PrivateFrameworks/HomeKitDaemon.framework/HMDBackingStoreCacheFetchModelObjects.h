/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDBackingStoreCacheFetchModelObjects : HMDBackingStoreOperation {
    id /* block */  _fetchResult;
    HMDBackingStoreCacheGroup * _group;
    NSArray * _names;
    NSUUID * _parent;
    HMDBackingStoreCacheShareGroup * _share;
    NSString * _type;
    NSArray * _uuids;
}

@property (nonatomic, copy) id /* block */ fetchResult;
@property (nonatomic, retain) HMDBackingStoreCacheGroup *group;
@property (nonatomic, retain) NSArray *names;
@property (nonatomic, retain) NSUUID *parent;
@property (nonatomic, retain) HMDBackingStoreCacheShareGroup *share;
@property (nonatomic, retain) NSString *type;
@property (nonatomic, retain) NSArray *uuids;

- (void).cxx_destruct;
- (id /* block */)fetchResult;
- (id)group;
- (id)initWithGroup:(id)arg1 names:(id)arg2 fetchResult:(id /* block */)arg3;
- (id)initWithGroup:(id)arg1 parent:(id)arg2 type:(id)arg3 fetchResult:(id /* block */)arg4;
- (id)initWithGroup:(id)arg1 uuids:(id)arg2 fetchResult:(id /* block */)arg3;
- (id)initWithNames:(id)arg1 fetchResult:(id /* block */)arg2;
- (id)initWithParent:(id)arg1 type:(id)arg2 fetchResult:(id /* block */)arg3;
- (id)initWithShareGroup:(id)arg1 names:(id)arg2 fetchResult:(id /* block */)arg3;
- (id)initWithShareGroup:(id)arg1 parent:(id)arg2 type:(id)arg3 fetchResult:(id /* block */)arg4;
- (id)initWithShareGroup:(id)arg1 uuids:(id)arg2 fetchResult:(id /* block */)arg3;
- (id)initWithUUIDs:(id)arg1 fetchResult:(id /* block */)arg2;
- (id)mainReturningError;
- (id)names;
- (id)parent;
- (void)setFetchResult:(id /* block */)arg1;
- (void)setGroup:(id)arg1;
- (void)setNames:(id)arg1;
- (void)setParent:(id)arg1;
- (void)setShare:(id)arg1;
- (void)setType:(id)arg1;
- (void)setUuids:(id)arg1;
- (id)share;
- (id)type;
- (id)uuids;

@end
