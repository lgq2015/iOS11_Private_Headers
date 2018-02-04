/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDDemoDataGeneratorState : NSObject <NSSecureCoding> {
    bool  _createdFromNSKeyedUnarchiver;
    long long  _currentDay;
    double  _currentTime;
    double  _endTime;
    bool  _finished;
    bool  _firstRun;
    NSDate * _firstSampleDate;
    NSDate * _lastRunDate;
    NSDate * _lastSampleDate;
    double  _startTime;
    HDDemoDataGeneratorWorkoutConfiguration * _workoutConfiguration;
}

@property (nonatomic, readonly) long long calendarDay;
@property (nonatomic, readonly) NSDate *currentDate;
@property (nonatomic) long long currentDay;
@property (nonatomic) double currentTime;
@property (getter=isCycling, nonatomic, readonly) bool cycling;
@property (getter=isDoingElliptical, nonatomic, readonly) bool doingElliptical;
@property (getter=isDoingHIIT, nonatomic, readonly) bool doingHIIT;
@property (getter=isDoingYoga, nonatomic, readonly) bool doingYoga;
@property (nonatomic) double endTime;
@property (getter=isExercising, nonatomic, readonly) bool exercising;
@property (getter=isFinished, nonatomic) bool finished;
@property (getter=isFirstRun, nonatomic) bool firstRun;
@property (nonatomic, retain) NSDate *firstSampleDate;
@property (nonatomic, retain) NSDate *lastRunDate;
@property (nonatomic, retain) NSDate *lastSampleDate;
@property (getter=isRunning, nonatomic, readonly) bool running;
@property (nonatomic) double startTime;
@property (getter=isSwimming, nonatomic, readonly) bool swimming;
@property (getter=isWalking, nonatomic, readonly) bool walking;
@property (nonatomic, retain) HDDemoDataGeneratorWorkoutConfiguration *workoutConfiguration;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)calendarDay;
- (bool)createdFromNSKeyedUnarchiver;
- (id)currentDate;
- (long long)currentDay;
- (double)currentTime;
- (void)encodeWithCoder:(id)arg1;
- (double)endTime;
- (id)firstSampleDate;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isCycling;
- (bool)isDoingElliptical;
- (bool)isDoingHIIT;
- (bool)isDoingYoga;
- (bool)isExercising;
- (bool)isFinished;
- (bool)isFirstRun;
- (bool)isRunning;
- (bool)isSwimming;
- (bool)isWalking;
- (id)lastRunDate;
- (id)lastSampleDate;
- (void)setCurrentDay:(long long)arg1;
- (void)setCurrentTime:(double)arg1;
- (void)setEndTime:(double)arg1;
- (void)setFinished:(bool)arg1;
- (void)setFirstRun:(bool)arg1;
- (void)setFirstSampleDate:(id)arg1;
- (void)setLastRunDate:(id)arg1;
- (void)setLastSampleDate:(id)arg1;
- (void)setStartTime:(double)arg1;
- (void)setWorkoutConfiguration:(id)arg1;
- (double)startTime;
- (id)workoutConfiguration;

@end
