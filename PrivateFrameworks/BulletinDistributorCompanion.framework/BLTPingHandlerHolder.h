/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

@interface BLTPingHandlerHolder : NSObject <BLTPingSubscriptionInfo> {
    bool  _canAck;
    bool  _forBulletin;
    id  _pingHandler;
    NSString * _sectionID;
}

@property (nonatomic) bool canAck;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool forBulletin;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *sectionID;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)canAck;
- (bool)forBulletin;
- (id)init;
- (id)initWithPingHandler:(id)arg1;
- (void)pingWithBulletin:(id)arg1 ack:(id /* block */)arg2;
- (void)pingWithRecordID:(id)arg1 forSectionID:(id)arg2 ack:(id /* block */)arg3;
- (id)sectionID;
- (void)setCanAck:(bool)arg1;
- (void)setForBulletin:(bool)arg1;
- (void)setSectionID:(id)arg1;

@end
