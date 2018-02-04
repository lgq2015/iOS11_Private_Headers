/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUAnimationSettings : NSObject <NSCopying, _UIBasicAnimationFactory> {
    double  _delay;
    double  _duration;
    float  _repeatCount;
    double  _speed;
    CAMediaTimingFunction * _timingFunction;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) double delay;
@property (readonly, copy) NSString *description;
@property (nonatomic) double duration;
@property (nonatomic, readonly) double durationWithSpeed;
@property (readonly) unsigned long long hash;
@property (nonatomic) float repeatCount;
@property (nonatomic) double speed;
@property (readonly) Class superclass;
@property (nonatomic, retain) CAMediaTimingFunction *timingFunction;

+ (id)settingsWithDuration:(double)arg1;
+ (id)settingsWithDuration:(double)arg1 curve:(long long)arg2;

- (void).cxx_destruct;
- (id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2;
- (id)_timingFunctionForAnimation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)delay;
- (double)duration;
- (double)durationWithSpeed;
- (id)init;
- (double)interpolatedProgressForProgress:(double)arg1;
- (double)interpolatedProgressForTime:(double)arg1;
- (float)repeatCount;
- (void)setDelay:(double)arg1;
- (void)setDuration:(double)arg1;
- (void)setRepeatCount:(float)arg1;
- (void)setSpeed:(double)arg1;
- (void)setTimingFunction:(id)arg1;
- (id)settingsSpedUpByFactor:(double)arg1;
- (double)speed;
- (id)timingFunction;

@end
