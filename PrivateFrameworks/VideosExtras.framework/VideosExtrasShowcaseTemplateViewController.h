/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideosExtras.framework/VideosExtras
 */

@interface VideosExtrasShowcaseTemplateViewController : VideosExtrasTemplateViewController <VideosExtrasCarouselViewControllerDataSource, VideosExtrasCarouselViewControllerDelegate, VideosExtrasImageBrowserViewControllerDataSource, VideosExtrasNavigationAnimationControllerProvider, VideosExtrasZoomingImageInteractiveTransitionSource, VideosExtrasZoomingImageTransitionParticipant> {
    VideosExtrasZoomingImageTransitionController * _activeZoomingImageInteractiveTransitionController;
    unsigned long long  _autohighlightIndex;
    NSArray * _bannerButtonElements;
    NSArray * _carouselLockupElements;
    VideosExtrasCarouselViewController * _carouselViewController;
    VideosExtrasImageBrowserViewController * _imageBrowserViewController;
    NSDictionary * _overriddenFullscreenImages;
    bool  _supportsOneupMode;
}

@property (nonatomic, retain) VideosExtrasZoomingImageTransitionController *activeZoomingImageInteractiveTransitionController;
@property (nonatomic) unsigned long long autohighlightIndex;
@property (nonatomic, retain) NSArray *bannerButtonElements;
@property (nonatomic, retain) NSArray *carouselLockupElements;
@property (nonatomic, retain) VideosExtrasCarouselViewController *carouselViewController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) VideosExtrasImageBrowserViewController *imageBrowserViewController;
@property (nonatomic, readonly) unsigned long long indexOfVisibleItem;
@property (nonatomic, retain) NSDictionary *overriddenFullscreenImages;
@property (readonly) Class superclass;
@property (nonatomic) bool supportsOneupMode;
@property (nonatomic, readonly) IKShowcaseTemplate *templateElement;

- (void).cxx_destruct;
- (void)_loadTextElement:(id)arg1 textAttributes:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (id)_mainChildViewController;
- (void)_prepareLayout;
- (void)_pushImageBrowserWithVisibleItemIndex:(unsigned long long)arg1;
- (id)activeZoomingImageInteractiveTransitionController;
- (id)animationControllerForNavigationOperation:(long long)arg1 fromViewController:(id)arg2 toViewController:(id)arg3;
- (unsigned long long)autohighlightIndex;
- (id)bannerButtonElements;
- (id)carouselLockupElements;
- (unsigned long long)carouselSize;
- (id)carouselViewController;
- (void)carouselViewController:(id)arg1 configureCarouselCollectionViewCell:(id)arg2 forItemAtIndex:(unsigned long long)arg3 withThumbnailImageContainerSize:(struct CGSize { double x1; double x2; })arg4;
- (void)carouselViewController:(id)arg1 didHighlightItemAtIndex:(unsigned long long)arg2;
- (void)carouselViewController:(id)arg1 didSelectItemAtIndex:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (void)dealloc;
- (void)finalizeZoomingImageTransitionWithContext:(id)arg1 transitionFinished:(bool)arg2;
- (void)handlePinchGestureForZoomingImageInteractiveTransitionWithContext:(id)arg1;
- (id)imageBrowserViewController;
- (void)imageBrowserViewController:(id)arg1 loadDescriptionAtIndex:(unsigned long long)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)imageBrowserViewController:(id)arg1 loadImageAtIndex:(unsigned long long)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)imageBrowserViewController:(id)arg1 loadSubtitleAtIndex:(unsigned long long)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)imageBrowserViewController:(id)arg1 loadTitleAtIndex:(unsigned long long)arg2 withCompletionHandler:(id /* block */)arg3;
- (unsigned long long)indexOfVisibleItem;
- (id)initWithDocument:(id)arg1 options:(id)arg2 context:(id)arg3;
- (unsigned long long)numberOfImagesForBrowserViewController:(id)arg1;
- (unsigned long long)numberOfItemsInCarouselViewController:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)overriddenFullscreenImages;
- (void)performZoomingImageTransitionWithContext:(id)arg1;
- (void)prepareZoomingImageTransitionWithContext:(id)arg1;
- (void)setActiveZoomingImageInteractiveTransitionController:(id)arg1;
- (void)setAutohighlightIndex:(unsigned long long)arg1;
- (void)setBannerButtonElements:(id)arg1;
- (void)setCarouselLockupElements:(id)arg1;
- (void)setCarouselViewController:(id)arg1;
- (void)setImageBrowserViewController:(id)arg1;
- (void)setOverriddenFullscreenImages:(id)arg1;
- (void)setSupportsOneupMode:(bool)arg1;
- (bool)showsPlaceholder;
- (bool)supportsOneupMode;
- (id)templateElement;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
