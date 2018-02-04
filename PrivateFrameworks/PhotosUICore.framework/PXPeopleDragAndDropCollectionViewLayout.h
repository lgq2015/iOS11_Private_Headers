/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPeopleDragAndDropCollectionViewLayout : UICollectionViewFlowLayout {
    struct CGPoint { 
        double x; 
        double y; 
    }  _currentPosition;
    NSIndexPath * _dragIndexPathForMerge;
    NSTimer * _dragPauseTimer;
    struct CGPoint { 
        double x; 
        double y; 
    }  _lastDragPoint;
    bool  _performActualRearrange;
    NSIndexPath * _targetIndexPathForMerge;
}

@property (nonatomic) struct CGPoint { double x1; double x2; } currentPosition;
@property (nonatomic, retain) NSIndexPath *dragIndexPathForMerge;
@property (nonatomic, retain) NSTimer *dragPauseTimer;
@property (nonatomic) struct CGPoint { double x1; double x2; } lastDragPoint;
@property (nonatomic, readonly) <PXPeopleDragAndDropCollectionViewDelegateLayout> *mergeDelegate;
@property (nonatomic) bool performActualRearrange;
@property (nonatomic, retain) NSIndexPath *targetIndexPathForMerge;

- (void).cxx_destruct;
- (void)_cancelDragPauseTimer;
- (void)_potentialMergeWithDragIndexPath:(id)arg1 ontoIndexPath:(id)arg2 withPosition:(struct CGPoint { double x1; double x2; })arg3;
- (void)_updateDragPause;
- (struct CGPoint { double x1; double x2; })currentPosition;
- (void)dealloc;
- (id)dragIndexPathForMerge;
- (id)dragPauseTimer;
- (id)finalLayoutAttributesForDisappearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)init;
- (id)initialLayoutAttributesForAppearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (struct CGPoint { double x1; double x2; })lastDragPoint;
- (id)layoutAttributesForInteractivelyMovingItemAtIndexPath:(id)arg1 withTargetPosition:(struct CGPoint { double x1; double x2; })arg2;
- (id)mergeDelegate;
- (bool)performActualRearrange;
- (bool)performMergeIfPossible;
- (void)setCurrentPosition:(struct CGPoint { double x1; double x2; })arg1;
- (void)setDragIndexPathForMerge:(id)arg1;
- (void)setDragPauseTimer:(id)arg1;
- (void)setLastDragPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setPerformActualRearrange:(bool)arg1;
- (void)setTargetIndexPathForMerge:(id)arg1;
- (id)targetIndexPathForInteractivelyMovingItem:(id)arg1 withPosition:(struct CGPoint { double x1; double x2; })arg2;
- (id)targetIndexPathForMerge;

@end
