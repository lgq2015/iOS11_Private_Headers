/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUICarouselPageSection : SKUIStorePageSection <SKUIArtworkRequestDelegate, SKUIMissingItemDelegate, UICollectionViewDataSource, UICollectionViewDelegate> {
    UICollectionView * _carouselCollectionView;
    long long  _cellCount;
    SKUIViewElementLayoutContext * _cellLayoutContext;
    NSObject<OS_dispatch_source> * _cycleTimer;
    struct CGSize { 
        double width; 
        double height; 
    }  _itemSize;
    double  _itemSpacing;
    double  _itemWidth;
    SKUIMissingItemLoader * _missingItemLoader;
    NSArray * _modelObjects;
    bool  _needsHeightCalculation;
    bool  _needsReload;
    long long  _progressIndicatorCellIndex;
    SKUIProgressIndicatorViewElement * _progressIndicatorElement;
    NSIndexPath * _reloadIndexPath;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) SKUICarouselPageComponent *pageComponent;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (double)_actualContentWidth;
- (void)_addImpressionForIndex:(long long)arg1 toSession:(id)arg2;
- (void)_cancelCycleTimer;
- (id)_carouselCollectionView;
- (Class)_cellClassForLockup:(id)arg1;
- (Class)_cellClassForViewElement:(id)arg1;
- (long long)_currentPageIndex;
- (id)_dequeueCellForLockup:(id)arg1 collectionView:(id)arg2 indexPath:(id)arg3;
- (id)_dequeueCellForViewElement:(id)arg1 collectionView:(id)arg2 indexPath:(id)arg3;
- (void)_fireCycleTimer;
- (bool)_indexPathIsProgressIndicator:(id)arg1;
- (bool)_isItemEnabledAtIndexPath:(id)arg1;
- (struct CGSize { double x1; double x2; })_legacyItemSize;
- (double)_legacyItemSpacing;
- (void)_loadMissingItemsFromIndex:(long long)arg1 withReason:(long long)arg2;
- (id)_missingItemLoader;
- (void)_reloadLegacySizing;
- (void)_reloadViewElementProperties;
- (void)_scrollToItemAtIndexPath:(id)arg1 animated:(bool)arg2;
- (void)_startCycleTimerIfNecessary;
- (void)addImpressionsForIndexPath:(id)arg1 toSession:(id)arg2;
- (long long)applyUpdateType:(long long)arg1;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (id)backgroundColorForIndexPath:(id)arg1;
- (id)cellForIndexPath:(id)arg1;
- (struct CGSize { double x1; double x2; })cellSizeForIndexPath:(id)arg1;
- (void)collectionView:(id)arg1 carouselLayout:(id)arg2 willApplyLayoutAttributes:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)arg1;
- (void)collectionViewWillDisplayCellForItemAtIndexPath:(id)arg1;
- (void)dealloc;
- (long long)defaultItemPinningStyle;
- (void)entityProvider:(id)arg1 didInvalidateWithContext:(id)arg2;
- (id)initWithPageComponent:(id)arg1;
- (void)invalidateCachedLayoutInformation;
- (void)missingItemLoader:(id)arg1 didLoadItems:(id)arg2 invalidItemIdentifiers:(id)arg3;
- (long long)numberOfCells;
- (void)prefetchResourcesWithReason:(long long)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })sectionContentInset;
- (void)willAppearInContext:(id)arg1;
- (void)willTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
