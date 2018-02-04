/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCCKPRecordZoneIdentifier : PBCodable <NSCopying> {
    FCCKPIdentifier * _ownerIdentifier;
    FCCKPIdentifier * _value;
}

@property (nonatomic, readonly) bool hasOwnerIdentifier;
@property (nonatomic, readonly) bool hasValue;
@property (nonatomic, retain) FCCKPIdentifier *ownerIdentifier;
@property (nonatomic, retain) FCCKPIdentifier *value;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasOwnerIdentifier;
- (bool)hasValue;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)ownerIdentifier;
- (bool)readFrom:(id)arg1;
- (void)setOwnerIdentifier:(id)arg1;
- (void)setValue:(id)arg1;
- (id)value;
- (void)writeTo:(id)arg1;

@end
