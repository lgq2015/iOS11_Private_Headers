/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AdID.framework/AdID
 */

@interface ADSegmentDataManager : ADSingleton {
    NSNumber * _pendingJingleRequestToken;
    bool  _segmentUpdateInProgress;
}

@property (nonatomic, copy) NSNumber *pendingJingleRequestToken;
@property (nonatomic, readonly) bool segmentRetrievalInProgress;
@property (nonatomic) bool segmentUpdateInProgress;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)checkTokenAndDSID:(id)arg1;
- (void)handleSegmentUpdateResponse:(id)arg1 error:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)init;
- (id)pendingJingleRequestToken;
- (void)populateAccountTypeFields:(id)arg1;
- (void)retrieveSegmentData:(id)arg1 forceSegments:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)retrieveSegmentData:(id)arg1 forceSegments:(bool)arg2 ignoreTimestamps:(bool)arg3 completionHandler:(id /* block */)arg4;
- (void)retrieveSegmentDataIgnoringTimestamps:(id)arg1 forceSegments:(bool)arg2 completionHandler:(id /* block */)arg3;
- (bool)segmentRetrievalInProgress;
- (bool)segmentUpdateInProgress;
- (void)sendSegmentDataToAdPlatforms:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setPendingJingleRequestToken:(id)arg1;
- (void)setSegmentUpdateInProgress:(bool)arg1;
- (bool)shouldSendSegmentDataToAdPlatforms:(id)arg1;
- (bool)shouldSendSegmentRequest:(id)arg1 ignoreTimestamps:(bool)arg2;

@end
