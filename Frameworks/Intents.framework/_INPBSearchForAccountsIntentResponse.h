/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBSearchForAccountsIntentResponse : PBCodable <NSCopying> {
    NSMutableArray * _accounts;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSMutableArray *accounts;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)accountsType;
+ (id)options;

- (void).cxx_destruct;
- (id)accounts;
- (id)accountsAtIndex:(unsigned long long)arg1;
- (unsigned long long)accountsCount;
- (void)addAccounts:(id)arg1;
- (void)clearAccounts;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAccounts:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
