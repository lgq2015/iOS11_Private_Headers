/* made by EzioChiu
   Image: /System/Library/Frameworks/MultipeerConnectivity.framework/MultipeerConnectivity
 */

@interface MCNearbyServiceBrowser : NSObject <NSNetServiceBrowserDelegate, NSNetServiceDelegate> {
    bool  _AWDLDisabled;
    <MCNearbyServiceBrowserDelegate> * _delegate;
    NSString * _formattedServiceType;
    NSMutableDictionary * _invites;
    bool  _isBrowsing;
    MCPeerID * _myPeerID;
    NSMutableDictionary * _netServices;
    NSNetServiceBrowser * _networkBrowser;
    long long  _outgoingInviteID;
    NSMutableDictionary * _peers;
    NSString * _serviceType;
    NSObject<OS_dispatch_queue> * _syncQueue;
    bool  _wasBrowsing;
}

@property (getter=isAWDLDisabled, nonatomic) bool AWDLDisabled;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MCNearbyServiceBrowserDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *formattedServiceType;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableDictionary *invites;
@property (nonatomic) bool isBrowsing;
@property (nonatomic, readonly) MCPeerID *myPeerID;
@property (nonatomic, retain) NSMutableDictionary *netServices;
@property (nonatomic, retain) NSNetServiceBrowser *networkBrowser;
@property (nonatomic) long long outgoingInviteID;
@property (nonatomic, retain) NSMutableDictionary *peers;
@property (nonatomic, copy) NSString *serviceType;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *syncQueue;
@property (nonatomic) bool wasBrowsing;

- (void)applicationDidEnterBackgroundNotification:(id)arg1;
- (void)applicationWillEnterForegroundNotification:(id)arg1;
- (void)applicationWillTerminateNotification:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (id)formattedServiceType;
- (id)init;
- (id)initWithPeer:(id)arg1 serviceType:(id)arg2;
- (void)invitePeer:(id)arg1 toSession:(id)arg2 withContext:(id)arg3 timeout:(double)arg4;
- (id)invites;
- (bool)isAWDLDisabled;
- (bool)isBrowsing;
- (id)myPeerID;
- (void)netService:(id)arg1 didUpdateTXTRecordData:(id)arg2;
- (void)netServiceBrowser:(id)arg1 didFindDomain:(id)arg2 moreComing:(bool)arg3;
- (void)netServiceBrowser:(id)arg1 didFindService:(id)arg2 moreComing:(bool)arg3;
- (void)netServiceBrowser:(id)arg1 didNotSearch:(id)arg2;
- (void)netServiceBrowser:(id)arg1 didRemoveDomain:(id)arg2 moreComing:(bool)arg3;
- (void)netServiceBrowser:(id)arg1 didRemoveService:(id)arg2 moreComing:(bool)arg3;
- (void)netServiceBrowserDidStopSearch:(id)arg1;
- (void)netServiceBrowserWillSearch:(id)arg1;
- (id)netServices;
- (id)networkBrowser;
- (long long)outgoingInviteID;
- (void)parseIDString:(id*)arg1 displayName:(id*)arg2 fromIdentifier:(id)arg3;
- (id)peers;
- (id)rebuildUserDiscoveryInfoFromTXTRecordDictionary:(id)arg1;
- (id)serviceType;
- (void)setAWDLDisabled:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFormattedServiceType:(id)arg1;
- (void)setInvites:(id)arg1;
- (void)setIsBrowsing:(bool)arg1;
- (void)setNetServices:(id)arg1;
- (void)setNetworkBrowser:(id)arg1;
- (void)setOutgoingInviteID:(long long)arg1;
- (void)setPeers:(id)arg1;
- (void)setServiceType:(id)arg1;
- (void)setSyncQueue:(id)arg1;
- (void)setWasBrowsing:(bool)arg1;
- (void)startBrowsingForPeers;
- (void)stopBrowsingForPeers;
- (void)syncAttachConnection:(id)arg1 toPeer:(id)arg2;
- (void)syncCloseConnectionForPeer:(id)arg1;
- (void)syncHandleInviteResponse:(id)arg1 fromPeer:(id)arg2;
- (void)syncHandleInviteTimeout:(id)arg1 forPeer:(id)arg2;
- (void)syncInitiateConnectionToPeer:(id)arg1;
- (void)syncInvitePeer:(id)arg1 toSession:(id)arg2 withContext:(id)arg3 timeout:(double)arg4;
- (long long)syncNextOutgoingInviteID;
- (id)syncQueue;
- (void)syncReceivedData:(id)arg1 fromPeer:(id)arg2;
- (void)syncSendData:(id)arg1 toPeer:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)syncSendDictionary:(id)arg1 toPeer:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)syncStartBrowsingForPeers;
- (void)syncStopBrowsingForPeers;
- (bool)wasBrowsing;

@end
