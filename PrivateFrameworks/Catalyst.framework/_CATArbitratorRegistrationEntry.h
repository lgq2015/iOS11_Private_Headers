/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
 */

@interface _CATArbitratorRegistrationEntry : NSObject {
    unsigned long long  _currentCount;
    unsigned long long  mMaxConcurrentCount;
    NSMutableArray * mPendingWaits;
    NSObject<OS_dispatch_queue> * mPendingWaitsQueue;
    NSObject<OS_dispatch_source> * mPendingWaitsSource;
    id  mResource;
}

@property (nonatomic, readonly) unsigned long long currentCount;

- (void).cxx_destruct;
- (unsigned long long)currentCount;
- (id)initWithResource:(id)arg1 maxConcurrentCount:(unsigned long long)arg2;
- (void)invalidate;
- (id)makeResourceProxyIfPossible:(bool)arg1;
- (id)makeResourceProxyIfPossibleWithoutLocking:(bool)arg1;
- (void)pendingWaitsNeedServicing;
- (void)resourceProxyDidInvalidate:(id)arg1;
- (void)servicePendingWaitTokens;
- (id)waitForResourceWithExclusive:(bool)arg1 group:(id)arg2;

@end
