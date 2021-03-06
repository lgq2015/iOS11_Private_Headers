/* made by EzioChiu.
 */

@protocol WBSCompletionListItem <NSObject>

@required

- (unsigned long long)engagementDestination;
- (NSString *)parsecDomainIdentifier;
- (SFSearchResult *)sfSearchResultValue;

@optional

- (NSString *)lastSearchQuery;
- (void)setSiriSuggestion:(WBSQuerySuggestion *)arg1;
- (WBSQuerySuggestion *)siriSuggestion;

@end
