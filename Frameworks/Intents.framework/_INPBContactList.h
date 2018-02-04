/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBContactList : PBCodable <NSCopying> {
    _INPBCondition * _condition;
    NSMutableArray * _contacts;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) _INPBCondition *condition;
@property (nonatomic, retain) NSMutableArray *contacts;
@property (nonatomic, readonly) bool hasCondition;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)contactType;
+ (id)options;

- (void).cxx_destruct;
- (void)addContact:(id)arg1;
- (void)clearContacts;
- (id)condition;
- (id)contactAtIndex:(unsigned long long)arg1;
- (id)contacts;
- (unsigned long long)contactsCount;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCondition;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCondition:(id)arg1;
- (void)setContacts:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
