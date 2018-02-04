/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIGiftContactSearchController : NSObject <MFContactsSearchConsumer, UITableViewDataSource, UITableViewDelegate> {
    NSMutableArray * _autocompleteSearchResults;
    <SKUIGiftContactSearchDelegate> * _delegate;
    NSArray * _results;
    MFContactsSearchManager * _searchManager;
    UIView * _searchResultsView;
    NSNumber * _searchTaskIdentifier;
    UITableView * _tableView;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SKUIGiftContactSearchDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long numberOfResults;
@property (nonatomic, readonly) UIView *searchResultsView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_finishSearchWithResults:(id)arg1;
- (void)_setResults:(id)arg1;
- (id)_tableView;
- (bool)cancelSearch;
- (void)consumeAutocompleteSearchResults:(id)arg1 taskID:(id)arg2;
- (void)dealloc;
- (id)delegate;
- (void)finishedSearchingForAutocompleteResults;
- (long long)numberOfResults;
- (void)resetSearch;
- (void)searchForText:(id)arg1;
- (id)searchResultsView;
- (void)setDelegate:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;

@end
