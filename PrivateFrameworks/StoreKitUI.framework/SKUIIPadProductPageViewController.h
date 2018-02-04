/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIIPadProductPageViewController : UIViewController <SKUIMessageBannerDelegate, SKUIMetricsViewController, SKUINetworkErrorDelegate, SKUIProductPageChildViewControllerDelegate, SKUIProductPageHeaderViewDelegate> {
    bool  _askPermission;
    SKUIMessageBanner * _banner;
    NSString * _bannerText;
    SKUIClientContext * _clientContext;
    long long  _defaultSelectedSectionIndex;
    <SKUIIPadProductPageDelegate> * _delegate;
    SKUIProductPageDetailsViewController * _detailsViewController;
    bool  _didSendCannotOpen;
    SKUIProductPageHeaderViewController * _headerViewController;
    SKUIIncompatibleAppViewController * _incompatibleViewController;
    SKUIItem * _item;
    SSMetricsPageEvent * _lastPageEvent;
    SKUILoadProductPageOperation * _loadOperation;
    long long  _lookupItemIdentifier;
    SKUIMetricsController * _metricsController;
    SKUINetworkErrorViewController * _networkErrorViewController;
    NSOperationQueue * _operationQueue;
    UIView * _overlayView;
    SKUIProductPagePlaceholderViewController * _placeholderViewController;
    SKUIProductPage * _productPage;
    SKUISwooshArrayViewController * _relatedViewController;
    SKUIProductPageReviewsViewController * _reviewsViewController;
    long long  _selectedSectionIndex;
    NSURLRequest * _urlRequest;
}

@property (nonatomic, readonly) NSURL *URL;
@property (nonatomic) bool askPermission;
@property (nonatomic, copy) NSString *bannerText;
@property (nonatomic, retain) SKUIClientContext *clientContext;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SKUIIPadProductPageDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) SKUIItem *item;
@property (nonatomic, readonly) SKUIProductPage *productPage;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)URL;
- (id)_detailsViewController;
- (id)_initSKUIIPadProductPageViewController;
- (bool)_isIncompatibleItem;
- (void)_metricsEnterEventNotification:(id)arg1;
- (id)_placeholderViewController;
- (id)_relatedViewController;
- (void)_reloadHeaderViewController;
- (id)_reviewsViewController;
- (void)_selectSectionIndex:(long long)arg1;
- (void)_sendCannotOpen;
- (void)_setDefaultSectionIndexWithFragment:(long long)arg1;
- (void)_setMetricsController:(id)arg1;
- (void)_setProductPage:(id)arg1 error:(id)arg2;
- (void)_showBanner;
- (void)_showError:(id)arg1;
- (void)_showIncompatibleView;
- (void)_showViewController:(id)arg1;
- (id)_viewControllerForSectionIndex:(long long)arg1;
- (id)activeMetricsController;
- (bool)askPermission;
- (void)askPermissionBannerDidSelect:(id)arg1;
- (id)bannerText;
- (id)clientContext;
- (void)configureMetricsWithPageEvent:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (id)initWithItem:(id)arg1;
- (id)initWithItemIdentifier:(long long)arg1;
- (id)initWithProductPage:(id)arg1;
- (id)initWithURL:(id)arg1;
- (id)initWithURLRequest:(id)arg1;
- (id)item;
- (void)loadView;
- (id)metricsControllerForProductPageHeader:(id)arg1;
- (void)networkErrorViewControllerInvalidated:(id)arg1;
- (id)productPage;
- (void)productPageChildOpenItem:(id)arg1;
- (void)productPageChildOpenURL:(id)arg1 viewControllerBlock:(id /* block */)arg2;
- (void)productPageChildViewControllerDidLoad:(id)arg1;
- (void)productPageChildViewControllerDidLoadScrollView:(id)arg1;
- (void)productPageChildViewControllerDidScroll:(id)arg1;
- (void)productPageHeaderView:(id)arg1 didSelectSectionIndex:(long long)arg2;
- (void)productPageHeaderView:(id)arg1 didSelectURL:(id)arg2;
- (void)productPageHeaderViewDidWantAskPermissionBanner:(id)arg1;
- (void)reloadData;
- (void)setAskPermission:(bool)arg1;
- (void)setBannerText:(id)arg1;
- (void)setClientContext:(id)arg1;
- (void)setDelegate:(id)arg1;
- (struct CGPoint { double x1; double x2; })topContentOffset;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(bool)arg1;

@end
