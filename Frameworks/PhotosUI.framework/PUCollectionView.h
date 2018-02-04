/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUCollectionView : UICollectionView <UIGestureRecognizerDelegate> {
    _UIDragSnappingFeedbackGenerator * __feedbackDragBehavior;
    PXUIAutoScroller * _autoScroller;
    UILongPressGestureRecognizer * _dragGestureRecognizer;
    NSIndexPath * _dragSourceIndexPath;
    NSIndexPath * _dragTargetIndexPath;
    UIView * _draggedView;
    struct CGPoint { 
        double x; 
        double y; 
    }  _draggedViewCenterOffset;
    <PUCollectionViewReorderDelegate> * _reorderDelegate;
    <PUCollectionViewSelectionDelegate> * _selectionDelegate;
}

@property (nonatomic, readonly) _UIDragSnappingFeedbackGenerator *_feedbackDragBehavior;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <PUCollectionViewReorderDelegate> *reorderDelegate;
@property (nonatomic) <PUCollectionViewSelectionDelegate> *selectionDelegate;
@property (readonly) Class superclass;

+ (id)_reuseKeyForSupplementaryViewOfKind:(id)arg1 withReuseIdentifier:(id)arg2;

- (void).cxx_destruct;
- (id)_feedbackDragBehavior;
- (void)_handleDrag:(id)arg1;
- (id)_reorderableLayout;
- (void)_updateDragUsingIndexPathUpdateBlock:(id /* block */)arg1;
- (void)adjustedContentInsetDidChange;
- (void)dealloc;
- (void)deleteItemsAtIndexPaths:(id)arg1;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)indexPathsForSelectedItems;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 collectionViewLayout:(id)arg2;
- (void)insertItemsAtIndexPaths:(id)arg1;
- (void)moveItemAtIndexPath:(id)arg1 toIndexPath:(id)arg2;
- (void)reloadData;
- (id)reorderDelegate;
- (id)selectionDelegate;
- (void)setReorderDelegate:(id)arg1;
- (void)setSelectionDelegate:(id)arg1;
- (void)visiblyInsertItemAtIndexPath:(id)arg1 modelUpdate:(id /* block */)arg2 completionHandler:(id /* block */)arg3;

@end
