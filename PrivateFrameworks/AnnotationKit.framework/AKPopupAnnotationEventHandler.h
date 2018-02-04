/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

@interface AKPopupAnnotationEventHandler : AKRectangularAnnotationEventHandler

+ (bool)allowsDragging;

- (bool)continueDraggableAreaEventTrackingLoopWithEvent:(id)arg1 orRecognizer:(id)arg2;
- (bool)enterDraggableAreaEventTrackingLoopWithEvent:(id)arg1 orRecognizer:(id)arg2;
- (bool)handleDownEvent:(id)arg1 orRecognizer:(id)arg2;

@end
