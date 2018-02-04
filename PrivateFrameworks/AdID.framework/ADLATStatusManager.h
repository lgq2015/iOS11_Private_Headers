/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AdID.framework/AdID
 */

@interface ADLATStatusManager : ADSingleton {
    NSNumber * _pendingJingleRequestToken;
    bool  _sendingLATToAdPlatforms;
    bool  _sendingLATToJingle;
}

@property (nonatomic, copy) NSNumber *pendingJingleRequestToken;
@property (nonatomic) bool sendingLATToAdPlatforms;
@property (nonatomic) bool sendingLATToJingle;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)handleJingleOptOutResponse:(id)arg1;
- (id)pendingJingleRequestToken;
- (void)sendLATStatusToAdPlatforms:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)sendLATStatusToJingle:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)sendingLATToAdPlatforms;
- (bool)sendingLATToJingle;
- (void)setPendingJingleRequestToken:(id)arg1;
- (void)setSendingLATToAdPlatforms:(bool)arg1;
- (void)setSendingLATToJingle:(bool)arg1;

@end
