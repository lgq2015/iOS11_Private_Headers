/* made by EzioChiu.
 */

@protocol INSpeakableStringExport <NSObject, JSExport>

@required

- (NSString *)identifier;
- (id)init;
- (NSString *)pronunciationHint;
- (void)setIdentifier:(NSString *)arg1;
- (void)setPronunciationHint:(NSString *)arg1;
- (void)setSpokenPhrase:(NSString *)arg1;
- (void)setVocabularyIdentifier:(NSString *)arg1;
- (NSString *)spokenPhrase;
- (NSString *)vocabularyIdentifier;

@end
