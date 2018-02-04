/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ActivitySharing.framework/ActivitySharing
 */

@interface ASClient : NSObject <_HKXPCExportable> {
    NSObject<OS_dispatch_queue> * _clientQueue;
    HKPluginProxyProvider * _pluginProxyProvider;
    <ASServerInterface> * _serverProxy;
    NSObject<OS_dispatch_queue> * _serverQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id /* block */)_clientQueueSuccessCompletion:(id /* block */)arg1;
- (void)_remoteProxy:(id /* block */)arg1;
- (void)acceptInviteRequestFromFriendWithUUID:(id)arg1 completion:(id /* block */)arg2;
- (void)clearFriendListWithCompletion:(id /* block */)arg1;
- (void)cloudKitAccountStatusWithCompletion:(id /* block */)arg1;
- (void)connectionInvalidated;
- (id)exportedInterface;
- (void)fetchAllDataIfTimeSinceLastFetchIsGreaterThan:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)fetchAllDataWithCompletion:(id /* block */)arg1;
- (void)fetchAreMultipleDevicesSharingDataForSnapshotIndex:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)ignoreInviteRequestFromFriendWithUUID:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithHealthStore:(id)arg1;
- (void)pushActivityDataToAllFriendsWithCompletion:(id /* block */)arg1;
- (void)pushFakeActivityDataToAllFriendsWithCompletion:(id /* block */)arg1;
- (id)remoteInterface;
- (void)removeFriendWithUUID:(id)arg1 completion:(id /* block */)arg2;
- (void)sendInviteRequestToDestination:(id)arg1 callerID:(id)arg2 serviceIdentifier:(id)arg3 completion:(id /* block */)arg4;
- (void)sendWithdrawInviteRequestToFriendWithUUID:(id)arg1 completion:(id /* block */)arg2;
- (void)setActivityDataVisible:(bool)arg1 toFriendWithUUID:(id)arg2 completion:(id /* block */)arg3;
- (void)setMuteEnabled:(bool)arg1 forFriendWithUUID:(id)arg2 completion:(id /* block */)arg3;

@end
