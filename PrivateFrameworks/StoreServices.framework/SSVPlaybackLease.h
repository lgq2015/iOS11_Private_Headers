/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSVPlaybackLease : NSObject {
    NSMutableArray * _assetOperations;
    NSData * _certificateData;
    NSString * _certificateURLBagKey;
    SSVPlaybackLeaseConfiguration * _configuration;
    <SSVPlaybackLeaseDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    SSVFairPlaySubscriptionController * _fairPlaySubscriptionController;
    unsigned long long  _kdMovieIdentifier;
    SSVPlaybackLeaseRequest * _lastKDLeaseRequest;
    int  _leaseDidEndNotificationToken;
    NSDate * _leaseExpirationDate;
    long long  _leaseType;
    SSVRefreshSubscriptionRequest * _offlineSlotRequest;
    SSVBarrierOperationQueue * _operationQueue;
    NSObject<OS_dispatch_source> * _refreshTimer;
    bool  _refreshesAutomatically;
    NSObject<OS_dispatch_queue> * _serialQueue;
    SSURLBag * _urlBag;
}

@property (copy) NSData *certificateData;
@property (copy) NSString *certificateURLBagKey;
@property <SSVPlaybackLeaseDelegate> *delegate;
@property bool refreshesAutomatically;

- (void).cxx_destruct;
- (id)_addOperationWithRequest:(id)arg1 configurationURL:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)_cancelRefreshTimer;
- (void)_endLease;
- (void)_fireRefreshTimer;
- (id)_initSSVPlaybackLease;
- (void)_sendLeaseDidEndWithEndReasonType:(unsigned long long)arg1;
- (bool)_shouldEndLeaseForError:(id)arg1 returningEndReasonType:(unsigned long long*)arg2;
- (void)_startRefreshTimerIfNecessary;
- (void)_updateForLeaseResponse:(id)arg1 error:(id)arg2;
- (void)_updateWithLeaseResponseError:(id)arg1;
- (void)beginLeaseWithRequest:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)cancelAllAssetRequests;
- (id)certificateData;
- (id)certificateURLBagKey;
- (void)dealloc;
- (id)delegate;
- (void)endLease;
- (void)getAssetWithRequest:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)getCertificateDataWithCompletionBlock:(id /* block */)arg1;
- (id)init;
- (id)initWithLeaseConfiguration:(id)arg1;
- (id)initWithURLBag:(id)arg1;
- (id)initWithURLBag:(id)arg1 leaseType:(long long)arg2;
- (void)preheatLeaseRequestsWithCompletionBlock:(id /* block */)arg1;
- (void)refreshLeaseWithRequest:(id)arg1 completionBlock:(id /* block */)arg2;
- (bool)refreshesAutomatically;
- (void)setCertificateData:(id)arg1;
- (void)setCertificateURLBagKey:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setRefreshesAutomatically:(bool)arg1;
- (void)updateWithExternalLeaseResponseError:(id)arg1;

@end
