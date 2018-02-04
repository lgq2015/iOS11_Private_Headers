/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

@interface BLTPBBulletinSummary : PBCodable <NSCopying> {
    unsigned int  _destinations;
    NSMutableArray * _keys;
    NSString * _publisherBulletinID;
    NSString * _recordID;
    NSString * _sectionID;
}

@property (nonatomic) unsigned int destinations;
@property (nonatomic, readonly) bool hasPublisherBulletinID;
@property (nonatomic, readonly) bool hasRecordID;
@property (nonatomic, retain) NSMutableArray *keys;
@property (nonatomic, retain) NSString *publisherBulletinID;
@property (nonatomic, retain) NSString *recordID;
@property (nonatomic, retain) NSString *sectionID;

+ (Class)keyType;

- (void).cxx_destruct;
- (void)addKey:(id)arg1;
- (void)clearKeys;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned int)destinations;
- (id)dictionaryRepresentation;
- (bool)hasPublisherBulletinID;
- (bool)hasRecordID;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)keyAtIndex:(unsigned long long)arg1;
- (id)keys;
- (unsigned long long)keysCount;
- (void)mergeFrom:(id)arg1;
- (id)publisherBulletinID;
- (bool)readFrom:(id)arg1;
- (id)recordID;
- (id)sectionID;
- (void)setDestinations:(unsigned int)arg1;
- (void)setKeys:(id)arg1;
- (void)setPublisherBulletinID:(id)arg1;
- (void)setRecordID:(id)arg1;
- (void)setSectionID:(id)arg1;
- (void)writeTo:(id)arg1;

@end
