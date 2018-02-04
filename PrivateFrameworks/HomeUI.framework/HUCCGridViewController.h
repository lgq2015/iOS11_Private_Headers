/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUCCGridViewController : HUControllableItemCollectionViewController <HUPrototypeLayoutOptionsEditorViewControllerDelegate> {
    <HUCCGridViewControllerDelegate> * _delegate;
    unsigned long long  _designType;
    unsigned long long  _itemType;
    long long  _layoutStyle;
    bool  _needsLayoutOptionsUpdate;
    NSMapTable * _overrideCellLayoutOptionsByItem;
    bool  _viewVisible;
}

@property (nonatomic, readonly) HUGridFlowLayout *collectionViewLayout;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HUCCGridViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long designType;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HUCCGridItemManager *itemManager;
@property (nonatomic, readonly) unsigned long long itemType;
@property (nonatomic, readonly) HUGridLayoutOptions *layoutOptions;
@property (nonatomic) long long layoutStyle;
@property (nonatomic) bool needsLayoutOptionsUpdate;
@property (nonatomic, retain) NSMapTable *overrideCellLayoutOptionsByItem;
@property (readonly) Class superclass;
@property (getter=isViewVisible, nonatomic) bool viewVisible;

- (void).cxx_destruct;
- (id)_cellLayoutOptionsForItem:(id)arg1;
- (void)_enqueueLayoutOptionsUpdate;
- (struct { unsigned long long x1; unsigned long long x2; })_gridLayout;
- (bool)_requiresUnlockToPerformActionForItem:(id)arg1;
- (void)_updateLayoutOptions;
- (void)_updateMaximumNumberOfItems;
- (bool)canDismissQuickControl;
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)configureCell:(id)arg1 forItem:(id)arg2;
- (id)delegate;
- (id)description;
- (unsigned long long)designType;
- (id)dismissQuickControlAnimated:(bool)arg1 wasDismissed:(bool*)arg2;
- (id)initWithItemType:(unsigned long long)arg1 designType:(unsigned long long)arg2 delegate:(id)arg3;
- (bool)isViewVisible;
- (id)itemManager:(id)arg1 futureToUpdateItems:(id)arg2 itemUpdateOptions:(id)arg3;
- (void)itemManager:(id)arg1 performUpdateRequest:(id)arg2;
- (unsigned long long)itemType;
- (id)layoutOptions;
- (void)layoutOptionsEditor:(id)arg1 didUpdateLayoutOptions:(id)arg2;
- (void)layoutOptionsEditorDidFinish:(id)arg1;
- (long long)layoutStyle;
- (bool)needsLayoutOptionsUpdate;
- (id)overrideCellLayoutOptionsByItem;
- (long long)preferredModalPresentationStyleForPresentationCoordinator:(id)arg1;
- (id)preloadItemsForPossiblePresentation;
- (id)prepareToPerformToggleActionForItem:(id)arg1 sourceItem:(id)arg2;
- (void)presentationCoordinator:(id)arg1 pressedStateDidChange:(bool)arg2 forItem:(id)arg3;
- (bool)presentationCoordinator:(id)arg1 shouldBeginPresentationWithContext:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setLayoutStyle:(long long)arg1;
- (void)setNeedsLayoutOptionsUpdate:(bool)arg1;
- (void)setOverrideCellLayoutOptionsByItem:(id)arg1;
- (void)setViewVisible:(bool)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillLayoutSubviews;

@end
