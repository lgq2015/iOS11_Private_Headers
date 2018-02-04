/* made by EzioChiu.
 */

@protocol GKMatchmakerHostProtocol <GKExtensionHostProtocol>

@optional

- (void)cancelMatching;
- (void)cancelPendingInviteToPlayer:(GKPlayerInternal *)arg1;
- (void)finishWithError:(NSError *)arg1;
- (void)sendData:(NSData *)arg1;
- (void)setBrowsingForNearbyPlayers:(bool)arg1;
- (void)setShareInvitees:(NSArray *)arg1;
- (void)shareMatchWithRequest:(void *)arg1 handler:(void *)arg2; // needs 2 arg types, found 8: GKMatchRequestInternal *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSURL *, NSError *, void*
- (void)startMatchingWithRequest:(GKMatchRequestInternal *)arg1;

@end
