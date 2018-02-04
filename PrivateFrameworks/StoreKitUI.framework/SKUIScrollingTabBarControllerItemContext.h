/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIScrollingTabBarControllerItemContext : NSObject <SKUINavigationStackObserver> {
    bool  _adjustingNestedPagingScrollViewContentOffset;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _appliedContentInsetsAdjustment;
    SKUIViewControllerContainerCollectionViewCell * _collectionViewCell;
    <SKUIScrollingTabBarControllerItemContextDelegate> * _delegate;
    struct { 
        struct UIEdgeInsets { 
            double top; 
            double left; 
            double bottom; 
            double right; 
        } contentInset; 
        double bottomInsetValueAddedForScrollingTabBar; 
    }  _desiredContentInsetAdjustmentDescriptor;
    UIScrollView * _insetAdjustedContentScrollView;
    double  _lastSeenContentWidth;
    unsigned long long  _lastSelectedPageIndex;
    struct { 
        double progress; 
        bool isBouncingOffTheEdge; 
    }  _lastSentAppearanceStatus;
    UIScrollView * _observedNestedPagingScrollView;
    unsigned long long  _originalAutoresizingMask;
    bool  _readyForDisplay;
    UIViewController * _viewController;
    BOOL  _viewControllerIsNavigationController;
}

@property (nonatomic, retain) SKUIViewControllerContainerCollectionViewCell *collectionViewCell;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SKUIScrollingTabBarControllerItemContextDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long lastSelectedPageIndex;
@property (nonatomic, readonly) UIScrollView *nestedPagingScrollView;
@property (nonatomic, readonly) double nestedPagingScrollViewContentWidth;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIViewController *viewController;
@property (nonatomic, readonly) bool viewControllerIsNavigationController;

- (void).cxx_destruct;
- (id)_appearanceStatusObserver;
- (void)_applyNewContentInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1 withOldContentInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2 toContentScrollView:(id)arg3;
- (id)_nestedPagedScrollingConformingViewControllerForcingViewLoading:(bool)arg1;
- (void)_notifyDelegateOfUpdatedContentWidthInObservedNestedPagingScrollView;
- (void)_prepareViewControllerForDisplayWithViewFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 updateContentOffset:(bool)arg2 contentOffset:(struct CGPoint { double x1; double x2; })arg3;
- (void)_prepareViewControllerForTearDown;
- (void)_updateAppliedContentInsetsAdjustment;
- (void)applyNewContentInsetDescriptor:(struct { struct UIEdgeInsets { double x_1_1_1; double x_1_1_2; double x_1_1_3; double x_1_1_4; } x1; double x2; })arg1;
- (id)collectionViewCell;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (id)initWithViewController:(id)arg1;
- (unsigned long long)lastSelectedPageIndex;
- (id)nestedPagingScrollView;
- (double)nestedPagingScrollViewContentWidth;
- (void)notifyOfUpdatedAppearanceStatus:(struct { double x1; bool x2; })arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)observedNavigationStackDidChange:(id)arg1;
- (void)prepareViewControllerForDisplayWithSize:(struct CGSize { double x1; double x2; })arg1;
- (void)prepareViewControllerForTearDown;
- (void)setCollectionViewCell:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLastSelectedPageIndex:(unsigned long long)arg1;
- (void)updateForPossibleNestedPagingScrollViewChange;
- (void)updateNestedPagingScrollViewContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (id)viewController;
- (id)viewControllerInNestedPagingScrollViewAtPageIndex:(unsigned long long)arg1;
- (bool)viewControllerIsNavigationController;

@end
