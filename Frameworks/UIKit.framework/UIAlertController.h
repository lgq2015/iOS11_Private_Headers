/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIAlertController : UIViewController <UIAlertControllerContaining, UIAlertControllerVisualStyleProviding, UIPreviewInteractionControllerDelegate, _UIAlertControllerTextFieldViewControllerContaining> {
    NSMutableArray * __actionDelimiterIndices;
    UIPopoverController * __compatibilityPopoverController;
    UIView * __presentationSourceRepresentationView;
    bool  __shouldAllowNilParameters;
    bool  __shouldFlipFrameForShimDismissal;
    <UIAlertControllerSystemProvidedPresentationDelegate> * __systemProvidedPresentationDelegate;
    UIView * __systemProvidedPresentationView;
    UIAlertControllerVisualStyle * __visualStyle;
    UIViewController * _accessibilityViewControllerForSizing;
    NSMutableDictionary * _actionToKeyCommandsDictionary;
    NSMutableArray * _actions;
    NSPointerArray * _actionsWithInvokedHandlers;
    bool  _addContentViewControllerToViewHierarchyNeeded;
    NSAttributedString * _attributedDetailMessage;
    NSAttributedString * _attributedMessage;
    NSAttributedString * _attributedTitle;
    UITapGestureRecognizer * _backButtonDismissGestureRecognizer;
    long long  _batchActionChangesInProgressCount;
    UIAlertAction * _cancelAction;
    UIViewController * _contentViewController;
    <UIAlertControllerCoordinatedActionPerforming> * _coordinatedActionPerformingDelegate;
    bool  _hasPreservedInputViews;
    bool  _hidden;
    NSIndexSet * _indexesOfActionSectionSeparators;
    bool  _isInSupportedInterfaceOrientations;
    NSMapTable * _keyCommandToActionMapTable;
    NSSet * _linkedAlertControllers;
    NSString * _message;
    id  _ownedTransitioningDelegate;
    UIAlertAction * _preferredAction;
    long long  _preferredStyle;
    _UIAlertControllerShimPresenter * _presenter;
    UIPreviewInteractionController * _previewInteractionController;
    long long  _resolvedStyle;
    bool  _springLoaded;
    NSObject<UIAlertControllerVisualStyleProviding> * _styleProvider;
    UIGestureRecognizer * _systemProvidedGestureRecognizer;
    _UIAnimationCoordinator * _temporaryAnimationCoordinator;
    _UIAlertControllerTextFieldViewController * _textFieldViewController;
    long long  _titleLineBreakMode;
    long long  _titleMaximumLineCount;
}

@property (readonly) NSMutableArray *_actionDelimiterIndices;
@property (readonly) NSMutableArray *_actions;
@property (getter=_attributedDetailMessage, setter=_setAttributedDetailMessage:, nonatomic, copy) NSAttributedString *_attributedDetailMessage;
@property (readonly) UIAlertAction *_cancelAction;
@property (setter=_setCompatibilityPopoverController:, nonatomic) UIPopoverController *_compatibilityPopoverController;
@property (readonly) UIView *_dimmingView;
@property (readonly) UIAlertAction *_focusedAction;
@property (readonly) UIView *_foregroundView;
@property (getter=_isHidden, setter=_setHidden:, nonatomic) bool _hidden;
@property (setter=_setPresentationSourceRepresentationView:, nonatomic, retain) UIView *_presentationSourceRepresentationView;
@property (readonly) long long _resolvedStyle;
@property (readonly) bool _shouldAlignToKeyboard;
@property (setter=_setShouldAllowNilParameters:) bool _shouldAllowNilParameters;
@property bool _shouldFlipFrameForShimDismissal;
@property (readonly) bool _shouldProvideDimmingView;
@property (readonly) bool _shouldReverseActions;
@property (setter=_setSystemProvidedPresentationDelegate:, nonatomic, retain) <UIAlertControllerSystemProvidedPresentationDelegate> *_systemProvidedPresentationDelegate;
@property (setter=_setSystemProvidedPresentationView:, nonatomic, retain) UIView *_systemProvidedPresentationView;
@property (readonly) _UIAlertControllerTextFieldViewController *_textFieldViewController;
@property (setter=_setTextFieldsHidden:) bool _textFieldsHidden;
@property (setter=_setVisualStyle:, nonatomic, retain) UIAlertControllerVisualStyle *_visualStyle;
@property (getter=_getAccessibilityViewControllerForSizing, setter=_setAccessibilityViewControllerForSizing:, nonatomic, retain) UIViewController *accessibilityViewControllerForSizing;
@property (setter=_setActions:, nonatomic, retain) NSArray *actions;
@property (getter=_attributedMessage, setter=_setAttributedMessage:, nonatomic, copy) NSAttributedString *attributedMessage;
@property (getter=_attributedTitle, setter=_setAttributedTitle:, nonatomic, copy) NSAttributedString *attributedTitle;
@property (nonatomic, retain) UIViewController *contentViewController;
@property (nonatomic) <UIAlertControllerCoordinatedActionPerforming> *coordinatedActionPerformingDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=_effectAlpha, setter=_setEffectAlpha:, nonatomic) double effectAlpha;
@property (getter=_hasPreservedInputViews, setter=_setHasPreservedInputViews:, nonatomic) bool hasPreservedInputViews;
@property (readonly) unsigned long long hash;
@property (getter=_indexesOfActionSectionSeparators, setter=_setIndexesOfActionSectionSeparators:, nonatomic, copy) NSIndexSet *indexesOfActionSectionSeparators;
@property (nonatomic, copy) NSString *message;
@property (nonatomic, retain) UIAlertAction *preferredAction;
@property (nonatomic) long long preferredStyle;
@property (getter=_previewInteractionController, setter=_setPreviewInteractionController:, nonatomic, retain) UIPreviewInteractionController *previewInteractionController;
@property (getter=_styleProvider, setter=_setStyleProvider:, nonatomic) NSObject<UIAlertControllerVisualStyleProviding> *styleProvider;
@property (readonly) Class superclass;
@property (getter=_systemProvidedGestureRecognizer, setter=_setSystemProvidedGestureRecognizer:, nonatomic, retain) UIGestureRecognizer *systemProvidedGestureRecognizer;
@property (nonatomic, retain) _UIAnimationCoordinator *temporaryAnimationCoordinator;
@property (nonatomic, readonly) NSArray *textFields;
@property (nonatomic, copy) NSString *title;
@property (getter=_titleLineBreakMode, setter=_setTitleLineBreakMode:, nonatomic) long long titleLineBreakMode;
@property (getter=_titleMaximumLineCount, setter=_setTitleMaximumLineCount:, nonatomic) long long titleMaximumLineCount;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

+ (id)_alertControllerContainedInViewController:(id)arg1;
+ (id)_alertControllerWithTitle:(id)arg1 message:(id)arg2;
+ (bool)_shouldUsePresentationController;
+ (id)alertControllerWithTitle:(id)arg1 message:(id)arg2 preferredStyle:(long long)arg3;

- (void).cxx_destruct;
- (void)_action:(id)arg1 changedToKeyCommandWithInput:(id)arg2 modifierFlags:(long long)arg3;
- (id)_actionDelimiterIndices;
- (id)_actionForReturnKey;
- (id)_actions;
- (void)_addActionWithTitle:(id)arg1 image:(id)arg2 style:(long long)arg3 handler:(id /* block */)arg4;
- (void)_addActionWithTitle:(id)arg1 style:(long long)arg2 handler:(id /* block */)arg3;
- (void)_addActionWithTitle:(id)arg1 style:(long long)arg2 handler:(id /* block */)arg3 shouldDismissHandler:(id /* block */)arg4;
- (void)_addKeyCommandForAction:(id)arg1 withInput:(id)arg2 modifierFlags:(long long)arg3;
- (void)_addReturnKeyCommandIfAppropriate;
- (void)_addSectionDelimiter;
- (id)_alertControllerContainer;
- (id)_alertControllerView;
- (void)_attemptAnimatedDismissWithGestureRecognizer:(id)arg1;
- (id)_attributedDetailMessage;
- (id)_attributedMessage;
- (id)_attributedTitle;
- (void)_becomeFirstResponderIfAppropriate;
- (void)_beginNoPresentingViewControllerPresentation;
- (long long)_buttonTypeForBackGestureForIdiom:(long long)arg1;
- (bool)_canBePresentedAtLocation:(struct CGPoint { double x1; double x2; })arg1;
- (bool)_canDismissWithGestureRecognizer;
- (id)_cancelAction;
- (void)_clearActionHandlers;
- (id)_compatibilityPopoverController;
- (id)_containedAlertController;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_contentInsets;
- (void)_contentViewControllerWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withAnimations:(id /* block */)arg2;
- (id)_currentDescriptor;
- (void)_didParentTextFieldViewController;
- (id)_dimmingView;
- (void)_dismissAnimated:(bool)arg1 triggeringAction:(id)arg2;
- (void)_dismissAnimated:(bool)arg1 triggeringAction:(id)arg2 triggeredByPopoverDimmingView:(bool)arg3 dismissCompletion:(id /* block */)arg4;
- (void)_dismissFromBackButton:(id)arg1;
- (void)_dismissFromPopoverDimmingView;
- (id)_dismissGestureRecognizer;
- (void)_dismissWithAction:(id)arg1;
- (void)_dismissWithAction:(id)arg1 dismissCompletion:(id /* block */)arg2;
- (void)_dismissWithCancelAction;
- (double)_effectAlpha;
- (void)_endNoPresentingViewControllerPresentation;
- (void)_flipFrameForShimDismissalIfNecessary;
- (id)_focusedAction;
- (id)_foregroundView;
- (id)_getAccessibilityViewControllerForSizing;
- (void)_getRotationContentSettings:(struct { bool x1; bool x2; bool x3; bool x4; bool x5; double x6; int x7; }*)arg1;
- (void)_handleKeyCommand:(id)arg1;
- (void)_handleReturn;
- (bool)_hasAttributedMessage;
- (bool)_hasAttributedTitle;
- (bool)_hasContentToDisplay;
- (bool)_hasDetailMessage;
- (bool)_hasMessage;
- (bool)_hasPreservedInputViews;
- (bool)_hasTitle;
- (bool)_idiomSupportsBackGesture:(long long)arg1;
- (id)_indexesOfActionSectionSeparators;
- (void)_installBackGestureRecognizer;
- (void)_invokeHandlersForAction:(id)arg1;
- (bool)_isHidden;
- (bool)_isPresented;
- (bool)_isPresentedAsPopover;
- (bool)_isPresentedAsPopoverWithLegacyUI;
- (bool)_isSupportedInterfaceOrientation:(long long)arg1;
- (id)_keyCommandForAction:(id)arg1 input:(id)arg2 modifierFlags:(long long)arg3;
- (void)_logBeingDismissed;
- (void)_logBeingPresented;
- (long long)_modalPresentationStyleForResolvedStyle;
- (bool)_needsPreferredSizeCalculated;
- (void)_performAction:(id)arg1 invokeActionBlock:(id /* block */)arg2 dismissAndPerformActionIfNotAlreadyPerformed:(id /* block */)arg3;
- (void)_performBatchActionChangesWithBlock:(id /* block */)arg1;
- (void)_postDidBeginSystemProvidedDismissalOfAlertController;
- (void)_postWillBeginSystemProvidedDismissalOfAlertController;
- (struct __CFString { }*)_powerLoggingEventName;
- (id)_presentationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)_presentationSourceRepresentationView;
- (void)_preserveInputViewsAnimated:(bool)arg1;
- (id)_previewInteractionController;
- (void)_recomputePreferredContentSize;
- (void)_reevaluateResolvedStyle;
- (void)_removeAllActions;
- (void)_removeAllTextFields;
- (void)_removeKeyCommandForAction:(id)arg1;
- (id)_requiredNotificationsForRemoteServices;
- (bool)_requiresCustomPresentationController;
- (long long)_resolvedStyle;
- (void)_resolvedStyleChanged;
- (void)_restoreInputViewsAnimated:(bool)arg1;
- (id)_returnKeyCommand;
- (void)_returnKeyPressedInLastTextField;
- (void)_setAccessibilityViewControllerForSizing:(id)arg1;
- (void)_setActions:(id)arg1;
- (void)_setAttributedDetailMessage:(id)arg1;
- (void)_setAttributedMessage:(id)arg1;
- (void)_setAttributedTitle:(id)arg1;
- (void)_setCompatibilityPopoverController:(id)arg1;
- (void)_setEffectAlpha:(double)arg1;
- (void)_setHasPreservedInputViews:(bool)arg1;
- (void)_setHidden:(bool)arg1;
- (void)_setIndexesOfActionSectionSeparators:(id)arg1;
- (void)_setPresentationSourceRepresentationView:(id)arg1;
- (void)_setPreviewInteractionController:(id)arg1;
- (void)_setShouldAllowNilParameters:(bool)arg1;
- (void)_setShouldReverseActions:(bool)arg1;
- (void)_setStyleProvider:(id)arg1;
- (void)_setSystemProvidedGestureRecognizer:(id)arg1;
- (void)_setSystemProvidedPresentationDelegate:(id)arg1;
- (void)_setSystemProvidedPresentationView:(id)arg1;
- (void)_setTextFieldsHidden:(bool)arg1;
- (void)_setTitleLineBreakMode:(long long)arg1;
- (void)_setTitleMaximumLineCount:(long long)arg1;
- (id)_setView:(id)arg1 forSystemProvidedPresentationWithDelegate:(id)arg2;
- (void)_setVisualStyle:(id)arg1;
- (bool)_shouldAlignToKeyboard;
- (bool)_shouldAllowNilParameters;
- (bool)_shouldBecomeFirstResponder;
- (bool)_shouldDismissOnSizeChange;
- (bool)_shouldFitWidthToContentViewControllerWidth;
- (bool)_shouldFlipFrameForShimDismissal;
- (bool)_shouldPreserveInputViews;
- (bool)_shouldProvideDimmingView;
- (bool)_shouldReverseActions;
- (bool)_shouldSizeToFillSuperview;
- (bool)_shouldSupportReturnKeyPresses;
- (bool)_shouldTreatEmptyStringsAsNil;
- (id)_styleProvider;
- (id)_systemProvidedGestureRecognizer;
- (id)_systemProvidedPresentationDelegate;
- (id)_systemProvidedPresentationView;
- (id)_textFieldContainingViewWithTextField:(id)arg1;
- (id)_textFieldViewController;
- (bool)_textFieldsHidden;
- (long long)_titleLineBreakMode;
- (long long)_titleMaximumLineCount;
- (void)_uninstallBackGestureRecognizer;
- (void)_updateModalPresentationStyle;
- (void)_updateProvidedStyle;
- (void)_updateProvidedStyleWithTraitCollection:(id)arg1;
- (void)_updateShouldAlignToKeyboard;
- (void)_updateTextFieldViewControllerWithVisualStyle:(id)arg1;
- (void)_updateViewFrameForLandscapePresentationInShimIfNecessary;
- (id)_viewControllerForSizing;
- (bool)_viewControllerIsPresentedInModalPresentationContext:(id)arg1;
- (id)_visualStyle;
- (void)_willParentTextFieldViewController;
- (id)actions;
- (void)addAction:(id)arg1;
- (void)addTextFieldWithConfigurationHandler:(id /* block */)arg1;
- (bool)canBecomeFirstResponder;
- (bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (id)cancelAction;
- (id)contentViewController;
- (id)coordinatedActionPerformingDelegate;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (bool)isSpringLoaded;
- (void)linkAlertController:(id)arg1;
- (id)linkedAlertControllers;
- (void)loadView;
- (id)message;
- (bool)performsViewControllerCommitTransitionForPreviewInteractionController:(id)arg1;
- (id)preferredAction;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (long long)preferredStyle;
- (void)previewInteractionController:(id)arg1 performCommitForPreviewViewController:(id)arg2 committedViewController:(id)arg3;
- (id)previewInteractionController:(id)arg1 viewControllerForPreviewingAtPosition:(struct CGPoint { double x1; double x2; })arg2 inView:(id)arg3 presentingViewController:(id*)arg4;
- (void)previewInteractionController:(id)arg1 willPresentViewController:(id)arg2 forPosition:(struct CGPoint { double x1; double x2; })arg3 inSourceView:(id)arg4;
- (void)setCancelAction:(id)arg1;
- (void)setContentViewController:(id)arg1;
- (void)setCoordinatedActionPerformingDelegate:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setModalPresentationStyle:(long long)arg1;
- (void)setPreferredAction:(id)arg1;
- (void)setPreferredStyle:(long long)arg1;
- (void)setSpringLoaded:(bool)arg1;
- (void)setTemporaryAnimationCoordinator:(id)arg1;
- (void)setTextFieldsCanBecomeFirstResponder:(bool)arg1;
- (void)setTitle:(id)arg1;
- (void)set_shouldFlipFrameForShimDismissal:(bool)arg1;
- (bool)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (id)temporaryAnimationCoordinator;
- (id)textFields;
- (void)traitCollectionDidChange:(id)arg1;
- (void)unlinkAlertController:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (id)visualStyleForAlertControllerStyle:(long long)arg1 traitCollection:(id)arg2 descriptor:(id)arg3;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;

// Image: /System/Library/Frameworks/MessageUI.framework/MessageUI

+ (id)mf_actionSheetWithTitle:(id)arg1 cancellationHandler:(id /* block */)arg2;
+ (id)mutedThreadActionAlertControllerWithHandler:(id /* block */)arg1;
+ (id)notifyMeConfirmationControllerWithHandler:(id /* block */)arg1;

- (void)mf_addCancelActionWithHandler:(id /* block */)arg1;
- (void)mf_presentFromViewController:(id)arg1 withSourceView:(id)arg2;

// Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI

+ (id)pu_alertForCPLEnableError:(id)arg1 actionHandler:(id /* block */)arg2 cancelHandler:(id /* block */)arg3;
+ (id)pu_alertForStorageUpgradeLoadFailure;
+ (id)pu_deleteITunesContentAlertWithAssetCount:(long long)arg1 includesPhotos:(bool)arg2 includesVideos:(bool)arg3 actionHandler:(id /* block */)arg4 cancelHandler:(id /* block */)arg5;

// Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI

+ (void)cam_showUsageSettings;

- (id)initWithTitle:(id)arg1 message:(id)arg2;
- (id)initWithTitle:(id)arg1 message:(id)arg2 lowDiskSpaceAlertType:(long long)arg3 dismissActionHandler:(id /* block */)arg4 resultActionHandler:(id /* block */)arg5;
- (id)initWithType:(long long)arg1 captureMode:(long long)arg2 dismissActionHandler:(id /* block */)arg3 resultActionHandler:(id /* block */)arg4;

// Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit

+ (id)crk_alertWithTitle:(id)arg1 message:(id)arg2 cancelButtonTitle:(id)arg3 confirmButtonTitle:(id)arg4 confirmBlock:(id /* block */)arg5;
+ (id)crk_alertWithTitle:(id)arg1 message:(id)arg2 cancelButtonTitle:(id)arg3 confirmButtonTitle:(id)arg4 destructiveTitle:(bool)arg5 confirmBlock:(id /* block */)arg6;
+ (id)crk_destructiveAlertWithTitle:(id)arg1 message:(id)arg2 cancelButtonTitle:(id)arg3 confirmButtonTitle:(id)arg4 confirmBlock:(id /* block */)arg5;

// Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI

- (void)_gkAddCancelButtonWithNoAction;

// Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI

+ (id)alertControllerForAddingDestinationWithType:(unsigned long long)arg1 andProceed:(id /* block */)arg2;
+ (id)alertControllerForAddingDestinationWithTypeString:(id)arg1 andProceed:(id /* block */)arg2;
+ (id)alertControllerForAddingHomeWithProceed:(id /* block */)arg1;
+ (id)alertControllerForAddingRoomWithProceed:(id /* block */)arg1;
+ (id)alertControllerForAddingServiceGroupWithProceed:(id /* block */)arg1;
+ (id)alertControllerForAddingZoneWithProceed:(id /* block */)arg1;
+ (id)hu_alertControllerForUnimplementedFeature:(id)arg1;

// Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI

+ (id)enableWiFiCallingAlertController;
+ (id)enableWiFiCallingAlertControllerWithPreferredStyle:(long long)arg1;
+ (id)networkUnavailableAlertControllerWithCallProvider:(id)arg1 dialType:(long long)arg2;
+ (id)networkUnavailableAlertControllerWithCallProvider:(id)arg1 dialType:(long long)arg2 preferredStyle:(long long)arg3;

@end
