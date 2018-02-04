/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIGallerySwooshPageSection : SKUIStorePageSection <SKUIArtworkRequestDelegate, SKUIGallerySwooshViewControllerDelegate> {
    NSMapTable * _componentArtworkRequests;
    SKUIGallerySwooshViewController * _swooshViewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) SKUISwooshPageComponent *pageComponent;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addImpressionForIndex:(long long)arg1 toSession:(id)arg2;
- (id)_newArtworkRequestWithArtwork:(id)arg1;
- (id)_swooshViewController;
- (void)addImpressionsForIndexPath:(id)arg1 toSession:(id)arg2;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (id)cellForIndexPath:(id)arg1;
- (struct CGSize { double x1; double x2; })cellSizeForIndexPath:(id)arg1;
- (void)dealloc;
- (id)initWithPageComponent:(id)arg1;
- (long long)numberOfCells;
- (void)prefetchResourcesWithReason:(long long)arg1;
- (void)swoosh:(id)arg1 didChangePlaybackState:(long long)arg2 forItemAtIndex:(long long)arg3;
- (void)swoosh:(id)arg1 didSelectCellAtIndex:(long long)arg2;
- (id)swoosh:(id)arg1 imageForCellAtIndex:(long long)arg2;
- (void)swoosh:(id)arg1 willDisplayCellAtIndex:(long long)arg2;
- (void)willAppearInContext:(id)arg1;

@end
