/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProactiveExperts.framework/ProactiveExperts
 */

@interface PEXConnectionsExpertServant : PEXServant {
    PEXConnectionsCalendarSource * _calendarSource;
    PEXConnectionsDuetSource * _duetSource;
    NSString * _identifier;
    PEXConnectionsMetricsTracker * _metricsTracker;
    PEXConnectionsParameters * _parameters;
    PEXConnectionsPasteboardSource * _pasteboardSource;
}

- (void).cxx_destruct;
- (id)_locationForCriteria:(id)arg1 limit:(unsigned long long)arg2 consumer:(unsigned long long)arg3 category:(unsigned long long)arg4;
- (id)calendarSource;
- (id)cutoffActivityTime;
- (id)cutoffCalendarEventTime;
- (id)cutoffLinguisticTriggerTime;
- (id)cutoffLocationAppLastUseTime;
- (id)cutoffPasteboardItemTime;
- (id)duetSource;
- (id)init;
- (unsigned char)loadNamesWithNamedEntityHandler:(id /* block */)arg1 contactNameItemHandler:(id /* block */)arg2 detectedSince:(id)arg3;
- (unsigned char)loadRecentNamesWithNamedEntityHandler:(id /* block */)arg1 contactNameItemHandler:(id /* block */)arg2 source:(unsigned char)arg3 objects:(id)arg4;
- (id)nameItemsWithLimit:(unsigned long long)arg1;
- (id)parameters;
- (id)pasteboardSource;
- (id)predictionForCriteria:(id)arg1 limit:(unsigned long long)arg2;
- (id)predictionForCriteria:(id)arg1 limit:(unsigned long long)arg2 consumer:(unsigned long long)arg3 category:(unsigned long long)arg4;
- (id)quickTypeItemsForCriteria:(id)arg1 limit:(unsigned long long)arg2;
- (id)recentLocationItemWithCriteria:(id)arg1 consumer:(unsigned long long)arg2 category:(unsigned long long)arg3 limit:(unsigned long long)arg4 customCutoffTime:(id)arg5;

@end
