/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Search.framework/Search
 */

@interface SPSearchQueryContext : NSObject {
    bool  _allowInternet;
    NSArray * _disabledBundles;
    NSArray * _disabledDomains;
    SFSearchSuggestion * _engagedSuggestion;
    bool  _forceQueryEvenIfSame;
    bool  _isPasscodeLocked;
    NSString * _keyboardLanguage;
    NSString * _keyboardPrimaryLanguage;
    NSArray * _markedTextArray;
    bool  _noTokenize;
    bool  _promoteLocalResults;
    bool  _promoteParsecResults;
    unsigned long long  _queryIdent;
    NSArray * _searchDomains;
    NSArray * _searchEntities;
    NSString * _searchString;
    unsigned long long  _whyClear;
    unsigned long long  _whyQuery;
}

@property (nonatomic) bool allowInternet;
@property (nonatomic, retain) NSArray *disabledBundles;
@property (nonatomic, retain) NSArray *disabledDomains;
@property (nonatomic, readonly) NSString *displayedText;
@property (nonatomic, retain) SFSearchSuggestion *engagedSuggestion;
@property (nonatomic) bool forceQueryEvenIfSame;
@property (nonatomic, readonly) bool hasMarkedText;
@property (nonatomic) bool isPasscodeLocked;
@property (nonatomic, retain) NSString *keyboardLanguage;
@property (nonatomic, retain) NSString *keyboardPrimaryLanguage;
@property (nonatomic, retain) NSArray *markedTextArray;
@property (nonatomic) bool noTokenize;
@property (nonatomic) bool promoteLocalResults;
@property (nonatomic) bool promoteParsecResults;
@property (nonatomic) unsigned long long queryIdent;
@property (nonatomic, retain) NSArray *searchDomains;
@property (nonatomic, retain) NSArray *searchEntities;
@property (nonatomic, retain) NSString *searchString;
@property (nonatomic) unsigned long long whyClear;
@property (nonatomic) unsigned long long whyQuery;

+ (id)queryContextWithSearchString:(id)arg1;

- (void).cxx_destruct;
- (bool)allowInternet;
- (id)disabledBundles;
- (id)disabledDomains;
- (id)displayedText;
- (id)engagedSuggestion;
- (bool)forceQueryEvenIfSame;
- (bool)hasMarkedText;
- (id)initWithSearchString:(id)arg1;
- (bool)isPasscodeLocked;
- (id)keyboardLanguage;
- (id)keyboardPrimaryLanguage;
- (id)markedTextArray;
- (bool)noTokenize;
- (bool)promoteLocalResults;
- (bool)promoteParsecResults;
- (unsigned long long)queryIdent;
- (id)searchDomains;
- (id)searchEntities;
- (id)searchString;
- (void)setAllowInternet:(bool)arg1;
- (void)setDisabledBundles:(id)arg1;
- (void)setDisabledDomains:(id)arg1;
- (void)setEngagedSuggestion:(id)arg1;
- (void)setForceQueryEvenIfSame:(bool)arg1;
- (void)setIsPasscodeLocked:(bool)arg1;
- (void)setKeyboardLanguage:(id)arg1;
- (void)setKeyboardPrimaryLanguage:(id)arg1;
- (void)setMarkedTextArray:(id)arg1;
- (void)setNoTokenize:(bool)arg1;
- (void)setPromoteLocalResults:(bool)arg1;
- (void)setPromoteParsecResults:(bool)arg1;
- (void)setQueryIdent:(unsigned long long)arg1;
- (void)setSearchDomains:(id)arg1;
- (void)setSearchEntities:(id)arg1;
- (void)setSearchString:(id)arg1;
- (void)setWhyClear:(unsigned long long)arg1;
- (void)setWhyQuery:(unsigned long long)arg1;
- (unsigned long long)whyClear;
- (unsigned long long)whyQuery;

@end
