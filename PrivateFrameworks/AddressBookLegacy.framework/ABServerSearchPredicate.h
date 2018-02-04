/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AddressBookLegacy.framework/AddressBookLegacy
 */

@interface ABServerSearchPredicate : ABPredicate <DASearchQueryConsumer> {
    NSString * _accountIdentifier;
    DADConnection * _connection;
    <ABPredicateDelegate> * _delegate;
    NSConditionLock * _doneLock;
    int  _error;
    bool  _includePhotosInResults;
    bool  _includeSourceInResults;
    DAContactsSearchQuery * _searchQuery;
    NSMutableArray * _searchResults;
    NSString * _searchString;
    void * _source;
}

@property (nonatomic, copy) NSString *accountIdentifier;
@property (nonatomic, retain) DADConnection *connection;
@property (nonatomic) <ABPredicateDelegate> *delegate;
@property (nonatomic, readonly) int error;
@property (nonatomic) bool includePhotosInResults;
@property (nonatomic) bool includeSourceInResults;
@property (nonatomic, copy) NSString *searchString;
@property (nonatomic) void*source;

- (int)_errorForDAStatusCode:(long long)arg1;
- (void)_searchQueryIsDone;
- (void)ab_runPredicateWithSortOrder:(unsigned int)arg1 ranked:(bool)arg2 inAddressBook:(void*)arg3 withDelegate:(id)arg4;
- (id)accountIdentifier;
- (id)connection;
- (void)dealloc;
- (id)delegate;
- (int)error;
- (bool)includePhotosInResults;
- (bool)includeSourceInResults;
- (id)initWithSearchString:(id)arg1 source:(void*)arg2 account:(id)arg3;
- (id)initWithSearchString:(id)arg1 source:(void*)arg2 account:(id)arg3 includeSourceInResults:(bool)arg4;
- (id)initWithSearchString:(id)arg1 source:(void*)arg2 account:(id)arg3 includeSourceInResults:(bool)arg4 includePhotosInResults:(bool)arg5;
- (void)runPredicate;
- (void)runPredicateWithDelegate:(id)arg1;
- (void)searchQuery:(id)arg1 finishedWithError:(id)arg2;
- (void)searchQuery:(id)arg1 returnedResults:(id)arg2;
- (id)searchString;
- (void)setAccountIdentifier:(id)arg1;
- (void)setConnection:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIncludePhotosInResults:(bool)arg1;
- (void)setIncludeSourceInResults:(bool)arg1;
- (void)setSearchString:(id)arg1;
- (void)setSource:(void*)arg1;
- (void*)source;

@end
