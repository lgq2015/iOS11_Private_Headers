/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIChartsDocumentViewController : SKUIViewController <SKUIDocumentViewController, SKUIResourceLoaderDelegate> {
    SKUIChartColumnsView * _chartsView;
    NSMutableArray * _columnViewControllers;
    SKUIResourceLoader * _resourceLoader;
    SKUIChartsTemplateViewElement * _templateElement;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)_shouldForwardViewWillTransitionToSize;

- (void).cxx_destruct;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_chartInsets;
- (id)_columnViewControllers;
- (id)_newColumnViewControllersWithReusableViewControllers:(id)arg1;
- (id)_resourceLoader;
- (long long)_visibleColumnCountForWidth:(double)arg1;
- (id)contentScrollView;
- (void)documentDidUpdate:(id)arg1;
- (void)documentMediaQueriesDidUpdate:(id)arg1;
- (id)initWithTemplateElement:(id)arg1;
- (void)loadView;
- (void)resourceLoader:(id)arg1 didLoadAllForReason:(long long)arg2;
- (void)resourceLoaderDidBeginLoading:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize { double x1; double x2; })arg2;
- (void)skui_viewWillAppear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
