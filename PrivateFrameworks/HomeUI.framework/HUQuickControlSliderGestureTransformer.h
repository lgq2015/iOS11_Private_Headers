/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUQuickControlSliderGestureTransformer : NSObject {
    double  _accumulatedDragDistance;
    HUQuickControlPanningContext * _context;
    double  _currentSliderValue;
    <HUQuickControlSliderGestureTransformerDelegate> * _delegate;
    UIGestureRecognizer * _gestureRecognizer;
    bool  _hasRecognizedSignificantSliderValueChange;
    bool  _ignoreTouches;
    struct CGPoint { 
        double x; 
        double y; 
    }  _lastTouchLocation;
    double  _referenceSliderValue;
    struct CGPoint { 
        double x; 
        double y; 
    }  _referenceTouchLocation;
}

@property (nonatomic) double accumulatedDragDistance;
@property (nonatomic, readonly) HUQuickControlPanningContext *context;
@property (nonatomic) double currentSliderValue;
@property (nonatomic) <HUQuickControlSliderGestureTransformerDelegate> *delegate;
@property (nonatomic, retain) UIGestureRecognizer *gestureRecognizer;
@property (nonatomic) bool hasRecognizedSignificantSliderValueChange;
@property (nonatomic) bool ignoreTouches;
@property (nonatomic) struct CGPoint { double x1; double x2; } lastTouchLocation;
@property (nonatomic) double referenceSliderValue;
@property (nonatomic) struct CGPoint { double x1; double x2; } referenceTouchLocation;

- (void).cxx_destruct;
- (void)_handleGesturePan:(id)arg1;
- (void)_handleSliderValuePan:(struct CGPoint { double x1; double x2; })arg1;
- (double)_rawSliderValueForLocation:(struct CGPoint { double x1; double x2; })arg1;
- (bool)_shouldIgnoreAllGestures;
- (double)accumulatedDragDistance;
- (id)context;
- (double)currentSliderValue;
- (void)dealloc;
- (id)delegate;
- (id)gestureRecognizer;
- (bool)hasRecognizedSignificantSliderValueChange;
- (bool)ignoreTouches;
- (id)initWithGestureRecognizer:(id)arg1 context:(id)arg2;
- (struct CGPoint { double x1; double x2; })lastTouchLocation;
- (double)referenceSliderValue;
- (struct CGPoint { double x1; double x2; })referenceTouchLocation;
- (void)setAccumulatedDragDistance:(double)arg1;
- (void)setCurrentSliderValue:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setGestureRecognizer:(id)arg1;
- (void)setHasRecognizedSignificantSliderValueChange:(bool)arg1;
- (void)setIgnoreTouches:(bool)arg1;
- (void)setLastTouchLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)setReferenceSliderValue:(double)arg1;
- (void)setReferenceTouchLocation:(struct CGPoint { double x1; double x2; })arg1;

@end
