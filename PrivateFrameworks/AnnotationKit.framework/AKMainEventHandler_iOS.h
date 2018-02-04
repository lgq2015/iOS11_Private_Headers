/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

@interface AKMainEventHandler_iOS : AKMainEventHandler <UIGestureRecognizerDelegate> {
    UITapGestureRecognizer * _doubleTapRecognizer;
    double  _lastRotationAngleInRotationGesture;
    AKPanGestureRecognizer * _panRecognizer;
    UILongPressGestureRecognizer * _pressRecognizer;
    AKRotationGestureRecognizer * _rotationRecognizer;
    UITapGestureRecognizer * _tapRecognizer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) UITapGestureRecognizer *doubleTapRecognizer;
@property (readonly) unsigned long long hash;
@property double lastRotationAngleInRotationGesture;
@property (retain) AKPanGestureRecognizer *panRecognizer;
@property (retain) UILongPressGestureRecognizer *pressRecognizer;
@property (retain) AKRotationGestureRecognizer *rotationRecognizer;
@property (readonly) Class superclass;
@property (retain) UITapGestureRecognizer *tapRecognizer;

- (void).cxx_destruct;
- (void)_penDrawingQuiesced;
- (void)applyToAllSelectedAnnotationsRotateEvent:(id)arg1 orRecognizer:(id)arg2;
- (id)doubleTapRecognizer;
- (void)forwardRecognizerToMainHandleEvent:(id)arg1;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)initWithController:(id)arg1;
- (double)lastRotationAngleInRotationGesture;
- (id)panRecognizer;
- (id)pressRecognizer;
- (id)rotationRecognizer;
- (void)setDoubleTapRecognizer:(id)arg1;
- (void)setLastRotationAngleInRotationGesture:(double)arg1;
- (void)setPanRecognizer:(id)arg1;
- (void)setPressRecognizer:(id)arg1;
- (void)setRotationRecognizer:(id)arg1;
- (void)setTapRecognizer:(id)arg1;
- (id)tapRecognizer;
- (void)teardown;

@end
