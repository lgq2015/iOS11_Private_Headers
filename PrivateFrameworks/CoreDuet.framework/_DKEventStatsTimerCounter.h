/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _DKEventStatsTimerCounter : NSObject <_DKEventStatsCounterInternalProperty> {
    _DKEventStatsCounterInternal * _internal;
}

@property (retain) _DKEventStatsCounterInternal *internal;

+ (id)counterInCollection:(id)arg1 withEventName:(id)arg2;

- (void).cxx_destruct;
- (void)addTimingWithStartDate:(id)arg1 endDate:(id)arg2;
- (void)addTimingWithTimeInterval:(double)arg1;
- (unsigned long long)count;
- (id)eventName;
- (id)internal;
- (void)setInternal:(id)arg1;

@end