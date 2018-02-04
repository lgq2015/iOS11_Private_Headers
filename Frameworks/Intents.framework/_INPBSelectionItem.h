/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBSelectionItem : PBCodable <NSCopying> {
    PBUnknownFields * _unknownFields;
    NSString * _uuid;
    _INPBIntentSlotValue * _value;
    NSString * _vocabularyValue;
}

@property (nonatomic, readonly) bool hasUuid;
@property (nonatomic, readonly) bool hasValue;
@property (nonatomic, readonly) bool hasVocabularyValue;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic, retain) NSString *uuid;
@property (nonatomic, retain) _INPBIntentSlotValue *value;
@property (nonatomic, retain) NSString *vocabularyValue;

+ (id)options;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasUuid;
- (bool)hasValue;
- (bool)hasVocabularyValue;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setUuid:(id)arg1;
- (void)setValue:(id)arg1;
- (void)setVocabularyValue:(id)arg1;
- (id)unknownFields;
- (id)uuid;
- (id)value;
- (id)vocabularyValue;
- (void)writeTo:(id)arg1;

@end
