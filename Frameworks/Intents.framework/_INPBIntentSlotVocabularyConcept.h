/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBIntentSlotVocabularyConcept : PBCodable <NSCopying> {
    NSString * _identifier;
    NSMutableArray * _synonyms;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) bool hasIdentifier;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) NSMutableArray *synonyms;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)synonymsType;

- (void).cxx_destruct;
- (void)addSynonyms:(id)arg1;
- (void)clearSynonyms;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIdentifier;
- (unsigned long long)hash;
- (id)identifier;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setSynonyms:(id)arg1;
- (id)synonyms;
- (id)synonymsAtIndex:(unsigned long long)arg1;
- (unsigned long long)synonymsCount;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
