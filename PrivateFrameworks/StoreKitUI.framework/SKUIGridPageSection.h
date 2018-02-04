/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIGridPageSection : SKUIStorePageSection <SKUIArtworkRequestDelegate, SKUIEmbeddedMediaViewDelegate, SKUIItemStateCenterObserver, SKUIMissingItemDelegate, SKUIProductPageOverlayDelegate> {
    NSMapTable * _artworkRequests;
    SKUIClientContext * _clientContext;
    bool  _containsLockups;
    NSMapTable * _editorialLayouts;
    NSMutableIndexSet * _hiddenIconIndexSet;
    bool  _isLandscape;
    bool  _isPad;
    NSMapTable * _lockupArtworkContexts;
    struct CGSize { 
        double width; 
        double height; 
    }  _lockupImageBoundingSize;
    SKUIMissingItemLoader * _missingItemLoader;
    NSString * _moreButtonTitle;
    long long  _numberOfColumns;
    SKUIProductPageOverlayController * _overlayController;
    long long  _overlaySourceItemIndex;
    long long  _screenScale;
    SKUIVideoImageDataConsumer * _videoImageDataConsumer;
    NSMutableDictionary * _videoPlaceholderImages;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) SKUIGridComponent *pageComponent;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_artworkContextForLockupSize:(long long)arg1;
- (id)_cellImageForItem:(id)arg1 lockupSize:(long long)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_contentInsetForMediaIndex:(long long)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_contentInsetForVideoLockupIndex:(long long)arg1;
- (id)_editorialCellWithEditorials:(id)arg1 indexPath:(id)arg2;
- (id)_editorialLayoutForEditorial:(id)arg1;
- (id)_editorialLayoutForLockup:(id)arg1;
- (id)_editorialLockupCellWithLockups:(id)arg1 indexPath:(id)arg2;
- (void)_enumerateItemsFromStartIndex:(long long)arg1 withBlock:(id /* block */)arg2;
- (void)_enumerateVisibleIndexPathsWithBlock:(id /* block */)arg1;
- (void)_enumerateVisibleItemsWithBlock:(id /* block */)arg1;
- (double)_heightForEditorialAtIndexPath:(id)arg1;
- (double)_heightForEditorialLockup:(id)arg1;
- (double)_heightForEditorialLockupAtIndexPath:(id)arg1;
- (double)_heightForLockupAtIndexPath:(id)arg1 gridType:(long long)arg2;
- (double)_heightForMedia:(id)arg1 width:(double)arg2;
- (double)_heightForMediaAtIndexPath:(id)arg1;
- (id)_itemCellWithLockups:(id)arg1 indexPath:(id)arg2;
- (id)_itemForIndex:(long long)arg1;
- (void)_loadImageForItem:(id)arg1 lockupSize:(long long)arg2 loader:(id)arg3 reason:(long long)arg4;
- (void)_loadImageForVideo:(id)arg1 thumbnailSize:(struct CGSize { double x1; double x2; })arg2 loader:(id)arg3 reason:(long long)arg4;
- (void)_loadMissingItemsFromIndex:(long long)arg1 withReason:(long long)arg2;
- (id)_mediaCellWithMedia:(id)arg1 indexPath:(id)arg2;
- (double)_mediaWidthForMediaIndex:(long long)arg1 gridWidth:(double)arg2;
- (id)_missingItemLoader;
- (id)_newSizeToFitArtworkRequestWithArtwork:(id)arg1 mediaIndex:(long long)arg2;
- (long long)_numberOfLandscapeColumnsWithGridType:(long long)arg1;
- (long long)_numberOfPortraitColumnsWithGridType:(long long)arg1;
- (id)_popSourceViewForOverlayController:(id)arg1;
- (void)_reloadEditorialLockupCell:(id)arg1 withLockup:(id)arg2 index:(long long)arg3;
- (void)_reloadItemCell:(id)arg1 withLockup:(id)arg2 index:(long long)arg3;
- (void)_selectItem:(id)arg1 withIndex:(long long)arg2;
- (void)_setPositionForClickEvent:(id)arg1 withElementIndex:(long long)arg2;
- (void)_showProductPageWithItem:(id)arg1 index:(long long)arg2 animated:(bool)arg3;
- (void)_updateVisibileEditorialWithEditorialOrientation:(long long)arg1;
- (id)_videoThumbnailImageForVideo:(id)arg1 thumbnailSize:(struct CGSize { double x1; double x2; })arg2;
- (void)addImpressionsForIndexPath:(id)arg1 toSession:(id)arg2;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (id)cellForIndexPath:(id)arg1;
- (struct CGSize { double x1; double x2; })cellSizeForIndexPath:(id)arg1;
- (id)clickEventWithItem:(id)arg1 elementName:(id)arg2 index:(long long)arg3;
- (void)collectionViewDidConfirmItemOfferAtIndexPath:(id)arg1;
- (void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)arg1;
- (void)collectionViewDidSelectItemAtIndexPath:(id)arg1;
- (void)collectionViewDidTapVideoAtIndexPath:(id)arg1;
- (void)collectionViewWillApplyLayoutAttributes:(id)arg1;
- (void)dealloc;
- (id)initWithPageComponent:(id)arg1;
- (id)itemOfferClickEventWithItem:(id)arg1 elementName:(id)arg2 index:(long long)arg3;
- (void)itemStateCenter:(id)arg1 itemStatesChanged:(id)arg2;
- (void)itemStateCenterRestrictionsChanged:(id)arg1;
- (void)mediaView:(id)arg1 playbackStateDidChange:(long long)arg2;
- (void)missingItemLoader:(id)arg1 didLoadItems:(id)arg2 invalidItemIdentifiers:(id)arg3;
- (long long)numberOfCells;
- (void)prefetchResourcesWithReason:(long long)arg1;
- (id)productPageOverlay:(id)arg1 flipSourceViewToDismissItem:(id)arg2;
- (id)productPageOverlay:(id)arg1 flipSourceViewToPresentItem:(id)arg2;
- (void)productPageOverlayDidDismiss:(id)arg1;
- (void)willAppearInContext:(id)arg1;
- (void)willHideInContext:(id)arg1;
- (void)willTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
