/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

@interface BLTPBActionInformation : PBCodable <NSCopying> {
    NSData * _context;
    NSData * _contextNulls;
}

@property (nonatomic, retain) NSData *context;
@property (nonatomic, retain) NSData *contextNulls;
@property (nonatomic, readonly) bool hasContext;
@property (nonatomic, readonly) bool hasContextNulls;

- (void).cxx_destruct;
- (id)context;
- (id)contextNulls;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasContext;
- (bool)hasContextNulls;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setContextNulls:(id)arg1;
- (void)writeTo:(id)arg1;

@end
