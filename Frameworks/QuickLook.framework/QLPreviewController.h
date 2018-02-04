/* made by EzioChiu
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLPreviewController : UIViewController <QLPreviewControllerStateProtocolHostOnly, QLPreviewItemProvider, QLPreviewItemStoreDelegate, UIDocumentInteractionControllerDelegate, UIGestureRecognizerDelegate, UINavigationControllerDelegate, UIPageViewControllerDelegate, UIScrollViewDelegate, UIViewControllerTransitioningDelegate> {
    NSURL * _accessedUrlForDocumentInteractionController;
    QLBarButtonItem * _actionButton;
    NSArray * _additionalLeftBarButtonItems;
    NSArray * _additionalRightBarButtonItems;
    bool  _allowInteractiveTransitions;
    unsigned long long  _appearanceActions;
    UIColor * _backgroundColor;
    bool  _canChangeCurrentPage;
    bool  _canShowToolbar;
    bool  _changingCurrentPreview;
    QLTransitionController * _currentAnimator;
    QLActivityItemProvider * _currentItemProvider;
    bool  _currentPreviewHasUnsavedEdits;
    long long  _currentPreviewItemIndex;
    NSString * _currentTitleFromItemViewController;
    <QLPreviewControllerDataSource> * _dataSource;
    bool  _deferReloadData;
    long long  _deferredSetIndex;
    <QLPreviewControllerDelegate> * _delegate;
    bool  _didNotifyFirstAppearance;
    bool  _didTransitionFromInternalView;
    QLBarButtonItem * _doneButton;
    UIAlertController * _doneButtonAlertController;
    long long  _enqueuedWhitePointAdaptivityStyle;
    NSArray * _excludedToolbarButtonIdentifiers;
    bool  _fullScreen;
    UIColor * _fullscreenBackgroundColor;
    UINavigationController * _internalNavigationController;
    NSDate * _lastCrashTimeStamp;
    QLBarButtonItem * _listButton;
    NSString * _loadingTextForMissingFiles;
    UIColor * _navigationBarTintColor;
    QLErrorView * _noDataView;
    unsigned long long  _numberOfRetries;
    NSArray * _originalLeftBarButtonItems;
    NSArray * _originalRightBarButtonItems;
    bool  _overlayHidden;
    UIPinchGestureRecognizer * _pinchGesture;
    QLPinchRotationTracker * _pinchRotationTracker;
    unsigned long long  _presentationMode;
    UIViewController<QLPreviewCollectionProtocol> * _previewCollection;
    bool  _previewCollectionIsLoading;
    bool  _previewCollectionNeedsConfiguration;
    NSMutableArray * _previewCollectionReadyCompletionBlocks;
    QLPreviewItemStore * _previewItemStore;
    NSMutableDictionary * _previewKeyCommands;
    NSArray * _previewToolbarButtons;
    QLNavigationState * _previousNavigationVCState;
    bool  _previousStatusBarHidden;
    <QLPrintingProtocol> * _printer;
    unsigned long long  _quickLookVisibility;
    UIRotationGestureRecognizer * _rotationGesture;
    UIDocumentInteractionController * _sharingInteractionController;
    bool  _showActionAsDefaultButton;
    UIPanGestureRecognizer * _slideGesture;
    bool  _sourceIsManaged;
    QLStateManager * _stateManager;
    <QLPreviewControllerDelegate> * _strongDelegate;
    QLSwipeDownTracker * _swipeDownTracker;
    QLToolbarController * _toolbarController;
    UIColor * _toolbarTintColor;
    bool  _useCustomActionButton;
    bool  _viewWillAppearPerformed;
    long long  _whitePointAdaptivityStyle;
    bool  _willTransitionToInternalView;
}

@property (nonatomic, retain) NSURL *accessedUrlForDocumentInteractionController;
@property (retain) NSArray *additionalLeftBarButtonItems;
@property (retain) NSArray *additionalRightBarButtonItems;
@property (nonatomic) bool allowInteractiveTransitions;
@property (nonatomic) unsigned long long appearanceActions;
@property (nonatomic, retain) UIColor *backgroundColor;
@property (nonatomic) bool canChangeCurrentPage;
@property bool canShowToolbar;
@property (retain) QLTransitionController *currentAnimator;
@property (retain) QLActivityItemProvider *currentItemProvider;
@property (nonatomic) bool currentPreviewHasUnsavedEdits;
@property (readonly) <QLPreviewItem> *currentPreviewItem;
@property long long currentPreviewItemIndex;
@property (retain) NSString *currentTitleFromItemViewController;
@property (nonatomic) <QLPreviewControllerDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <QLPreviewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool didTransitionFromInternalView;
@property (nonatomic) UIAlertController *doneButtonAlertController;
@property (readonly) NSArray *excludedToolbarButtonIdentifiers;
@property (nonatomic) bool fullScreen;
@property (nonatomic, retain) UIColor *fullscreenBackgroundColor;
@property (readonly) unsigned long long hash;
@property (readonly) QLItem *internalCurrentPreviewItem;
@property (nonatomic, retain) UINavigationController *internalNavigationController;
@property (nonatomic, retain) UIColor *navigationBarTintColor;
@property (readonly) long long numberOfPreviewItems;
@property (retain) NSArray *originalLeftBarButtonItems;
@property (retain) NSArray *originalRightBarButtonItems;
@property (nonatomic) bool overlayHidden;
@property (retain) UIPinchGestureRecognizer *pinchGesture;
@property (retain) QLPinchRotationTracker *pinchRotationTracker;
@property (nonatomic, readonly) unsigned long long presentationMode;
@property (readonly) UIViewController<QLPreviewCollectionProtocol> *previewCollection;
@property (readonly) QLPreviewItemStore *previewItemStore;
@property (readonly) NSArray *previewToolbarButtons;
@property (readonly) QLNavigationState *previousNavigationVCState;
@property (nonatomic) bool previousStatusBarHidden;
@property (readonly) <QLPrintingProtocol> *printer;
@property (nonatomic) unsigned long long quickLookVisibility;
@property (retain) UIRotationGestureRecognizer *rotationGesture;
@property (retain) UIDocumentInteractionController *sharingInteractionController;
@property (nonatomic) bool showActionAsDefaultButton;
@property (retain) UIPanGestureRecognizer *slideGesture;
@property (nonatomic) bool sourceIsManaged;
@property (retain) QLStateManager *stateManager;
@property (nonatomic, retain) <QLPreviewControllerDelegate> *strongDelegate;
@property (readonly) Class superclass;
@property (retain) QLSwipeDownTracker *swipeDownTracker;
@property (nonatomic, readonly) QLToolbarController *toolbarController;
@property (nonatomic, retain) UIColor *toolbarTintColor;
@property (nonatomic) bool useCustomActionButton;
@property (nonatomic) bool willTransitionToInternalView;

+ (bool)canPreviewDocumentType:(id)arg1;
+ (bool)canPreviewItem:(id)arg1;
+ (bool)canPreviewMIMEType:(id)arg1;
+ (id)contentTypeForPreviewItem:(id)arg1;
+ (id)controllerWithItemStore:(id)arg1;
+ (bool)copyPreviewItemToPasteboard:(id)arg1;
+ (void)logDeprecatedMessageForMethodName:(id)arg1;
+ (void)logDeprecatedMessageForSelector:(SEL)arg1;
+ (void)presentPreviewItem:(id)arg1 onViewController:(id)arg2 withDelegate:(id)arg3 animated:(bool)arg4;
+ (id)printPageRendererForItem:(id)arg1;
+ (id)titleForPreviewItem:(id)arg1;

- (void).cxx_destruct;
- (id)_actionButton;
- (void)_actionButtonTapped:(id)arg1;
- (id)_additionalLeftButtonItems;
- (id)_additionalRightButtonItems;
- (id)_buttonWithAccessibilityIdentifierPointer:(id)arg1 inButtons:(id)arg2;
- (bool)_canPerformBarButtonAction;
- (id)_childViewControllerForWhitePointAdaptivityStyle;
- (void)_commontInit;
- (void)_configurePreviewCollectionIfNeeded;
- (id)_copyBarButtons:(id)arg1;
- (id)_doneButton;
- (void)_doneButtonTapped:(id)arg1;
- (id)_editedItemsForDoneActionControllerWithItems:(id)arg1;
- (bool)_isQuickLookVisible;
- (bool)_isToolbarVisibleForTraitCollection:(id)arg1;
- (void)_keyCommandWasPerformed:(id)arg1;
- (id)_listButton;
- (void)_listButtonTapped:(id)arg1;
- (id)_listDescriptionStringWithTitle:(id)arg1;
- (id)_navigationBarLeftButtonsWithTraitCollection:(id)arg1;
- (id)_navigationBarRightButtonsWithTraitCollection:(id)arg1;
- (bool)_needsListButton;
- (void)_nextPreview;
- (void)_notifyFirstAppearanceIfNeeded;
- (id)_preferredBackgroundColor;
- (long long)_preferredWhitePointAdaptivityStyle;
- (void)_prepareDelayedAppearance;
- (void)_presentPreviewCollection;
- (void)_previousPreview;
- (bool)_quickLookWillBecomeVisible;
- (void)_refreshCurrentPreviewItemAnimated:(bool)arg1;
- (void)_registerForApplicationStateChangesNotifications;
- (void)_reloadDataIfNeeded;
- (void)_savePreviousNavigationVCState;
- (void)_setCurrentPreviewItemIndex:(long long)arg1 updatePreview:(bool)arg2 animated:(bool)arg3;
- (void)_setFullScreen:(bool)arg1 animated:(bool)arg2 force:(bool)arg3;
- (void)_setPreferredWhitePointAdaptivityStyle:(long long)arg1;
- (void)_setPresentationMode:(unsigned long long)arg1;
- (bool)_shouldAllowInteractiveTransitions;
- (void)_showPreviewCollection;
- (void)_stopAccessingUrlForDocumentInteractionController;
- (id)_toolBarButtonsWithTraitCollection:(id)arg1;
- (void)_toolbarButtonPressed:(id)arg1;
- (id)_topViewController;
- (void)_unregisterForApplicationStateChangesNotifications;
- (void)_updateAllowInteractiveTransitionsIfNeeded;
- (void)_updateAppearance:(bool)arg1;
- (void)_updateBackgroundColor;
- (void)_updateBarTintColors;
- (void)_updateCurrentPopoverButtonIfNeeded:(id)arg1 newNavigationLeftButtons:(id)arg2;
- (void)_updateOverlayButtonsForTraitCollection:(id)arg1 animated:(bool)arg2;
- (void)_updateToolbarSuperview;
- (void)_updateViewHierarchyPresentation;
- (id)accessedUrlForDocumentInteractionController;
- (bool)accessibilityPerformEscape;
- (id)activityItemForDocumentInteractionController:(id)arg1;
- (id)additionalActivitiesForDocumentInteractionController:(id)arg1;
- (id)additionalLeftBarButtonItems;
- (id)additionalRightBarButtonItems;
- (bool)allowInteractiveTransitions;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)animatorForShowing:(bool)arg1 previewController:(id)arg2 presentingController:(id)arg3;
- (unsigned long long)appearanceActions;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (id)backgroundColor;
- (void)beginInteractiveTransition;
- (bool)canChangeCurrentPage;
- (bool)canShowToolbar;
- (id)currentAnimator;
- (id)currentItem;
- (id)currentItemProvider;
- (unsigned long long)currentOrbMode;
- (bool)currentPreviewHasUnsavedEdits;
- (id)currentPreviewItem;
- (long long)currentPreviewItemIndex;
- (void)currentPreviewItemViewControllerHasUnsavedEdits:(bool)arg1;
- (id)currentTitleFromItemViewController;
- (id)currentTracker;
- (id)dataSource;
- (void)dealloc;
- (id)delegate;
- (void)didSelectPreviewItem:(id)arg1;
- (bool)didTransitionFromInternalView;
- (void)documentInteractionControllerDidDismissOptionsMenu:(id)arg1;
- (void)documentInteractionControllerDidDismissOptionsMenu:(id)arg1;
- (id)doneButtonAlertController;
- (id)editedItems;
- (id)excludedActivityTypesForDocumentInteractionController:(id)arg1;
- (id)excludedToolbarButtonIdentifiers;
- (void)expandContentOfURL:(id)arg1;
- (id)flexibleSpace;
- (bool)fullScreen;
- (id)fullscreenBackgroundColor;
- (bool)hasItemsToPreview;
- (void)hideNoDataView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithPreviewItems:(id)arg1;
- (id)interactionControllerForDismissal:(id)arg1;
- (id)interactionControllerForPresentation:(id)arg1;
- (id)internalCurrentPreviewItem;
- (id)internalNavigationController;
- (bool)itemStore:(id)arg1 canEditItem:(id)arg2;
- (bool)itemStore:(id)arg1 canShareItem:(id)arg2;
- (id)keyCommands;
- (void)loadView;
- (int)mode;
- (id)navigationBarTintColor;
- (long long)numberOfPreviewItems;
- (void)openURLIfAllowed:(id)arg1;
- (id)originalLeftBarButtonItems;
- (id)originalRightBarButtonItems;
- (bool)overlayHidden;
- (bool)parentIsNavigationController;
- (id)pinchGesture;
- (id)pinchRotationTracker;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (long long)preferredStatusBarUpdateAnimation;
- (bool)prefersHomeIndicatorAutoHidden;
- (bool)prefersStatusBarHidden;
- (void)prepareForActionSheetPresentationWithCompletionHandler:(id /* block */)arg1;
- (void)presentAlertControllerForScenario:(long long)arg1;
- (void)presentPreviewItem:(id)arg1 onViewController:(id)arg2 withDelegate:(id)arg3 animated:(bool)arg4;
- (unsigned long long)presentationMode;
- (id)previewCollection;
- (void)previewCollectionPrefersWhitePointAdaptivityStyle:(long long)arg1;
- (void)previewCollectionUpdatePreviewItem:(long long)arg1;
- (id)previewItemAtIndex:(long long)arg1;
- (void)previewItemAtIndex:(unsigned long long)arg1 withCompletionHandler:(id /* block */)arg2;
- (id)previewItemStore;
- (id)previewToolbarButtons;
- (id)previousNavigationVCState;
- (bool)previousStatusBarHidden;
- (id)printInfoForDocumentInteractionController:(id)arg1;
- (id)printer;
- (unsigned long long)quickLookVisibility;
- (void)refreshCurrentPreviewItem;
- (void)reloadData;
- (void)remoteViewControllerWasInvalidated;
- (id)rotationGesture;
- (void)setAccessedUrlForDocumentInteractionController:(id)arg1;
- (void)setAccessoryViewVisible:(bool)arg1;
- (void)setAdditionalLeftBarButtonItems:(id)arg1;
- (void)setAdditionalRightBarButtonItems:(id)arg1;
- (void)setAllowInteractiveTransitions:(bool)arg1;
- (void)setAppearanceActions:(unsigned long long)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setCanChangeCurrentPage:(bool)arg1;
- (void)setCanShowToolbar:(bool)arg1;
- (void)setCurrentAnimator:(id)arg1;
- (void)setCurrentItemProvider:(id)arg1;
- (void)setCurrentOrbMode:(unsigned long long)arg1;
- (void)setCurrentPreviewHasUnsavedEdits:(bool)arg1;
- (void)setCurrentPreviewItemIndex:(long long)arg1;
- (void)setCurrentTitleFromItemViewController:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDidTransitionFromInternalView:(bool)arg1;
- (void)setDoneButtonAlertController:(id)arg1;
- (void)setFullScreen:(bool)arg1;
- (void)setFullscreenBackgroundColor:(id)arg1;
- (void)setInternalNavigationController:(id)arg1;
- (void)setLoadingTextForMissingFiles:(id)arg1;
- (void)setNavigationBarTintColor:(id)arg1;
- (void)setOriginalLeftBarButtonItems:(id)arg1;
- (void)setOriginalRightBarButtonItems:(id)arg1;
- (void)setOverlayHidden:(bool)arg1;
- (void)setOverlayHidden:(bool)arg1 animated:(bool)arg2;
- (void)setPinchGesture:(id)arg1;
- (void)setPinchRotationTracker:(id)arg1;
- (void)setPreviousStatusBarHidden:(bool)arg1;
- (void)setPrinter:(id)arg1;
- (void)setQuickLookVisibility:(unsigned long long)arg1;
- (void)setQuickLookVisibility:(unsigned long long)arg1 animated:(bool)arg2;
- (void)setRotationGesture:(id)arg1;
- (void)setSharingInteractionController:(id)arg1;
- (void)setShowActionAsDefaultButton:(bool)arg1;
- (void)setSlideGesture:(id)arg1;
- (void)setSourceIsManaged:(bool)arg1;
- (void)setStateManager:(id)arg1;
- (void)setStrongDelegate:(id)arg1;
- (void)setSwipeDownTracker:(id)arg1;
- (void)setToolbarCanBeVisible:(bool)arg1;
- (void)setToolbarTintColor:(id)arg1;
- (void)setUseCustomActionButton:(bool)arg1;
- (void)setWillTransitionToInternalView:(bool)arg1;
- (id)sharingInteractionController;
- (bool)showActionAsDefaultButton;
- (void)showNoDataViewIfNeeded;
- (void)showShareSheet;
- (void)showShareSheetFromBarButton:(id)arg1;
- (id)slideGesture;
- (bool)sourceIsManaged;
- (id)stateManager;
- (id)strongDelegate;
- (id)swipeDownTracker;
- (id)toolbarController;
- (id)toolbarTintColor;
- (void)updateKeyCommands;
- (void)updateNavigationTitle;
- (void)updateOverlayAnimated:(bool)arg1 animatedButtons:(bool)arg2 forceRefresh:(bool)arg3 withTraitCollection:(id)arg4;
- (void)updateOverlayAnimated:(bool)arg1 forceRefresh:(bool)arg2;
- (void)updateOverlayAnimated:(bool)arg1 forceRefresh:(bool)arg2 withTraitCollection:(id)arg3;
- (void)updateOverlayButtons:(bool)arg1;
- (void)updatePreferredContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)updatePreviewItemAtIndex:(unsigned long long)arg1 updatedContentsURL:(id)arg2 sandboxExtension:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)updateStatusBarAnimated:(bool)arg1;
- (void)updateTitle:(id)arg1;
- (bool)useCustomActionButton;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (void)waitForPreviewCollectionWithCompletionHandler:(id /* block */)arg1;
- (void)willMoveToParentViewController:(id)arg1;
- (bool)willTransitionToInternalView;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;

@end
