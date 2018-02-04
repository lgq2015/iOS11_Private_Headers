/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUTableViewController : SUViewController <UITableViewDataSource, UITableViewDelegate> {
    SUTableDataSource * _dataSource;
    long long  _disappearOrientation;
    NSIndexPath * _firstTapIndexPath;
    long long  _placeholderRowCount;
    bool  _preferUserInteractionWhileScrolling;
    SUTableView * _tableView;
    long long  _tableViewStyle;
}

@property (nonatomic, retain) SUTableDataSource *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long numberOfRows;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UITableView *tableView;
@property (nonatomic) long long tableViewStyle;

- (void)_deliverTapCount:(long long)arg1 forIndexPath:(id)arg2;
- (void)_doubleTapTimeout;
- (void)_reloadPlaceholderCells;
- (void)_resetTableView;
- (bool)canSelectRowAtIndexPath:(id)arg1;
- (int)clippedCornersForIndexPath:(id)arg1;
- (id)copyArchivableContext;
- (id)copyDefaultScriptProperties;
- (id)copyScriptProperties;
- (id)dataSource;
- (void)dealloc;
- (bool)deleteRowAtIndexPath:(id)arg1;
- (void)didReceiveMemoryWarning;
- (bool)handleSelectionForIndexPath:(id)arg1 tapCount:(long long)arg2;
- (bool)indexPathIsPlaceholder:(id)arg1;
- (id)init;
- (void)loadView;
- (id)newTableView;
- (unsigned long long)numberOfRows;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)reloadData;
- (void)reloadForChangedRowCount:(long long)arg1;
- (void)scrollToRowAtIndexPath:(id)arg1 atScrollPosition:(long long)arg2 animated:(bool)arg3;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setScriptProperties:(id)arg1;
- (void)setTableViewStyle:(long long)arg1;
- (id)tableView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (long long)tableViewStyle;
- (void)viewDidAppear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;

@end
