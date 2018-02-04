/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
 */

@interface CNAutocompleteLocalQuery : NSObject <CNCancelable> {
    CNContactStore * _contactFetcherStore;
    CNContactStore * _contactStore;
    <CNAutocompleteLocalQueryDelegate> * _delegate;
    CNAutocompleteFetchRequest * _request;
}

@property (retain) CNContactStore *contactFetcherStore;
@property (retain) CNContactStore *contactStore;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) CNAutocompleteFetchRequest *request;
@property (readonly) Class superclass;

+ (id)groupsQuery;
+ (id)peopleQuery;
+ (id)queryWithDelegate:(id)arg1;

- (void).cxx_destruct;
- (id)autocompleteResultsForFetchResults:(id)arg1 resultFactory:(id)arg2;
- (void)cancel;
- (id)contactFetcherStore;
- (id)contactStore;
- (id)fetchResults;
- (id)makeResultFactory;
- (id)request;
- (id)run;
- (id)searchableProperties;
- (void)setContactFetcherStore:(id)arg1;
- (void)setContactStore:(id)arg1;
- (void)setRequest:(id)arg1;

@end
