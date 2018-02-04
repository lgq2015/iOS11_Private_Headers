/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDBackingStoreCacheCreateGroupOperation : HMDBackingStoreOperation {
    id /* block */  _creationBlock;
    HMDBackingStoreCacheGroup * _record;
}

@property (nonatomic, copy) id /* block */ creationBlock;
@property (nonatomic, retain) HMDBackingStoreCacheGroup *record;

- (void).cxx_destruct;
- (id /* block */)creationBlock;
- (id)initWithZone:(id)arg1 owner:(id)arg2 rootRecord:(id)arg3 subscriptionName:(id)arg4 subscription:(id)arg5 creationBlock:(id /* block */)arg6;
- (id)mainReturningError;
- (id)record;
- (void)setCreationBlock:(id /* block */)arg1;
- (void)setRecord:(id)arg1;

@end
