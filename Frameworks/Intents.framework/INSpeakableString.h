/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INSpeakableString : NSObject <INSpeakable, INSpeakableStringExport> {
    NSArray * _alternativeSpeakableMatches;
    NSString * _pronunciationHint;
    NSString * _spokenPhrase;
    NSString * _vocabularyIdentifier;
}

@property (nonatomic, readonly) NSArray *alternativeSpeakableMatches;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) NSString *pronunciationHint;
@property (nonatomic, retain) NSString *spokenPhrase;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *vocabularyIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_effectiveNSStringValue;
- (id)_initWithVocabularyIdentifier:(id)arg1 spokenPhrase:(id)arg2 pronunciationHint:(id)arg3 alternativeMatches:(id)arg4;
- (id)alternativeSpeakableMatches;
- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 spokenPhrase:(id)arg2 pronunciationHint:(id)arg3;
- (id)initWithSpokenPhrase:(id)arg1;
- (id)initWithVocabularyIdentifier:(id)arg1 spokenPhrase:(id)arg2 pronunciationHint:(id)arg3;
- (bool)isEqual:(id)arg1;
- (unsigned long long)length;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)pronunciationHint;
- (void)setIdentifier:(id)arg1;
- (void)setPronunciationHint:(id)arg1;
- (void)setSpokenPhrase:(id)arg1;
- (void)setVocabularyIdentifier:(id)arg1;
- (id)spokenPhrase;
- (id)spokenPhrases;
- (id)vocabularyIdentifier;

@end
