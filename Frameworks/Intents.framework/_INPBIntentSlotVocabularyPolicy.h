/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBIntentSlotVocabularyPolicy : PBCodable <NSCopying> {
    NSMutableArray * _intentSlotNames;
    NSMutableArray * _intentSlotVocabularyConcepts;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSMutableArray *intentSlotNames;
@property (nonatomic, retain) NSMutableArray *intentSlotVocabularyConcepts;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)intentSlotNamesType;
+ (Class)intentSlotVocabularyConceptsType;

- (void).cxx_destruct;
- (void)addIntentSlotNames:(id)arg1;
- (void)addIntentSlotVocabularyConcepts:(id)arg1;
- (void)clearIntentSlotNames;
- (void)clearIntentSlotVocabularyConcepts;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)intentSlotNames;
- (id)intentSlotNamesAtIndex:(unsigned long long)arg1;
- (unsigned long long)intentSlotNamesCount;
- (id)intentSlotVocabularyConcepts;
- (id)intentSlotVocabularyConceptsAtIndex:(unsigned long long)arg1;
- (unsigned long long)intentSlotVocabularyConceptsCount;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setIntentSlotNames:(id)arg1;
- (void)setIntentSlotVocabularyConcepts:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
