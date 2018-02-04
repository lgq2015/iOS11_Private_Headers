/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
 */

@interface CCUIContentModuleContainerViewController : UIViewController <CCUISafeAppearancePropagationProvider, UIGestureRecognizerDelegate, UIPreviewInteractionDelegatePrivate> {
    CCUIContentModuleBackgroundView * _backgroundView;
    UIViewController * _backgroundViewController;
    CCUIContentModuleContentContainerView * _contentContainerView;
    <CCUIContentModule> * _contentModule;
    bool  _contentModuleProvidesOwnPlatter;
    UIView * _contentView;
    UIViewController<CCUIContentModuleContentViewController> * _contentViewController;
    <CCUIContentModuleContainerViewControllerDelegate> * _delegate;
    bool  _expanded;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _expandedContentEdgeInsets;
    UIView * _highlightWrapperView;
    UIView * _maskView;
    NSString * _moduleIdentifier;
    UIPreviewInteraction * _previewInteraction;
    UITapGestureRecognizer * _tapRecognizer;
    NSArray * _topLevelBlockingGestureRecognizers;
}

@property (nonatomic, retain) CCUIContentModuleBackgroundView *backgroundView;
@property (nonatomic, retain) UIViewController *backgroundViewController;
@property (nonatomic, readonly) NSArray *childViewControllersForAppearancePropagation;
@property (nonatomic, retain) CCUIContentModuleContentContainerView *contentContainerView;
@property (nonatomic, retain) <CCUIContentModule> *contentModule;
@property (nonatomic) bool contentModuleProvidesOwnPlatter;
@property (nonatomic, retain) UIView *contentView;
@property (nonatomic, retain) UIViewController<CCUIContentModuleContentViewController> *contentViewController;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CCUIContentModuleContainerViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=isExpanded, nonatomic) bool expanded;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } expandedContentEdgeInsets;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIView *highlightWrapperView;
@property (nonatomic, retain) UIView *maskView;
@property (nonatomic, readonly) CCUIContentModuleContentContainerView *moduleContentView;
@property (nonatomic, copy) NSString *moduleIdentifier;
@property (nonatomic, retain) UIPreviewInteraction *previewInteraction;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITapGestureRecognizer *tapRecognizer;
@property (nonatomic, readonly) NSArray *topLevelBlockingGestureRecognizers;

- (void).cxx_destruct;
- (void)_addTopLevelGestureRecognizersFromViewAndSubviews:(id)arg1 toGestureRecognizers:(id)arg2 blockingGestureRecognizers:(id)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_backgroundFrameForExpandedState;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_backgroundFrameForRestState;
- (void)_closeExpandedModule;
- (void)_configureForContentModuleGroupRenderingIfNecessary;
- (void)_configureMaskViewIfNecessary;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_contentBoundsForExpandedState;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_contentBoundsForTransitionProgress:(double)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_contentFrameForExpandedState;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_contentFrameForRestState;
- (void)_dismissModulePresentedContentAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (void)_findTopLevelGestureRecognizersForView:(id)arg1 installOnView:(id)arg2;
- (void)_handleTapGestureRecognizer:(id)arg1;
- (bool)_isForceTouchAvailable;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_presentationFrameForExpandedState;
- (id)_previewInteraction:(id)arg1 viewControllerPresentationForPresentingViewController:(id)arg2;
- (id)_previewInteractionHighlighterForPreviewTransition:(id)arg1;
- (bool)_previewInteractionShouldAutomaticallyTransitionToPreviewAfterDelay:(id)arg1;
- (bool)_previewInteractionShouldFinishTransitionToPreview:(id)arg1;
- (void)_setDidExpandModulePreference;
- (bool)_shouldApplyBackgroundEffects;
- (id)backgroundView;
- (id)backgroundViewController;
- (id)contentContainerView;
- (id)contentModule;
- (bool)contentModuleProvidesOwnPlatter;
- (id)contentView;
- (id)contentViewController;
- (id)delegate;
- (void)dismissExpandedModuleAnimated:(bool)arg1;
- (void)dismissPresentedContentAnimated:(bool)arg1;
- (void)expandModule;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })expandedContentEdgeInsets;
- (id)highlightWrapperView;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithModuleIdentifier:(id)arg1 contentModule:(id)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (bool)isExpanded;
- (void)loadView;
- (id)maskView;
- (id)moduleContentView;
- (id)moduleIdentifier;
- (id)previewInteraction;
- (void)previewInteraction:(id)arg1 didUpdatePreviewTransition:(double)arg2 ended:(bool)arg3;
- (void)previewInteractionDidCancel:(id)arg1;
- (bool)previewInteractionShouldBegin:(id)arg1;
- (void)setBackgroundView:(id)arg1;
- (void)setBackgroundViewController:(id)arg1;
- (void)setContentContainerView:(id)arg1;
- (void)setContentModule:(id)arg1;
- (void)setContentModuleProvidesOwnPlatter:(bool)arg1;
- (void)setContentView:(id)arg1;
- (void)setContentViewController:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setExpanded:(bool)arg1;
- (void)setExpandedContentEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setHighlightWrapperView:(id)arg1;
- (void)setMaskView:(id)arg1;
- (void)setModuleIdentifier:(id)arg1;
- (void)setPreviewInteraction:(id)arg1;
- (void)setTapRecognizer:(id)arg1;
- (bool)shouldAutomaticallyForwardAppearanceMethods;
- (id)tapRecognizer;
- (id)topLevelBlockingGestureRecognizers;
- (void)viewWillLayoutSubviews;
- (void)willBecomeActive;
- (void)willResignActive;

@end
