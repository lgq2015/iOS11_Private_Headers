/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSMetricsEventController : SSMetricsController {
    SSMetricsEventTable * _table;
}

- (void).cxx_destruct;
- (id)_collectUnreportedPIDsFromDatabase:(id)arg1 matchingReportURLString:(id)arg2 since:(long long)arg3 suppressUserInfo:(bool)arg4;
- (int)_maximumUnreportedToSelect;
- (void)_serialQueueInsertEvents:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (bool)deleteEventsInsertedBefore:(long long)arg1;
- (bool)deleteReportedEvents;
- (void)flushUnreportedEventsWithCompletionHandler:(id /* block */)arg1;
- (id)init;
- (bool)insertEventSummaries:(id)arg1 error:(id*)arg2;
- (bool)markEventsAsReported:(id)arg1;
- (id)unreportedEventURLsSince:(long long)arg1;
- (id)unreportedEventsForURL:(id)arg1 since:(long long)arg2 suppressDSID:(bool)arg3;
- (id)unreportedEventsForURL:(id)arg1 since:(long long)arg2 suppressUserInfo:(bool)arg3;

@end
