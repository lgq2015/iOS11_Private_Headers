/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITapRecognizer : NSObject <NSCoding> {
    NSMutableSet * _activeTouches;
    double  _allowableMovement;
    double  _allowableSeparation;
    double  _allowableTouchTimeSeparation;
    int  _currentNumberOfTaps;
    int  _currentNumberOfTouches;
    <UITapRecognizerDelegate> * _delegate;
    struct CGPoint { 
        double x; 
        double y; 
    }  _digitizerLocation;
    long long  _exclusiveDirectionalAxis;
    struct CGPoint { 
        double x; 
        double y; 
    }  _location;
    double  _maximumIntervalBetweenSuccessiveTaps;
    double  _maximumSingleTapDuration;
    double  _maximumTapDuration;
    unsigned int  _multitouchTimerOn;
    unsigned int  _noNewTouches;
    unsigned long long  _numberOfTapsRequired;
    int  _numberOfTouchesForCurrentTap;
    unsigned long long  _numberOfTouchesRequired;
    struct CGPoint { 
        double x; 
        double y; 
    }  _startPoint;
    long long  _strongestDirectionalAxis;
    double  _strongestDirectionalForce;
    unsigned int  _timerOn;
    NSMutableArray * _touches;
}

@property (nonatomic) double allowableMovement;
@property (nonatomic) double allowableSeparation;
@property (nonatomic) double allowableTouchTimeSeparation;
@property (nonatomic) <UITapRecognizerDelegate> *delegate;
@property (nonatomic) long long exclusiveDirectionalAxis;
@property (nonatomic) double maximumIntervalBetweenSuccessiveTaps;
@property (nonatomic) double maximumSingleTapDuration;
@property (nonatomic) double maximumTapDuration;
@property (nonatomic) unsigned long long numberOfTapsRequired;
@property (nonatomic) unsigned long long numberOfTouchesRequired;
@property (nonatomic, readonly) NSArray *touches;

- (void).cxx_destruct;
- (void)_beginInteraction;
- (struct CGPoint { double x1; double x2; })_digitizerLocation;
- (double)_effectiveAllowableMovement;
- (void)_interactionEndedTouch:(bool)arg1;
- (struct CGPoint { double x1; double x2; })_locationInSceneReferenceSpace;
- (void)_reset;
- (void)_updateDigitizerLocationForEvent:(id)arg1;
- (bool)activeTouchesExceedAllowableSeparation;
- (double)allowableMovement;
- (double)allowableSeparation;
- (double)allowableTouchTimeSeparation;
- (void)clearMultitouchTimer;
- (void)clearTapTimer;
- (void)dealloc;
- (id)delegate;
- (void)encodeWithCoder:(id)arg1;
- (long long)exclusiveDirectionalAxis;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (struct CGPoint { double x1; double x2; })locationInView:(id)arg1;
- (struct CGPoint { double x1; double x2; })locationInView:(id)arg1 focusSystem:(id)arg2;
- (double)maximumIntervalBetweenSuccessiveTaps;
- (double)maximumSingleTapDuration;
- (double)maximumTapDuration;
- (void)multitouchExpired:(id)arg1;
- (unsigned long long)numberOfTapsRequired;
- (unsigned long long)numberOfTouchesRequired;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)pressesChanged:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (void)setAllowableMovement:(double)arg1;
- (void)setAllowableSeparation:(double)arg1;
- (void)setAllowableTouchTimeSeparation:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setExclusiveDirectionalAxis:(long long)arg1;
- (void)setMaximumIntervalBetweenSuccessiveTaps:(double)arg1;
- (void)setMaximumSingleTapDuration:(double)arg1;
- (void)setMaximumTapDuration:(double)arg1;
- (void)setNumberOfTapsRequired:(unsigned long long)arg1;
- (void)setNumberOfTouchesRequired:(unsigned long long)arg1;
- (void)startMultitouchTimer:(double)arg1;
- (void)startTapTimer:(double)arg1;
- (void)tooSlow:(id)arg1;
- (id)touches;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end