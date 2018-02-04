/* made by EzioChiu.
 */

@protocol GKChallengeEventHandlerUIDelegate <NSObject>

@optional

- (void)showLocallyCompletedBannerForIssuingPlayer:(void *)arg1 challenge:(void *)arg2 handler:(void *)arg3; // needs 3 arg types, found 7: GKPlayer *, GKChallenge *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)showReceivedBannerForIssuingPlayer:(void *)arg1 challenge:(void *)arg2 handler:(void *)arg3; // needs 3 arg types, found 7: GKPlayer *, GKChallenge *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)showRemotelyCompletedBannerForReceivingPlayer:(void *)arg1 challenge:(void *)arg2 handler:(void *)arg3; // needs 3 arg types, found 7: GKPlayer *, GKChallenge *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end
