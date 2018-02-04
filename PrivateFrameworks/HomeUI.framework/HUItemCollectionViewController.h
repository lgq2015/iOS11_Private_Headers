/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUItemCollectionViewController : HUCollectionViewController <HFExecutionEnvironmentObserver, HFItemManagerDelegate, HUItemManagerContainer, HUItemPresentationContainer, HUPreloadableViewController> {
    NSHashTable * _childViewControllersAtViewWillAppearTime;
    NSHashTable * _childViewControllersAtViewWillDisappearTime;
    <NACancelable> * _deferredVisibilityUpdate;
    NSMutableArray * _foregroundUpdateFutures;
    bool  _hasFinishedInitialLoad;
    HFItemManager * _itemManager;
    NSMutableSet * _registeredCellClasses;
    bool  _visibilityUpdatesEnabled;
    bool  _wantsPreferredContentSize;
}

@property (nonatomic, retain) NSHashTable *childViewControllersAtViewWillAppearTime;
@property (nonatomic, retain) NSHashTable *childViewControllersAtViewWillDisappearTime;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) <NACancelable> *deferredVisibilityUpdate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSMutableArray *foregroundUpdateFutures;
@property (nonatomic) bool hasFinishedInitialLoad;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HFItem *hu_presentedItem;
@property (nonatomic, retain) HFItemManager *itemManager;
@property (nonatomic, readonly) NSMutableSet *registeredCellClasses;
@property (readonly) Class superclass;
@property (nonatomic) bool visibilityUpdatesEnabled;
@property (nonatomic) bool wantsPreferredContentSize;

+ (unsigned long long)updateMode;

- (void).cxx_destruct;
- (void)_updateTitle;
- (bool)automaticallyUpdatesViewControllerTitle;
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (id)childViewControllersAtViewWillAppearTime;
- (id)childViewControllersAtViewWillDisappearTime;
- (id)childViewControllersToPreload;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)configureCell:(id)arg1 forItem:(id)arg2;
- (id)deferredVisibilityUpdate;
- (void)executionEnvironmentRunningStateDidChange:(id)arg1;
- (id)foregroundUpdateFutures;
- (bool)hasFinishedInitialLoad;
- (id)hu_preloadContent;
- (id)hu_presentedItem;
- (id)initWithItemManager:(id)arg1 collectionViewLayout:(id)arg2;
- (bool)isLayoutDependentOnItemState;
- (id)itemManager;
- (void)itemManager:(id)arg1 didChangeOverallLoadingState:(unsigned long long)arg2;
- (void)itemManager:(id)arg1 didChangeSourceItem:(id)arg2;
- (void)itemManager:(id)arg1 didInsertItem:(id)arg2 atIndexPath:(id)arg3;
- (void)itemManager:(id)arg1 didInsertSections:(id)arg2;
- (void)itemManager:(id)arg1 didMoveItem:(id)arg2 fromIndexPath:(id)arg3 toIndexPath:(id)arg4;
- (void)itemManager:(id)arg1 didMoveSection:(long long)arg2 toSection:(long long)arg3;
- (void)itemManager:(id)arg1 didRemoveItem:(id)arg2 atIndexPath:(id)arg3;
- (void)itemManager:(id)arg1 didRemoveSections:(id)arg2;
- (void)itemManager:(id)arg1 didUpdateResultsForItem:(id)arg2 atIndexPath:(id)arg3;
- (void)itemManager:(id)arg1 didUpdateResultsForSourceItem:(id)arg2;
- (id)itemManager:(id)arg1 futureToUpdateItems:(id)arg2 itemUpdateOptions:(id)arg3;
- (void)itemManager:(id)arg1 performUpdateRequest:(id)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (struct CGSize { double x1; double x2; })preferredContentSizeForCollectionViewContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)recursivelyDisableItemUpdates:(bool)arg1 withReason:(id)arg2;
- (id)registeredCellClasses;
- (void)setChildViewControllersAtViewWillAppearTime:(id)arg1;
- (void)setChildViewControllersAtViewWillDisappearTime:(id)arg1;
- (void)setDeferredVisibilityUpdate:(id)arg1;
- (void)setForegroundUpdateFutures:(id)arg1;
- (void)setHasFinishedInitialLoad:(bool)arg1;
- (void)setItemManager:(id)arg1;
- (void)setVisibilityUpdatesEnabled:(bool)arg1;
- (void)setWantsPreferredContentSize:(bool)arg1;
- (bool)shouldAutomaticallyForwardAppearanceMethods;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (bool)visibilityUpdatesEnabled;
- (bool)wantsPreferredContentSize;

@end
