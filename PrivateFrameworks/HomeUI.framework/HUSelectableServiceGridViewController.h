/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUSelectableServiceGridViewController : HUServiceGridViewController <HUServiceGridItemManagerDelegate> {
    bool  _allowsEmptySelection;
    bool  _allowsMultipleSelection;
    HFMutableSetDiff * _mutableSelectedItems;
    HUServiceGridItemManager * _serviceGridItemManager;
}

@property (nonatomic) bool allowsEmptySelection;
@property (nonatomic) bool allowsMultipleSelection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HFMutableSetDiff *mutableSelectedItems;
@property (nonatomic, retain) HFSetDiff *selectedItems;
@property (nonatomic) HUServiceGridItemManager *serviceGridItemManager;
@property (readonly) Class superclass;

+ (id /* block */)defaultItemProviderCreatorWithOptions:(unsigned long long)arg1;

- (void).cxx_destruct;
- (void)_addAllServicesInSectionFromButton:(id)arg1;
- (void)_addItemToSelection:(id)arg1;
- (void)_deleteItemFromSelection:(id)arg1;
- (void)_removeAllServicesInSectionFromButton:(id)arg1;
- (void)_setSelected:(bool)arg1 forItemsInSection:(long long)arg2;
- (void)_updateSelectionState:(bool)arg1 forCell:(id)arg2;
- (void)_updateToggleStateForSection:(long long)arg1 headerView:(id)arg2;
- (bool)allowsEmptySelection;
- (bool)allowsMultipleSelection;
- (bool)canSelectItem:(id)arg1 indexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)configureCell:(id)arg1 forItem:(id)arg2;
- (void)didChangeSelection;
- (void)didDeselectItem:(id)arg1;
- (void)didSelectItem:(id)arg1;
- (id)initWithItemManager:(id)arg1;
- (id)initWithServiceGridItemManager:(id)arg1;
- (void)itemManager:(id)arg1 performUpdateRequest:(id)arg2;
- (id)mutableSelectedItems;
- (bool)presentationCoordinator:(id)arg1 shouldBeginInteractivePresentationWithTouchLocation:(struct CGPoint { double x1; double x2; })arg2;
- (id)selectedItems;
- (id)serviceGridItemManager;
- (void)setAllowsEmptySelection:(bool)arg1;
- (void)setAllowsMultipleSelection:(bool)arg1;
- (void)setMutableSelectedItems:(id)arg1;
- (void)setSelectedItems:(id)arg1;
- (void)setServiceGridItemManager:(id)arg1;

@end
