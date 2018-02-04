/* made by EzioChiu.
 */

@protocol FMFXPCClientProtocol <NSObject>

@required

- (oneway void)abDidChange;
- (oneway void)abPreferencesDidChange;
- (oneway void)didAddFollowerHandle:(FMFHandle *)arg1;
- (oneway void)didChangeActiveLocationSharingDevice:(FMFDevice *)arg1;
- (void)didReceiveFriendshipRequest:(FMFFriendshipRequest *)arg1;
- (oneway void)didReceiveServerError:(NSError *)arg1;
- (oneway void)didRemoveFollowerHandle:(FMFHandle *)arg1;
- (oneway void)didStartFollowingHandle:(FMFHandle *)arg1;
- (oneway void)didStopFollowingHandle:(FMFHandle *)arg1;
- (oneway void)didUpdateActiveDeviceList:(NSSet *)arg1;
- (oneway void)didUpdateFavorites:(NSArray *)arg1;
- (oneway void)didUpdateFollowers:(NSSet *)arg1;
- (oneway void)didUpdateFollowing:(NSSet *)arg1;
- (oneway void)didUpdateHideFromFollowersStatus:(bool)arg1;
- (oneway void)didUpdateLocations:(NSSet *)arg1;
- (oneway void)didUpdatePendingOffersForHandles:(NSSet *)arg1;
- (oneway void)failedToGetLocationForHandle:(FMFHandle *)arg1 error:(NSError *)arg2;
- (oneway void)sendMappingPacket:(NSString *)arg1 toHandle:(FMFHandle *)arg2;
- (oneway void)setLocations:(NSSet *)arg1;

@end
