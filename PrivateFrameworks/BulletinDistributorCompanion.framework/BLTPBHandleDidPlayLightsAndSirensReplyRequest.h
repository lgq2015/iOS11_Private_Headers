/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

@interface BLTPBHandleDidPlayLightsAndSirensReplyRequest : PBRequest <NSCopying> {
    double  _date;
    bool  _didPlayLightsAndSirens;
    struct { 
        unsigned int date : 1; 
        unsigned int didPlayLightsAndSirens : 1; 
    }  _has;
    NSString * _phoneSectionID;
    NSString * _publisherMatchID;
    NSString * _replyToken;
}

@property (nonatomic) double date;
@property (nonatomic) bool didPlayLightsAndSirens;
@property (nonatomic) bool hasDate;
@property (nonatomic) bool hasDidPlayLightsAndSirens;
@property (nonatomic, readonly) bool hasPhoneSectionID;
@property (nonatomic, readonly) bool hasPublisherMatchID;
@property (nonatomic, readonly) bool hasReplyToken;
@property (nonatomic, retain) NSString *phoneSectionID;
@property (nonatomic, retain) NSString *publisherMatchID;
@property (nonatomic, retain) NSString *replyToken;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)date;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)didPlayLightsAndSirens;
- (bool)hasDate;
- (bool)hasDidPlayLightsAndSirens;
- (bool)hasPhoneSectionID;
- (bool)hasPublisherMatchID;
- (bool)hasReplyToken;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)phoneSectionID;
- (id)publisherMatchID;
- (bool)readFrom:(id)arg1;
- (id)replyToken;
- (void)setDate:(double)arg1;
- (void)setDidPlayLightsAndSirens:(bool)arg1;
- (void)setHasDate:(bool)arg1;
- (void)setHasDidPlayLightsAndSirens:(bool)arg1;
- (void)setPhoneSectionID:(id)arg1;
- (void)setPublisherMatchID:(id)arg1;
- (void)setReplyToken:(id)arg1;
- (void)writeTo:(id)arg1;

@end
