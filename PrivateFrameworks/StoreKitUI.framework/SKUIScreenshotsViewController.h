/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIScreenshotsViewController : UIViewController <SKUISlideshowViewControllerDataSource, SKUISlideshowViewControllerDelegate, UICollectionViewDataSource, UICollectionViewDelegate, UIScrollViewDelegate> {
    SKUIClientContext * _clientContext;
    UICollectionView * _collectionView;
    SKUIScreenshotDataConsumer * _dataConsumer;
    <SKUIScreenshotsDelegate> * _delegate;
    NSOperationQueue * _operationQueue;
    NSMutableArray * _screenshotImages;
    struct CGSize { 
        double width; 
        double height; 
    }  _screenshotMaxSize;
    NSMutableArray * _screenshotRawImages;
    NSArray * _screenshots;
    SKUIVideoImageDataConsumer * _trailerConsumer;
    NSMutableArray * _trailerImages;
    NSArray * _trailers;
}

@property (nonatomic, readonly) SKUIClientContext *clientContext;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SKUIScreenshotsDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSOperationQueue *operationQueue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_setImage:(id)arg1 forIndex:(long long)arg2;
- (void)_setTrailerImage:(id)arg1 forIndex:(long long)arg2;
- (id)clientContext;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)delegate;
- (id)initWithTrailers:(id)arg1 screenshots:(id)arg2 clientContext:(id)arg3;
- (void)loadView;
- (long long)numberOfItemsInSlideshowViewController:(id)arg1;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)operationQueue;
- (void)reloadData;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setOperationQueue:(id)arg1;
- (id)slideshowViewController:(id)arg1 dataConsumerAtIndex:(long long)arg2;
- (id)slideshowViewController:(id)arg1 imageURLAtIndex:(long long)arg2;
- (id)slideshowViewController:(id)arg1 placeholderImageAtIndex:(long long)arg2;
- (id)slideshowViewController:(id)arg1 poppedImageViewAtIndex:(long long)arg2;
- (void)slideshowViewController:(id)arg1 scrollToImageAtIndex:(long long)arg2;
- (id)viewForZoomingInScrollView:(id)arg1;

@end
