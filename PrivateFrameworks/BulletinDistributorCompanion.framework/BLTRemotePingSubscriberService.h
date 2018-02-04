/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

@interface BLTRemotePingSubscriberService : NSObject <BLTPingService, NSXPCListenerDelegate> {
    NSXPCConnection * _connectionFromServer;
    NSXPCConnection * _connectionToServer;
    <BLTPingSubscribing> * _delegate;
    NSXPCListener * _listener;
    NSString * _machServiceName;
}

@property (nonatomic, retain) NSXPCConnection *connectionFromServer;
@property (nonatomic, retain) NSXPCConnection *connectionToServer;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <BLTPingSubscribing> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSXPCListener *listener;
@property (nonatomic, copy) NSString *machServiceName;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_connect;
- (void)_createXPCService;
- (id)connectionFromServer;
- (id)connectionToServer;
- (void)dealloc;
- (id)delegate;
- (void)getWillNanoPresentNotificationForSectionID:(id)arg1 completion:(id /* block */)arg2;
- (void)getWillNanoPresentNotificationForSectionID:(id)arg1 subsectionIDs:(id)arg2 completion:(id /* block */)arg3;
- (id)init;
- (id)initWithMachServiceName:(id)arg1;
- (id)listener;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)machServiceName;
- (void)pingWithBulletin:(id)arg1;
- (void)pingWithBulletin:(id)arg1 ack:(id /* block */)arg2;
- (void)pingWithRecordID:(id)arg1 forSectionID:(id)arg2;
- (void)pingWithRecordID:(id)arg1 forSectionID:(id)arg2 ack:(id /* block */)arg3;
- (void)sendBulletinSummary:(id)arg1;
- (void)setConnectionFromServer:(id)arg1;
- (void)setConnectionToServer:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setListener:(id)arg1;
- (void)setMachServiceName:(id)arg1;
- (void)subscribeToSectionID:(id)arg1 forFullBulletins:(bool)arg2 withAck:(bool)arg3;
- (void)subscribeWithMachServiceName:(id)arg1;
- (void)unsubscribeFromSectionID:(id)arg1;

@end
