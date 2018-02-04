/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@interface GKBubbleFlowRootViewController : GKViewController {
    GKBubbleFlowAnimator * _animator;
    bool  _coveringContentUnderneath;
    bool  _currentlyAnimatingADismiss;
    bool  _showingInterstitial;
}

@property (nonatomic, retain) GKBubbleFlowAnimator *animator;
@property (getter=isCoveringContentUnderneath, nonatomic, readonly) bool coveringContentUnderneath;
@property (getter=isCurrentlyAnimatingADismiss, nonatomic) bool currentlyAnimatingADismiss;
@property (getter=isShowingInterstitial, nonatomic) bool showingInterstitial;

+ (bool)_useTwoPartBubbleFlowModalPresentation;
+ (id)sharedBubbleFlowRootViewController;

- (void)_updateViewAlpha:(double)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (id)animator;
- (void)clearInterstitialViewAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (void)dealloc;
- (id)init;
- (bool)isCoveringContentUnderneath;
- (bool)isCurrentlyAnimatingADismiss;
- (bool)isShowingInterstitial;
- (void)popAllModalViewControllersAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (id)pseudoModalViewController;
- (void)setAnimator:(id)arg1;
- (void)setCurrentlyAnimatingADismiss:(bool)arg1;
- (void)setShowingInterstitial:(bool)arg1;
- (void)showInterstitialViewAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (void)viewDidLoad;

@end
