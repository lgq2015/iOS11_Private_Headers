/* made by EzioChiu.
 */

@protocol PXPeopleSuggestionManagerDataSource <NSObject>

@required

- (bool)cancelSuggestionForPerson:(id <PXPerson>)arg1 withToken:(PXSuggestionToken *)arg2 error:(id*)arg3;
- (<PXPerson> *)commitSuggestionsForPerson:(id <PXPerson>)arg1 withConfirmedSuggestions:(NSArray *)arg2 andRejectedSuggestions:(NSArray *)arg3;
- (PXSuggestionToken *)suggestionsForPerson:(void *)arg1 withConfirmedSuggestions:(void *)arg2 andRejectedSuggestions:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 9: <PXPerson> *, NSArray *, NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*

@optional

- (unsigned long long)initialPageLimit;
- (void)setInitialPageLimit:(unsigned long long)arg1;
- (void)startListeningForLibraryChanges;
- (void)stopListeningForLibraryChanges;

@end
