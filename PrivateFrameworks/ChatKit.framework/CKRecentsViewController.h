/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKRecentsViewController : CKBrowserViewController <CKBrowserDragControllerDelegate, MSStickerBrowserViewDataSource, _MSStickerSendManagerDelegate> {
    MSStickerBrowserView * _browserView;
    id /* block */  _draggingCompletionHandler;
    bool  _hasHandwritingRecents;
    bool  _hasStickerRecents;
    bool  _isLoadingRecents;
    UILabel * _noRecentsLabel;
    bool  _preparingForDisplay;
    NSMutableArray * _recentItems;
    NSMutableDictionary * _stickerCache;
}

@property (nonatomic, retain) MSStickerBrowserView *browserView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ draggingCompletionHandler;
@property (nonatomic) bool hasHandwritingRecents;
@property (nonatomic) bool hasStickerRecents;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isLoadingRecents;
@property (nonatomic, retain) UILabel *noRecentsLabel;
@property (getter=isPreparingForDisplay, nonatomic) bool preparingForDisplay;
@property (nonatomic, retain) NSMutableArray *recentItems;
@property (nonatomic, retain) NSMutableDictionary *stickerCache;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_postBrowserDidPrepareForDisplayNotificationIfNecessary;
- (void)_setContentOverlayInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (id)_stickerForMSSticker:(id)arg1;
- (id)browserView;
- (void)dealloc;
- (void)didTransitionFromOrientation:(long long)arg1 toOrientation:(long long)arg2;
- (bool)dragManager:(id)arg1 canPeelItem:(id)arg2;
- (bool)dragManager:(id)arg1 canRotateItem:(id)arg2;
- (bool)dragManager:(id)arg1 canScaleItem:(id)arg2;
- (void)dragManager:(id)arg1 didDragItem:(id)arg2 toDragTarget:(id)arg3;
- (void)dragManager:(id)arg1 didEndDraggingItem:(id)arg2 toDragTarget:(id)arg3 dropArea:(int)arg4;
- (bool)dragManager:(id)arg1 shouldCancelDraggingForItem:(id)arg2 toDragTarget:(id)arg3 dropArea:(int)arg4;
- (id /* block */)draggingCompletionHandler;
- (void)forceTearDownRemoteView;
- (bool)hasHandwritingRecents;
- (bool)hasStickerRecents;
- (id)initWithBalloonPlugin:(id)arg1 dataSource:(id)arg2;
- (void)insertSticker:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)isLoadingRecents;
- (bool)isPreparingForDisplay;
- (void)loadRecents;
- (void)loadView;
- (bool)mayBeKeptInViewHierarchy;
- (id)noRecentsLabel;
- (long long)numberOfStickersInStickerBrowserView:(id)arg1;
- (void)prepareForDisplay;
- (id)recentItems;
- (void)recentsUpdated;
- (id)requestSnapshotDataForPersistance;
- (void)resortAndReloadRecents;
- (void)saveSnapshotForBrowserViewController;
- (void)setBrowserView:(id)arg1;
- (void)setDraggingCompletionHandler:(id /* block */)arg1;
- (void)setHasHandwritingRecents:(bool)arg1;
- (void)setHasStickerRecents:(bool)arg1;
- (void)setIsLoadingRecents:(bool)arg1;
- (void)setNoRecentsLabel:(id)arg1;
- (void)setPreparingForDisplay:(bool)arg1;
- (void)setRecentItems:(id)arg1;
- (void)setStickerCache:(id)arg1;
- (void)setupNoRecentsLabel;
- (bool)shouldShowChatChrome;
- (void)startDragSticker:(id)arg1 frameInRemoteView:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 fence:(id)arg3 completionHandler:(id /* block */)arg4;
- (bool)stickerBrowserView:(id)arg1 shouldDrawBorderAroundSticker:(id)arg2;
- (id)stickerBrowserView:(id)arg1 stickerAtIndex:(long long)arg2;
- (id)stickerCache;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(bool)arg1;

@end
