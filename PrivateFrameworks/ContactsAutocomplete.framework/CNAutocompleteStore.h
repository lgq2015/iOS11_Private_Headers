/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
 */

@interface CNAutocompleteStore : NSObject {
    CNCancelationToken * _currentFetchToken;
    double  _fetchCoalescingInterval;
    <CNAutocompleteProbeProvider> * _probeProvider;
    CNAutocompleteStoreQueryHelper * _queryHelper;
    <CNScheduler> * _scheduler;
    CNAutocompleteUserSession * _userSession;
}

@property (nonatomic) CNCancelationToken *currentFetchToken;
@property (nonatomic) double fetchCoalescingInterval;
@property (nonatomic, readonly) <CNAutocompleteProbeProvider> *probeProvider;
@property (nonatomic, readonly) CNAutocompleteStoreQueryHelper *queryHelper;
@property (nonatomic, readonly) <CNScheduler> *scheduler;
@property (nonatomic, readonly) <CNAutocompleteSearchProvider> *searchProvider;
@property (nonatomic, retain) CNAutocompleteUserSession *userSession;

+ (double)defaultFetchCoalescingInterval;

- (void).cxx_destruct;
- (id)currentFetchToken;
- (id)executeFetchRequest:(id)arg1;
- (id)executeFetchRequest:(id)arg1 afterDelay:(double)arg2 delegate:(id)arg3;
- (id)executeFetchRequest:(id)arg1 delegate:(id)arg2;
- (double)fetchCoalescingInterval;
- (void)ignoreResult:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)init;
- (id)initWithDelegate:(id)arg1;
- (id)initWithDelegate:(id)arg1 searchProvider:(id)arg2 probeProvider:(id)arg3 scheduler:(id)arg4;
- (id)probeProvider;
- (id)queryHelper;
- (id)scheduleFetchRequest:(id)arg1;
- (id)scheduleFetchRequest:(id)arg1 delegate:(id)arg2;
- (id)scheduler;
- (id)searchProvider;
- (void)setCurrentFetchToken:(id)arg1;
- (void)setFetchCoalescingInterval:(double)arg1;
- (void)setUserSession:(id)arg1;
- (void)userSelectedResult:(id)arg1 atSortedIndex:(unsigned long long)arg2;
- (id)userSession;

@end
