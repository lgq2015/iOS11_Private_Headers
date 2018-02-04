/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
 */

@interface CalTimeIntervalLocalization : NSObject

+ (void)_calculateDurations:(id)arg1 timeUnits:(id)arg2 forDuration:(double)arg3 allDay:(bool)arg4 abbreviate:(bool)arg5;
+ (void)_calculateDurations:(id)arg1 timeUnits:(id)arg2 forDuration:(double)arg3 allDay:(bool)arg4 dayDuration:(id*)arg5 hourDuration:(id*)arg6 minuteDuration:(id*)arg7 secondDuration:(id*)arg8 abbreviate:(bool)arg9;
+ (id)_localizedStringWithTimeString:(id)arg1 rawDuration:(double)arg2 options:(unsigned long long)arg3;
+ (id)_localizedTimeStringForAllDayEventDuration:(double)arg1 includeAlert:(bool)arg2;
+ (id)_localizedTimeStringForTimedEventDuration:(double)arg1 abbreviate:(bool)arg2;
+ (id)_stringWithDurations:(id)arg1 timeUnits:(id)arg2;
+ (id)localizedStringForInterval:(double)arg1 withOptions:(unsigned long long)arg2;

@end
