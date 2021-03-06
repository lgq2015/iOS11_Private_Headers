/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
 */

@interface PMLAWDSessionTrackerMock : PMLAWDSessionTracker {
    NSMutableArray * _internalTrackedSessions;
    NSArray * _trackedSessions;
}

@property (readonly) NSArray *trackedSessions;

- (void).cxx_destruct;
- (void)clearTrackedSessions;
- (id)initWithModel:(id)arg1;
- (void)postMetricId:(unsigned int)arg1 message:(id)arg2;
- (id)trackedSessions;

@end
