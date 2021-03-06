/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit
 */

@interface CUIKRecurrenceRuleDescriptionGenerator : CUIKDescriptionGenerator

+ (id)_andDaysOfWeekString:(id)arg1;
+ (id)_customDayCombinationDescription:(id)arg1;
+ (id)_dayOfMonthAsString:(long long)arg1;
+ (id)_daysOfWeek;
+ (id)_numberedWeekDayString:(id)arg1;
+ (id)_orDaysOfWeekString:(id)arg1;
+ (id)_weekDayPositionAsString:(long long)arg1;
+ (long long)daysTypeForDayArray:(id)arg1;

- (id)naturalLanguageDescriptionForRecurrenceRule:(id)arg1 withStartDate:(id)arg2;

@end
