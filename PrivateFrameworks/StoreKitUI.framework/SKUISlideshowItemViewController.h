/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUISlideshowItemViewController : UIViewController <UIGestureRecognizerDelegatePrivate, UIScrollViewDelegate> {
    SKUIClientContext * _clientContext;
    <SKUISlideshowItemViewControllerDelegate> * _delegate;
    SKUISlideshowImageScrollView * _imageScrollView;
    long long  _indexInCollection;
    struct CGPoint { 
        double x; 
        double y; 
    }  _lastContentOffset;
    double  _lastZoomScale;
    UIView * _loadingView;
    bool  _zoomingGestureThresholdBroken;
}

@property (nonatomic, retain) SKUIClientContext *clientContext;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SKUISlideshowItemViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) SKUISlideshowImageScrollView *imageScrollView;
@property (nonatomic) long long indexInCollection;
@property (nonatomic, retain) UIImage *itemImage;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_gestureRecognizer:(id)arg1 canBePreventedByGestureRecognizer:(id)arg2;
- (bool)_gestureRecognizer:(id)arg1 canPreventGestureRecognizer:(id)arg2;
- (id)_newLoadingView;
- (void)_pinchGestureAction:(id)arg1;
- (id)clientContext;
- (void)dealloc;
- (id)delegate;
- (id)imageScrollView;
- (long long)indexInCollection;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)itemImage;
- (void)setClientContext:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIndexInCollection:(long long)arg1;
- (void)setItemImage:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (id)viewForZoomingInScrollView:(id)arg1;

@end
