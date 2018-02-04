/* made by EzioChiu
   Image: /usr/lib/libmecabra.dylib
 */

@interface MecabraCandidate : NSObject <NSCopying> {
    void * _rawCandidate;
}

@property (nonatomic, readonly) NSString *analysisString;
@property (nonatomic, readonly) NSDictionary *attributes;
@property (nonatomic, readonly) NSString *category;
@property (nonatomic, readonly) NSString *convertedAnalysisString;
@property (nonatomic, readonly) NSString *dictionaryReading;
@property (nonatomic, readonly) bool isAutocorrectedCandidate;
@property (nonatomic, readonly) bool isConversionCandidate;
@property (nonatomic, readonly) bool isEmojiCandidate;
@property (nonatomic, readonly) bool isExtensionCandidate;
@property (nonatomic, readonly) bool isFuzzyMatchCandidate;
@property (nonatomic, readonly) bool isLearningDictionaryCandidate;
@property (nonatomic, readonly) bool isOTAWordlistCandidate;
@property (nonatomic, readonly) bool isPersonName;
@property (nonatomic, readonly) bool isPredictionCandidate;
@property (nonatomic, readonly) bool isRegionalCandidate;
@property (nonatomic, readonly) bool isSyntheticCandidate;
@property (nonatomic, readonly) bool isUserWordCandidate;
@property (nonatomic, readonly) struct MecabraCandidateBase { int (**x1)(); long long x2; }*rawCandidate;
@property (nonatomic, readonly) struct ConversionCandidate { int (**x1)(); long long x2; }*rawConversionCandidate;
@property (nonatomic, readonly) NSString *string;
@property (nonatomic, readonly) NSString *surface;
@property (nonatomic, readonly) int type;
@property (nonatomic, readonly) unsigned long long wordCount;

+ (id)syntheticCandidateFromWords:(id)arg1 withLexicon:(struct Lexicon { void *x1; void *x2; }*)arg2 language:(int)arg3;

- (id)analysisString;
- (id)attributes;
- (id)category;
- (id)convertedAnalysisString;
- (id)convertedAnalysisStringForFirstSyllable;
- (struct __CFArray { }*)copySyllableLengthArrayForWordAtIndex:(unsigned long long)arg1;
- (struct __CFArray { }*)copySyllableLengthArrayInAnalysisString;
- (struct __CFArray { }*)copySyllableLengthArrayInConvertedAnalysisString;
- (struct __CFArray { }*)copySyllableLengthArrayInDictionaryReading;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryReading;
- (id)initWithCandidate:(struct MecabraCandidateBase { int (**x1)(); long long x2; }*)arg1;
- (bool)isAutocorrectedCandidate;
- (bool)isConversionCandidate;
- (bool)isEmojiCandidate;
- (bool)isEqual:(id)arg1;
- (bool)isExtensionCandidate;
- (bool)isFuzzyMatchCandidate;
- (bool)isLearningDictionaryCandidate;
- (bool)isOTAWordlistCandidate;
- (bool)isPersonName;
- (bool)isPredictionCandidate;
- (bool)isRegionalCandidate;
- (bool)isSyntheticCandidate;
- (bool)isUserWordCandidate;
- (unsigned short)kind;
- (unsigned short)lastPrefixValue;
- (unsigned short)lcAttrAtIndex:(unsigned long long)arg1;
- (unsigned short)matchType;
- (unsigned short)matchedLengthType;
- (long long)phraseBoundaryAfterWordAtIndex:(long long)arg1;
- (struct MecabraCandidateBase { int (**x1)(); long long x2; }*)rawCandidate;
- (struct ConversionCandidate { int (**x1)(); long long x2; }*)rawConversionCandidate;
- (unsigned short)rcAttrAtIndex:(unsigned long long)arg1;
- (bool)setDisplayString:(struct __CFString { }*)arg1;
- (void)setWeight:(unsigned long long)arg1;
- (id)string;
- (id)surface;
- (id)syllabifiedAnalysisString;
- (id)syllabifiedConvertedAnalysisString;
- (id)syllabifiedDictionaryReading;
- (id)syllablesInAnalysisString;
- (id)syllablesInConvertedAnalysisString;
- (id)syllablesInDictionaryReading;
- (id)syllablesInString:(id)arg1 syllableLengths:(id)arg2;
- (unsigned long long)trieValueAtIndex:(unsigned long long)arg1;
- (int)type;
- (long long)weight;
- (unsigned long long)wordCount;
- (unsigned short)wordDictionaryReadingLengthAtIndex:(unsigned long long)arg1;
- (id)wordIDs;
- (bool)wordIsFromSystemDictionaryAtIndex:(unsigned long long)arg1;
- (unsigned short)wordLengthAtIndex:(unsigned long long)arg1;
- (struct { long long x1; long long x2; })wordRangeAtIndex:(long long)arg1;
- (unsigned short)wordReadingLengthAtIndex:(unsigned long long)arg1;
- (id)wordReadings;
- (id)words;

@end
