/* made by EzioChiu
   Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

@interface AVInteractiveTransitionGestureTracker : NSObject <UIGestureRecognizerDelegate> {
    long long  _activeGestureType;
    <AVInteractiveTransitionGestureTrackerDelegate> * _delegate;
    struct CGPoint { 
        double x; 
        double y; 
    }  _locationOfInitialPinchInWindow;
    UIPanGestureRecognizer * _panGestureRecognizer;
    bool  _panToDismissEnabled;
    UIPinchGestureRecognizer * _pinchGestureRecognizer;
    bool  _pinchToDismissEnabled;
    bool  _pinchToPresentEnabled;
    double  _previousPinchScale;
    NSArray * _recognizers;
    double  _rotation;
    UIRotationGestureRecognizer * _rotationGestureRecognizer;
    bool  _trackingUpwardPan;
}

@property (nonatomic) long long activeGestureType;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <AVInteractiveTransitionGestureTrackerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct CGPoint { double x1; double x2; } locationOfInitialPinchInWindow;
@property (nonatomic, readonly) UIPanGestureRecognizer *panGestureRecognizer;
@property (getter=isPanToDismissEnabled, nonatomic) bool panToDismissEnabled;
@property (nonatomic, readonly) UIPinchGestureRecognizer *pinchGestureRecognizer;
@property (getter=isPinchToDismissEnabled, nonatomic) bool pinchToDismissEnabled;
@property (getter=isPinchToPresentEnabled, nonatomic) bool pinchToPresentEnabled;
@property (nonatomic) double previousPinchScale;
@property (nonatomic, readonly) NSArray *recognizers;
@property (nonatomic) double rotation;
@property (nonatomic, readonly) UIRotationGestureRecognizer *rotationGestureRecognizer;
@property (readonly) Class superclass;
@property (getter=isTrackingUpwardPan, nonatomic) bool trackingUpwardPan;

- (void).cxx_destruct;
- (void)_beginTracking:(long long)arg1;
- (void)_cancel;
- (void)_finish;
- (void)_handlePanGesture:(id)arg1;
- (void)_handlePinchGesture:(id)arg1;
- (void)_handleRotationGesture:(id)arg1;
- (void)_reset;
- (long long)activeGestureType;
- (void)addRecognizersToView:(id)arg1;
- (id)delegate;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)initWithDelegate:(id)arg1;
- (bool)isPanToDismissEnabled;
- (bool)isPinchToDismissEnabled;
- (bool)isPinchToPresentEnabled;
- (bool)isTracking;
- (bool)isTrackingUpwardPan;
- (struct CGPoint { double x1; double x2; })locationOfInitialPinchInWindow;
- (id)panGestureRecognizer;
- (id)pinchGestureRecognizer;
- (double)previousPinchScale;
- (id)recognizers;
- (double)rotation;
- (id)rotationGestureRecognizer;
- (void)setActiveGestureType:(long long)arg1;
- (void)setLocationOfInitialPinchInWindow:(struct CGPoint { double x1; double x2; })arg1;
- (void)setPanToDismissEnabled:(bool)arg1;
- (void)setPinchToDismissEnabled:(bool)arg1;
- (void)setPinchToPresentEnabled:(bool)arg1;
- (void)setPreviousPinchScale:(double)arg1;
- (void)setRotation:(double)arg1;
- (void)setTrackingUpwardPan:(bool)arg1;
- (void)transitionDidBegin;

@end
