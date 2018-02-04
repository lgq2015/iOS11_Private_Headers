/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDBackingStoreCacheShareGroup : HMFObject {
    HMDBackingStoreCacheGroup * _group;
    NSString * _rootRecordName;
    CKShare * _share;
    long long  _shareID;
    NSString * _targetOwner;
    NSArray * _users;
}

@property (readonly) HMDBackingStoreCacheGroup *group;
@property (readonly) NSString *rootRecordName;
@property (readonly) CKShare *share;
@property long long shareID;
@property (readonly) NSString *targetOwner;
@property (readonly) NSArray *users;

- (void).cxx_destruct;
- (id)dumpDebug;
- (id)group;
- (id)initWithShareID:(long long)arg1 group:(id)arg2 rootRecord:(id)arg3 targetOwner:(id)arg4 share:(id)arg5 users:(id)arg6;
- (id)rootRecordName;
- (void)setShareID:(long long)arg1;
- (id)share;
- (long long)shareID;
- (id)targetOwner;
- (id)users;

@end
