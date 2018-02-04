/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

@interface BLTPingSubscriber : NSObject <BLTPingSubscribing> {
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _lock;
    NSMutableDictionary * _pingHandlers;
    <BLTPingService> * _service;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableDictionary *pingHandlers;
@property (nonatomic, retain) <BLTPingService> *service;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_subscribeToSectionID:(id)arg1 withPingHandler:(id)arg2 withAck:(bool)arg3 forFullBulletins:(bool)arg4;
- (void)dealloc;
- (void)getWillNanoPresentNotificationForSectionID:(id)arg1 completion:(id /* block */)arg2;
- (void)getWillNanoPresentNotificationForSectionID:(id)arg1 subsectionIDs:(id)arg2 completion:(id /* block */)arg3;
- (id)init;
- (id)initWithService:(id)arg1;
- (id)pingHandlers;
- (void)pingSubscriberDidLoad;
- (void)pingWithBulletin:(id)arg1;
- (void)pingWithBulletin:(id)arg1 ack:(id /* block */)arg2;
- (void)pingWithRecordID:(id)arg1 forSectionID:(id)arg2;
- (void)pingWithRecordID:(id)arg1 forSectionID:(id)arg2 ack:(id /* block */)arg3;
- (id)sectionIDs;
- (id)sectionIDsForBulletins;
- (void)sendBulletinSummary:(id)arg1 forBulletin:(id)arg2 destinations:(unsigned long long)arg3;
- (id)service;
- (void)setPingHandlers:(id)arg1;
- (void)setService:(id)arg1;
- (void)subscribeToSectionID:(id)arg1 withBulletinAckHandler:(id /* block */)arg2;
- (void)subscribeToSectionID:(id)arg1 withBulletinHandler:(id /* block */)arg2;
- (void)subscribeToSectionID:(id)arg1 withPingAckHandler:(id /* block */)arg2;
- (void)subscribeToSectionID:(id)arg1 withPingHandler:(id /* block */)arg2;
- (void)subscribeWithMachServiceName:(id)arg1;
- (id)subscriptionInfos;
- (void)unsubscribeFromSectionID:(id)arg1;

@end
