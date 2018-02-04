/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAAnswerDictionaryStructuredAnswer : AceObject <SAAnswerStructuredAnswer>

@property (nonatomic, copy) NSString *category;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, copy) NSArray *definitionGroups;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *phoneticPronunciation;
@property (nonatomic, copy) NSURL *sound;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSArray *syllables;
@property (nonatomic, copy) NSString *word;

+ (id)dictionaryStructuredAnswer;
+ (id)dictionaryStructuredAnswerWithDictionary:(id)arg1 context:(id)arg2;

- (id)category;
- (id)definitionGroups;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)phoneticPronunciation;
- (void)setCategory:(id)arg1;
- (void)setDefinitionGroups:(id)arg1;
- (void)setPhoneticPronunciation:(id)arg1;
- (void)setSound:(id)arg1;
- (void)setSyllables:(id)arg1;
- (void)setWord:(id)arg1;
- (id)sound;
- (id)syllables;
- (id)word;

@end
