/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
 */

@interface TSUSharedResourceController : NSObject {
    NSString * _UUID;
    NSObject<OS_dispatch_group> * _accessInProgressGroup;
    int  _acquirerCount;
    <TSUSharedResourceControllerDelegate> * _delegate;
    struct { 
        unsigned int canWaitOnMainThread : 1; 
        unsigned int acquiresResourceAsynchronously : 1; 
        unsigned int hasResource : 1; 
    }  _flags;
    NSString * _hasResourceForThreadKey;
    id  _resource;
    NSString * _resourceForThreadKey;
    NSCondition * _resourceLock;
    int  _threadsAcquiringResourceCount;
    int  _waitCount;
    NSCondition * _waitLock;
    NSObject<OS_dispatch_group> * _willEndAccessGroup;
}

@property (nonatomic, readonly) NSString *UUID;
@property (nonatomic) bool canWaitOnMainThread;

- (void).cxx_destruct;
- (id)UUID;
- (void)acquireResourceWithLockAndPerformSynchronousAccessUsingBlock:(id /* block */)arg1;
- (bool)canWaitOnMainThread;
- (void)dealloc;
- (id)description;
- (void)didBeginAccessToResource:(id)arg1;
- (void)didBeginAccessToResource:(id)arg1 isFromThreadWaitingToAcquireResource:(bool)arg2;
- (id)init;
- (id)initWithName:(id)arg1 delegate:(id)arg2;
- (bool)performSynchronousAccessIfResourceIsAvailable:(bool)arg1 usingBlock:(id /* block */)arg2;
- (bool)performSynchronousAccessIfResourceIsAvailableUsingBlock:(id /* block */)arg1;
- (void)performSynchronousAccessUsingBlock:(id /* block */)arg1;
- (void)setCanWaitOnMainThread:(bool)arg1;
- (void)waitForResourceWithLockAndPerformSynchronousAccessUsingBlock:(id /* block */)arg1;
- (void)wakeUpAllThreadsWaitingForResourceWithLock;
- (void)willEndAccessToResource;
- (void)willEndAccessToResourceForcingToWaitForPendingAccesses:(bool)arg1;

@end
