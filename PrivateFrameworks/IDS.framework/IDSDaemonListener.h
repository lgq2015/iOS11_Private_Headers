/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

@interface IDSDaemonListener : NSObject <IDSDaemonListenerProtocol> {
    NSMutableDictionary * _accountToActiveDeviceUniqueID;
    NSMutableDictionary * _accountToDevices;
    bool  _connectionComplete;
    NSString * _deviceIdentifier;
    NSHashTable * _handlers;
    bool  _hidingDisconnect;
    NSObject<OS_dispatch_queue> * _ivarQueue;
    bool  _postedSetupComplete;
    NSProtocolChecker * _protocol;
    bool  _setupComplete;
    bool  _setupInfoComplete;
    NSMutableDictionary * _topicToAccountDictionaries;
    NSMutableDictionary * _topicToEnabledAccounts;
}

@property (setter=_setHidingDisconnect:, nonatomic) bool _hidingDisconnect;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *deviceIdentifier;
@property (nonatomic, readonly) bool hasPostedSetupComplete;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isSetupComplete;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)__postSetupComplete;
- (void)_callHandlersAsyncWithBlock:(id /* block */)arg1;
- (void)_callHandlersWithBlock:(id /* block */)arg1;
- (void)_callHandlersWithBlockOnIvarQueue:(id /* block */)arg1;
- (void)_callHandlersWithBlockOnIvarQueue:(id /* block */)arg1 cleanup:(id /* block */)arg2;
- (bool)_hidingDisconnect;
- (void)_internalDidSwitchActivePairedDevice:(id)arg1 forService:(id)arg2;
- (void)_internalSwitchActivePairedDevice:(id)arg1 forAccount:(id)arg2;
- (void)_noteDisconnected;
- (void)_performSyncBlock:(id /* block */)arg1;
- (void)_removeAccountOnIvarQueue:(id)arg1;
- (void)_setHidingDisconnect:(bool)arg1;
- (id)_uniqueIDForDevice:(id)arg1;
- (void)account:(id)arg1 accountInfoChanged:(id)arg2;
- (void)account:(id)arg1 aliasesChanged:(id)arg2;
- (void)account:(id)arg1 dependentDevicesUpdated:(id)arg2;
- (void)account:(id)arg1 displayNameChanged:(id)arg2;
- (void)account:(id)arg1 localDeviceAdded:(id)arg2;
- (void)account:(id)arg1 localDeviceRemoved:(id)arg2;
- (void)account:(id)arg1 loginChanged:(id)arg2;
- (void)account:(id)arg1 profileChanged:(id)arg2;
- (void)account:(id)arg1 registrationStatusInfoChanged:(id)arg2;
- (void)account:(id)arg1 vettedAliasesChanged:(id)arg2;
- (void)accountAdded:(id)arg1;
- (id)accountDictionariesForService:(id)arg1;
- (void)accountDisabled:(id)arg1 onService:(id)arg2;
- (void)accountEnabled:(id)arg1 onService:(id)arg2;
- (void)accountRemoved:(id)arg1;
- (void)addHandler:(id)arg1;
- (void)connectionComplete:(bool)arg1;
- (void)continuityDidConnectToPeer:(id)arg1 withError:(id)arg2;
- (void)continuityDidDisconnectFromPeer:(id)arg1 withError:(id)arg2;
- (void)continuityDidDiscoverPeerWithData:(id)arg1 fromPeer:(id)arg2;
- (void)continuityDidDiscoverType:(long long)arg1 withData:(id)arg2 fromPeer:(id)arg3;
- (void)continuityDidFailToStartAdvertisingOfType:(long long)arg1 withError:(id)arg2;
- (void)continuityDidFailToStartScanningForType:(long long)arg1 withError:(id)arg2;
- (void)continuityDidLosePeer:(id)arg1;
- (void)continuityDidStartAdvertisingOfType:(long long)arg1;
- (void)continuityDidStartScanningForType:(long long)arg1;
- (void)continuityDidStopAdvertisingOfType:(long long)arg1;
- (void)continuityDidStopScanningForType:(long long)arg1;
- (void)continuityDidUpdateState:(long long)arg1;
- (void)deactivatePairedDevices;
- (id)dependentDevicesForAccount:(id)arg1;
- (void)device:(id)arg1 nsuuidChanged:(id)arg2;
- (id)deviceIdentifier;
- (void)deviceIdentifierDidChange:(id)arg1;
- (void)didGetIdentities:(id)arg1 error:(id)arg2;
- (void)didSwitchActivePairedDevice:(id)arg1;
- (id)enabledAccountsForService:(id)arg1;
- (void)forwardInvocation:(id)arg1;
- (bool)hasPostedSetupComplete;
- (id)init;
- (bool)isSetupComplete;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)refreshRegistrationForAccount:(id)arg1;
- (void)registrationFailedForAccount:(id)arg1 needsDeletion:(id)arg2;
- (void)removeHandler:(id)arg1;
- (void)setupCompleteWithInfo:(id)arg1;
- (void)switchActivePairedDevice:(id)arg1 forAccount:(id)arg2;
- (void)xpcObject:(id)arg1 objectContext:(id)arg2;

@end
