/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

@interface FIUIWorkoutCacheContainer : NSObject {
    NSNumber * _averageHeartRate;
    HKQuantity * _basalEnergy;
    NSArray * _distanceSamples;
    NSArray * _heartRateSamples;
    NSArray * _recoveryHeartRateSamples;
    NSArray * _segments;
    NSArray * _splits;
    NSArray * _strokeSamples;
    NSDictionary * _swimDistanceByStrokeStyle;
    NSArray * _swimmingSets;
    NSDictionary * _swimmingSplits;
    HKUnit * _userPreferredDistanceUnit;
}

@property (nonatomic, retain) NSNumber *averageHeartRate;
@property (nonatomic, retain) HKQuantity *basalEnergy;
@property (nonatomic, retain) NSArray *distanceSamples;
@property (nonatomic, retain) NSArray *heartRateSamples;
@property (nonatomic, retain) NSArray *recoveryHeartRateSamples;
@property (nonatomic, retain) NSArray *segments;
@property (nonatomic, retain) NSArray *splits;
@property (nonatomic, retain) NSArray *strokeSamples;
@property (nonatomic, retain) NSDictionary *swimDistanceByStrokeStyle;
@property (nonatomic, retain) NSArray *swimmingSets;
@property (nonatomic, retain) NSDictionary *swimmingSplits;
@property (nonatomic, retain) HKUnit *userPreferredDistanceUnit;

- (void).cxx_destruct;
- (id)averageHeartRate;
- (id)basalEnergy;
- (id)distanceSamples;
- (id)heartRateSamples;
- (id)recoveryHeartRateSamples;
- (id)segments;
- (void)setAverageHeartRate:(id)arg1;
- (void)setBasalEnergy:(id)arg1;
- (void)setDistanceSamples:(id)arg1;
- (void)setHeartRateSamples:(id)arg1;
- (void)setRecoveryHeartRateSamples:(id)arg1;
- (void)setSegments:(id)arg1;
- (void)setSplits:(id)arg1;
- (void)setStrokeSamples:(id)arg1;
- (void)setSwimDistanceByStrokeStyle:(id)arg1;
- (void)setSwimmingSets:(id)arg1;
- (void)setSwimmingSplits:(id)arg1;
- (void)setUserPreferredDistanceUnit:(id)arg1;
- (id)splits;
- (id)strokeSamples;
- (id)swimDistanceByStrokeStyle;
- (id)swimmingSets;
- (id)swimmingSplits;
- (id)userPreferredDistanceUnit;

@end
