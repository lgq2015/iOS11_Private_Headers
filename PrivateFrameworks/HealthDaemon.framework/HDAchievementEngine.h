/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDAchievementEngine : NSObject {
    HDAchievementDefinitions * _achievementDefinitions;
    NSCalendar * _cachedCalendar;
    HDAchievementDataStore * _dataStore;
    <HDAchievementEngineDelegate> * _delegate;
    NSCalendar * _fixedCalendar;
    NSDate * _fixedNowDate;
}

@property (nonatomic, readonly) HDAchievementDefinitions *achievementDefinitions;
@property (nonatomic) HDAchievementDataStore *dataStore;
@property (nonatomic) <HDAchievementEngineDelegate> *delegate;
@property (nonatomic, retain) NSCalendar *fixedCalendar;
@property (nonatomic, retain) NSDate *fixedNowDate;

+ (long long)_differenceInDaysBetweenActivitySummaryIndex:(long long)arg1 andIndex:(long long)arg2 inCalendar:(id)arg3;
+ (bool)_isCompleteWithNumberOfWeeks:(unsigned long long)arg1 dateToday:(id)arg2 consecutiveCompleteDays:(unsigned long long)arg3 inCalendar:(id)arg4;

- (void).cxx_destruct;
- (id)_calendar;
- (id)_generateAchievementWithDefinition:(id)arg1 environment:(id)arg2;
- (id)_now;
- (void)_runForChangedDatabase;
- (id)achievementDefinitions;
- (id)dataStore;
- (id)delegate;
- (id)fixedCalendar;
- (id)fixedNowDate;
- (bool)runDatabaseIdentifierCheckWithCurrentDatabaseIdentifier:(id)arg1 identifierChanged:(bool*)arg2 error:(id*)arg3;
- (unsigned long long)runForNewCombinedActivityData;
- (unsigned long long)runForNewExerciseData;
- (unsigned long long)runForNewMoveData;
- (unsigned long long)runForNewStandData;
- (unsigned long long)runForNewWorkouts;
- (void)runForStepAchievements;
- (void)runForTriggers:(unsigned long long)arg1 withEnvironment:(id)arg2;
- (void)setDataStore:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFixedCalendar:(id)arg1;
- (void)setFixedNowDate:(id)arg1;
- (void)systemTimeZoneDidChange;

@end
