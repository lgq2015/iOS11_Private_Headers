/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

@interface BLTPBFullBulletinList : PBCodable <NSCopying> {
    NSMutableArray * _sectionBulletinLists;
}

@property (nonatomic, retain) NSMutableArray *sectionBulletinLists;

+ (Class)sectionBulletinListType;

- (void).cxx_destruct;
- (void)addSectionBulletinList:(id)arg1;
- (void)clearSectionBulletinLists;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)sectionBulletinListAtIndex:(unsigned long long)arg1;
- (id)sectionBulletinLists;
- (unsigned long long)sectionBulletinListsCount;
- (void)setSectionBulletinLists:(id)arg1;
- (void)writeTo:(id)arg1;

@end
