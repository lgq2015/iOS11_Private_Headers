/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFUserUtterance : NSObject {
    NSDictionary * _correctionIdentifier;
    NSMutableArray * _phrases;
    long long  _sentenceConfidence;
    NSString * _text;
    NSMutableArray * _tokens;
    NSMutableArray * _utterances;
}

@property (nonatomic, readonly) NSArray *allPhrases;
@property (nonatomic, readonly) NSDictionary *correctionIdentifier;
@property (nonatomic, readonly) NSArray *dictationResult;

- (void).cxx_destruct;
- (void)_updatePhraseswithSwapIndices:(id)arg1;
- (void)_updateUtteranceswithAlternativeUtteranceAtIndex:(unsigned long long)arg1 swapIndices:(id)arg2;
- (id)allPhrases;
- (struct NSDictionary { Class x1; }*)allRecognitionStringsAndScores;
- (id)bestTextInterpretation;
- (id)correctionIdentifier;
- (id)description;
- (id)dictationResult;
- (id)initWithPhrases:(id)arg1 correctionIdentifier:(id)arg2;
- (id)initWithPhrases:(id)arg1 sentenceConfidence:(long long)arg2 utterances:(id)arg3 correctionIdentifier:(id)arg4;
- (id)initWithPhrases:(id)arg1 utterances:(id)arg2;
- (id)initWithString:(id)arg1 correctionIdentifier:(id)arg2;
- (id)initWithTokens:(id)arg1 correctionIdentifier:(id)arg2;
- (id)interpretationOfUtteranceAtIndex:(unsigned long long)arg1;
- (id)longestCommonSubsequenceBetweenList:(id)arg1 andList:(id)arg2;
- (long long)numberOfAlternativeUtterances;
- (id)rangeListOfDifferingTextFromSpeechInterpretation:(id)arg1 comparedToBaseTokenList:(id)arg2;
- (id)rangeListOfDifferingTextFromSpeechInterpretation:(id)arg1 comparedToBaseUtteranceAtIndex:(unsigned long long)arg2;
- (id)rangeListOfDifferingTextFromTargetTokenList:(id)arg1 comparedToBaseTokenList:(id)arg2;
- (id)rangeListOfDifferingTextFromUtteranceAtIndex:(unsigned long long)arg1 comparedToBaseUtteranceAtIndex:(unsigned long long)arg2;
- (id)speechTokensForUtteranceAtIndex:(unsigned long long)arg1;
- (id)streamingTokens;
- (id)textOfUtteranceAtIndex:(unsigned long long)arg1;
- (id)updateDictationResult:(id)arg1 withAlternativeUtteranceAtIndex:(unsigned long long)arg2;

@end
