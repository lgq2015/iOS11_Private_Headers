/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicSearchRecentsViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {
    UIBarButtonItem * _clearBarButtonItem;
    <MusicSearchRecentsViewControllerDelegate> * _delegate;
    UIImageView * _emptyRecentsImageView;
    UILabel * _emptyRecentsLabel;
    UIView * _emptyRecentsView;
    NSArray * _recentSearches;
    MusicSearchRecentsStorage * _storage;
    UITableView * _tableView;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MusicSearchRecentsViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_clearButtonTapped:(id)arg1;
- (void)_contentSizeCategoryDidChangeNotification:(id)arg1;
- (void)_doneButtonTapped:(id)arg1;
- (void)_layoutEmptyResultsView;
- (void)_recentsStorageDidUpdate:(id)arg1;
- (void)_reloadData;
- (void)_showNoResults;
- (void)_showTableView;
- (id)_stringAtIndex:(unsigned long long)arg1;
- (id)contentScrollView;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (void)setDelegate:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
