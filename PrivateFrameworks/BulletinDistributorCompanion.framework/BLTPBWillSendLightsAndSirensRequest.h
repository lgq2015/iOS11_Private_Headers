/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

@interface BLTPBWillSendLightsAndSirensRequest : PBRequest <NSCopying> {
    struct { 
        unsigned int systemApp : 1; 
    }  _has;
    NSString * _publisherBulletinID;
    NSString * _recordID;
    NSString * _sectionID;
    bool  _systemApp;
}

@property (nonatomic, readonly) bool hasPublisherBulletinID;
@property (nonatomic, readonly) bool hasRecordID;
@property (nonatomic, readonly) bool hasSectionID;
@property (nonatomic) bool hasSystemApp;
@property (nonatomic, retain) NSString *publisherBulletinID;
@property (nonatomic, retain) NSString *recordID;
@property (nonatomic, retain) NSString *sectionID;
@property (nonatomic) bool systemApp;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasPublisherBulletinID;
- (bool)hasRecordID;
- (bool)hasSectionID;
- (bool)hasSystemApp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)publisherBulletinID;
- (bool)readFrom:(id)arg1;
- (id)recordID;
- (id)sectionID;
- (void)setHasSystemApp:(bool)arg1;
- (void)setPublisherBulletinID:(id)arg1;
- (void)setRecordID:(id)arg1;
- (void)setSectionID:(id)arg1;
- (void)setSystemApp:(bool)arg1;
- (bool)systemApp;
- (void)writeTo:(id)arg1;

@end
