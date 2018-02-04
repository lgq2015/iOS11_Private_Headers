/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKActivitySummary : NSObject <NSCopying, NSSecureCoding> {
    HKQuantity * _activeEnergyBurned;
    HKQuantity * _activeEnergyBurnedGoal;
    long long  _activitySummaryIndex;
    HKQuantity * _appleExerciseTime;
    HKQuantity * _appleExerciseTimeGoal;
    HKQuantity * _appleStandHours;
    HKQuantity * _appleStandHoursGoal;
    NSDate * _creationDate;
    NSArray * _dailyBriskMinutesStatistics;
    NSArray * _dailyEnergyBurnedStatistics;
    bool  _dataLoading;
    NSDateComponents * _dateComponents;
    HKQuantity * _deepBreathingDuration;
    HKQuantity * _distanceWalkingRunning;
    NSDate * _endDate;
    NSDate * _energyBurnedGoalDate;
    HKQuantity * _flightsClimbed;
    HKQuantity * _pushCount;
    NSDate * _startDate;
    HKQuantity * _stepCount;
    long long  _wheelchairUse;
}

@property (nonatomic, retain) HKQuantity *activeEnergyBurned;
@property (nonatomic, retain) HKQuantity *activeEnergyBurnedGoal;
@property (getter=_activeEnergyCompletionPercentage, nonatomic, readonly) double activeEnergyCompletionPercentage;
@property (getter=_activitySummaryIndex, setter=_setActivitySummaryIndex:, nonatomic) long long activitySummaryIndex;
@property (nonatomic, retain) HKQuantity *appleExerciseTime;
@property (nonatomic, retain) HKQuantity *appleExerciseTimeGoal;
@property (nonatomic, retain) HKQuantity *appleStandHours;
@property (nonatomic, retain) HKQuantity *appleStandHoursGoal;
@property (getter=_creationDate, setter=_setCreationDate:, nonatomic, retain) NSDate *creationDate;
@property (getter=_dailyBriskMinutesStatistics, setter=_setDailyBriskMinutesStatistics:, nonatomic, retain) NSArray *dailyBriskMinutesStatistics;
@property (getter=_dailyEnergyBurnedStatistics, setter=_setDailyEnergyBurnedStatistics:, nonatomic, retain) NSArray *dailyEnergyBurnedStatistics;
@property (getter=_isDataLoading, setter=_setDataLoading:, nonatomic) bool dataLoading;
@property (getter=_deepBreathingDuration, setter=_setDeepBreathingDuration:, nonatomic, retain) HKQuantity *deepBreathingDuration;
@property (nonatomic, retain) HKQuantity *distanceWalkingRunning;
@property (getter=_endDate, setter=_setEndDate:, nonatomic, retain) NSDate *endDate;
@property (getter=_energyBurnedGoalDate, setter=_setEnergyBurnedGoalDate:, nonatomic, retain) NSDate *energyBurnedGoalDate;
@property (getter=_exerciseTimeCompletionPercentage, nonatomic, readonly) double exerciseTimeCompletionPercentage;
@property (getter=_flightsClimbed, setter=_setFlightsClimbed:, nonatomic, retain) HKQuantity *flightsClimbed;
@property (getter=_gregorianDateComponents, setter=_setGregorianDateComponents:, nonatomic, copy) NSDateComponents *gregorianDateComponents;
@property (getter=_hasMoveGoal, nonatomic, readonly) bool hasMoveGoal;
@property (getter=_pushCount, setter=_setPushCount:, nonatomic, retain) HKQuantity *pushCount;
@property (getter=_standHoursCompletionPercentage, nonatomic, readonly) double standHoursCompletionPercentage;
@property (getter=_startDate, setter=_setStartDate:, nonatomic, retain) NSDate *startDate;
@property (nonatomic, retain) HKQuantity *stepCount;
@property (getter=_wheelchairUse, setter=_setWheelchairUse:, nonatomic) long long wheelchairUse;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (id)_highestEnergyBurnedActivityCacheAmongCaches:(id)arg1;
+ (id)_mostSignificantCacheAmongCaches:(id)arg1;
+ (bool)_validateActivitySummaryDateComponents:(id)arg1 errorMessage:(id*)arg2;
+ (bool)_validateActivitySummaryDateComponentsRange:(id)arg1 endDateComponents:(id)arg2 errorMessage:(id*)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (double)_activeEnergyCompletionPercentage;
- (long long)_activitySummaryIndex;
- (bool)_allFieldsAreEqual:(id)arg1;
- (id)_creationDate;
- (id)_dailyBriskMinutesStatistics;
- (id)_dailyEnergyBurnedStatistics;
- (id)_decodeQuantityFromCoder:(id)arg1 forKey:(id)arg2 unit:(id)arg3;
- (id)_deepBreathingDuration;
- (void)_encodeQuantity:(id)arg1 withCoder:(id)arg2 key:(id)arg3 unit:(id)arg4;
- (id)_endDate;
- (id)_energyBurnedGoalDate;
- (double)_exerciseTimeCompletionPercentage;
- (id)_flightsClimbed;
- (id)_gregorianDateComponents;
- (bool)_hasExerciseGoal;
- (bool)_hasMoveGoal;
- (bool)_hasStandHoursGoal;
- (id)_initWithActivityCache:(id)arg1 shouldIncludePrivateProperties:(bool)arg2;
- (bool)_isDataLoading;
- (double)_percentageCompleteWithQuantity:(id)arg1 goalQuantity:(id)arg2 unit:(id)arg3;
- (id)_pushCount;
- (void)_setActivitySummaryIndex:(long long)arg1;
- (void)_setCreationDate:(id)arg1;
- (void)_setDailyBriskMinutesStatistics:(id)arg1;
- (void)_setDailyEnergyBurnedStatistics:(id)arg1;
- (void)_setDataLoading:(bool)arg1;
- (void)_setDeepBreathingDuration:(id)arg1;
- (void)_setEndDate:(id)arg1;
- (void)_setEnergyBurnedGoalDate:(id)arg1;
- (void)_setFlightsClimbed:(id)arg1;
- (void)_setGregorianDateComponents:(id)arg1;
- (void)_setPushCount:(id)arg1;
- (void)_setStartDate:(id)arg1;
- (void)_setWheelchairUse:(long long)arg1;
- (double)_standHoursCompletionPercentage;
- (id)_startDate;
- (bool)_useHourlyGoalComparison;
- (void)_validateQuantityAssignment:(id)arg1 expectedUnit:(id)arg2 propertyName:(id)arg3;
- (long long)_wheelchairUse;
- (id)activeEnergyBurned;
- (id)activeEnergyBurnedGoal;
- (id)appleExerciseTime;
- (id)appleExerciseTimeGoal;
- (id)appleStandHours;
- (id)appleStandHoursGoal;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateComponentsForCalendar:(id)arg1;
- (id)description;
- (id)distanceWalkingRunning;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setActiveEnergyBurned:(id)arg1;
- (void)setActiveEnergyBurnedGoal:(id)arg1;
- (void)setAppleExerciseTime:(id)arg1;
- (void)setAppleExerciseTimeGoal:(id)arg1;
- (void)setAppleStandHours:(id)arg1;
- (void)setAppleStandHoursGoal:(id)arg1;
- (void)setDistanceWalkingRunning:(id)arg1;
- (void)setStepCount:(id)arg1;
- (id)stepCount;

// Image: /System/Library/PrivateFrameworks/ActivitySharing.framework/ActivitySharing

- (id)_activeEnergyStringWithFont:(id)arg1 smallCapsFont:(id)arg2 color:(id)arg3 formattingManager:(id)arg4;
- (bool)_isEmptyExerciseSummary;
- (bool)_isEmptyMoveSummary;
- (id)as_activeEnergyProgressStringWithContext:(id)arg1 formattingManager:(id)arg2;
- (id)as_activeEnergyStringWithContext:(id)arg1 formattingManager:(id)arg2;
- (id)as_distanceStringWithContext:(id)arg1 formattingManager:(id)arg2;
- (id)as_exerciseDurationStringWithContext:(id)arg1;
- (id)as_exerciseProgressStringWithContext:(id)arg1;
- (id)as_movePercentStringWithContext:(id)arg1;
- (id)as_pushesStringWithContext:(id)arg1;
- (id)as_stepsStringWithContext:(id)arg1;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

- (bool)hd_isEnergyBurnedGoalSet;

@end
