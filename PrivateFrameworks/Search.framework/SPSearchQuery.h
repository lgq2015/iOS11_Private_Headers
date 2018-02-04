/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Search.framework/Search
 */

@interface SPSearchQuery : NSObject <NSCopying> {
    double  _cancellationTime;
    bool  _cancelled;
    long long  _contentFilters;
    unsigned long long  _creationStamp;
    double  _creationTime;
    NSDictionary * _dictationResponse;
    bool  _dictationStable;
    NSArray * _disabledBundles;
    NSArray * _disabledDomains;
    SFSearchSuggestion * _engagedSuggestion;
    bool  _finished;
    bool  _grouped;
    bool  _infinitePatience;
    bool  _internal;
    bool  _isPasscodeLocked;
    bool  _isWideScreen;
    NSString * _keyboardLanguage;
    NSString * _keyboardPrimaryLanguage;
    NSArray * _markedTextArray;
    long long  _maxCount;
    bool  _noTokenize;
    bool  _promoteLocalResults;
    bool  _promoteParsecResults;
    unsigned long long  _queryID;
    unsigned long long  _queryIdent;
    NSArray * _searchDomains;
    NSArray * _searchEntities;
    NSString * _searchString;
    unsigned long long  _whyQuery;
    NSArray * markedTextArray;
}

@property (nonatomic, readonly) double cancellationTime;
@property (nonatomic, readonly) bool cancelled;
@property (nonatomic) long long contentFilters;
@property (nonatomic, readonly) unsigned long long creationStamp;
@property (nonatomic, readonly) double creationTime;
@property (nonatomic, retain) NSDictionary *dictationResponse;
@property (nonatomic) bool dictationStable;
@property (nonatomic, retain) NSArray *disabledBundles;
@property (nonatomic, readonly) NSArray *disabledDomains;
@property (nonatomic, readonly) SFSearchSuggestion *engagedSuggestion;
@property (nonatomic) bool grouped;
@property (nonatomic, readonly) bool hasMarkedText;
@property (nonatomic) bool infinitePatience;
@property (nonatomic) bool internal;
@property (nonatomic, readonly) bool isPasscodeLocked;
@property (nonatomic) bool isWideScreen;
@property (nonatomic, readonly) NSString *keyboardLanguage;
@property (nonatomic, readonly) NSString *keyboardPrimaryLanguage;
@property (nonatomic, readonly) NSArray *markedTextArray;
@property (nonatomic) long long maxCount;
@property (nonatomic) bool noTokenize;
@property (nonatomic) bool promoteLocalResults;
@property (nonatomic) bool promoteParsecResults;
@property (nonatomic) unsigned long long queryIdent;
@property (nonatomic, readonly) NSArray *searchDomains;
@property (nonatomic, readonly) NSArray *searchEntities;
@property (nonatomic, readonly) NSString *searchString;
@property (nonatomic) unsigned long long whyQuery;

- (void).cxx_destruct;
- (void)cancel;
- (double)cancellationTime;
- (bool)cancelled;
- (long long)contentFilters;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)creationStamp;
- (double)creationTime;
- (id)dictationResponse;
- (bool)dictationStable;
- (id)disabledBundles;
- (id)disabledDomains;
- (id)engagedSuggestion;
- (void)execute:(id /* block */)arg1;
- (bool)grouped;
- (bool)hasMarkedText;
- (unsigned long long)hash;
- (bool)infinitePatience;
- (id)initWithQuery:(id)arg1 domains:(id)arg2;
- (id)initWithSearchQueryContext:(id)arg1;
- (id)initWithSearchString:(id)arg1;
- (id)initWithSearchString:(id)arg1 keyboardLanguage:(id)arg2 forSearchDomains:(id)arg3 disabledBundles:(id)arg4;
- (id)initWithSearchString:(id)arg1 keyboardLanguage:(id)arg2 forSearchDomains:(id)arg3 disabledDomains:(id)arg4 disabledBundles:(id)arg5;
- (id)initWithSearchString:(id)arg1 keyboardLanguage:(id)arg2 keyboardPrimaryLanguage:(id)arg3 forSearchDomains:(id)arg4 disabledDomains:(id)arg5 disabledBundles:(id)arg6 searchEntities:(id)arg7;
- (bool)internal;
- (bool)isEqual:(id)arg1;
- (bool)isPasscodeLocked;
- (bool)isWideScreen;
- (id)keyboardLanguage;
- (id)keyboardPrimaryLanguage;
- (id)markedTextArray;
- (long long)maxCount;
- (bool)noTokenize;
- (bool)promoteLocalResults;
- (bool)promoteParsecResults;
- (unsigned long long)queryIdent;
- (id)searchDomains;
- (id)searchEntities;
- (id)searchString;
- (void)setContentFilters:(long long)arg1;
- (void)setDictationResponse:(id)arg1;
- (void)setDictationStable:(bool)arg1;
- (void)setDisabledBundles:(id)arg1;
- (void)setGrouped:(bool)arg1;
- (void)setInfinitePatience:(bool)arg1;
- (void)setInternal:(bool)arg1;
- (void)setIsWideScreen:(bool)arg1;
- (void)setMaxCount:(long long)arg1;
- (void)setNoTokenize:(bool)arg1;
- (void)setPromoteLocalResults:(bool)arg1;
- (void)setPromoteParsecResults:(bool)arg1;
- (void)setQueryIdent:(unsigned long long)arg1;
- (void)setWhyQuery:(unsigned long long)arg1;
- (unsigned long long)whyQuery;

@end
