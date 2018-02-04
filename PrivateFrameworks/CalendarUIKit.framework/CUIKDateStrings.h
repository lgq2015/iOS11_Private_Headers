/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit
 */

@interface CUIKDateStrings : NSObject

+ (id)_cachedDateFormatterForDomain:(id)arg1 calendar:(id)arg2 formatterKey:(id)arg3 creationBlock:(id /* block */)arg4;
+ (id)_languageIDfromLocalID:(id)arg1;
+ (id)_newDateFormatterForDateStyle:(unsigned long long)arg1 timeStyle:(unsigned long long)arg2 calendar:(id)arg3;
+ (id)_newDateFormatterForFormat:(id)arg1 calendar:(id)arg2;
+ (id)_newDateFormatterForTemplate:(id)arg1 calendar:(id)arg2;
+ (unsigned long long)_overlayCalendarTypeForCalendarIdentifier:(id)arg1;
+ (id)_overlayDayNumberStringForDate:(id)arg1 day:(long long)arg2 inCalendar:(id)arg3;
+ (id)_pathToStringsFileForCalendar:(id)arg1;
+ (id)_significantLocaleComponents:(id)arg1;
+ (id)_zodiacSymbolForDate:(id)arg1 inCalendar:(id)arg2;
+ (id)cachedDateFormatterForDateStyle:(unsigned long long)arg1 timeStyle:(unsigned long long)arg2 calendar:(id)arg3;
+ (id)cachedDateFormatterForFormat:(id)arg1 calendar:(id)arg2;
+ (id)cachedDateFormatterForTemplate:(id)arg1 calendar:(id)arg2;
+ (id)longStringForDate:(id)arg1 inCalendar:(id)arg2;
+ (id)mediumStringForDate:(id)arg1 inCalendar:(id)arg2;
+ (id)monthDayStringForDate:(id)arg1 inCalendar:(id)arg2;
+ (id)monthStringForDate:(id)arg1 inCalendar:(id)arg2;
+ (id)overlayCalendarPickerDisplayNameForCalendarWithIdentifier:(id)arg1;
+ (id)overlayFirstDayOfLunarMonthLocalizedStringInCalendar:(id)arg1;
+ (id)overlayLocalizedStringForKey:(id)arg1 calendar:(id)arg2;
+ (id)overlayMediumStringForDate:(id)arg1 inCalendar:(id)arg2;
+ (id)overlayShortStringForDate:(id)arg1 inCalendar:(id)arg2;
+ (id)overlayYearStringForDate:(id)arg1 inCalendar:(id)arg2;
+ (bool)supportsOverlayCalendarWithIdentifier:(id)arg1;
+ (id)yearMonthDayStringForDate:(id)arg1 inCalendar:(id)arg2;
+ (id)yearMonthStringForDate:(id)arg1 inCalendar:(id)arg2;
+ (id)yearStringForDate:(id)arg1 inCalendar:(id)arg2;

@end
