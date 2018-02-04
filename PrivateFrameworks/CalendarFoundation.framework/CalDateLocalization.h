/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
 */

@interface CalDateLocalization : NSObject

+ (id)ICUFormatForKey:(id)arg1;
+ (id)ICUFormats;
+ (id)_hourSymbolInFormat:(id)arg1;
+ (id)calendarDayFormatter;
+ (struct __CFDateFormatter { }*)dateFormatterForKey:(id)arg1;
+ (id)dateFormatterForKey:(id)arg1 formatString:(id)arg2;
+ (id)dateFormatters;
+ (bool)dateIsWeekend:(id)arg1;
+ (id)formatKeyForHourString;
+ (void)generateAdditionalPrecodedFormatters:(id)arg1;
+ (void)generateDerivedTimeFormats:(id)arg1;
+ (void)generateLocalizedDateTimeFormats;
+ (void)generatePreferedOrders;
+ (void)generateStandardFormatters:(id)arg1;
+ (bool)hasAMPM;
+ (void)initializeFormatters;
+ (id)intervalStringFromDate:(id)arg1 toDate:(id)arg2 withFormat:(id)arg3 options:(int)arg4;
+ (void)rebuildFormatters;
+ (void)rebuildWeekendDays;
+ (void)setupFormat:(id)arg1 forKey:(id)arg2 locale:(id)arg3;
+ (void)setupFormatTemplate:(id)arg1 forKey:(id)arg2 locale:(id)arg3;
+ (void)setupFormatter:(struct __CFDateFormatter { }*)arg1 forKey:(id)arg2;
+ (id)sharedDateFormatter;
+ (bool)shouldUseHourMinutesWithoutAMPMForHours;
+ (id)sizeOrderedAllDateFormatsWithoutYear;
+ (id)sizeOrderedDateFormats;
+ (id)sizeOrderedDateFormatsWithYear;
+ (id)sizeOrderedDateFormatsWithoutYear;
+ (bool)uses24HourTime;
+ (bool)weekdayIsWeekend:(long long)arg1;
+ (id)weekendDays;

@end
