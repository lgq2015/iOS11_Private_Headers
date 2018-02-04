/* made by EzioChiu
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLItemViewController : UIViewController <QLLocalPreviewingController, QLToolbarButtonAction, UIDragInteractionDelegate_Private> {
    UIView * _accessoryView;
    QLAppearance * _appearance;
    NSMutableArray * _completionBlocks;
    id  _contents;
    QLPreviewContext * _context;
    <QLPreviewItemViewControllerDelegate> * _delegate;
    bool  _didAppearOnce;
    UIDragInteraction * _dragInteraction;
    bool  _isLoaded;
    bool  _isLoading;
    long long  _lastScrollViewUpdateInterfaceOrientation;
    bool  _loadingFailed;
    <QLItemViewControllerPresentingDelegate> * _presentingDelegate;
}

@property (nonatomic, readonly) UIView *accessoryView;
@property (nonatomic, retain) QLAppearance *appearance;
@property (retain) id contents;
@property (retain) QLPreviewContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <QLPreviewItemViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property bool didAppearOnce;
@property (nonatomic, retain) UIDragInteraction *dragInteraction;
@property (readonly) unsigned long long hash;
@property bool isLoaded;
@property bool isLoading;
@property bool loadingFailed;
@property (nonatomic) <QLItemViewControllerPresentingDelegate> *presentingDelegate;
@property (nonatomic, readonly) NSArray *registeredKeyCommands;
@property (readonly) Class superclass;

+ (bool)providesCustomPrinter;
+ (bool)shouldBeRemoteForContentType:(id)arg1;
+ (bool)shouldBeRemoteForMediaContentType:(id)arg1;
+ (id)supportedAudiovisualContentTypes;
+ (id)supportedContentTypes;
+ (Class)transformerClass;

- (void).cxx_destruct;
- (void)_addDragInteractionIfNeeded;
- (id)_cancelTouchToken;
- (long long)_dragInteraction:(id)arg1 dataOwnerForSession:(id)arg2;
- (void)_scrollScrollViewByPercentualOffset:(double)arg1;
- (void)_scrollScrollViewWithKeyCommand:(id)arg1;
- (id)accessoryView;
- (id)appearance;
- (bool)automaticallyUpdateScrollViewContentInset;
- (bool)automaticallyUpdateScrollViewContentOffset;
- (void)buttonPressedWithIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)canEnterFullScreen;
- (bool)canPerformFirstTimeAppearanceActions:(unsigned long long)arg1;
- (bool)canPinchToDismiss;
- (bool)canShowToolBar;
- (bool)canSwipeToDismiss;
- (id)contents;
- (id)context;
- (id)delegate;
- (bool)didAppearOnce;
- (id)dragInteraction;
- (id)dragInteraction:(id)arg1 itemsForBeginningSession:(id)arg2;
- (id)draggableView;
- (id)excludedToolbarButtonIdentifiersForTraitCollection:(id)arg1;
- (id)fullscreenBackgroundColor;
- (id)init;
- (bool)isLoaded;
- (bool)isLoading;
- (void)loadPreviewControllerIfNeededWithContents:(id)arg1 context:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)loadPreviewControllerWithContents:(id)arg1 context:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)loadingFailed;
- (void)notifyDelegatesDidFailWithError:(id)arg1;
- (id)parallaxView;
- (void)performCompletionBlocksWithError:(id)arg1;
- (void)performFirstTimeAppearanceActions:(unsigned long long)arg1;
- (void)performFirstTimeAppearanceActionsIfNeeded:(unsigned long long)arg1;
- (long long)preferredWhitePointAdaptivityStyle;
- (void)prepareForActionSheetPresentation;
- (id)presentingDelegate;
- (void)previewBecameFullScreen:(bool)arg1 animated:(bool)arg2;
- (void)previewDidAppear:(bool)arg1;
- (void)previewDidDisappear:(bool)arg1;
- (void)previewIsAppearingWithProgress:(double)arg1;
- (void)previewWillAppear:(bool)arg1;
- (void)previewWillDisappear:(bool)arg1;
- (void)previewWillFinishAppearing;
- (id)registeredKeyCommands;
- (id)scrollView;
- (void)setAppearance:(id)arg1;
- (void)setAppearance:(id)arg1 animated:(bool)arg2;
- (void)setContents:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDidAppearOnce:(bool)arg1;
- (void)setDragInteraction:(id)arg1;
- (void)setIsLoaded:(bool)arg1;
- (void)setIsLoading:(bool)arg1;
- (void)setLoadingFailed:(bool)arg1;
- (void)setPresentingDelegate:(id)arg1;
- (bool)shouldAcceptTouch:(id)arg1 ofGestureRecognizer:(id)arg2;
- (bool)shouldRecognizeGestureRecognizer:(id)arg1;
- (id)toolbarButtonsForTraitCollection:(id)arg1;
- (void)transitionDidFinish:(bool)arg1 didComplete:(bool)arg2;
- (void)transitionDidStart:(bool)arg1;
- (void)transitionWillFinish:(bool)arg1 didComplete:(bool)arg2;
- (id)transitioningView;
- (void)updateScrollViewContentOffset;
- (void)updateScrollViewContentOffset:(bool)arg1 withPreviousAppearance:(id)arg2;

@end
