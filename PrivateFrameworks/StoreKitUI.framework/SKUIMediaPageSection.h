/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIMediaPageSection : SKUIStorePageSection <SKUIArtworkRequestDelegate, SKUIEmbeddedMediaViewDelegate> {
    SKUIArtwork * _artwork;
    unsigned long long  _artworkRequestID;
    struct CGSize { 
        double width; 
        double height; 
    }  _imageSize;
    SKUIEmbeddedMediaView * _mediaView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) SKUIMediaComponent *pageComponent;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_loadImageWithReason:(long long)arg1;
- (void)addImpressionsForIndexPath:(id)arg1 toSession:(id)arg2;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (id)cellForIndexPath:(id)arg1;
- (struct CGSize { double x1; double x2; })cellSizeForIndexPath:(id)arg1;
- (void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)arg1;
- (void)collectionViewDidSelectItemAtIndexPath:(id)arg1;
- (void)collectionViewWillDisplayCellForItemAtIndexPath:(id)arg1;
- (double)contentInsetAdjustmentForCollectionView:(id)arg1;
- (void)dealloc;
- (long long)defaultItemPinningStyle;
- (id)initWithPageComponent:(id)arg1;
- (void)mediaView:(id)arg1 playbackStateDidChange:(long long)arg2;
- (long long)numberOfCells;
- (void)prefetchResourcesWithReason:(long long)arg1;
- (void)setSectionIndex:(long long)arg1;
- (void)willAppearInContext:(id)arg1;

@end
