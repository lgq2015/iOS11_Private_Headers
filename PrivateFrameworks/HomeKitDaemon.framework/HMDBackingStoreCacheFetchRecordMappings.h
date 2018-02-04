/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDBackingStoreCacheFetchRecordMappings : HMDBackingStoreOperation {
    id /* block */  _fetchResult;
    HMDBackingStoreCacheGroup * _group;
    HMDBackingStoreCacheShareGroup * _share;
}

@property (nonatomic, copy) id /* block */ fetchResult;
@property (nonatomic, retain) HMDBackingStoreCacheGroup *group;
@property (nonatomic, retain) HMDBackingStoreCacheShareGroup *share;

- (void).cxx_destruct;
- (id /* block */)fetchResult;
- (id)group;
- (id)initWithGroup:(id)arg1 fetchResult:(id /* block */)arg2;
- (id)initWithShareGroup:(id)arg1 fetchResult:(id /* block */)arg2;
- (id)mainReturningError;
- (void)setFetchResult:(id /* block */)arg1;
- (void)setGroup:(id)arg1;
- (void)setShare:(id)arg1;
- (id)share;

@end
