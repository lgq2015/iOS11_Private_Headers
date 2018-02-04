/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICMusicSubscriptionLeaseSession : NSObject {
    NSObject<OS_dispatch_queue> * _accessQueue;
    long long  _automaticRefreshCount;
    NSObject<OS_dispatch_source> * _automaticRefreshTimerSource;
    NSObject<OS_dispatch_queue> * _calloutQueue;
    <ICMusicSubscriptionLeaseSessionDelegate> * _delegate;
    bool  _delegatedLeaseSession;
    bool  _isPerformingAutomaticRefresh;
    NSString * _lastRequestHouseholdID;
    NSDate * _leaseExpirationDate;
    ICMusicSubscriptionLeaseStatus * _leaseStatus;
    long long  _pendingLeaseAcquisitionRevisionID;
    ICStoreRequestContext * _requestContext;
}

@property (getter=isAutomaticallyRefreshingLease, nonatomic, readonly) bool automaticallyRefreshingLease;
@property (nonatomic, readonly) <ICMusicSubscriptionLeaseSessionDelegate> *delegate;
@property (getter=isDelegatedLeaseSession, nonatomic, readonly) bool delegatedLeaseSession;
@property (nonatomic, readonly, copy) NSString *lastRequestHouseholdID;
@property (nonatomic, readonly, copy) NSDate *leaseExpirationDate;
@property (nonatomic, readonly, copy) ICMusicSubscriptionLeaseStatus *leaseStatus;
@property (nonatomic, readonly, copy) ICStoreRequestContext *requestContext;

+ (id)_sharedOperationQueue;

- (void).cxx_destruct;
- (id)_initWithRequestContext:(id)arg1 isDelegatedLeaseSession:(bool)arg2 delegate:(id)arg3 leaseStatus:(id)arg4;
- (id)_newOperationForPlaybackRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_onQueue_setLeaseStatus:(id)arg1 updatedLeaseExpirationDate:(id)arg2;
- (void)_performAutomaticRefresh;
- (void)_receivedUserInteractionEvent;
- (void)_setLeaseStatus:(id)arg1 updatedLeaseExpirationDate:(id)arg2;
- (void)_updateAutomaticRefreshProperties;
- (void)beginAutomaticallyRefreshingLease;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (void)endAutomaticallyRefreshingLease;
- (bool)isAutomaticallyRefreshingLease;
- (bool)isDelegatedLeaseSession;
- (id)lastRequestHouseholdID;
- (id)leaseExpirationDate;
- (id)leaseStatus;
- (id)performPlaybackRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)requestContext;

@end
