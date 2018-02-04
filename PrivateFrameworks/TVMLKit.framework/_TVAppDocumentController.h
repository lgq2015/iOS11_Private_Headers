/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface _TVAppDocumentController : UIViewController <UIGestureRecognizerDelegate, UIPopoverPresentationControllerDelegate, _TVIKAppDocumentDelegate, _TVModalPresenterFocusing, _TVPagePerformanceDelegate> {
    IKAppDocument * _appDocument;
    bool  _applicationDeactivatedOnMenu;
    <_TVAppDocumentControllerDelegate> * _delegate;
    struct { 
        unsigned int mediaQueryEvaluatorForAppDocumentController : 1; 
    }  _delegateFlags;
    bool  _dismissAppOnMenu;
    TVMediaQueryEvaluator * _mediaQueryEvaluator;
    id /* block */  _menuGestureHandler;
    UITapGestureRecognizer * _menuGestureRecognizer;
    bool  _opaque;
    _TVPagePerformanceController * _pagePerformance;
    UIView * _pagePerformanceView;
    bool  _shouldMarkStylesDirtyBeforeLayout;
    UIViewController * _templateViewController;
    bool  _transitioning;
    bool  _visualEffectDisablementNeeded;
}

@property (nonatomic, retain) IKAppDocument *appDocument;
@property (nonatomic, readonly) bool applicationDeactivatedOnMenu;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_TVAppDocumentControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool dismissAppOnMenu;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) TVMediaQueryEvaluator *mediaQueryEvaluator;
@property (nonatomic, copy) id /* block */ menuGestureHandler;
@property (nonatomic) UITapGestureRecognizer *menuGestureRecognizer;
@property (nonatomic) bool opaque;
@property (nonatomic, retain) _TVPagePerformanceController *pagePerformance;
@property (nonatomic, retain) UIView *pagePerformanceView;
@property (nonatomic, readonly, copy) NSArray *preferredFocusEnvironments;
@property (nonatomic, readonly) UIView *preferredFocusedView;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIViewController *templateViewController;
@property (getter=isTransitioning, nonatomic) bool transitioning;
@property (getter=isVisualEffectDisablementNeeded, nonatomic) bool visualEffectDisablementNeeded;

- (void).cxx_destruct;
- (id)_alertControllerWithError:(id)arg1;
- (bool)_isFlowcaseStack;
- (void)_markAndNotifyStylesDirty;
- (id)_mediaQueryEvaluator;
- (void)_menuGestureHandler:(id)arg1;
- (bool)_tvTabBarShouldOverlap;
- (void)_updateIdleModeStatus;
- (void)_updateTemplateViewController;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2;
- (id)appDocument;
- (bool)applicationDeactivatedOnMenu;
- (bool)automaticallyAdjustsScrollViewInsets;
- (id)childViewControllerForHomeIndicatorAutoHidden;
- (id)childViewControllerForStatusBarHidden;
- (id)customAnimatorForNavigationControllerOperation:(long long)arg1 fromViewController:(id)arg2;
- (id)customAnimatorForNavigationControllerOperation:(long long)arg1 toViewController:(id)arg2;
- (void)dealloc;
- (id)delegate;
- (void)didMoveToParentViewController:(id)arg1;
- (bool)dismissAppOnMenu;
- (bool)document:(id)arg1 evaluateStyleMediaQuery:(id)arg2;
- (void)documentDidUpdate:(id)arg1;
- (void)documentNeedsUpdate:(id)arg1;
- (struct CGSize { double x1; double x2; })formSize;
- (id)impressionableViewElementsForDocument:(id)arg1;
- (id)initWithAppDocument:(id)arg1;
- (bool)isTransitioning;
- (bool)isVisualEffectDisablementNeeded;
- (void)loadView;
- (id)mediaQueryEvaluator;
- (id /* block */)menuGestureHandler;
- (id)menuGestureRecognizer;
- (bool)opaque;
- (id)overrideTraitCollectionForChildViewController:(id)arg1;
- (id)pagePerformance;
- (void)pagePerformanceController:(id)arg1 didUpdateMetrics:(id)arg2;
- (id)pagePerformanceView;
- (void)popoverPresentationController:(id)arg1 willRepositionPopoverToRect:(inout struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2 inView:(inout id*)arg3;
- (id)preferredFocusEnvironments;
- (long long)preferredStatusBarStyle;
- (void)reload;
- (void)replaceAppDocumentWithAppDocument:(id)arg1;
- (void)scrollToTop;
- (void)setAppDocument:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDismissAppOnMenu:(bool)arg1;
- (void)setMediaQueryEvaluator:(id)arg1;
- (void)setMenuGestureHandler:(id /* block */)arg1;
- (void)setMenuGestureRecognizer:(id)arg1;
- (void)setOpaque:(bool)arg1;
- (void)setPagePerformance:(id)arg1;
- (void)setPagePerformanceView:(id)arg1;
- (void)setTemplateViewController:(id)arg1;
- (void)setTransitioning:(bool)arg1;
- (void)setVisualEffectDisablementNeeded:(bool)arg1;
- (bool)shouldAutomaticallyForwardAppearanceMethods;
- (unsigned long long)supportedInterfaceOrientations;
- (id)templateViewController;
- (void)traitCollectionDidChange:(id)arg1;
- (struct CGSize { double x1; double x2; })tv_adjustedWindowSizeForDocument:(id)arg1;
- (void)tvmlkit_handleEvent:(id)arg1 forElement:(id)arg2 andSourceView:(id)arg3;
- (void)updatePreferredFocusedViewStateForFocus:(bool)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (void)willMoveToParentViewController:(id)arg1;

@end
