/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBBillPayeeValue : PBCodable <NSCopying> {
    NSString * _accountNumber;
    _INPBDataString * _nickname;
    _INPBDataString * _organizationName;
    PBUnknownFields * _unknownFields;
    _INPBValueMetadata * _valueMetadata;
}

@property (nonatomic, retain) NSString *accountNumber;
@property (nonatomic, readonly) bool hasAccountNumber;
@property (nonatomic, readonly) bool hasNickname;
@property (nonatomic, readonly) bool hasOrganizationName;
@property (nonatomic, readonly) bool hasValueMetadata;
@property (nonatomic, retain) _INPBDataString *nickname;
@property (nonatomic, retain) _INPBDataString *organizationName;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic, retain) _INPBValueMetadata *valueMetadata;

+ (id)options;

- (void).cxx_destruct;
- (id)accountNumber;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAccountNumber;
- (bool)hasNickname;
- (bool)hasOrganizationName;
- (bool)hasValueMetadata;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)nickname;
- (id)organizationName;
- (bool)readFrom:(id)arg1;
- (void)setAccountNumber:(id)arg1;
- (void)setNickname:(id)arg1;
- (void)setOrganizationName:(id)arg1;
- (void)setValueMetadata:(id)arg1;
- (id)unknownFields;
- (id)valueMetadata;
- (void)writeTo:(id)arg1;

@end
