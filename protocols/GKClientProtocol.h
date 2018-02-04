/* made by EzioChiu.
 */

@protocol GKClientProtocol <NSObject>

@required

- (oneway void)acceptInviteWithNotification:(NSDictionary *)arg1;
- (oneway void)acceptMultiplayerGameInvite;
- (oneway void)achievementSelected:(GKAchievementInternal *)arg1;
- (oneway void)authenticatedPlayersDidChange:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 6: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (oneway void)beginNetworkActivity;
- (oneway void)cancelGameInvite:(NSString *)arg1;
- (oneway void)challengeCompleted:(GKChallengeInternal *)arg1;
- (oneway void)challengeReceived:(GKChallengeInternal *)arg1;
- (oneway void)completedChallengeSelected:(GKChallengeInternal *)arg1;
- (oneway void)completedOptimisticAuthenticationWithResponse:(GKAuthenticateResponse *)arg1 error:(NSError *)arg2;
- (oneway void)declineInviteWithNotification:(NSDictionary *)arg1;
- (oneway void)didConnectToParticipantWithID:(NSString *)arg1;
- (oneway void)didDisconnectFromParticipantWithID:(NSString *)arg1;
- (oneway void)didReceiveData:(NSData *)arg1 reliably:(bool)arg2 forRecipients:(NSArray *)arg3 fromSender:(NSString *)arg4;
- (oneway void)endNetworkActivity;
- (oneway void)fetchTurnBasedData;
- (oneway void)friendRequestSelected:(GKFriendRequestInternal *)arg1;
- (oneway void)receivedChallengeSelected:(GKChallengeInternal *)arg1;
- (oneway void)refreshContentsForDataType:(unsigned int)arg1 userInfo:(NSDictionary *)arg2;
- (oneway void)relayPushNotification:(NSDictionary *)arg1;
- (oneway void)resetNetworkActivity;
- (oneway void)respondedToNearbyInvite:(NSDictionary *)arg1;
- (oneway void)scoreSelected:(GKScoreInternal *)arg1;
- (oneway void)session:(GKGameSession *)arg1 addedPlayer:(GKCloudPlayer *)arg2;
- (oneway void)session:(GKGameSession *)arg1 didReceiveData:(NSData *)arg2 fromPlayer:(GKCloudPlayer *)arg3;
- (oneway void)session:(GKGameSession *)arg1 didReceiveMessage:(NSString *)arg2 withData:(NSData *)arg3 fromPlayer:(GKCloudPlayer *)arg4;
- (oneway void)session:(GKGameSession *)arg1 player:(GKCloudPlayer *)arg2 didChangeConnectionState:(long long)arg3;
- (oneway void)session:(GKGameSession *)arg1 player:(GKCloudPlayer *)arg2 didSaveData:(NSData *)arg3;
- (oneway void)session:(GKGameSession *)arg1 removedPlayer:(GKCloudPlayer *)arg2;
- (oneway void)setBadgeCount:(unsigned long long)arg1 forType:(unsigned long long)arg2;
- (oneway void)setCurrentGame:(void *)arg1 serverEnvironment:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 7: GKGameInternal *, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (oneway void)setLogBits:(int)arg1;
- (oneway void)setPreferencesValues:(NSDictionary *)arg1;

@end
