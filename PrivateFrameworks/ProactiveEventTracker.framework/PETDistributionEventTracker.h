/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProactiveEventTracker.framework/ProactiveEventTracker
 */

@interface PETDistributionEventTracker : PETEventTracker {
    NSString * _event;
}

@property (nonatomic, readonly) NSString *event;

- (void).cxx_destruct;
- (void)_logValue:(id)arg1 forEvent:(id)arg2 stringifiedProperties:(id)arg3 metaData:(id)arg4;
- (id)event;
- (id)initWithFeatureId:(id)arg1 event:(id)arg2 registerProperties:(id)arg3;
- (id)initWithFeatureId:(id)arg1 event:(id)arg2 registerProperties:(id)arg3 propertySubsets:(id)arg4;
- (void)trackEventWithPropertyValues:(id)arg1 value:(double)arg2;

@end
