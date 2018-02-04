/* made by EzioChiu
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNUINavigationListView : UITableView <UIGestureRecognizerDelegate> {
    UIGestureRecognizer * _additionalSelectionGestureRecognizer;
    <CNUINavigationListViewDataSource> * _navigationListViewDataSource;
    <CNUINavigationListViewDelegate> * _navigationListViewDelegate;
    UISelectionFeedbackGenerator * _retargetBehavior;
    UILongPressGestureRecognizer * _selectionGestureRecognizer;
    _CNUINavigationListViewPermissiveGestureRecognizerDelegate * _selectionGestureRecognizerDelegate;
    NSIndexPath * _trackedElementIndexPath;
}

@property (nonatomic, retain) UIGestureRecognizer *additionalSelectionGestureRecognizer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <CNUINavigationListViewDataSource> *navigationListViewDataSource;
@property (nonatomic) <CNUINavigationListViewDelegate> *navigationListViewDelegate;
@property (nonatomic, retain) UISelectionFeedbackGenerator *retargetBehavior;
@property (nonatomic, retain) UILongPressGestureRecognizer *selectionGestureRecognizer;
@property (nonatomic, retain) _CNUINavigationListViewPermissiveGestureRecognizerDelegate *selectionGestureRecognizerDelegate;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSIndexPath *trackedElementIndexPath;

+ (bool)disableHeaderAccessibilityElements;

- (void).cxx_destruct;
- (id)additionalSelectionGestureRecognizer;
- (void)clearAdditionalSelectionGestureRecognizer;
- (id)dequeueDetailNavigationListViewCell;
- (id)dequeueNavigationListViewCell;
- (id)disclosureNavigationListViewCellForRowAtIndexPath:(id)arg1;
- (id)elementAtLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)handlePanGestureRecognizerUpdate:(id)arg1;
- (void)handleSelectionGestureRecognizerUpdate:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 style:(long long)arg2;
- (bool)location:(struct CGPoint { double x1; double x2; })arg1 isInAccessoryControlTouchArea:(id)arg2;
- (id)navigationListViewDataSource;
- (id)navigationListViewDelegate;
- (void)notifyDelegateWithSelectionEventAtPoint:(struct CGPoint { double x1; double x2; })arg1 trackedElementIndexPath:(id)arg2;
- (id)retargetBehavior;
- (id)selectionGestureRecognizer;
- (id)selectionGestureRecognizerDelegate;
- (void)setAdditionalSelectionGestureRecognizer:(id)arg1;
- (void)setNavigationListViewDataSource:(id)arg1;
- (void)setNavigationListViewDelegate:(id)arg1;
- (void)setRetargetBehavior:(id)arg1;
- (void)setSelectionGestureRecognizer:(id)arg1;
- (void)setSelectionGestureRecognizerDelegate:(id)arg1;
- (void)setTrackedElementIndexPath:(id)arg1;
- (void)startTrackingElementAtIndexPath:(id)arg1;
- (void)startTrackingSelectionFromGestureRecognizer:(id)arg1;
- (void)stopTrackingElementAtIndexPath:(id)arg1;
- (id)trackedElementIndexPath;
- (void)updateCellAccessoryControlState:(id)arg1 withTrackedLocation:(struct CGPoint { double x1; double x2; })arg2;
- (void)willMoveToWindow:(id)arg1;

@end
