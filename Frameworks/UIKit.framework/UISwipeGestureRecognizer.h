/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UISwipeGestureRecognizer : UIGestureRecognizer {
    unsigned long long  _direction;
    bool  _failed;
    double  _maximumDuration;
    double  _maximumPrimaryMovement;
    double  _maximumSecondaryMovement;
    double  _minimumPrimaryMovement;
    double  _minimumSecondaryMovement;
    unsigned long long  _numberOfTouchesRequired;
    double  _rateOfMaximumMovementDecay;
    double  _rateOfMinimumMovementDecay;
    struct CGPoint { 
        double x; 
        double y; 
    }  _startLocation;
    struct CGPoint { double x1; double x2; } * _startLocations;
    double  _startTime;
    NSMutableArray * _touches;
}

@property (nonatomic) unsigned long long direction;
@property (nonatomic) double maximumDuration;
@property (nonatomic) double maximumPrimaryMovement;
@property (nonatomic) double maximumSecondaryMovement;
@property (nonatomic) double minimumPrimaryMovement;
@property (nonatomic) double minimumSecondaryMovement;
@property (nonatomic) unsigned long long numberOfTouchesRequired;
@property (nonatomic) double rateOfMaximumMovementDecay;
@property (nonatomic) double rateOfMinimumMovementDecay;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } startPoint;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

+ (bool)_shouldDefaultToTouches;

- (void).cxx_destruct;
- (void)_appendSubclassDescription:(id)arg1;
- (bool)_checkForSwipeWithDelta:(struct CGPoint { double x1; double x2; })arg1 time:(double)arg2;
- (void)_resetGestureRecognizer;
- (void)dealloc;
- (unsigned long long)direction;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (struct CGPoint { double x1; double x2; })locationInView:(id)arg1;
- (struct CGPoint { double x1; double x2; })locationOfTouch:(unsigned long long)arg1 inView:(id)arg2;
- (double)maximumDuration;
- (double)maximumPrimaryMovement;
- (double)maximumSecondaryMovement;
- (double)minimumPrimaryMovement;
- (double)minimumSecondaryMovement;
- (unsigned long long)numberOfTouches;
- (unsigned long long)numberOfTouchesRequired;
- (double)rateOfMaximumMovementDecay;
- (double)rateOfMinimumMovementDecay;
- (void)setDirection:(unsigned long long)arg1;
- (void)setMaximumDuration:(double)arg1;
- (void)setMaximumPrimaryMovement:(double)arg1;
- (void)setMaximumSecondaryMovement:(double)arg1;
- (void)setMinimumPrimaryMovement:(double)arg1;
- (void)setMinimumSecondaryMovement:(double)arg1;
- (void)setNumberOfTouchesRequired:(unsigned long long)arg1;
- (void)setRateOfMaximumMovementDecay:(double)arg1;
- (void)setRateOfMinimumMovementDecay:(double)arg1;
- (struct CGPoint { double x1; double x2; })startPoint;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

// Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/Frameworks/XCTest.framework/XCTest

- (id)_automationName;

@end
