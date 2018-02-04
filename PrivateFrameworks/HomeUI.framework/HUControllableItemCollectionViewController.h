/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUControllableItemCollectionViewController : HUItemCollectionViewController <HUQuickControlPresentationCoordinatorDelegate, HUQuickControlPresentationHost, UIGestureRecognizerDelegate> {
    NSMutableDictionary * _actionSetExecutionFuturesKeyedByIdentifier;
    UIViewController<HUQuickControlPresentationHost> * _ancestorQuickControlHostAtPresentationTime;
    unsigned long long  _contentColorStyle;
    HUQuickControlPresentationCoordinator * _quickControlPresentationCoordinator;
    UILongPressGestureRecognizer * _reorderGestureRecognizer;
    bool  _suppressCollectionViewUpdatesForReorderCommit;
    bool  _viewAppeared;
}

@property (nonatomic, retain) NSMutableDictionary *actionSetExecutionFuturesKeyedByIdentifier;
@property (nonatomic) UIViewController<HUQuickControlPresentationHost> *ancestorQuickControlHostAtPresentationTime;
@property (nonatomic, readonly) UICollectionViewLayout<HUControllableCollectionViewLayout> *collectionViewLayout;
@property (nonatomic, readonly) unsigned long long contentColorStyle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HFItemManager *itemManager;
@property (nonatomic, retain) HUQuickControlPresentationCoordinator *quickControlPresentationCoordinator;
@property (nonatomic, retain) UILongPressGestureRecognizer *reorderGestureRecognizer;
@property (readonly) Class superclass;
@property (nonatomic) bool suppressCollectionViewUpdatesForReorderCommit;
@property (nonatomic) bool viewAppeared;

- (void).cxx_destruct;
- (id)_ancestorQuickControlPresentationHost;
- (void)_handleApplicationWillResignActiveNotification:(id)arg1;
- (void)_handleReorderGesture:(id)arg1;
- (bool)_hasTapActionForItem:(id)arg1;
- (id)_itemForServiceControlPresentationAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)_itemSetDidChange;
- (void)_logUserMetricsAfterTapOfItem:(id)arg1;
- (id)_performTapActionForItem:(id)arg1;
- (void)_reorderGestureDidBegin:(id)arg1;
- (void)_reorderGestureDidChange:(id)arg1;
- (void)_reorderGestureDidEnd:(id)arg1 finished:(bool)arg2;
- (void)_updateEditingStateForCell:(id)arg1;
- (id)_visibleCellForItem:(id)arg1;
- (id)actionSetExecutionFuturesKeyedByIdentifier;
- (id)ancestorQuickControlHostAtPresentationTime;
- (bool)canReorderItemAtIndexPath:(id)arg1;
- (void)childViewController:(id)arg1 didEndQuickControlsPresentation:(id)arg2;
- (void)childViewController:(id)arg1 willBeginQuickControlsPresentation:(id)arg2;
- (bool)collectionView:(id)arg1 canMoveItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 moveItemAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 targetIndexPathForMoveFromItemAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3;
- (void)configureCell:(id)arg1 forItem:(id)arg2;
- (unsigned long long)contentColorStyle;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (bool)hasDetailsActionForPresentationCoordinator:(id)arg1 item:(id)arg2;
- (id)initWithItemManager:(id)arg1 collectionViewLayout:(id)arg2;
- (void)itemManager:(id)arg1 didMoveItem:(id)arg2 fromIndexPath:(id)arg3 toIndexPath:(id)arg4;
- (void)itemManager:(id)arg1 performUpdateRequest:(id)arg2;
- (id)prepareToPerformToggleActionForItem:(id)arg1 sourceItem:(id)arg2;
- (void)presentationCoordinator:(id)arg1 applyOverrideAttributes:(id)arg2 toItem:(id)arg3;
- (void)presentationCoordinator:(id)arg1 clearOverrideAttributesForItem:(id)arg2;
- (id)presentationCoordinator:(id)arg1 contextForPresentationAtPoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)presentationCoordinator:(id)arg1 didEndPresentationWithContext:(id)arg2;
- (void)presentationCoordinator:(id)arg1 didRecognizeTapForItem:(id)arg2;
- (bool)presentationCoordinator:(id)arg1 shouldBeginInteractivePresentationWithTouchLocation:(struct CGPoint { double x1; double x2; })arg2;
- (void)presentationCoordinator:(id)arg1 willBeginPresentationWithContext:(id)arg2;
- (id)quickControlPresentationContextForItem:(id)arg1 atIndexPath:(id)arg2;
- (id)quickControlPresentationCoordinator;
- (id)reorderGestureRecognizer;
- (id)reorderableHomeKitItemListForSection:(long long)arg1;
- (void)setActionSetExecutionFuturesKeyedByIdentifier:(id)arg1;
- (void)setAncestorQuickControlHostAtPresentationTime:(id)arg1;
- (void)setContentColorStyle:(unsigned long long)arg1;
- (void)setEditing:(bool)arg1 animated:(bool)arg2;
- (void)setExecutionFuture:(id)arg1 forActionSet:(id)arg2;
- (void)setQuickControlPresentationCoordinator:(id)arg1;
- (void)setReorderGestureRecognizer:(id)arg1;
- (void)setReorderableHomeKitItemList:(id)arg1 forSection:(long long)arg2;
- (void)setSuppressCollectionViewUpdatesForReorderCommit:(bool)arg1;
- (void)setViewAppeared:(bool)arg1;
- (bool)suppressCollectionViewUpdatesForReorderCommit;
- (void)traitCollectionDidChange:(id)arg1;
- (id)traitCollectionForPresentationCoordinator:(id)arg1;
- (bool)viewAppeared;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
