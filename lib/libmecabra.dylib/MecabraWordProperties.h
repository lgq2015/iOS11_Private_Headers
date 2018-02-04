/* made by EzioChiu
   Image: /usr/lib/libmecabra.dylib
 */

@interface MecabraWordProperties : NSObject {
    NSString * _analysisString;
    NSArray * _characterInformation;
    NSArray * _codeLookupInformation;
    bool  _emoji;
    int  _language;
}

@property (nonatomic, copy) NSString *analysisString;
@property (nonatomic, retain) NSArray *characterInformation;
@property (nonatomic, retain) NSArray *codeLookupInformation;
@property (getter=isEmoji, nonatomic) bool emoji;
@property (nonatomic) int language;

+ (struct __IDXIndex { }*)characterInformationDictionary;
+ (struct __IDXIndex { }*)codeLookupInformationDictionary;
+ (struct __IDXIndex { }*)informationDictionaryAtPath:(struct __CFURL { }*)arg1;
+ (id)searchResultsForString:(id)arg1 dictionary:(struct __IDXIndex { }*)arg2;
+ (id)sortedRadicalList;

- (id)analysisString;
- (id)bihuaCodes;
- (id)cangjieCodes;
- (id)characterInformation;
- (id)codeLookupInformation;
- (void)dealloc;
- (id)initWithString:(id)arg1 language:(int)arg2;
- (id)initialsForStrings:(id)arg1;
- (bool)isEmoji;
- (id)isIncludedInCurrentLanguage;
- (int)language;
- (id)pinyinInformationForString:(id)arg1;
- (id)radicalInformationForString:(id)arg1;
- (id)separatedInputCodesForString:(id)arg1;
- (void)setAnalysisString:(id)arg1;
- (void)setCharacterInformation:(id)arg1;
- (void)setCodeLookupInformation:(id)arg1;
- (void)setEmoji:(bool)arg1;
- (void)setLanguage:(int)arg1;
- (id)strokeInformationForString:(id)arg1;
- (id)tonesForString:(id)arg1;
- (id)valueForKey:(int)arg1;
- (id)wubixingCodes;
- (id)zhuyinInformationForString:(id)arg1;

@end
