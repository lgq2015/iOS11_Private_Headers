/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

@interface CHTextRecognitionResult : CHRecognitionResult {
    bool  _rare;
    NSString * _string;
    NSArray * _wordIDs;
    NSArray * _wordLexicalEntries;
    NSIndexSet * _wordOVSIDs;
    NSArray * _wordPatternEntries;
    NSArray * _wordRanges;
    NSArray * _wordScores;
    NSArray * _wordStrokeSets;
}

@property (readonly) bool rare;
@property (readonly) NSString *string;
@property (readonly) NSArray *wordIDs;
@property (readonly) NSArray *wordLexicalEntries;
@property (readonly) NSIndexSet *wordOVSIDs;
@property (readonly) NSArray *wordPatternEntries;
@property (readonly) NSArray *wordRanges;
@property (readonly) NSArray *wordScores;
@property (readonly) NSArray *wordStrokeSets;

+ (void)_filterCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 fromString:(id)arg2 withLastFilteredRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;

- (bool)_isGibberishWordAtIndex:(long long)arg1;
- (void)dealloc;
- (id)initWithString:(id)arg1 score:(double)arg2 rare:(bool)arg3 wordRanges:(id)arg4 wordIDs:(id)arg5;
- (id)initWithString:(id)arg1 score:(double)arg2 rare:(bool)arg3 wordRanges:(id)arg4 wordIDs:(id)arg5 lexicalEntry:(bool)arg6 patternEntry:(bool)arg7;
- (id)initWithString:(id)arg1 score:(double)arg2 rare:(bool)arg3 wordRanges:(id)arg4 wordIDs:(id)arg5 wordScores:(id)arg6 wordStrokeSets:(id)arg7 wordLexicalEntries:(id)arg8 wordPatternEntries:(id)arg9 wordOVSIDs:(id)arg10;
- (float)languageFitnessForLocale:(id)arg1 competingLocales:(id)arg2;
- (id)mecabraCandidate;
- (bool)rare;
- (id)string;
- (id)stringByFilteringLowConfidenceRanges:(bool)arg1 excludeGibberish:(bool)arg2 rejectionRate:(double*)arg3;
- (id)wordIDs;
- (id)wordLexicalEntries;
- (id)wordOVSIDs;
- (id)wordPatternEntries;
- (id)wordRanges;
- (id)wordScores;
- (id)wordStrokeSets;

@end
