/* made by EzioChiu.
 */

@protocol MTLCommandQueueSPI <MTLCommandQueue>

@required

- (int)backgroundTrackingPID;
- (bool)executionEnabled;
- (void)finish;
- (unsigned long long)getBackgroundGPUPriority;
- (unsigned long long)getGPUPriority;
- (bool)isOpenGLQueue;
- (bool)isProfilingEnabled;
- (unsigned long long)maxCommandBufferCount;
- (unsigned long long)qosClass;
- (long long)qosRelativePriority;
- (bool)setBackgroundGPUPriority:(unsigned long long)arg1;
- (bool)setBackgroundGPUPriority:(unsigned long long)arg1 offset:(unsigned short)arg2;
- (void)setBackgroundTrackingPID:(int)arg1;
- (void)setCompletionQueue:(NSObject<OS_dispatch_queue> *)arg1;
- (void)setExecutionEnabled:(bool)arg1;
- (bool)setGPUPriority:(unsigned long long)arg1;
- (bool)setGPUPriority:(unsigned long long)arg1 offset:(unsigned short)arg2;
- (void)setIsOpenGLQueue:(bool)arg1;
- (void)setProfilingEnabled:(bool)arg1;
- (void)setSkipRender:(bool)arg1;
- (void)setSubmissionQueue:(NSObject<OS_dispatch_queue> *)arg1;
- (bool)skipRender;

@optional

- (void)addPerfSampleHandler:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <MTLCommandBuffer> *, NSData *, unsigned long long, void*
- (NSArray *)availableCounters;
- (NSDictionary *)counterInfo;
- (NSArray *)getRequestedCounters;
- (unsigned long long)getStatLocations;
- (unsigned long long)getStatOptions;
- (bool)isStatEnabled;
- (int)requestCounters:(NSArray *)arg1;
- (int)requestCounters:(NSArray *)arg1 withIndex:(unsigned long long)arg2;
- (void)setStatEnabled:(bool)arg1;
- (void)setStatLocations:(unsigned long long)arg1;
- (void)setStatOptions:(unsigned long long)arg1;
- (NSArray *)subdivideCounterList:(NSArray *)arg1;

@end
