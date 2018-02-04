/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUISearchFieldController : NSObject <SKUISearchControllerDelegate, SKUITrendingSearchPageViewDelegate, UIPopoverPresentationControllerDelegate, UISearchBarDelegate, UISearchResultsUpdating, UITableViewDataSource, UITableViewDelegate> {
    SKUIClientContext * _clientContext;
    SKUICompletionList * _completionList;
    UIViewController * _contentsController;
    <SKUISearchFieldDelegate> * _delegate;
    struct { 
        unsigned int searchFieldControllerRequestSearch : 1; 
        unsigned int searchFieldControllerSearchBarDidChangeText : 1; 
        unsigned int searchFieldControllerShouldBeginEditing : 1; 
    }  _delegateRespondsTo;
    SSVLoadURLOperation * _loadOperation;
    long long  _numberOfSearchResults;
    NSOperationQueue * _operationQueue;
    NSString * _searchBarAccessoryText;
    SKUISearchController * _searchController;
    NSString * _searchHintsURLString;
    UITableViewController * _searchResultsController;
    NSString * _trendingSearchURLString;
}

@property (nonatomic, readonly) bool canBecomeActive;
@property (nonatomic, retain) SKUIClientContext *clientContext;
@property (nonatomic, readonly) UIViewController *contentsController;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SKUISearchFieldDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool displaysSearchBarInNavigationBar;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long numberOfSearchResults;
@property (nonatomic, readonly) UISearchBar *searchBar;
@property (nonatomic, copy) NSString *searchBarAccessoryText;
@property (nonatomic, copy) NSString *searchHintsURLString;
@property (nonatomic) bool showsResultsForEmptyField;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *trendingSearchURLString;

- (void).cxx_destruct;
- (id)URLForTrendingSearchPageView:(id)arg1;
- (void)_adjustInsetsForResultsTableView:(id)arg1;
- (void)_loadResultsForSearchRequest:(id)arg1;
- (bool)_presentsInPopover:(id)arg1;
- (void)_reloadData;
- (void)_reloadTrendingVisibility;
- (void)_setResponse:(id)arg1 error:(id)arg2;
- (void)becomeActive;
- (bool)canBecomeActive;
- (id)clientContext;
- (id)contentsController;
- (id)delegate;
- (bool)displaysSearchBarInNavigationBar;
- (id)initWithContentsController:(id)arg1;
- (id)initWithContentsController:(id)arg1 clientContext:(id)arg2;
- (long long)numberOfSearchResults;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;
- (void)prepareForPopoverPresentation:(id)arg1;
- (void)presentSearchController:(id)arg1;
- (void)resignActive:(bool)arg1;
- (id)searchBar;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (id)searchBarAccessoryText;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (bool)searchBarShouldBeginEditing:(id)arg1;
- (bool)searchBarShouldClear:(id)arg1;
- (id)searchControllerClientContext:(id)arg1;
- (void)searchControllerWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (id)searchHintsURLString;
- (void)setClientContext:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisplaysSearchBarInNavigationBar:(bool)arg1;
- (void)setNumberOfSearchResults:(long long)arg1;
- (void)setSearchBarAccessoryText:(id)arg1;
- (void)setSearchHintsURLString:(id)arg1;
- (void)setSearchTerm:(id)arg1;
- (void)setShowsResultsForEmptyField:(bool)arg1;
- (void)setTrendingSearchURLString:(id)arg1;
- (bool)showsResultsForEmptyField;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)trendingSearchPageView:(id)arg1 didSelectSearch:(id)arg2;
- (id)trendingSearchURLString;
- (void)updateSearchResultsForSearchController:(id)arg1;
- (void)willDismissSearchController:(id)arg1;
- (void)willPresentSearchController:(id)arg1;

@end
