/* made by EzioChiu.
 */

@protocol GEODataSessionTaskRules <NSObject>

@required

- (void)addCompletedSubtaskObserver:(id <GEODataSessionTaskRulesObserver>)arg1;
- (<GEODataSessionTask> *)completedSubtaskForDataTask:(id <GEODataSessionTask>)arg1;
- (void)dataTask:(id <GEODataSessionTask>)arg1 didCompleteSubtask:(id <GEODataSessionTask>)arg2;
- (bool)dataTask:(id <GEODataSessionTask>)arg1 shouldCreateSubtaskOfType:(unsigned long long)arg2 forRequest:(GEODataRequest *)arg3;
- (bool)dataTask:(id <GEODataSessionTask>)arg1 shouldStartSubtask:(id <GEODataSessionTask>)arg2 ofType:(unsigned long long)arg3;
- (void)removeCompletedSubtaskObserver:(id <GEODataSessionTaskRulesObserver>)arg1;

@end
