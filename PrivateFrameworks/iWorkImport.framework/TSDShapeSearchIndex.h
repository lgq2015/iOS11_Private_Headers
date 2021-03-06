/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDShapeSearchIndex : NSObject {
    TSULocale * _locale;
    NSDictionary * _searchIndex;
    NSCharacterSet * _whitespaceCharacterSet;
}

@property (nonatomic, retain) TSULocale *p_locale;
@property (nonatomic, copy) NSDictionary *p_searchIndex;
@property (nonatomic, retain) NSCharacterSet *p_whitespaceCharacterSet;

- (void).cxx_destruct;
- (void)addSearchResultWithIdentifier:(id)arg1 forKeyword:(id)arg2 priority:(unsigned long long)arg3;
- (void)addSearchResults:(id)arg1;
- (id)init;
- (id)initWithLocale:(id)arg1;
- (id)p_hyphenFoldedStringFromString:(id)arg1;
- (id)p_keywords;
- (id)p_locale;
- (id)p_predicateWithSearchTerm:(id)arg1 shouldPerformDiacriticInsensitiveSearch:(bool)arg2;
- (id)p_punctuationFoldedStringFromString:(id)arg1;
- (id)p_quotationFoldedStringFromString:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })p_rangeOfSearchTerm:(id)arg1 inString:(id)arg2 shouldPerformDiacriticInsensitiveSearch:(bool)arg3;
- (void)p_removeSearchResultWithIdentifier:(id)arg1 forTokenizedKeyword:(id)arg2;
- (id)p_resultsDictionaryForSearchTerm:(id)arg1 withFilteredKeywords:(id)arg2 shouldPerformDiacriticInsensitiveSearch:(bool)arg3;
- (id)p_resultsForKeyword:(id)arg1;
- (id)p_searchIndex;
- (id)p_sortedFilteredKeywordsForSearchTerm:(id)arg1 usingPredicate:(id)arg2;
- (void)p_tokenizeKeyword:(id)arg1 yieldingTokenizedKeyword:(id /* block */)arg2;
- (id)p_whitespaceCharacterSet;
- (void)removeSearchResultWithIdentifier:(id)arg1 forKeyword:(id)arg2;
- (id)resultsForSearchTerm:(id)arg1;
- (void)setP_locale:(id)arg1;
- (void)setP_searchIndex:(id)arg1;
- (void)setP_whitespaceCharacterSet:(id)arg1;

@end
