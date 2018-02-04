/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit
 */

@interface CUIKDateDescriptionGenerator : CUIKDescriptionGenerator {
    NSDateFormatter * _abbrevDayFormatter;
    NSDateFormatter * _customFormatter;
    NSDateFormatter * _dayFormatter;
    NSDateFormatter * _dayOfWeekFormatter;
    NSDateFormatter * _fullStyleDateFormatter;
    NSMutableDictionary * _longFormatters;
    NSDateFormatter * _standardTimeFormatter;
    NSDateFormatter * _timeFormatter;
}

+ (id)_dateAfterTodayNextWeekFormatStringForDayOfWeek:(long long)arg1 generateLowercaseString:(bool)arg2;
+ (id)_dateAfterTodayThisWeekFormatStringForDayOfWeek:(long long)arg1 generateLowercaseString:(bool)arg2;
+ (id)_dateBeforeTodayLastWeekFormatStringForDayOfWeek:(long long)arg1 generateLowercaseString:(bool)arg2;
+ (id)_dateBeforeTodayThisWeekFormatStringForDayOfWeek:(long long)arg1 generateLowercaseString:(bool)arg2;
+ (id)sharedGenerator;

- (void).cxx_destruct;
- (id)_customFormatter;
- (id)_dateFormatterWithLongFormat:(id)arg1;
- (id)_dateStringForDate:(id)arg1 allDay:(bool)arg2 shortFormat:(bool)arg3 lowercase:(bool)arg4;
- (void)_invalidateFormatters;
- (id)_stringForDate:(id)arg1 withLongFormatString:(id)arg2 useAbbreviatedFormats:(bool)arg3 lowerCase:(bool)arg4;
- (id)_timeStringForDate:(id)arg1;
- (id)abbreviatedDayFormatter;
- (id)dateStringForDate:(id)arg1 allDay:(bool)arg2 shortFormat:(bool)arg3;
- (id)dateStringForDate:(id)arg1 allDay:(bool)arg2 standalone:(bool)arg3 shortFormat:(bool)arg4;
- (id)dayFormatter;
- (id)dayOfWeekFormatter;
- (void)dealloc;
- (id)formatterForLongFormat:(id)arg1;
- (id)fullStyleDateFormatter;
- (id)init;
- (id)standardTimeFormatter;
- (id)timeFormatter;
- (id)timeStringForDate:(id)arg1 inTimeZone:(id)arg2;

@end
