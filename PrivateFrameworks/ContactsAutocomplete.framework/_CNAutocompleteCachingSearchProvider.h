/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
 */

@interface _CNAutocompleteCachingSearchProvider : NSObject <CNAutocompleteSearchProvider> {
    <CNFuture> * _calendarServerSearchFuture;
    <CNFuture> * _directoryServerSearchFuture;
    <CNFuture> * _duetSearchFuture;
    <CNFuture> * _localSearchFuture;
    <CNFuture> * _recentsSearchFuture;
    <CNFuture> * _suggestionsSearchFuture;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)calendarServerSearch;
- (id)directoryServerSearch;
- (id)duetSearch;
- (id)initWithSearchProvider:(id)arg1;
- (id)localSearch;
- (id)recentsSearch;
- (id)suggestionsSearch;

@end
