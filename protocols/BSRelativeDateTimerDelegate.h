/* made by EzioChiu.
 */

@protocol BSRelativeDateTimerDelegate <NSObject>

@required

- (void)timerFiredWithValue:(unsigned long long)arg1 forResolution:(unsigned long long)arg2 comparedToNow:(long long)arg3;

@end
