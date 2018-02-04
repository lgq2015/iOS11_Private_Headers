/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIItemCollectionController : NSObject <SKUIArtworkRequestDelegate, SKUIItemStateCenterObserver> {
    SKUIItemArtworkContext * _artworkContext;
    SKUIResourceLoader * _artworkLoader;
    SKUIClientContext * _clientContext;
    <SKUIItemCollectionDelegate> * _delegate;
    bool  _delegateProvidesScreenshots;
    SKUIStyledImageDataConsumer * _iconDataConsumer;
    NSMutableDictionary * _itemIDsToArtworkRequestIDs;
    NSMutableDictionary * _itemIDsToScreenshotRequestIDs;
    NSArray * _items;
    SKUIScreenshotDataConsumer * _landscapeScreenshotDataConsumer;
    UIImage * _landscapeScreenshotPlaceholderImage;
    long long  _numberOfItemsPerPage;
    double  _numberOfPagesToCacheAhead;
    UIImage * _placeholderImage;
    SKUIScreenshotDataConsumer * _portraitScreenshotDataConsumer;
    UIImage * _portraitScreenshotPlaceholderImage;
}

@property (nonatomic, retain) SKUIItemArtworkContext *artworkContext;
@property (nonatomic, retain) SKUIResourceLoader *artworkLoader;
@property (nonatomic, retain) SKUIClientContext *clientContext;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SKUIItemCollectionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SKUIStyledImageDataConsumer *iconDataConsumer;
@property (nonatomic, copy) NSArray *items;
@property (nonatomic, retain) SKUIScreenshotDataConsumer *landscapeScreenshotDataConsumer;
@property (nonatomic) long long numberOfItemsPerPage;
@property (nonatomic) double numberOfPagesToCacheAhead;
@property (nonatomic, retain) SKUIScreenshotDataConsumer *portraitScreenshotDataConsumer;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_artworkLoader;
- (void)_enumerateVisibleCellLayoutsWithBlock:(id /* block */)arg1;
- (id)_iconArtworkRequestWithItem:(id)arg1;
- (id)_initSKUIItemCollectionController;
- (bool)_loadArtworkForItem:(id)arg1 reason:(long long)arg2;
- (void)_memoryWarningNotification:(id)arg1;
- (id)_placeholderImageForItem:(id)arg1;
- (id)_placeholderImageForScreenshot:(id)arg1;
- (void)_reloadForItemStateChange:(id)arg1;
- (void)_reloadForRestrictionsChange;
- (void)_reloadScreenshotForCellLayout:(id)arg1 item:(id)arg2 isRestricted:(bool)arg3;
- (id)_screenshotArtworkRequestWithItem:(id)arg1;
- (id)_screenshotForItem:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_visibleItemRange;
- (id)artworkContext;
- (id)artworkLoader;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (void)cancelArtworkLoadForItemIndex:(long long)arg1;
- (id)clientContext;
- (void)configureCellLayout:(id)arg1 forIndex:(long long)arg2;
- (void)dealloc;
- (id)delegate;
- (void)didEndDisplayingItemAtIndex:(long long)arg1;
- (void)enterBackground;
- (void)enterForeground;
- (id)iconDataConsumer;
- (id)init;
- (id)initWithClientContext:(id)arg1;
- (void)itemStateCenter:(id)arg1 itemStatesChanged:(id)arg2;
- (void)itemStateCenterRestrictionsChanged:(id)arg1;
- (id)items;
- (id)landscapeScreenshotDataConsumer;
- (void)loadNextPageOfArtworkWithReason:(long long)arg1;
- (long long)numberOfItemsPerPage;
- (double)numberOfPagesToCacheAhead;
- (id)performActionForItemAtIndex:(long long)arg1;
- (id)portraitScreenshotDataConsumer;
- (void)precacheNextPageArtworkForOffset:(struct CGPoint { double x1; double x2; })arg1 direction:(double)arg2;
- (void)removeAllCachedResources;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint { double x1; double x2; })arg2 targetContentOffset:(inout struct CGPoint { double x1; double x2; }*)arg3;
- (void)setArtworkContext:(id)arg1;
- (void)setArtworkLoader:(id)arg1;
- (void)setClientContext:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIconDataConsumer:(id)arg1;
- (void)setItems:(id)arg1;
- (void)setLandscapeScreenshotDataConsumer:(id)arg1;
- (void)setNumberOfItemsPerPage:(long long)arg1;
- (void)setNumberOfPagesToCacheAhead:(double)arg1;
- (void)setPortraitScreenshotDataConsumer:(id)arg1;

@end
