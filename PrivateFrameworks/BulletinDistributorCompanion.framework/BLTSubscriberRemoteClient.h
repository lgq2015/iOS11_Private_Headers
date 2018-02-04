/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

@interface BLTSubscriberRemoteClient : NSObject <BLTPingSubscribing> {
    NSXPCConnection * _connection;
}

@property (nonatomic, retain) NSXPCConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)connection;
- (void)dealloc;
- (id)init;
- (id)initWithConnection:(id)arg1;
- (void)pingSubscriberDidLoad;
- (void)pingWithBulletin:(id)arg1;
- (void)pingWithBulletin:(id)arg1 ack:(id /* block */)arg2;
- (void)pingWithRecordID:(id)arg1 forSectionID:(id)arg2;
- (void)pingWithRecordID:(id)arg1 forSectionID:(id)arg2 ack:(id /* block */)arg3;
- (id)sectionIDs;
- (id)sectionIDsForBulletins;
- (id)sectionIDsForPings;
- (void)setConnection:(id)arg1;
- (id)subscriptionInfos;

@end
