/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface _ATXAppDailyDose : NSObject {
    double  _alpha;
    NSMutableDictionary * _appHistoricalDoseMap;
    _ATXAppDailyDoseCurrentStore * _currentDoseStore;
    _ATXDuetHelper * _duetHelper;
    NSDate * _duetHistoryTimestamp;
    NSString * _previousAppId;
    NSDate * _previousAppLaunchDate;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly) double alpha;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;

+ (id)_defaultCurrentDosePath;
+ (id)_defaultHistoricalDosePath;
+ (void)deleteCurrentDoseFile;

- (void).cxx_destruct;
- (void)_asyncStopAppUsageAtDate:(id)arg1 completion:(id /* block */)arg2;
- (void)_backfillAppDurationMapDBForToday;
- (void)_doTrainingOn:(id)arg1 timeZone:(id)arg2 completion:(id /* block */)arg3;
- (bool)_loadHistoricalDoseFrom:(id)arg1;
- (void)_recordAppDurationForApp:(id)arg1 withStartTime:(id)arg2 andEndTime:(id)arg3;
- (void)_writeHistoricalDoseWithCompletion:(id /* block */)arg1;
- (void)addLaunchForBundleId:(id)arg1 date:(id)arg2 completion:(id /* block */)arg3;
- (double)alpha;
- (id)currentDoseStore;
- (double)getCurrentDoseForApp:(id)arg1;
- (id)getDoseForApp:(id)arg1;
- (id)init;
- (id)initWithDuetHelper:(id)arg1;
- (id)initWithDuetHelper:(id)arg1 timeZone:(id)arg2 today:(id)arg3 alpha:(double)arg4 historicalDosePath:(id)arg5 completion:(id /* block */)arg6;
- (id)now;
- (id)previousBundleId;
- (id)queue;
- (void)stopAppUsageAtDate:(id)arg1;
- (id)todayWithTimeZone:(id)arg1;
- (void)train;

@end
