/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
 */

@interface CNAutocompleteStoreQueryHelper : NSObject {
    <CNAutocompleteFetchDelegate> * _delegate;
    <CNAutocompleteProbeProvider> * _probeProvider;
    <CNScheduler> * _scheduler;
    <CNAutocompleteSearchProvider> * _searchProvider;
    CNAutocompleteUserSession * _userSession;
}

@property (nonatomic, readonly) <CNAutocompleteFetchDelegate> *delegate;
@property (nonatomic, readonly) <CNAutocompleteProbeProvider> *probeProvider;
@property (nonatomic, readonly) <CNScheduler> *scheduler;
@property (nonatomic, readonly) <CNAutocompleteSearchProvider> *searchProvider;
@property (nonatomic, readonly) CNAutocompleteUserSession *userSession;

- (void).cxx_destruct;
- (id)delegate;
- (id)executeFetchRequest:(id)arg1 delegate:(id)arg2 delegateToken:(id)arg3;
- (id)initWithSearchProvider:(id)arg1 delegate:(id)arg2 probeProvider:(id)arg3 scheduler:(id)arg4 userSession:(id)arg5;
- (id)probeProvider;
- (id)scheduler;
- (id)searchProvider;
- (id)userSession;

@end
