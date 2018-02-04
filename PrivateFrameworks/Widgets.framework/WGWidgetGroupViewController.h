/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Widgets.framework/Widgets
 */

@interface WGWidgetGroupViewController : UIViewController <WGWidgetDebugging, WGWidgetDiscoveryObserving, WGWidgetExtensionVisibilityProviding, WGWidgetListViewControllerDelegatePrivate> {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentOccludingInset;
    <WGWidgetGroupViewControllerDelegate> * _delegate;
    WGWidgetDiscoveryController * _discoveryController;
    unsigned long long  _lastWidgetCount;
    unsigned long long  _location;
    WGMajorListViewController * _majorColumnListViewController;
    bool  _shouldBlurContent;
}

@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentOccludingInset;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <WGWidgetGroupViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long location;
@property (nonatomic, readonly) UIScrollView *majorScrollView;
@property (nonatomic) bool shouldBlurContent;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long widgetCount;

- (void).cxx_destruct;
- (long long)_activeLayoutMode;
- (long long)_layoutModeForSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_loadWidgetListViewController;
- (id)_scrollViewForListViewController:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentOccludingInset;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentOccludingInsetForWidgetListViewController:(id)arg1;
- (id)delegate;
- (void)editViewDidAppear:(id)arg1;
- (void)editViewDidDisappear:(id)arg1;
- (void)editViewWillAppear:(id)arg1;
- (void)editViewWillDisappear:(id)arg1;
- (id)initWithWidgetDiscoveryController:(id)arg1;
- (void)invalidateVisibleWidgets;
- (bool)isWidgetExtensionVisible:(id)arg1;
- (unsigned long long)location;
- (id)majorScrollView;
- (void)makeVisibleWidgetWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)presentEditViewWithCompletion:(id /* block */)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(bool)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (bool)scrollViewShouldScrollToTop:(id)arg1;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint { double x1; double x2; })arg2 targetContentOffset:(inout struct CGPoint { double x1; double x2; }*)arg3;
- (void)setContentOccludingInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setLegibilitySettings:(id)arg1;
- (void)setLocation:(unsigned long long)arg1;
- (void)setShouldBlurContent:(bool)arg1;
- (bool)shouldAutomaticallyForwardAppearanceMethods;
- (bool)shouldBlurContent;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (unsigned long long)widgetCount;
- (void)widgetDiscoveryController:(id)arg1 widgetWithIdentifier:(id)arg2 shouldBecomeHiddenInGroup:(id)arg3;
- (void)widgetDiscoveryController:(id)arg1 widgetWithIdentifier:(id)arg2 shouldBecomeVisibleInGroup:(id)arg3;
- (id)widgetListViewController:(id)arg1 newCustomBackgroundViewForItemInList:(id)arg2;

@end
