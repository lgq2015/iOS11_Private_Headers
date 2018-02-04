/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIBrickGridPageSection : SKUIStorePageSection <SKUIArtworkRequestDelegate, SKUIMissingItemDelegate> {
    NSMapTable * _artworkRequests;
    double  _baseHeight;
    double  _columnWidth;
    NSMapTable * _editorialLayouts;
    SKUIMissingItemLoader * _missingItemLoader;
    long long  _numberOfColumns;
    double  _paddingHorizontal;
    double  _paddingTop;
    UIImage * _placeholderImage;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) SKUIGridComponent *pageComponent;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_contentInsetsForColumnIndex:(long long)arg1 rowWidth:(double)arg2;
- (id)_editorialLayoutForBrick:(id)arg1;
- (void)_enumerateVisibleBricksUsingBlock:(id /* block */)arg1;
- (void)_loadArtworkForBrick:(id)arg1 artworkLoader:(id)arg2 reason:(long long)arg3;
- (void)_loadMissingItemsFromIndex:(long long)arg1 withReason:(long long)arg2;
- (id)_missingItemLoader;
- (void)addImpressionsForIndexPath:(id)arg1 toSession:(id)arg2;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (id)cellForIndexPath:(id)arg1;
- (struct CGSize { double x1; double x2; })cellSizeForIndexPath:(id)arg1;
- (id)clickEventWithLink:(id)arg1 elementName:(id)arg2 index:(long long)arg3;
- (void)collectionViewDidSelectItemAtIndexPath:(id)arg1;
- (void)dealloc;
- (id)initWithPageComponent:(id)arg1;
- (void)missingItemLoader:(id)arg1 didLoadItems:(id)arg2 invalidItemIdentifiers:(id)arg3;
- (long long)numberOfCells;
- (void)prefetchResourcesWithReason:(long long)arg1;
- (void)willAppearInContext:(id)arg1;
- (void)willTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end