/* made by EzioChiu.
 */

@protocol MCNearbyServiceAdvertiserDelegate <NSObject>

@required

- (void)advertiser:(void *)arg1 didReceiveInvitationFromPeer:(void *)arg2 withContext:(void *)arg3 invitationHandler:(void *)arg4; // needs 4 arg types, found 10: MCNearbyServiceAdvertiser *, MCPeerID *, NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, MCSession *, void*

@optional

- (void)advertiser:(MCNearbyServiceAdvertiser *)arg1 didNotStartAdvertisingPeer:(NSError *)arg2;

@end
