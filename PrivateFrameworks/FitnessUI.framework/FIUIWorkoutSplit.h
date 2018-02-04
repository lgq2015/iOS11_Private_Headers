/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

@interface FIUIWorkoutSplit : NSObject {
    double  _distanceInMeters;
    double  _duration;
}

@property (nonatomic) double distanceInMeters;
@property (nonatomic) double duration;

- (id)description;
- (double)distanceInMeters;
- (double)duration;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDistance:(double)arg1 duration:(double)arg2;
- (void)setDistanceInMeters:(double)arg1;
- (void)setDuration:(double)arg1;

@end
