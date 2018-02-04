/* made by EzioChiu
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNAvatarCardPresentationController : UIPresentationController {
    unsigned int  _alignmentEdge;
    double  _alignmentY;
    UIVisualEffectView * _backgroundView;
    UIView * _cardView;
    UIView * _contentView;
    UIView * _dimmingView;
    <CNCardTransitioning> * _originalTransitioning;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _sourceRect;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _sourceTargetRect;
    UIView * _sourceView;
    UIViewController * _sourceViewController;
    UITapGestureRecognizer * _tapGestureRecognizer;
    CNAvatarCardTransition * _transition;
    UIVisualEffectView * _vibrancyView;
}

@property (nonatomic) unsigned int alignmentEdge;
@property (nonatomic) double alignmentY;
@property (nonatomic, retain) UIVisualEffectView *backgroundView;
@property (nonatomic, retain) UIView *cardView;
@property (nonatomic, retain) UIView *contentView;
@property (nonatomic, retain) UIView *dimmingView;
@property (nonatomic, retain) <CNCardTransitioning> *originalTransitioning;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } sourceRect;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } sourceTargetRect;
@property (nonatomic, retain) UIView *sourceView;
@property (nonatomic, retain) UIViewController *sourceViewController;
@property (nonatomic, retain) UITapGestureRecognizer *tapGestureRecognizer;
@property (nonatomic, retain) CNAvatarCardTransition *transition;
@property (nonatomic, retain) UIVisualEffectView *vibrancyView;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameOfPresentedViewControllerViewInSuperview;
- (void)_layoutViews;
- (unsigned int)alignmentEdge;
- (double)alignmentY;
- (id)backgroundView;
- (id)cardView;
- (void)containerViewWillLayoutSubviews;
- (id)contentView;
- (id)dimmingView;
- (void)dismissalTransitionDidEnd:(bool)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameOfPresentedViewInContainerView;
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2;
- (id)originalTransitioning;
- (void)presentationTransitionDidEnd:(bool)arg1;
- (void)presentationTransitionWillBegin;
- (id)presentedView;
- (void)setAlignmentEdge:(unsigned int)arg1;
- (void)setAlignmentY:(double)arg1;
- (void)setBackgroundView:(id)arg1;
- (void)setCardView:(id)arg1;
- (void)setContentView:(id)arg1;
- (void)setDimmingView:(id)arg1;
- (void)setOriginalTransitioning:(id)arg1;
- (void)setSourceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setSourceTargetRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setSourceView:(id)arg1;
- (void)setSourceViewController:(id)arg1;
- (void)setTapGestureRecognizer:(id)arg1;
- (void)setTransition:(id)arg1;
- (void)setVibrancyView:(id)arg1;
- (bool)shouldPresentInFullscreen;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })sourceRect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })sourceTargetRect;
- (id)sourceView;
- (id)sourceViewController;
- (void)systemLayoutFittingSizeDidChangeForChildContentContainer:(id)arg1;
- (void)tapGestureRecognized:(id)arg1;
- (id)tapGestureRecognizer;
- (id)transition;
- (id)vibrancyView;

@end
