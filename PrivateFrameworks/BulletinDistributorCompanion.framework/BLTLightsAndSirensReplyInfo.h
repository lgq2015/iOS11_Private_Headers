/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

@interface BLTLightsAndSirensReplyInfo : NSObject {
    NSDate * _bulletinPublicationDate;
    NSDate * _creation;
    bool  _didLogAggd;
    unsigned long long  _didPlayLightsAndSirens;
    NSString * _publisherMatchID;
    id /* block */  _reply;
    bool  _replySent;
    NSString * _sectionID;
}

@property (nonatomic, retain) NSDate *bulletinPublicationDate;
@property (nonatomic, readonly) NSDate *creation;
@property (nonatomic) bool didLogAggd;
@property (nonatomic) unsigned long long didPlayLightsAndSirens;
@property (nonatomic, copy) NSString *publisherMatchID;
@property (nonatomic, copy) id /* block */ reply;
@property (nonatomic, readonly) bool replySent;
@property (nonatomic, copy) NSString *sectionID;

- (void).cxx_destruct;
- (id)bulletinPublicationDate;
- (id)creation;
- (bool)didLogAggd;
- (unsigned long long)didPlayLightsAndSirens;
- (bool)hasExpired;
- (id)init;
- (id)publisherMatchID;
- (id /* block */)reply;
- (bool)replySent;
- (id)sectionID;
- (bool)sendReply;
- (void)setBulletinPublicationDate:(id)arg1;
- (void)setDidLogAggd:(bool)arg1;
- (void)setDidPlayLightsAndSirens:(unsigned long long)arg1;
- (void)setPublisherMatchID:(id)arg1;
- (void)setReply:(id /* block */)arg1;
- (void)setSectionID:(id)arg1;

@end
