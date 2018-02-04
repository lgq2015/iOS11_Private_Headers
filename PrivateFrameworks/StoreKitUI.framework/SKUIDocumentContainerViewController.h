/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIDocumentContainerViewController : SKUIViewController <IKAppDocumentDelegate, SKUIMediaQueryDelegate, SKUIModalSourceViewProvider, SKUINavigationBarControllerDelegate, SKUINavigationBarDisplayConfiguring, SKUINavigationPaletteProvider, SKUIResourceLoaderDelegate, SKUIScrollingTabAppearanceStatusObserver, SKUIScrollingTabNestedPagedScrolling, SKUIToolbarControllerDelegate, SKUIViewControllerTesting, UIViewControllerTransitioningDelegate> {
    UIViewController * _beforeErrorChildViewController;
    UIViewController * _childViewController;
    NSArray * _defaultLeftBarButtonItems;
    IKAppDocument * _document;
    SKUIMetricsDOMChangeQueue * _domChangeTimingQueue;
    double  _lastBottomLayoutGuideLength;
    double  _lastTopLayoutGuideLength;
    SSVLoadURLOperation * _loadURLOperation;
    bool  _makeSearchBarFirstResponderOnLoad;
    SKUIMediaQueryEvaluator * _mediaQueryEvaluator;
    SKUINavigationBarController * _navigationBarController;
    NSNumber * _orientationAtDisappear;
    SKUIMetricsPageRenderEvent * _pageRenderEvent;
    NSNumber * _pageResponseAbsoluteTime;
    id /* block */  _pendingSizeTransitionCompletion;
    NSSet * _personalizationItems;
    NSDictionary * _presentationOptions;
    struct { 
        double progress; 
        bool isBouncingOffTheEdge; 
    }  _scrollingTabAppearanceStatus;
    NSArray * _searchBarControllers;
    bool  _selectSearchBarContentOnBecomingFirstResponder;
    NSValue * _sizeAtDisappear;
    unsigned long long  _templateViewElementType;
    SKUIToolbarController * _toolbarController;
    NSString * _urlString;
    struct CGSize { 
        double width; 
        double height; 
    }  _viewSize;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) SKUIMetricsDOMChangeQueue *domChangeTimingQueue;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIView *navigationPaletteView;
@property (nonatomic, retain) SKUIMetricsPageRenderEvent *pageRenderEvent;
@property (nonatomic, readonly) UIScrollView *scrollingTabNestedPagingScrollView;
@property (readonly) Class superclass;

+ (bool)_shouldForwardViewWillTransitionToSize;
+ (bool)allowsChildViewControllerNavigationBarManagement;

- (void).cxx_destruct;
- (void)_enqueueLoadURLOperation;
- (void)_finishLegacyProtocolOperationForResponse:(id)arg1 dataProvider:(id)arg2 dictionary:(id)arg3;
- (void)_finishLoadOperationWithResponse:(id)arg1 error:(id)arg2;
- (bool)_makeSearchBarFirstResponderOnLoad;
- (id)_navigationBarViewElement;
- (void)_networkTypeChangeNotification:(id)arg1;
- (id)_newViewControllerWithTemplateElement:(id)arg1 options:(id)arg2 clientContext:(id)arg3;
- (void)_onReportDOMChange:(id)arg1;
- (void)_onReportDocumentReady:(id)arg1;
- (void)_onReportPlatformJsonTimes:(id)arg1;
- (void)_onReportRequestTimes:(id)arg1;
- (void)_redirectToURL:(id)arg1;
- (void)_reloadDefaultBarButtonItems;
- (void)_reloadNavigationBarController;
- (void)_reloadNavigationBarControllerIfNeeded;
- (void)_reloadNavigationItemContents;
- (void)_reloadNavigationPalette;
- (void)_reloadPageData;
- (void)_reloadToolbar;
- (bool)_selectSearchBarContentOnBecomingFirstResponder;
- (void)_sendOnViewAttributesChangeWithAttributes:(id)arg1 viewWillAppear:(bool)arg2;
- (void)_setChildViewController:(id)arg1;
- (void)_setMakeSearchBarFirstResponderOnLoad:(bool)arg1;
- (void)_setSelectSearchBarContentOnBecomingFirstResponder:(bool)arg1;
- (bool)_shouldFillNavigationBarContentsBasedOnNavigationBarViewElement;
- (void)_showAccountViewControllerWithURL:(id)arg1;
- (void)_showLegacyStorePageWithRequest:(id)arg1 page:(id)arg2 pageType:(long long)arg3 URLResponse:(id)arg4;
- (id)_sidepackViewControllerWithOptions:(id)arg1 clientContext:(id)arg2;
- (void)_skui_applicationDidEnterBackground:(id)arg1;
- (void)_skui_applicationWillEnterForeground:(id)arg1;
- (void)_submitPageRenderIfPossible;
- (id)_toolbarViewElement;
- (id)additionalLeftBarButtonItemForNavigationBarController:(id)arg1;
- (id)additionalRightBarButtonItemForNavigationBarController:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)childViewController;
- (id)childViewControllerForStatusBarHidden;
- (id)childViewControllerForStatusBarStyle;
- (id)contentScrollView;
- (void)dealloc;
- (bool)document:(id)arg1 evaluateStyleMediaQuery:(id)arg2;
- (void)document:(id)arg1 runTestWithName:(id)arg2 options:(id)arg3;
- (void)documentDidSendMessage:(id)arg1;
- (void)documentDidUpdate:(id)arg1;
- (void)documentNeedsUpdate:(id)arg1;
- (void)documentScrollToTop:(id)arg1;
- (id)domChangeTimingQueue;
- (void)getModalSourceViewForElementIdentifier:(id)arg1 completionBlock:(id /* block */)arg2;
- (id)impressionableViewElementsForDocument:(id)arg1;
- (id)initWithDocument:(id)arg1 options:(id)arg2 clientContext:(id)arg3;
- (void)loadView;
- (id)mediaQueryEvaluator:(id)arg1 valueForKey:(id)arg2;
- (void)mediaQueryEvaluatorDidChange:(id)arg1;
- (long long)navigationBarTintAdjustmentMode;
- (id)navigationBarTintColor;
- (id)navigationBarTitleTextTintColor;
- (id)navigationPaletteView;
- (id)pageRenderEvent;
- (id /* block */)pendingSizeTransitionCompletion;
- (bool)performTestWithName:(id)arg1 options:(id)arg2;
- (bool)prefersNavigationBarBackgroundViewHidden;
- (bool)prefersNavigationBarHidden;
- (id)previewMenuItems;
- (void)reloadData;
- (void)resourceLoader:(id)arg1 didLoadAllForReason:(long long)arg2;
- (void)resourceLoaderDidBeginLoading:(id)arg1;
- (void)scrollingTabAppearanceStatusWasUpdated:(struct { double x1; bool x2; })arg1;
- (id)scrollingTabNestedPagingScrollView;
- (id)scrollingTabViewControllerInNestedPagingScrollViewAtPageIndex:(unsigned long long)arg1;
- (void)setDomChangeTimingQueue:(id)arg1;
- (void)setPageRenderEvent:(id)arg1;
- (void)setPreferredContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)skui_viewWillAppear:(bool)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (id)toolbarItems;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (void)willMoveToParentViewController:(id)arg1;

@end
