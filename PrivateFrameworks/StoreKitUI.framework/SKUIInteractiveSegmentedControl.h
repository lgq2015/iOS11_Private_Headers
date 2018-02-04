/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIInteractiveSegmentedControl : UIControl {
    id /* block */  _dividerCreationBlock;
    NSMutableArray * _dividerViews;
    double  _dividerWidth;
    NSArray * _segments;
    double  _selectionProgress;
}

@property (nonatomic, copy) id /* block */ dividerCreationBlock;
@property (nonatomic) double dividerWidth;
@property (nonatomic, copy) NSArray *segments;
@property (nonatomic) double selectionProgress;

- (void).cxx_destruct;
- (void)_applySelectionProgressToSegments;
- (id)_createDividerViewWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_notifyClientsOfSelectionProgressChange;
- (void)_registerForObservationOfSegment:(id)arg1;
- (void)_segmentControlTouchUpInsideAction:(id)arg1;
- (bool)_setSelectionProgress:(double)arg1;
- (void)_unregisterForObservationOfSegment:(id)arg1;
- (void)dealloc;
- (id /* block */)dividerCreationBlock;
- (double)dividerWidth;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (double)relativeSelectionProgressForSelectionProgress:(double)arg1 segmentIndex:(long long)arg2;
- (id)segments;
- (long long)selectedSegmentIndexForSelectionProgress:(double)arg1;
- (double)selectionProgress;
- (double)selectionProgressForRelativeSectionProgress:(double)arg1 segmentIndex:(long long)arg2;
- (double)selectionProgressForSelectedSegmentAtIndex:(long long)arg1;
- (void)setDividerCreationBlock:(id /* block */)arg1;
- (void)setDividerWidth:(double)arg1;
- (void)setSegments:(id)arg1;
- (void)setSelectionProgress:(double)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
