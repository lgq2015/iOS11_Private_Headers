/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKTimelineEntryModelCache : NSObject {
    NSDate * _cacheEndDate;
    NSDate * _cacheStartDate;
    NSMutableArray * _cachedEntryModels;
    <NTKTimelineEntryModelCacheDataSource> * _dataSource;
}

@property (nonatomic, readonly) NSDate *cacheEndDate;
@property (nonatomic, readonly) NSDate *cacheStartDate;
@property (nonatomic) <NTKTimelineEntryModelCacheDataSource> *dataSource;

+ (id)_endOfDayForDate:(id)arg1;
+ (id)_startOfDayAfterDate:(id)arg1;
+ (id)_startOfDayBeforeDate:(id)arg1;
+ (id)_startOfDayForDate:(id)arg1;

- (void).cxx_destruct;
- (id)_cachedEntryModelAfterDate:(id)arg1 limit:(unsigned long long)arg2;
- (id)_cachedEntryModelBeforeDate:(id)arg1 limit:(unsigned long long)arg2;
- (id)_cachedEntryModelForDate:(id)arg1;
- (void)_extendCacheTowardDate:(id)arg1;
- (id)cacheEndDate;
- (id)cacheStartDate;
- (id)calendar;
- (id)dataSource;
- (id)entryModelForDate:(id)arg1;
- (id)entryModelsAfterDate:(id)arg1 limit:(unsigned long long)arg2;
- (id)entryModelsBeforeDate:(id)arg1 limit:(unsigned long long)arg2;
- (bool)hasEntryModelForDate:(id)arg1;
- (id)init;
- (void)invalidate;
- (void)setDataSource:(id)arg1;

@end
