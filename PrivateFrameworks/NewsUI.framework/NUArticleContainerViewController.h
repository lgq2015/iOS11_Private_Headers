/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

@interface NUArticleContainerViewController : UIViewController <NUArticleBarButtonItemManagerDelegate, NUInterstitialAdManagerDelegate, NULoadingDelegate, NUNavigationControl, NUPageViewControllerDataSource, NUPageViewControllerDelegate, UIPageViewControllerDataSource, UIPageViewControllerDelegate> {
    NUArticleBarButtonItemManager * _barButtonItemManager;
    <NUArticleContainerViewControllerDelegate> * _delegate;
    NUInterstitialAdManager * _interstitialAdManager;
    bool  _linkPreviewing;
    NUArticleNavigationController * _navigationController;
    NUPageViewController * _pageViewController;
    <NUPaging> * _paging;
    <NUPagingFactory> * _pagingFactory;
    <NURouter> * _router;
}

@property (nonatomic, readonly) NUArticleBarButtonItemManager *barButtonItemManager;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <NUArticleContainerViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NUInterstitialAdManager *interstitialAdManager;
@property (getter=isLinkPreviewing, nonatomic) bool linkPreviewing;
@property (nonatomic, readonly) NUArticleNavigationController *navigationController;
@property (nonatomic, readonly) NUPageViewController *pageViewController;
@property (nonatomic, retain) <NUPaging> *paging;
@property (nonatomic, readonly) <NUPagingFactory> *pagingFactory;
@property (nonatomic, readonly) <NURouter> *router;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)articleBarButtonItemManager:(id)arg1 performDoneActionForBarButtonItem:(id)arg2;
- (void)articleBarButtonItemManager:(id)arg1 performNextActionForBarButtonItem:(id)arg2;
- (void)articleBarButtonItemManager:(id)arg1 performShareActionForBarButtonItem:(id)arg2;
- (void)articleBarButtonItemManagerDidLayoutBarButtonItems:(id)arg1;
- (id)barButtonItemManager;
- (id)childViewControllerForStatusBarHidden;
- (id)delegate;
- (void)didReceiveMemoryWarning;
- (void)enableNavigation:(bool)arg1;
- (id)init;
- (id)initWithPagingFactory:(id)arg1 interstitialAdManager:(id)arg2 router:(id)arg3;
- (id)interstitialAdManager;
- (void)interstitialAdManager:(id)arg1 didLoadInterstitialPage:(id)arg2;
- (void)interstitialAdManager:(id)arg1 didUnloadInterstitialPage:(id)arg2;
- (id)interstitialAdManager:(id)arg1 pageAfterPage:(id)arg2;
- (bool)isLinkPreviewing;
- (void)loadWithArticleIDs:(id)arg1;
- (void)loadingDidFinishWithError:(id)arg1;
- (void)loadingWillStart;
- (id)navigationController;
- (id)pageViewController;
- (void)pageViewController:(id)arg1 didChangeVisibleViewControllerFromViewController:(id)arg2 direction:(unsigned long long)arg3;
- (void)pageViewController:(id)arg1 viewController:(id)arg2 changedVisibilityFactor:(double)arg3;
- (id)pageViewController:(id)arg1 viewControllerAfterViewController:(id)arg2;
- (id)pageViewController:(id)arg1 viewControllerBeforeViewController:(id)arg2;
- (id)paging;
- (id)pagingFactory;
- (id)router;
- (void)setDelegate:(id)arg1;
- (void)setLinkPreviewing:(bool)arg1;
- (void)setPaging:(id)arg1;
- (void)styleNavigationForPage:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (id)viewControllerPagableForViewController:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
