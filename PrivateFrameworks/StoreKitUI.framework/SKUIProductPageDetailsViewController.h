/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIProductPageDetailsViewController : UIViewController <SKUIItemStateCenterObserver, SKUIProductPageChildViewController, SKUIScreenshotsDelegate, SKUITableViewSectionDelegate> {
    bool  _askPermission;
    SKUIClientContext * _clientContext;
    SKUIProductPageTableHeaderOnlySection * _copyrightSection;
    <SKUIProductPageChildViewControllerDelegate> * _delegate;
    SKUIProductPageTableTextBoxSection * _descriptionSection;
    NSOperationQueue * _operationQueue;
    SKUIProductPage * _productPage;
    SKUIResourceLoader * _resourceLoader;
    SKUIProductPageTableHeaderOnlySection * _screenshotsSection;
    NSMutableArray * _sections;
    SKUIProductPageTableTextBoxSection * _storeNotesSection;
    SKUIProductPageTableViewController * _tableViewController;
    SKUILayoutCache * _textLayoutCache;
    SKUIProductPageTableTextBoxSection * _whatsNewSection;
}

@property (nonatomic) bool askPermission;
@property (nonatomic, retain) SKUIClientContext *clientContext;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SKUIProductPageChildViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SKUIProductPageHeaderViewController *headerViewController;
@property (nonatomic, retain) NSOperationQueue *operationQueue;
@property (nonatomic, readonly) SKUIProductPage *productPage;
@property (nonatomic, readonly) UIScrollView *scrollView;
@property (readonly) Class superclass;

+ (double)defaultPageWidthForUserInterfaceIdiom:(long long)arg1;

- (void).cxx_destruct;
- (void)_addTapRecognizerForView:(id)arg1 action:(SEL)arg2;
- (id)_bundledAppsSection;
- (void)_configureSwooshSection:(id)arg1;
- (id)_copyrightSection;
- (id)_descriptionSection;
- (void)_expandSection:(id)arg1;
- (id)_featuresSection;
- (id)_infoSection;
- (id)_parentBundlesSection;
- (id)_resourceLoader;
- (id)_screenshotsSection;
- (id)_storeNotesSection;
- (id)_tableViewController;
- (id)_textLayoutRequestWithText:(id)arg1 widthOffset:(double)arg2;
- (id)_whatsNewSection;
- (bool)askPermission;
- (id)clientContext;
- (void)dealloc;
- (id)delegate;
- (id)headerViewController;
- (id)initWithProductPage:(id)arg1;
- (void)itemStateCenterRestrictionsChanged:(id)arg1;
- (void)loadView;
- (id)operationQueue;
- (id)productPage;
- (void)screenshotsWillBeginDragging:(id)arg1;
- (id)scrollView;
- (void)setAskPermission:(bool)arg1;
- (void)setClientContext:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHeaderViewController:(id)arg1;
- (void)setOperationQueue:(id)arg1;
- (id)tableViewForTableViewSection:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;

@end
