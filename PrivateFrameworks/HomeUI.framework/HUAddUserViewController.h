/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUAddUserViewController : UIViewController <CNContactPickerDelegate, HUUserManagementDelegate, MFComposeRecipientViewDelegate, MFContactsSearchConsumer, UITableViewDataSource, UITableViewDelegate> {
    bool  _addressBookAccessDenied;
    UIScrollView * _composeScrollView;
    MFComposeRecipientView * _composeView;
    <HUAddUserViewControllerDelegate> * _delegate;
    HMHome * _home;
    NSNumber * _lastSearchID;
    MFContactsSearchManager * _searchManager;
    NSArray * _searchResults;
    MFContactsSearchResultsModel * _searchResultsModel;
    UITableView * _searchResultsView;
    MFSearchShadowView * _shadowView;
    bool  _showingSearchField;
}

@property (nonatomic) bool addressBookAccessDenied;
@property (nonatomic, retain) UIScrollView *composeScrollView;
@property (nonatomic, retain) MFComposeRecipientView *composeView;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HUAddUserViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HMHome *home;
@property (nonatomic, copy) NSNumber *lastSearchID;
@property (nonatomic, retain) MFContactsSearchManager *searchManager;
@property (nonatomic, copy) NSArray *searchResults;
@property (nonatomic, retain) MFContactsSearchResultsModel *searchResultsModel;
@property (nonatomic, retain) UITableView *searchResultsView;
@property (nonatomic, retain) MFSearchShadowView *shadowView;
@property (nonatomic) bool showingSearchField;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addRecipientFromSelectedContactProperty:(id)arg1;
- (void)_addTapped;
- (void)_cancelTapped;
- (void)_hideSearchFieldAndCancelOutstandingSearches:(bool)arg1;
- (double)_maxScrollerHeight;
- (void)_searchWithText:(id)arg1;
- (void)_showSearchField;
- (bool)addressBookAccessDenied;
- (void)animationDidStop:(id)arg1;
- (void)beganNetworkActivity;
- (id)composeRecipientView:(id)arg1 composeRecipientForAddress:(id)arg2;
- (id)composeRecipientView:(id)arg1 composeRecipientForRecord:(void*)arg2 identifier:(int)arg3;
- (void)composeRecipientView:(id)arg1 didAddRecipient:(id)arg2;
- (void)composeRecipientView:(id)arg1 didChangeSize:(struct CGSize { double x1; double x2; })arg2;
- (void)composeRecipientView:(id)arg1 didFinishEnteringAddress:(id)arg2;
- (void)composeRecipientView:(id)arg1 didRemoveRecipient:(id)arg2;
- (void)composeRecipientView:(id)arg1 textDidChange:(id)arg2;
- (void)composeRecipientViewDidFinishPickingRecipient:(id)arg1;
- (void)composeRecipientViewRequestAddRecipient:(id)arg1;
- (id)composeScrollView;
- (id)composeView;
- (void)consumeSearchResults:(id)arg1 type:(unsigned long long)arg2 taskID:(id)arg3;
- (void)contactPicker:(id)arg1 didSelectContact:(id)arg2;
- (void)contactPicker:(id)arg1 didSelectContactProperty:(id)arg2;
- (void)contactPickerDidCancel:(id)arg1;
- (id)delegate;
- (void)endedNetworkActivity;
- (void)finishedSearchingForType:(unsigned long long)arg1;
- (void)finishedTaskWithID:(id)arg1;
- (id)home;
- (id)lastSearchID;
- (void)loadView;
- (id)searchManager;
- (id)searchResults;
- (id)searchResultsModel;
- (id)searchResultsView;
- (void)setAddressBookAccessDenied:(bool)arg1;
- (void)setComposeScrollView:(id)arg1;
- (void)setComposeView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHome:(id)arg1;
- (void)setLastSearchID:(id)arg1;
- (void)setSearchManager:(id)arg1;
- (void)setSearchResults:(id)arg1;
- (void)setSearchResultsModel:(id)arg1;
- (void)setSearchResultsView:(id)arg1;
- (void)setShadowView:(id)arg1;
- (void)setShowingSearchField:(bool)arg1;
- (id)shadowView;
- (bool)showingSearchField;
- (bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)updateHome:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
