/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

@interface BLTBBObserver : NSObject <BLTBBObserverDelegateDelegate> {
    BBObserver * _actualObserver;
    NSLock * _actualObserverLock;
    NSObject<OS_dispatch_queue> * _calloutQueue;
    BLTBBObserverDelegate * _delegateSurrogate;
    bool  _hasFeed;
    bool  _isGateway;
    NSString * _name;
    unsigned long long  _observerFeed;
    unsigned long long  _priority;
    NSObject<OS_dispatch_queue> * _queue;
}

+ (bool)instancesRespondToSelector:(SEL)arg1;
+ (id)surrogateGatewayWithQueue:(id)arg1 calloutQueue:(id)arg2 name:(id)arg3 priority:(unsigned long long)arg4;
+ (id)surrogateWithQueue:(id)arg1 calloutQueue:(id)arg2;

- (void).cxx_destruct;
- (void)_reconnectObserver;
- (void)dealloc;
- (void)forwardInvocation:(id)arg1;
- (id)initWithQueue:(id)arg1 calloutQueue:(id)arg2 name:(id)arg3 priority:(unsigned long long)arg4 isGateway:(bool)arg5;
- (bool)isKindOfClass:(Class)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)noteServerConnectionStateChanged:(bool)arg1;
- (bool)respondsToSelector:(SEL)arg1;
- (void)setDelegate:(id)arg1;
- (void)setObserverFeed:(unsigned long long)arg1;

@end
