/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBIntentSlotVocabularyValue : PBCodable <NSCopying> {
    NSMutableArray * _examples;
    NSString * _phrase;
    NSString * _pronunciation;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSMutableArray *examples;
@property (nonatomic, readonly) bool hasPhrase;
@property (nonatomic, readonly) bool hasPronunciation;
@property (nonatomic, retain) NSString *phrase;
@property (nonatomic, retain) NSString *pronunciation;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)examplesType;

- (void).cxx_destruct;
- (void)addExamples:(id)arg1;
- (void)clearExamples;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)examples;
- (id)examplesAtIndex:(unsigned long long)arg1;
- (unsigned long long)examplesCount;
- (bool)hasPhrase;
- (bool)hasPronunciation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)phrase;
- (id)pronunciation;
- (bool)readFrom:(id)arg1;
- (void)setExamples:(id)arg1;
- (void)setPhrase:(id)arg1;
- (void)setPronunciation:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
