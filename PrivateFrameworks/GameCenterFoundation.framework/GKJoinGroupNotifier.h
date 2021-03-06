/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKJoinGroupNotifier : NSObject {
    NSError * _error;
    GKJoinGroup * _group;
    NSLock * _lock;
    NSMutableArray * _updateQueue;
}

@property (retain) NSError *error;
@property (nonatomic) GKJoinGroup *group;
@property (retain) NSLock *lock;
@property (nonatomic, retain) NSMutableArray *updateQueue;

- (void)dealloc;
- (id)error;
- (id)group;
- (id)init;
- (id)lock;
- (oneway void)release;
- (id)retain;
- (void)setError:(id)arg1;
- (void)setGroup:(id)arg1;
- (void)setLock:(id)arg1;
- (void)setResult:(id /* block */)arg1 error:(id)arg2;
- (void)setUpdateQueue:(id)arg1;
- (id)updateQueue;

@end
