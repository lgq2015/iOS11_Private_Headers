/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

@interface BLTLocalPingSubscriberService : NSObject <BLTPingService> {
    <BLTPingSubscribing> * _delegate;
    BLTBulletinDistributorSubscriber * _subscriber;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <BLTPingSubscribing> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) BLTBulletinDistributorSubscriber *subscriber;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)delegate;
- (void)getWillNanoPresentNotificationForSectionID:(id)arg1 subsectionIDs:(id)arg2 completion:(id /* block */)arg3;
- (void)pingWithBulletin:(id)arg1 ack:(id /* block */)arg2;
- (void)pingWithRecordID:(id)arg1 forSectionID:(id)arg2 ack:(id /* block */)arg3;
- (void)sendBulletinSummary:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setSubscriber:(id)arg1;
- (void)subscribeToSectionID:(id)arg1 forFullBulletins:(bool)arg2 withAck:(bool)arg3;
- (void)subscribeWithMachServiceName:(id)arg1;
- (id)subscriber;
- (void)unsubscribeFromSectionID:(id)arg1;

@end
