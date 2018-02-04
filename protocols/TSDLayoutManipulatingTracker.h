/* made by EzioChiu.
 */

@protocol TSDLayoutManipulatingTracker

@required

- (void)changeDynamicLayoutsForReps:(NSSet *)arg1;
- (void)commitChangesForReps:(NSSet *)arg1;
- (bool)operationShouldBeDynamic;
- (bool)shouldOpenCommandGroupToCommitChangesForReps:(NSSet *)arg1;
- (bool)supportsAlignmentGuides;

@optional

- (void)didChangeCurrentlyTransformingReps;
- (void)didEndDynamicOperationForReps:(NSSet *)arg1;
- (TSDCommandSelectionBehavior *)selectionBehaviorForReps:(NSSet *)arg1;
- (void)willBeginDynamicOperationForReps:(NSSet *)arg1;

@end