/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUServiceGridViewController : HUControllableItemCollectionViewController <UICollectionViewDelegateFlowLayout> {
    unsigned long long  _contentMargins;
    long long  _scrollDirection;
    bool  _shouldShowLoadingState;
}

@property (nonatomic) unsigned long long contentMargins;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HUGridLayoutOptions *layoutOptions;
@property (nonatomic) long long scrollDirection;
@property (nonatomic) bool shouldShowLoadingState;
@property (readonly) Class superclass;

- (id)_defaultLayoutOptionsForViewSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_layoutSectionHeaders;
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)configureCell:(id)arg1 forItem:(id)arg2;
- (unsigned long long)contentMargins;
- (id)initWithItemManager:(id)arg1;
- (id)initWithItemManager:(id)arg1 collectionViewLayout:(id)arg2;
- (void)itemManager:(id)arg1 performUpdateRequest:(id)arg2;
- (id)layoutOptions;
- (void)layoutOptionsDidChange;
- (id)layoutOptionsForSection:(long long)arg1;
- (struct CGSize { double x1; double x2; })preferredContentSizeForCollectionViewContentSize:(struct CGSize { double x1; double x2; })arg1;
- (long long)scrollDirection;
- (void)setContentMargins:(unsigned long long)arg1;
- (void)setLayoutOptions:(id)arg1;
- (void)setScrollDirection:(long long)arg1;
- (void)setShouldShowLoadingState:(bool)arg1;
- (bool)shouldShowLoadingState;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
