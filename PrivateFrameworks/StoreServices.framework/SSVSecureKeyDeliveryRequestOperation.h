/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSVSecureKeyDeliveryRequestOperation : NSOperation {
    NSDictionary * _URLBagDictionary;
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSURL * _certificateURL;
    double  _expirationTime;
    bool  _iTunesStoreRequest;
    NSURL * _keyServerURL;
    long long  _leaseAction;
    bool  _offline;
    NSData * _persistentContentKeyContext;
    double  _playbackStartTime;
    NSNumber * _rentalId;
    AVAssetResourceLoadingRequest * _resourceLoadingRequest;
    id /* block */  _responseBlock;
    NSData * _serverPlaybackContextData;
    <SSVSecureKeyDeliveryRequestOperationDelegate> * _serverPlaybackContextDataDelegate;
    bool  _shouldIncludeGUID;
    bool  _skippedRentalCheckout;
}

@property (getter=isITunesStoreRequest) bool ITunesStoreRequest;
@property (retain) NSURL *certificateURL;
@property (nonatomic, readonly) double expirationTime;
@property (retain) NSURL *keyServerURL;
@property (nonatomic) long long leaseAction;
@property bool offline;
@property (nonatomic, readonly, copy) NSData *persistentContentKeyContext;
@property (nonatomic, readonly) double playbackStartTime;
@property (copy) NSNumber *rentalId;
@property (retain) AVAssetResourceLoadingRequest *resourceLoadingRequest;
@property (copy) id /* block */ responseBlock;
@property (nonatomic, retain) NSData *serverPlaybackContextData;
@property (nonatomic) <SSVSecureKeyDeliveryRequestOperationDelegate> *serverPlaybackContextDataDelegate;
@property (nonatomic) bool shouldIncludeGUID;
@property bool skippedRentalCheckout;

- (void).cxx_destruct;
- (id)_contentKeyContextForStreamingKeyID:(long long)arg1 streamingKeyDictionaries:(id)arg2 renewAfter:(double*)arg3 error:(id*)arg4;
- (double)_expirationTimeForStreamingKeyID:(long long)arg1 streamingKeyDictionaries:(id)arg2;
- (double)_playbackStartTimeForStreamingKeyID:(long long)arg1 streamingKeyDictionaries:(id)arg2;
- (void)_sendResponseBlockWithError:(id)arg1;
- (id)_streamingKeyDictionaryForID:(long long)arg1 URI:(id)arg2 serverPlaybackContextData:(id)arg3;
- (id)_streamingRequestDictionaryWithStreamingKeyDictionaries:(id)arg1;
- (double)_timeIntervalForStreamingKeyID:(long long)arg1 responseKey:(id)arg2 streamingKeyDictionaries:(id)arg3;
- (id)certificateURL;
- (void)configureWithURLBagDictionary:(id)arg1;
- (double)expirationTime;
- (id)init;
- (bool)isITunesStoreRequest;
- (id)keyServerURL;
- (long long)leaseAction;
- (void)main;
- (bool)offline;
- (id)persistentContentKeyContext;
- (double)playbackStartTime;
- (id)rentalId;
- (id)resourceLoadingRequest;
- (id /* block */)responseBlock;
- (id)serverPlaybackContextData;
- (id)serverPlaybackContextDataDelegate;
- (void)setCertificateURL:(id)arg1;
- (void)setITunesStoreRequest:(bool)arg1;
- (void)setKeyServerURL:(id)arg1;
- (void)setLeaseAction:(long long)arg1;
- (void)setOffline:(bool)arg1;
- (void)setPersistentContentKeyContext:(id)arg1;
- (void)setRentalId:(id)arg1;
- (void)setResourceLoadingRequest:(id)arg1;
- (void)setResponseBlock:(id /* block */)arg1;
- (void)setServerPlaybackContextData:(id)arg1;
- (void)setServerPlaybackContextDataDelegate:(id)arg1;
- (void)setShouldIncludeGUID:(bool)arg1;
- (void)setSkippedRentalCheckout:(bool)arg1;
- (bool)shouldIncludeGUID;
- (bool)skippedRentalCheckout;
- (void)start;

@end