/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKCurrentActivityCacheQuery : HKLegacyQuery {
    NSDateComponents * _statisticsIntervalComponents;
    id /* block */  _updateHandler;
}

@property (nonatomic, copy) id /* block */ updateHandler;

+ (Class)_queryServerDataObjectClass;

- (void).cxx_destruct;
- (void)_queue_cleanupAfterDeactivation;
- (void)_queue_configureQueryServerDataObject:(id)arg1;
- (id /* block */)_queue_errorHandler;
- (bool)_queue_shouldStayAliveAfterInitialResults;
- (void)_queue_validate;
- (void)deliverCurrentActivityCache:(id)arg1 moveStatistics:(id)arg2 exerciseStatistics:(id)arg3 standHoursInfo:(id)arg4 queryUUID:(id)arg5;
- (id)initWithUpdateHandler:(id /* block */)arg1 statisticsIntervalComponents:(id)arg2;
- (void)setUpdateHandler:(id /* block */)arg1;
- (id /* block */)updateHandler;

@end
