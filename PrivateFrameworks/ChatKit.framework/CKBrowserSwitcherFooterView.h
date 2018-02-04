/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKBrowserSwitcherFooterView : UIView <UICollectionViewDataSource, UICollectionViewDelegate, UIGestureRecognizerDelegate> {
    CKAppStripLayout * _appStripLayout;
    UICollectionView * _collectionView;
    <CKBrowserSwitcherFooterViewDataSource> * _dataSource;
    <CKBrowserSwitcherFooterViewDelegate> * _delegate;
    UIView * _grayLine;
    bool  _hasTouches;
    bool  _ignoreDataSourceChanges;
    bool  _isDoingMagnificationAnimation;
    bool  _isMagnificationEnabled;
    bool  _isMagnified;
    UILongPressGestureRecognizer * _longPressRecognizer;
    NSTimer * _minificationTimer;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _minifiedContentInsets;
    bool  _minifiesOnSelection;
    bool  _scrollsLastUsedAppIconIntoView;
    UILongPressGestureRecognizer * _touchTracker;
}

@property (nonatomic, retain) CKAppStripLayout *appStripLayout;
@property (nonatomic) <CKBrowserSwitcherFooterViewDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CKBrowserSwitcherFooterViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIView *grayLine;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isMagnified;
@property (nonatomic) bool minifiesOnSelection;
@property (nonatomic) bool scrollsLastUsedAppIconIntoView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cleanupMagnificationMinifiyImmediately:(bool)arg1;
- (void)adjustMagnificationAtPoint:(struct CGPoint { double x1; double x2; })arg1 minifyImmediately:(bool)arg2;
- (id)appStripLayout;
- (void)appsLongPressed:(id)arg1;
- (id)collectionView;
- (bool)collectionView:(id)arg1 canMoveItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 moveItemAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 targetIndexPathForMoveFromItemAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)dataSource;
- (void)dealloc;
- (id)delegate;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)grayLine;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)installedAppsChanged:(id)arg1;
- (bool)isMagnified;
- (void)layoutSubviews;
- (bool)minifiesOnSelection;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)reloadData;
- (void)resetScrollPosition;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (bool)scrollsLastUsedAppIconIntoView;
- (void)selectPluginAtIndexPath:(id)arg1;
- (void)setAppStripLayout:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setGrayLine:(id)arg1;
- (void)setInitiallySelectedPluginIfNeeded;
- (void)setMinifiesOnSelection:(bool)arg1;
- (void)setScrollsLastUsedAppIconIntoView:(bool)arg1;
- (struct CGPoint { double x1; double x2; })targetContentOffsetForFocusPoint:(struct CGPoint { double x1; double x2; })arg1 initialLayoutMode:(unsigned long long)arg2 finalLayoutMode:(unsigned long long)arg3;
- (void)touchTrackerTrackedTouches:(id)arg1;
- (void)updateCollectionView:(id)arg1;
- (void)visibleAppsChanges:(id)arg1;
- (void)willMoveToSuperview:(id)arg1;
- (void)willMoveToWindow:(id)arg1;

@end
