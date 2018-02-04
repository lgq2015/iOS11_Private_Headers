/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

@interface BLTPBCancelBulletinRequest : PBRequest <NSCopying> {
    double  _date;
    unsigned int  _feed;
    struct { 
        unsigned int date : 1; 
        unsigned int feed : 1; 
    }  _has;
    NSString * _publisherMatchID;
    NSString * _universalSectionID;
}

@property (nonatomic) double date;
@property (nonatomic) unsigned int feed;
@property (nonatomic) bool hasDate;
@property (nonatomic) bool hasFeed;
@property (nonatomic, readonly) bool hasPublisherMatchID;
@property (nonatomic, readonly) bool hasUniversalSectionID;
@property (nonatomic, retain) NSString *publisherMatchID;
@property (nonatomic, retain) NSString *universalSectionID;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)date;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)feed;
- (bool)hasDate;
- (bool)hasFeed;
- (bool)hasPublisherMatchID;
- (bool)hasUniversalSectionID;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)publisherMatchID;
- (bool)readFrom:(id)arg1;
- (void)setDate:(double)arg1;
- (void)setFeed:(unsigned int)arg1;
- (void)setHasDate:(bool)arg1;
- (void)setHasFeed:(bool)arg1;
- (void)setPublisherMatchID:(id)arg1;
- (void)setUniversalSectionID:(id)arg1;
- (id)universalSectionID;
- (void)writeTo:(id)arg1;

@end
