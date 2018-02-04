/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

@interface BLTPBBulletinIdentifier : PBCodable <NSCopying> {
    NSString * _publisherBulletinID;
    NSString * _recordID;
}

@property (nonatomic, readonly) bool hasPublisherBulletinID;
@property (nonatomic, readonly) bool hasRecordID;
@property (nonatomic, retain) NSString *publisherBulletinID;
@property (nonatomic, retain) NSString *recordID;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasPublisherBulletinID;
- (bool)hasRecordID;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)publisherBulletinID;
- (bool)readFrom:(id)arg1;
- (id)recordID;
- (void)setPublisherBulletinID:(id)arg1;
- (void)setRecordID:(id)arg1;
- (void)writeTo:(id)arg1;

@end
