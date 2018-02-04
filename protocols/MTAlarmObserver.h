/* made by EzioChiu.
 */

@protocol MTAlarmObserver <NSObject>

@required

- (void)source:(id <MTSource>)arg1 didAddAlarms:(NSArray *)arg2;
- (void)source:(id <MTSource>)arg1 didChangeNextAlarm:(MTAlarm *)arg2;
- (void)source:(id <MTSource>)arg1 didDismissAlarm:(MTAlarm *)arg2 dismissAction:(unsigned long long)arg3;
- (void)source:(id <MTSource>)arg1 didFireAlarm:(MTAlarm *)arg2;
- (void)source:(id <MTSource>)arg1 didRemoveAlarms:(NSArray *)arg2;
- (void)source:(id <MTSource>)arg1 didSnoozeAlarm:(MTAlarm *)arg2 snoozeAction:(unsigned long long)arg3;
- (void)source:(id <MTSource>)arg1 didUpdateAlarms:(NSArray *)arg2;

@end
