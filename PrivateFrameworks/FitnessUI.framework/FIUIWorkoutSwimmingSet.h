/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

@interface FIUIWorkoutSwimmingSet : NSObject {
    HKQuantity * _distance;
    long long  _dominantStrokeStyle;
    NSDate * _endDate;
    NSDate * _movementEndDate;
    NSDate * _startDate;
    long long  _strokeCount;
}

@property (nonatomic, retain) HKQuantity *distance;
@property (nonatomic) long long dominantStrokeStyle;
@property (nonatomic, retain) NSDate *endDate;
@property (nonatomic, retain) NSDate *movementEndDate;
@property (nonatomic, retain) NSDate *startDate;
@property (nonatomic) long long strokeCount;

+ (id)_decimalNumberFormatter;

- (void).cxx_destruct;
- (double)_activeDuration;
- (double)_restingDuration;
- (id)description;
- (id)distance;
- (long long)dominantStrokeStyle;
- (id)endDate;
- (id)formattedActiveDurationWithFormattingManager:(id)arg1;
- (id)formattedDistanceValueWithFormattingManager:(id)arg1;
- (id)formattedDominantStrokeStyle;
- (id)formattedPaceUsingFormatType:(long long)arg1 formattingManager:(id)arg2;
- (id)formattedRestDurationWithFormattingManager:(id)arg1;
- (id)formattedStrokeCountUsingFormatType:(long long)arg1 formattingManager:(id)arg2;
- (id)movementEndDate;
- (void)setDistance:(id)arg1;
- (void)setDominantStrokeStyle:(long long)arg1;
- (void)setEndDate:(id)arg1;
- (void)setMovementEndDate:(id)arg1;
- (void)setStartDate:(id)arg1;
- (void)setStrokeCount:(long long)arg1;
- (id)startDate;
- (long long)strokeCount;

@end