/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

@interface BLTPBSectionBulletinList : PBCodable <NSCopying> {
    NSMutableArray * _bulletinIdentifiers;
    NSString * _sectionID;
}

@property (nonatomic, retain) NSMutableArray *bulletinIdentifiers;
@property (nonatomic, retain) NSString *sectionID;

+ (Class)bulletinIdentifierType;

- (void).cxx_destruct;
- (void)addBulletinIdentifier:(id)arg1;
- (id)bulletinIdentifierAtIndex:(unsigned long long)arg1;
- (id)bulletinIdentifiers;
- (unsigned long long)bulletinIdentifiersCount;
- (void)clearBulletinIdentifiers;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)sectionID;
- (void)setBulletinIdentifiers:(id)arg1;
- (void)setSectionID:(id)arg1;
- (void)writeTo:(id)arg1;

@end
