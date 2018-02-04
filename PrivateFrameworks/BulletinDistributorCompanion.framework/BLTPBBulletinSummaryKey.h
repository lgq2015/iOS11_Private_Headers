/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

@interface BLTPBBulletinSummaryKey : PBCodable <NSCopying> {
    NSString * _key;
    NSData * _value;
    NSData * _valueNulls;
}

@property (nonatomic, readonly) bool hasValue;
@property (nonatomic, readonly) bool hasValueNulls;
@property (nonatomic, retain) NSString *key;
@property (nonatomic, retain) NSData *value;
@property (nonatomic, retain) NSData *valueNulls;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasValue;
- (bool)hasValueNulls;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)key;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setKey:(id)arg1;
- (void)setValue:(id)arg1;
- (void)setValueNulls:(id)arg1;
- (id)value;
- (id)valueNulls;
- (void)writeTo:(id)arg1;

@end
