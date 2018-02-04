/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIPanGestureRecognizer : UIGestureRecognizer {
    double  _allowableSeparation;
    double  _allowableTouchTimeSeparation;
    unsigned int  _canPanHorizontally;
    unsigned int  _canPanVertically;
    struct CGPoint { 
        double x; 
        double y; 
    }  _digitizerLocation;
    unsigned int  _failsPastHysteresisWithoutMinTouches;
    unsigned int  _failsPastMaxTouches;
    struct CGPoint { 
        double x; 
        double y; 
    }  _firstSceneReferenceLocation;
    double  _hysteresis;
    unsigned int  _ignoresStationaryTouches;
    struct CGPoint { 
        double x; 
        double y; 
    }  _lastSceneReferenceLocation;
    unsigned long long  _lastTouchCount;
    double  _lastTouchTime;
    struct CGPoint { 
        double x; 
        double y; 
    }  _lastUnadjustedSceneReferenceLocation;
    unsigned long long  _maximumNumberOfTouches;
    unsigned long long  _minimumNumberOfTouches;
    NSMutableArray * _movingTouches;
    unsigned int  _multitouchTimerOn;
    id  _previousVelocitySample;
    unsigned int  _requiresImmediateMultipleTouches;
    NSMutableArray * _touches;
    id  _velocitySample;
}

@property (getter=_previousVelocitySample, readonly) UIPanGestureVelocitySample *_previousVelocitySample;
@property (getter=_velocitySample, readonly) UIPanGestureVelocitySample *_velocitySample;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } direction;
@property (nonatomic) unsigned long long maximumNumberOfTouches;
@property (nonatomic) unsigned long long minimumNumberOfTouches;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

+ (double)_defaultHysteresis;
+ (void)_setPanGestureRecognizersEnabled:(bool)arg1;
+ (bool)_shouldDefaultToTouches;

- (void).cxx_destruct;
- (id)_activeTouches;
- (struct CGPoint { double x1; double x2; })_adjustSceneReferenceLocation:(struct CGPoint { double x1; double x2; })arg1;
- (double)_allowableSeparation;
- (double)_allowableTouchTimeSeparation;
- (bool)_canPanHorizontally;
- (bool)_canPanVertically;
- (void)_centroidMovedTo:(struct CGPoint { double x1; double x2; })arg1 atTime:(double)arg2;
- (struct CGPoint { double x1; double x2; })_convertPoint:(struct CGPoint { double x1; double x2; })arg1 fromSceneReferenceCoordinatesToView:(id)arg2;
- (struct CGPoint { double x1; double x2; })_convertPoint:(struct CGPoint { double x1; double x2; })arg1 toSceneReferenceCoordinatesFromView:(id)arg2;
- (struct CGPoint { double x1; double x2; })_convertVelocitySample:(id)arg1 fromSceneReferenceCoordinatesToView:(id)arg2;
- (struct CGPoint { double x1; double x2; })_digitizerLocation;
- (bool)_failsPastHysteresisWithoutMinTouches;
- (void)_handleEndedTouches:(id)arg1 withFinalStateAdjustments:(id /* block */)arg2;
- (double)_hysteresis;
- (void)_ignoreTouchForTouchIdentifier:(unsigned int)arg1;
- (bool)_ignoresStationaryTouches;
- (long long)_lastTouchCount;
- (struct UIOffset { double x1; double x2; })_offsetInViewFromSceneReferenceLocation:(struct CGPoint { double x1; double x2; })arg1 toSceneReferenceLocation:(struct CGPoint { double x1; double x2; })arg2;
- (id)_previousVelocitySample;
- (void)_processTouchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)_removeHysteresisFromTranslation;
- (bool)_requiresImmediateMultipleTouches;
- (void)_resetGestureRecognizer;
- (void)_resetVelocitySamples;
- (void)_setAllowableSeparation:(double)arg1;
- (void)_setAllowableTouchTimeSeparation:(double)arg1;
- (void)_setCanPanHorizontally:(bool)arg1;
- (void)_setCanPanVertically:(bool)arg1;
- (void)_setFailsPastHysteresisWithoutMinTouches:(bool)arg1;
- (void)_setHysteresis:(double)arg1;
- (void)_setIgnoresStationaryTouches:(bool)arg1;
- (void)_setRequiresImmediateMultipleTouches:(bool)arg1;
- (struct CGPoint { double x1; double x2; })_shiftPanLocationToNewSceneReferenceLocation:(struct CGPoint { double x1; double x2; })arg1 lockingToAxis:(int)arg2;
- (bool)_shouldTryToBeginWithEvent:(id)arg1;
- (bool)_touchesExceedAllowableSeparation;
- (void)_touchesListChangedFrom:(id)arg1 to:(id)arg2;
- (void)_updateDigitizerLocationWithEvent:(id)arg1;
- (bool)_updateMovingTouchesArraySavingOldArray:(id*)arg1;
- (id)_velocitySample;
- (void)_willBeginAfterSatisfyingFailureRequirements;
- (bool)_willScrollX;
- (bool)_willScrollY;
- (void)clearMultitouchTimer;
- (void)encodeWithCoder:(id)arg1;
- (bool)failsPastMaxTouches;
- (id)initWithCoder:(id)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (struct CGPoint { double x1; double x2; })locationInView:(id)arg1;
- (struct CGPoint { double x1; double x2; })locationOfTouch:(unsigned long long)arg1 inView:(id)arg2;
- (unsigned long long)maximumNumberOfTouches;
- (unsigned long long)minimumNumberOfTouches;
- (void)multitouchExpired:(id)arg1;
- (unsigned long long)numberOfTouches;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)setFailsPastMaxTouches:(bool)arg1;
- (void)setMaximumNumberOfTouches:(unsigned long long)arg1;
- (void)setMinimumNumberOfTouches:(unsigned long long)arg1;
- (void)setTranslation:(struct CGPoint { double x1; double x2; })arg1 inView:(id)arg2;
- (void)startMultitouchTimer:(double)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (struct CGPoint { double x1; double x2; })translationInView:(id)arg1;
- (struct CGPoint { double x1; double x2; })velocityInView:(id)arg1;

// Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/Frameworks/XCTest.framework/XCTest

- (id)_automationName;

// Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading

- (struct CGPoint { double x1; double x2; })direction;

@end
