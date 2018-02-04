/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
 */

@interface CNAutocompleteLocalGroupsFetcher : NSObject <CNAutocompleteLocalQueryDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)autocompleteResultsForProperties:(id)arg1 fetchResults:(id)arg2 resultFactory:(id)arg3 contactStore:(id)arg4;
- (id)resultsForSearchString:(id)arg1 terms:(id)arg2 properties:(id)arg3 contactStore:(id)arg4 error:(id*)arg5;

@end
