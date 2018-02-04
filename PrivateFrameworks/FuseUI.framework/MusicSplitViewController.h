/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicSplitViewController : UIViewController <SKUIProxyScrollViewDelegate> {
    UIViewController * _detailViewController;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _detailViewControllerContentInsetAdditions;
    UIView * _gutterView;
    bool  _isHorizontallyCompact;
    UIViewController * _preservedDetailViewController;
    UIViewController * _primaryViewController;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _primaryViewControllerContentInsetAdditions;
    SKUIProxyScrollView * _proxyScrollView;
    double  _staticPrimaryColumnWidth;
}

@property (nonatomic, readonly) UIViewController *_detailViewController;
@property (nonatomic, readonly) bool _supportsDetailViewController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIViewController *primaryViewController;
@property (nonatomic) double staticPrimaryColumnWidth;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_applyContentInsetsForChildViewControllers;
- (struct { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_2_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_2_1_2; } x2; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_3_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_3_1_2; } x3; })_childrenLayoutResultsForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)_detailViewController;
- (id)_detailViewControllerOverrideTraitCollection;
- (void)_didChangeDetailViewController;
- (void)_didChangePrimaryViewController;
- (void)_handleDetailViewController:(id)arg1;
- (double)_preferredPrimaryColumnWidthWhenWithDetailForWidth:(double)arg1;
- (id)_primaryViewControllerOverrideTraitCollection;
- (void)_requestInitialStateDetailViewController;
- (void)_setDetailViewController:(id)arg1 shouldChangeParents:(bool)arg2;
- (bool)_supportsDetailViewController;
- (void)_updateHorizontallyCompactState;
- (void)_willChangeDetailViewController:(id)arg1;
- (void)_willChangePrimaryViewController:(id)arg1;
- (void)clearDetailViewController;
- (id)contentScrollView;
- (void)dealloc;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (id)primaryViewController;
- (void)scrollViewDidChangeContentInset:(id)arg1;
- (void)setPrimaryViewController:(id)arg1;
- (void)setStaticPrimaryColumnWidth:(double)arg1;
- (void)showDetailViewController:(id)arg1 sender:(id)arg2;
- (struct CGSize { double x1; double x2; })sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize { double x1; double x2; })arg2;
- (double)staticPrimaryColumnWidth;
- (id)targetViewControllerForAction:(SEL)arg1 sender:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
