/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBIntentTypePhrases : PBCodable <NSCopying> {
    _INPBIntentType * _intentType;
    NSMutableArray * _intentVocabularyExamples;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) bool hasIntentType;
@property (nonatomic, retain) _INPBIntentType *intentType;
@property (nonatomic, retain) NSMutableArray *intentVocabularyExamples;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)intentVocabularyExamplesType;

- (void).cxx_destruct;
- (void)addIntentVocabularyExamples:(id)arg1;
- (void)clearIntentVocabularyExamples;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIntentType;
- (unsigned long long)hash;
- (id)intentType;
- (id)intentVocabularyExamples;
- (id)intentVocabularyExamplesAtIndex:(unsigned long long)arg1;
- (unsigned long long)intentVocabularyExamplesCount;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setIntentType:(id)arg1;
- (void)setIntentVocabularyExamples:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
