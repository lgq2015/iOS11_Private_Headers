/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

@interface AKArrowAnnotationEventHandler : AKAnnotationEventHandler

- (struct CGPoint { double x1; double x2; })_updatedMidPointForAnnotation:(id)arg1 withNewStartPt:(struct CGPoint { double x1; double x2; })arg2 andNewEndPt:(struct CGPoint { double x1; double x2; })arg3;
- (void)getInitialDraggedPoint:(struct CGPoint { double x1; double x2; }*)arg1 otherPoint:(struct CGPoint { double x1; double x2; }*)arg2 center:(struct CGPoint { double x1; double x2; }*)arg3 forEvent:(id)arg4 orRecognizer:(id)arg5;
- (void)setupDraggingConstraints;
- (void)updateModelWithCurrentPoint:(struct CGPoint { double x1; double x2; })arg1;

@end
