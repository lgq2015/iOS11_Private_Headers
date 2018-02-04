/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PBBridgeSupport.framework/PBBridgeSupport
 */

@interface PBBridgeResponsePerformanceMonitor : NSObject {
    NSMutableString * _logBuffer;
    NSMutableDictionary * _macroActivities;
    NSMutableArray * _measurements;
    NSMutableDictionary * _milestones;
    NSDictionary * _remoteMacroActivities;
    NSArray * _remoteMeasurements;
    NSDictionary * _remoteMilestones;
}

@property (nonatomic, retain) NSMutableString *logBuffer;
@property (nonatomic, readonly) NSMutableDictionary *macroActivities;
@property (nonatomic, readonly) NSMutableArray *measurements;
@property (nonatomic, readonly) NSMutableDictionary *milestones;
@property (nonatomic, retain) NSDictionary *remoteMacroActivities;
@property (nonatomic, retain) NSArray *remoteMeasurements;
@property (nonatomic, retain) NSDictionary *remoteMilestones;

+ (id)shareMonitor;

- (void).cxx_destruct;
- (void)_logLocalMeasurements:(bool)arg1;
- (void)_logMacroActivitiesLocal:(bool)arg1;
- (void)_logMeasurements;
- (void)_logMilestones;
- (void)addMeasurement:(double)arg1 timeSent:(double)arg2 activityType:(id)arg3 activityIdentifier:(id)arg4;
- (void)addMilestone:(double)arg1 activityType:(id)arg2 activityIdentifier:(id)arg3;
- (void)beginMacroActivity:(id)arg1 beginTime:(double)arg2;
- (void)beginMonitorTransaction;
- (double)endMacroActivity:(id)arg1 beginTime:(double)arg2;
- (void)endMonitorTransaction;
- (id)logBuffer;
- (id)macroActivities;
- (id)measurements;
- (id)milestones;
- (id)remoteMacroActivities;
- (id)remoteMeasurements;
- (id)remoteMilestones;
- (void)setLogBuffer:(id)arg1;
- (void)setRemoteMacroActivities:(id)arg1;
- (void)setRemoteMeasurements:(id)arg1;
- (void)setRemoteMilestones:(id)arg1;

@end
