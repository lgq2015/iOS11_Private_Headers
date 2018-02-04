/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _DKEventTypeStatsTimerCounter : NSObject <_DKEventStatsCounterInternalProperty> {
    _DKEventStatsCounterInternal * _internal;
}

@property (retain) _DKEventStatsCounterInternal *internal;

+ (id)counterInCollection:(id)arg1 withEventName:(id)arg2 eventType:(id)arg3 eventTypePossibleValues:(id)arg4;

- (void).cxx_destruct;
- (void)addTimingWithStartDate:(id)arg1 endDate:(id)arg2 typeValue:(id)arg3;
- (void)addTimingWithTimeInterval:(double)arg1 typeValue:(id)arg2;
- (unsigned long long)countWithTypeValue:(id)arg1;
- (id)eventName;
- (id)internal;
- (void)setInternal:(id)arg1;

@end
