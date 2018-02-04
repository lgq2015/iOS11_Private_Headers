/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface TodayInvalidationTimerWrapper : NSObject {
    NSTimer * _tzSupportDayRolloverTimer;
}

- (void).cxx_destruct;
- (void)_killTimeZoneTimer;
- (void)_setupTimeZoneTimer;
- (void)dealloc;
- (id)init;
- (void)invalidateTodayAndNotifyIfChanged;
- (bool)todayChangedAfterInvalidation;

@end
