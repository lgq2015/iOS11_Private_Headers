/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FMCoreUI.framework/FMCoreUI
 */

@interface FMSlidingPaneViewController : FMViewController {
    double  _animationDuration;
    double  _animationInitialVelocity;
    unsigned long long  _animationOptions;
    double  _animationSpringDamping;
    <FMSlidingPaneViewControllerDelegate> * _delegate;
    bool  _didHideToolbar;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _paneContentInsets;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _paneInsets;
    SlidingPaneViewState * _paneState;
    UIVisualEffect * _paneVisualEffect;
}

@property (nonatomic) double animationDuration;
@property (nonatomic) double animationInitialVelocity;
@property (nonatomic) unsigned long long animationOptions;
@property (nonatomic) double animationSpringDamping;
@property (nonatomic) <FMSlidingPaneViewControllerDelegate> *delegate;
@property (nonatomic) bool didHideToolbar;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } paneContentInsets;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } paneInsets;
@property (getter=isPaneShowing, nonatomic, readonly) bool paneShowing;
@property (nonatomic, retain) SlidingPaneViewState *paneState;
@property (nonatomic, readonly) UIView *paneView;
@property (nonatomic, readonly) UIViewController *paneViewController;
@property (nonatomic, retain) UIVisualEffect *paneVisualEffect;

- (void).cxx_destruct;
- (void)_createPaneContentConstraintsForState:(id)arg1;
- (void)_createPaneViewForState:(id)arg1;
- (void)_crossDissolveOldPaneState:(id)arg1 newPaneState:(id)arg2 animated:(bool)arg3 completion:(id /* block */)arg4;
- (void)_dismissPaneState:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (id)_metricsFromEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (struct CGSize { double x1; double x2; })_normalizeSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_paneFrameChanged:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)_paneParentView;
- (struct CGSize { double x1; double x2; })_preferredSizeForPaneState:(id)arg1;
- (void)_presentPaneState:(id)arg1 animated:(bool)arg2 interactive:(bool)arg3 completion:(id /* block */)arg4;
- (void)_removeChildViewControllerForState:(id)arg1;
- (double)animationDuration;
- (double)animationInitialVelocity;
- (unsigned long long)animationOptions;
- (double)animationSpringDamping;
- (void)awakeFromNib;
- (void)commonConfiguration;
- (id)delegate;
- (void)didDismissPane:(id)arg1 animated:(bool)arg2;
- (bool)didHideToolbar;
- (void)didPresentPane:(id)arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 animated:(bool)arg3;
- (void)dismiss:(id)arg1;
- (void)dismiss:(id)arg1 forEvent:(id)arg2;
- (void)dismissPaneViewControllerAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (void)dismissSegue:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (bool)isPaneShowing;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })paneContentInsets;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })paneInsets;
- (void)paneSizeChanged:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forViewController:(id)arg2;
- (id)paneState;
- (id)paneView;
- (id)paneViewController;
- (id)paneVisualEffect;
- (void)presentPaneViewController:(id)arg1 fromEdge:(unsigned long long)arg2 animated:(bool)arg3 completion:(id /* block */)arg4;
- (void)presentPaneViewController:(id)arg1 fromEdge:(unsigned long long)arg2 withPercent:(double)arg3 completion:(id /* block */)arg4;
- (void)setAnimationDuration:(double)arg1;
- (void)setAnimationInitialVelocity:(double)arg1;
- (void)setAnimationOptions:(unsigned long long)arg1;
- (void)setAnimationSpringDamping:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDidHideToolbar:(bool)arg1;
- (void)setPaneContentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setPaneInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setPaneState:(id)arg1;
- (void)setPaneVisualEffect:(id)arg1;
- (void)setPresentingConstraintConstant:(double)arg1;
- (id)traitCollectionForChildViewController:(id)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)willDismissPane:(id)arg1 animated:(bool)arg2;
- (void)willPresentPane:(id)arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 animated:(bool)arg3;

@end
