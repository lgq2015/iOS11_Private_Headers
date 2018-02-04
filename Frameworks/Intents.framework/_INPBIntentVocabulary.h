/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBIntentVocabulary : PBCodable <NSCopying> {
    NSMutableArray * _intentSlotVocabularyPolicies;
    NSMutableArray * _intentTypePhrases;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSMutableArray *intentSlotVocabularyPolicies;
@property (nonatomic, retain) NSMutableArray *intentTypePhrases;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)intentSlotVocabularyPoliciesType;
+ (Class)intentTypePhrasesType;

- (void).cxx_destruct;
- (void)addIntentSlotVocabularyPolicies:(id)arg1;
- (void)addIntentTypePhrases:(id)arg1;
- (void)clearIntentSlotVocabularyPolicies;
- (void)clearIntentTypePhrases;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)intentSlotVocabularyPolicies;
- (id)intentSlotVocabularyPoliciesAtIndex:(unsigned long long)arg1;
- (unsigned long long)intentSlotVocabularyPoliciesCount;
- (id)intentTypePhrases;
- (id)intentTypePhrasesAtIndex:(unsigned long long)arg1;
- (unsigned long long)intentTypePhrasesCount;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setIntentSlotVocabularyPolicies:(id)arg1;
- (void)setIntentTypePhrases:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
