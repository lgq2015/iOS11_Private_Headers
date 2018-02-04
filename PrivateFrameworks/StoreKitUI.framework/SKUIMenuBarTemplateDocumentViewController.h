/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIMenuBarTemplateDocumentViewController : SKUIViewController <SKUIDocumentViewController, SKUIHorizontalScrollingContainerViewControllerDelegate, SKUIMenuBarViewElementConfigurationDelegate, SKUINavigationBarControllerProviding, SKUIScrollingSegmentedControllerDelegate, SKUIScrollingTabAppearanceStatusObserver, SKUIScrollingTabNestedPagedScrolling> {
    SKUIDynamicPageSectionIndexMapper * _dynamicPageSectionIndexMapper;
    SKUIMenuBarTemplateDocumentViewControllerEmbeddedPaletteHost * _embeddedPaletteHost;
    NSMutableDictionary * _entityUniqueIdentifierToEntityIndex;
    SKUIHorizontalScrollingContainerViewController * _horizontalScrollingContainerViewController;
    SKUILoadingDocumentViewController * _loadingDocumentViewController;
    SKUIMenuBarSectionsViewController * _menuBarSectionsViewController;
    long long  _menuBarStyle;
    SKUIViewElement<SKUIMenuBarViewElement> * _menuBarViewElement;
    SKUIMenuBarViewElementConfiguration * _menuBarViewElementConfiguration;
    SKUIMenuItemViewElement * _pendingSelectedMenuItemViewElement;
    SKUIScrollingSegmentedController * _scrollingSegmentedController;
    struct { 
        double progress; 
        bool isBouncingOffTheEdge; 
    }  _scrollingTabAppearanceStatus;
    SKUIMenuBarTemplateElement * _templateElement;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIScrollView *scrollingTabNestedPagingScrollView;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIView *titleView;
@property (nonatomic, readonly) double titleViewHeight;

- (void).cxx_destruct;
- (void)_addContentViewController:(id)arg1;
- (id)_childViewControllersForMenuItems;
- (id)_colorScheme;
- (id)_contentViewController;
- (id)_dynamicPageSectionIndexMapper;
- (bool)_isFirstViewControllerOnNavigationStack;
- (unsigned long long)_menuItemIndexForEntityIndex:(unsigned long long)arg1 entityValueProvider:(out id*)arg2;
- (id)_newChildViewControllerForEntityAtIndex:(unsigned long long)arg1;
- (void)_recordEntityUniqueIdentifier:(id)arg1 forEntityIndex:(unsigned long long)arg2;
- (void)_reloadContentViewController;
- (void)_removeContentViewController:(id)arg1;
- (void)_replaceViewControllerAtIndex:(unsigned long long)arg1 withViewController:(id)arg2;
- (void)_willDisplayViewControllerAtIndex:(unsigned long long)arg1;
- (id)_zoomingShelfPageSplitsDescription;
- (id)contentScrollView;
- (void)dealloc;
- (void)documentDidUpdate:(id)arg1;
- (void)documentMediaQueriesDidUpdate:(id)arg1;
- (void)horizontalScrollingContainerViewController:(id)arg1 willDisplayViewControllerAtIndex:(unsigned long long)arg2;
- (id)initWithTemplateElement:(id)arg1;
- (void)menuBarViewElementConfiguration:(id)arg1 didReplaceDocumentForEntityUniqueIdentifier:(id)arg2;
- (void)menuBarViewElementConfiguration:(id)arg1 didReplaceDocumentForMenuItemAtIndex:(unsigned long long)arg2;
- (void)menuBarViewElementConfiguration:(id)arg1 selectMenuItemViewElement:(id)arg2 animated:(bool)arg3;
- (id)navigationBarControllerWithViewElement:(id)arg1;
- (id)navigationPaletteView;
- (void)scrollingSegmentedController:(id)arg1 willDisplayViewControllerAtIndex:(unsigned long long)arg2;
- (void)scrollingTabAppearanceStatusWasUpdated:(struct { double x1; bool x2; })arg1;
- (id)scrollingTabNestedPagingScrollView;
- (id)scrollingTabViewControllerInNestedPagingScrollViewAtPageIndex:(unsigned long long)arg1;
- (void)setClientContext:(id)arg1;
- (void)setOperationQueue:(id)arg1;
- (void)setPreferredContentSize:(struct CGSize { double x1; double x2; })arg1;
- (id)titleView;
- (double)titleViewHeight;
- (void)viewDidLoad;

@end
