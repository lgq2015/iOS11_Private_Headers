/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIDynamicShelfPageSection : SKUIStorePageSection <SKUIArtworkRequestDelegate, SKUIItemStateCenterObserver, SKUIObservableScrollViewDelegate, SKUIShelfPageSection, SKUIShelfPageSectionConfigurationDataSource, UICollectionViewDataSource, UICollectionViewDelegate> {
    SKUIViewElementLayoutContext * _cellLayoutContext;
    SKUIShelfPageSectionConfiguration * _configuration;
    SKUIDynamicPageSectionIndexMapper * _dynamicPageSectionIndexMapper;
    SKUIShelfViewElement<SKUIDynamicShelfViewElement> * _dynamicShelfViewElement;
    <SKUIEntityProviding> * _entityProvider;
    SKUIViewElementTextLayoutCache * _labelLayoutCache;
    <SKUIScrollViewDelegateObserver> * _scrollViewDelegateObserver;
}

@property (nonatomic, readonly) SKUIShelfPageSectionConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) SKUIShelfPageComponent *pageComponent;
@property (nonatomic) <SKUIScrollViewDelegateObserver> *scrollViewDelegateObserver;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_normalizedShelfItemIndexPathFromActualIndexPath:(id)arg1;
- (void)_reloadViewElementProperties;
- (void)_setContext:(id)arg1;
- (id)_viewElementForEntityAtGlobalIndex:(long long)arg1;
- (long long)applyUpdateType:(long long)arg1;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (id)backgroundColorForIndexPath:(id)arg1;
- (id)cellForIndexPath:(id)arg1;
- (struct CGSize { double x1; double x2; })cellSizeForIndexPath:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didConfirmButtonElement:(id)arg2 withClickInfo:(id)arg3 forItemAtIndexPath:(id)arg4;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 layout:(id)arg2 willApplyLayoutAttributes:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (void)collectionViewWillApplyLayoutAttributes:(id)arg1;
- (id)configuration;
- (void)dealloc;
- (void)deselectItemsAnimated:(bool)arg1;
- (void)entityProvider:(id)arg1 didInvalidateWithContext:(id)arg2;
- (id)initWithPageComponent:(id)arg1;
- (id)initWithPageComponent:(id)arg1 configuration:(id)arg2;
- (void)invalidateCachedLayoutInformation;
- (void)itemStateCenter:(id)arg1 itemStatesChanged:(id)arg2;
- (long long)numberOfCells;
- (id)relevantEntityProviders;
- (id)scrollViewDelegateObserver;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint { double x1; double x2; })arg2 targetContentOffset:(inout struct CGPoint { double x1; double x2; }*)arg3;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })sectionContentInset;
- (void)setScrollViewDelegateObserver:(id)arg1;
- (void)setSectionIndex:(long long)arg1;
- (void)setTopSection:(bool)arg1;
- (id)shelfPageSectionConfiguration:(id)arg1 viewElementAtIndex:(long long)arg2;
- (void)willAppearInContext:(id)arg1;
- (void)willHideInContext:(id)arg1;

@end
