/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
 */

@interface MPUTableViewController : MPUDataSourceViewController <MPStoreDownloadManagerObserver, MPUActionTableViewDataSource, UITableViewDelegate> {
    Class  _cellConfigurationClass;
    bool  _hasAppearedOnce;
    long long  _numberOfBottomActionRows;
    long long  _numberOfTopActionRows;
    bool  _shouldDeselectImmediately;
    bool  _shouldUpdateVisibleCellsWhenVisible;
    UITableView * _tableView;
    NSMutableArray * _visibleBottomActionRows;
    NSMutableArray * _visibleTopActionRows;
}

@property (nonatomic, readonly) Class cellConfigurationClass;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } contentOffsetRevealingFirstDataSourceSection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool shouldDeselectImmediately;
@property (nonatomic, readonly) bool shouldScrollToFirstDataSourceSectionOnInitialAppearance;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UITableView *tableView;

+ (Class)_tableViewClass;
+ (id)actionCellConfigurationClasses;
+ (id)actionCellConfigurationClassesForLocation:(unsigned long long)arg1;
+ (id)allActionCellConfigurationClasses;
+ (Class)invalidationContextClass;
+ (bool)usesCellConfigurations;
+ (id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2;
+ (bool)wantsAutolayoutSizedTableViewRows;

- (void).cxx_destruct;
- (void)_configureCellsAfterScroll;
- (id)_createTableView;
- (void)_loadCellConfiguration;
- (void)_recreateTableView;
- (void)_reloadActionRowsAnimated:(bool)arg1 skipTableViewUpdates:(bool)arg2;
- (void)_setCellConfigurationClass:(Class)arg1;
- (long long)_totalNumberOfSections;
- (void)_updateVisibleCellsForDownloads:(id)arg1 updateAllCells:(bool)arg2;
- (Class)actionCellConfigurationClassForIndexPath:(id)arg1;
- (Class)cellConfigurationClass;
- (Class)cellConfigurationForIndexPath:(id)arg1;
- (void)configureCell:(id)arg1 atIndexPath:(id)arg2 withEntity:(id)arg3 invalidationContext:(id)arg4;
- (struct CGPoint { double x1; double x2; })contentOffsetRevealingFirstDataSourceSection;
- (long long)dataSourceIndexForIndexPath:(id)arg1;
- (long long)dataSourceSectionForSection:(long long)arg1;
- (void)dealloc;
- (void)downloadManager:(id)arg1 didAddDownloads:(id)arg2 removeDownloads:(id)arg3;
- (void)downloadManager:(id)arg1 downloadDidFinish:(id)arg2;
- (void)downloadManager:(id)arg1 downloadPurchaseDidFinish:(id)arg2;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (long long)indexOfFirstDataSourceSection;
- (id)indexPathForDataSourceIndex:(long long)arg1;
- (id)initWithDataSource:(id)arg1;
- (id)initWithDataSource:(id)arg1 cellConfigurationClass:(Class)arg2;
- (bool)isTableViewLoaded;
- (long long)numberOfActionRowsInTableView:(id)arg1;
- (long long)numberOfBottomActionRowsInTableView:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)numberOfTopActionRowsInTableView:(id)arg1;
- (void)reloadActionRowsAnimated:(bool)arg1;
- (void)reloadData;
- (bool)respondsToSelector:(SEL)arg1;
- (id)reuseIdentifierForCellAtIndexPath:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (long long)sectionForDataSourceSection:(long long)arg1;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setEditing:(bool)arg1 animated:(bool)arg2;
- (void)setShouldDeselectImmediately:(bool)arg1;
- (bool)shouldDeselectImmediately;
- (bool)shouldScrollToFirstDataSourceSectionOnInitialAppearance;
- (bool)shouldShowActionCellConfiguration:(Class)arg1;
- (id)tableView;
- (bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
