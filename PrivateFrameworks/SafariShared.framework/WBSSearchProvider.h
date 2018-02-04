/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSSearchProvider : NSObject <NSSecureCoding> {
    NSArray * _hostSuffixes;
    NSArray * _pathPrefixes;
    NSString * _queryKey;
    NSDictionary * _safeSearchURLQueryParameters;
    WBSOpenSearchURLTemplate * _safeSearchURLTemplate;
    WBSOpenSearchURLTemplate * _searchURLTemplate;
    WBSURLSuffixChecker * _suffixChecker;
    WBSOpenSearchURLTemplate * _suggestionsURLTemplate;
    bool  _usesSearchTermsFromFragment;
}

@property (nonatomic, readonly) WBSOpenSearchURLTemplate *suggestionsURLTemplate;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSearchURLTemplate:(id)arg1 safeSearchURLTemplate:(id)arg2 safeSearchURLQueryParameters:(id)arg3 usesSearchTermsFromFragment:(bool)arg4 suggestionsURLTemplate:(id)arg5 hostSuffixes:(id)arg6 pathPrefixes:(id)arg7;
- (id)safeSearchURLForSearchURL:(id)arg1;
- (bool)searchShouldUseSafeSearchTemplate;
- (id)searchURLForUserTypedString:(id)arg1;
- (id)suggestionsURLForUserTypedString:(id)arg1;
- (id)suggestionsURLTemplate;
- (bool)urlIsValidSearch:(id)arg1;
- (id)userVisibleQueryFromSearchURL:(id)arg1;
- (id)userVisibleQueryFromSearchURL:(id)arg1 allowQueryThatLooksLikeURL:(bool)arg2;

@end
