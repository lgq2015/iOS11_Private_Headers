/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface _HDAchievementState : NSObject {
    NSCalendar * _calendar;
    long long  _consecutiveGoalsMet;
    long long  _firstCheckedActivitySummaryIndex;
    long long  _lastCheckedActivitySummaryIndex;
    NSDate * _lastPerfectWeekDate;
    long long  _lastResetSummaryIndexForStreaks;
    NSDate * _now;
    NSDate * _startOfToday;
    NSDate * _startOfYesterday;
}

@property (nonatomic, readonly) NSCalendar *calendar;
@property (nonatomic) long long consecutiveGoalsMet;
@property (nonatomic) long long firstCheckedActivitySummaryIndex;
@property (nonatomic) long long lastCheckedActivitySummaryIndex;
@property (nonatomic, retain) NSDate *lastPerfectWeekDate;
@property (nonatomic) long long lastResetSummaryIndexForStreaks;
@property (nonatomic, readonly) NSDate *now;
@property (nonatomic, readonly) NSDate *startOfToday;
@property (nonatomic, readonly) NSDate *startOfYesterday;

- (void).cxx_destruct;
- (id)calendar;
- (long long)consecutiveGoalsMet;
- (long long)firstCheckedActivitySummaryIndex;
- (id)initWithCalendar:(id)arg1 now:(id)arg2;
- (long long)lastCheckedActivitySummaryIndex;
- (id)lastPerfectWeekDate;
- (long long)lastResetSummaryIndexForStreaks;
- (id)now;
- (void)setConsecutiveGoalsMet:(long long)arg1;
- (void)setFirstCheckedActivitySummaryIndex:(long long)arg1;
- (void)setLastCheckedActivitySummaryIndex:(long long)arg1;
- (void)setLastPerfectWeekDate:(id)arg1;
- (void)setLastResetSummaryIndexForStreaks:(long long)arg1;
- (id)startOfToday;
- (id)startOfYesterday;

@end
