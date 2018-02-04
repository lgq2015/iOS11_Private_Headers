/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ResponseKit.framework/ResponseKit
 */

@interface RKPersistentPersonalizer : NSObject {
    <RKDisplayStringsProvider> * _displayStringsProvider;
    NSURL * _dynamicDataURL;
    NSString * _languageID;
    NSLocale * _languageLocale;
    NSDate * _lastDynamicDataCreationCheckDate;
    NSDate * _lastObservedDynamicDataCreationDate;
    void * _model;
    NSMutableDictionary * _synonyms;
}

@property (readonly) <RKDisplayStringsProvider> *displayStringsProvider;
@property (retain) NSURL *dynamicDataURL;
@property (retain) NSString *languageID;
@property (retain) NSLocale *languageLocale;
@property (retain) NSDate *lastDynamicDataCreationCheckDate;
@property (retain) NSDate *lastObservedDynamicDataCreationDate;
@property (readonly) void*model;
@property (retain) NSMutableDictionary *synonyms;

+ (id)nonEmptyStringsPredicate;
+ (void)removeAllDynamicModelsInDirectory:(id)arg1;

- (void).cxx_destruct;
- (void*)createLanguageModel;
- (void)dealloc;
- (id)displayStringsProvider;
- (id)dynamicDataCreationDate;
- (id)dynamicDataURL;
- (void)flushDynamicData;
- (id)headwordsForSynonym:(id)arg1;
- (id)headwordsForSynonymPrefix:(id)arg1;
- (id)init;
- (id)initWithLanguageIdentifier:(id)arg1 andDynamicDataURL:(id)arg2 displayStringsProvider:(id)arg3;
- (void)initializeDynamicLanguageModel;
- (id)languageID;
- (id)languageLocale;
- (id)lastDynamicDataCreationCheckDate;
- (id)lastObservedDynamicDataCreationDate;
- (void*)model;
- (void)setDynamicDataURL:(id)arg1;
- (void)setLanguageID:(id)arg1;
- (void)setLanguageLocale:(id)arg1;
- (void)setLastDynamicDataCreationCheckDate:(id)arg1;
- (void)setLastObservedDynamicDataCreationDate:(id)arg1;
- (void)setSynonyms:(id)arg1;
- (id)synonyms;
- (id)topSynonymsForSpeechAct:(id)arg1 headword:(id)arg2 recipientContext:(id)arg3 maxCount:(unsigned long long)arg4;
- (void)trainSynonymForSpeechAct:(id)arg1 headword:(id)arg2 userResponse:(id)arg3 recipientContext:(id)arg4 weight:(unsigned long long)arg5 effectiveDate:(id)arg6;

@end
