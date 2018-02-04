/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSDAutoscroll : NSObject {
    bool  mActive;
    unsigned long long  mCount;
    int  mDirections;
    struct CGPoint { 
        double x; 
        double y; 
    }  mLastAutoscrollDelta;
    double  mLastFired;
    struct CGPoint { 
        double x; 
        double y; 
    }  mPoint;
    double  mRepeatInterval;
    NSObject<TSDAutoscrollDelegate> * mTarget;
    bool  mTargetIsAutoscrolling;
    NSTimer * mTimer;
}

@property (nonatomic) bool active;
@property (nonatomic) unsigned long long count;
@property (nonatomic) int directions;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } lastAutoscrollDelta;
@property (nonatomic) struct CGPoint { double x1; double x2; } point;
@property (nonatomic) double repeatInterval;
@property (nonatomic, retain) NSObject<TSDAutoscrollDelegate> *target;
@property (nonatomic) bool targetIsAutoscrolling;

+ (void)startAutoscroll:(id)arg1 unscaledPoint:(struct CGPoint { double x1; double x2; })arg2;

- (bool)active;
- (unsigned long long)count;
- (void)dealloc;
- (int)directions;
- (void)invalidate;
- (struct CGPoint { double x1; double x2; })lastAutoscrollDelta;
- (void)p_cleanup;
- (unsigned long long)p_deltaForCount:(unsigned long long)arg1;
- (struct CGPoint { double x1; double x2; })point;
- (double)repeatInterval;
- (void)setActive:(bool)arg1;
- (void)setCount:(unsigned long long)arg1;
- (void)setDirections:(int)arg1;
- (void)setPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setRepeatInterval:(double)arg1;
- (void)setTarget:(id)arg1;
- (void)setTargetIsAutoscrolling:(bool)arg1;
- (bool)startAutoscroll:(id)arg1 unscaledPoint:(struct CGPoint { double x1; double x2; })arg2 directions:(int)arg3 repeatInterval:(double)arg4;
- (id)target;
- (bool)targetIsAutoscrolling;
- (void)timerFired:(id)arg1;

@end
