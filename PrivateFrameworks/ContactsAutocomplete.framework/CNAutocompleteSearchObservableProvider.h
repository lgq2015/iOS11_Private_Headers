/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
 */

@interface CNAutocompleteSearchObservableProvider : NSObject <CNAutocompleteSearchObservableProvider> {
    CNAutocompleteFetchRequest * _fetchRequest;
    <CNScheduler> * _scheduler;
    <CNAutocompleteSearchProvider> * _searchProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) CNAutocompleteFetchRequest *fetchRequest;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <CNScheduler> *scheduler;
@property (nonatomic, readonly) <CNAutocompleteSearchProvider> *searchProvider;
@property (readonly) Class superclass;

+ (id)providerWithSearchProvider:(id)arg1 fetchRequest:(id)arg2 scheduler:(id)arg3;

- (void).cxx_destruct;
- (id)calendarServersSearchObservable;
- (id)directoryServersSearchObservable;
- (id)fetchRequest;
- (id)initWithSearchProvider:(id)arg1 fetchRequest:(id)arg2 scheduler:(id)arg3;
- (id)localSearchObservable;
- (id)observableWithWrappedSearchProviderGetter:(id /* block */)arg1 name:(id)arg2;
- (id)predictionsSearchObservableWithUnfilteredResultPromise:(id)arg1;
- (id)recentsSearchObservable;
- (id)scheduler;
- (id)searchProvider;
- (id)suggestionsSearchObservable;

@end
