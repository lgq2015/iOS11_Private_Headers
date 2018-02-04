/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBSearchForAccountsIntent : PBCodable <NSCopying> {
    _INPBDataString * _accountNickname;
    int  _accountType;
    struct { 
        unsigned int accountType : 1; 
        unsigned int requestedBalanceType : 1; 
    }  _has;
    _INPBIntentMetadata * _intentMetadata;
    _INPBDataString * _organizationName;
    int  _requestedBalanceType;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) _INPBDataString *accountNickname;
@property (nonatomic) int accountType;
@property (nonatomic, readonly) bool hasAccountNickname;
@property (nonatomic) bool hasAccountType;
@property (nonatomic, readonly) bool hasIntentMetadata;
@property (nonatomic, readonly) bool hasOrganizationName;
@property (nonatomic) bool hasRequestedBalanceType;
@property (nonatomic, retain) _INPBIntentMetadata *intentMetadata;
@property (nonatomic, retain) _INPBDataString *organizationName;
@property (nonatomic) int requestedBalanceType;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (id)options;

- (void).cxx_destruct;
- (int)StringAsAccountType:(id)arg1;
- (int)StringAsRequestedBalanceType:(id)arg1;
- (id)accountNickname;
- (int)accountType;
- (id)accountTypeAsString:(int)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAccountNickname;
- (bool)hasAccountType;
- (bool)hasIntentMetadata;
- (bool)hasOrganizationName;
- (bool)hasRequestedBalanceType;
- (unsigned long long)hash;
- (id)intentMetadata;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)organizationName;
- (bool)readFrom:(id)arg1;
- (int)requestedBalanceType;
- (id)requestedBalanceTypeAsString:(int)arg1;
- (void)setAccountNickname:(id)arg1;
- (void)setAccountType:(int)arg1;
- (void)setHasAccountType:(bool)arg1;
- (void)setHasRequestedBalanceType:(bool)arg1;
- (void)setIntentMetadata:(id)arg1;
- (void)setOrganizationName:(id)arg1;
- (void)setRequestedBalanceType:(int)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
