/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCoachingDiagnosticData : NSObject {
    HKCategorySample * _coachingEventSample;
    NSArray * _items;
}

@property (nonatomic, retain) HKCategorySample *coachingEventSample;
@property (nonatomic, readonly) NSArray *items;

- (void).cxx_destruct;
- (id)coachingEventSample;
- (id)init;
- (id)itemForInterval:(unsigned long long)arg1 future:(bool)arg2;
- (id)items;
- (void)setCoachingEventSample:(id)arg1;

@end
