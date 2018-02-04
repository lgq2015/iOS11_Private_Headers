/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPeopleSwipeSelectionManager : NSObject <PXAutoScrollerDelegate> {
    PXUIAutoScroller * _autoScroller;
    NSIndexPath * _currentIndexPath;
    <PXPeopleSwipeSelectionManagerDelegate> * _delegate;
    struct { 
        bool respondsToItemIndexPathAtLocation; 
        bool respondsToItemIndexPathClosestLeadingLocation; 
        bool respondsToItemIndexPathClosestAboveLocation; 
    }  _delegateFlags;
    struct { 
        bool selectedIndexPaths; 
    }  _needsUpdateFlags;
    id  _pausingChangesToken;
    UIScrollView * _scrollView;
    NSSet * _selectedIndexPathsBeforeSwipe;
    NSIndexPath * _startingIndexPath;
    unsigned long long  _state;
    UIGestureRecognizer * _swipeGestureRecognizer;
}

@property (nonatomic, readonly) PXUIAutoScroller *autoScroller;
@property (nonatomic, retain) NSIndexPath *currentIndexPath;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PXPeopleSwipeSelectionManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isSelecting;
@property (nonatomic, retain) id pausingChangesToken;
@property (nonatomic, readonly) UIScrollView *scrollView;
@property (nonatomic, copy) NSSet *selectedIndexPathsBeforeSwipe;
@property (nonatomic, retain) NSIndexPath *startingIndexPath;
@property (nonatomic) unsigned long long state;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIGestureRecognizer *swipeGestureRecognizer;

- (void).cxx_destruct;
- (void)_beginSelectionFromIndexPath:(id)arg1;
- (void)_endSelection;
- (void)_handleSwipeSelectionGesture:(id)arg1;
- (void)_invalidateSelectedIndexPaths;
- (id)_itemIndexPathAtLocation:(struct CGPoint { double x1; double x2; })arg1;
- (id)_itemIndexPathClosestAboveLocation:(struct CGPoint { double x1; double x2; })arg1;
- (id)_itemIndexPathClosestLeadingLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)_updateSelectedIndexPaths;
- (void)_updateSelectionWithHitIndexPath:(id)arg1 leadingClosestIndexPath:(id)arg2 aboveClosestIndexPath:(id)arg3;
- (id)autoScroller;
- (void)autoScroller:(id)arg1 didAutoscrollWithTimestamp:(double)arg2;
- (id)currentIndexPath;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (id)initWithScrollView:(id)arg1;
- (bool)isSelecting;
- (id)pausingChangesToken;
- (id)scrollView;
- (id)selectedIndexPathsBeforeSwipe;
- (void)setCurrentIndexPath:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPausingChangesToken:(id)arg1;
- (void)setSelectedIndexPathsBeforeSwipe:(id)arg1;
- (void)setStartingIndexPath:(id)arg1;
- (void)setState:(unsigned long long)arg1;
- (id)startingIndexPath;
- (unsigned long long)state;
- (id)swipeGestureRecognizer;

@end