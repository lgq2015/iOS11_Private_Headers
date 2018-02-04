/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface NSCalendar : NSObject <NSCopying, NSSecureCoding>

@property (readonly, copy) NSString *AMSymbol;
@property (readonly, copy) NSString *PMSymbol;
@property (readonly, copy) NSString *calendarIdentifier;
@property (readonly, copy) NSArray *eraSymbols;
@property unsigned long long firstWeekday;
@property (copy) NSLocale *locale;
@property (readonly, copy) NSArray *longEraSymbols;
@property unsigned long long minimumDaysInFirstWeek;
@property (readonly, copy) NSArray *monthSymbols;
@property (readonly, copy) NSArray *quarterSymbols;
@property (readonly, copy) NSArray *shortMonthSymbols;
@property (readonly, copy) NSArray *shortQuarterSymbols;
@property (readonly, copy) NSArray *shortStandaloneMonthSymbols;
@property (readonly, copy) NSArray *shortStandaloneQuarterSymbols;
@property (readonly, copy) NSArray *shortStandaloneWeekdaySymbols;
@property (readonly, copy) NSArray *shortWeekdaySymbols;
@property (readonly, copy) NSArray *standaloneMonthSymbols;
@property (readonly, copy) NSArray *standaloneQuarterSymbols;
@property (readonly, copy) NSArray *standaloneWeekdaySymbols;
@property (copy) NSTimeZone *timeZone;
@property (readonly, copy) NSArray *veryShortMonthSymbols;
@property (readonly, copy) NSArray *veryShortStandaloneMonthSymbols;
@property (readonly, copy) NSArray *veryShortStandaloneWeekdaySymbols;
@property (readonly, copy) NSArray *veryShortWeekdaySymbols;
@property (readonly, copy) NSArray *weekdaySymbols;

// Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)autoupdatingCurrentCalendar;
+ (id)calendarWithIdentifier:(id)arg1;
+ (id)currentCalendar;
+ (void)initialize;
+ (bool)supportsSecureCoding;

- (id)AMSymbol;
- (id)PMSymbol;
- (unsigned char)_addComponents:(double*)arg1 :(unsigned long long)arg2 :(const char *)arg3 :(char *)arg4;
- (unsigned long long)_cfTypeID;
- (unsigned char)_composeAbsoluteTime:(double*)arg1 :(const char *)arg2 :(char *)arg3;
- (id)_copyLocale;
- (id)_copyTimeZone;
- (unsigned char)_decomposeAbsoluteTime:(double)arg1 :(const char *)arg2 :(char *)arg3;
- (unsigned char)_diffComponents:(double)arg1 :(double)arg2 :(unsigned long long)arg3 :(const char *)arg4 :(char *)arg5;
- (id)_gregorianStartDate;
- (struct { long long x1; long long x2; })_maximumRangeOfUnit:(unsigned long long)arg1;
- (struct { long long x1; long long x2; })_minimumRangeOfUnit:(unsigned long long)arg1;
- (long long)_ordinalityOfUnit:(unsigned long long)arg1 inUnit:(unsigned long long)arg2 forAT:(double)arg3;
- (struct { long long x1; long long x2; })_rangeOfUnit:(unsigned long long)arg1 inUnit:(unsigned long long)arg2 forAT:(double)arg3;
- (unsigned char)_rangeOfUnit:(unsigned long long)arg1 startTime:(double*)arg2 interval:(double*)arg3 forAT:(double)arg4;
- (void)_setGregorianStartDate:(id)arg1;
- (id)calendarIdentifier;
- (long long)compareDate:(id)arg1 toDate:(id)arg2 toUnitGranularity:(unsigned long long)arg3;
- (long long)component:(unsigned long long)arg1 fromDate:(id)arg2;
- (id)components:(unsigned long long)arg1 fromDate:(id)arg2;
- (id)components:(unsigned long long)arg1 fromDate:(id)arg2 toDate:(id)arg3 options:(unsigned long long)arg4;
- (id)components:(unsigned long long)arg1 fromDateComponents:(id)arg2 toDateComponents:(id)arg3 options:(unsigned long long)arg4;
- (id)componentsInTimeZone:(id)arg1 fromDate:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)date:(id)arg1 matchesComponents:(id)arg2;
- (id)dateByAddingComponents:(id)arg1 toDate:(id)arg2 options:(unsigned long long)arg3;
- (id)dateByAddingUnit:(unsigned long long)arg1 value:(long long)arg2 toDate:(id)arg3 options:(unsigned long long)arg4;
- (id)dateBySettingHour:(long long)arg1 minute:(long long)arg2 second:(long long)arg3 ofDate:(id)arg4 options:(unsigned long long)arg5;
- (id)dateBySettingUnit:(unsigned long long)arg1 value:(long long)arg2 ofDate:(id)arg3 options:(unsigned long long)arg4;
- (id)dateFromComponents:(id)arg1;
- (id)dateWithEra:(long long)arg1 year:(long long)arg2 month:(long long)arg3 day:(long long)arg4 hour:(long long)arg5 minute:(long long)arg6 second:(long long)arg7 nanosecond:(long long)arg8;
- (id)dateWithEra:(long long)arg1 yearForWeekOfYear:(long long)arg2 weekOfYear:(long long)arg3 weekday:(long long)arg4 hour:(long long)arg5 minute:(long long)arg6 second:(long long)arg7 nanosecond:(long long)arg8;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateDatesStartingAfterDate:(id)arg1 matchingComponents:(id)arg2 options:(unsigned long long)arg3 usingBlock:(id /* block */)arg4;
- (id)eraSymbols;
- (unsigned long long)firstWeekday;
- (void)getEra:(out long long*)arg1 year:(out long long*)arg2 month:(out long long*)arg3 day:(out long long*)arg4 fromDate:(id)arg5;
- (void)getEra:(out long long*)arg1 yearForWeekOfYear:(out long long*)arg2 weekOfYear:(out long long*)arg3 weekday:(out long long*)arg4 fromDate:(id)arg5;
- (void)getHour:(out long long*)arg1 minute:(out long long*)arg2 second:(out long long*)arg3 nanosecond:(out long long*)arg4 fromDate:(id)arg5;
- (id)gregorianStartDate;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCalendarIdentifier:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isDate:(id)arg1 equalToDate:(id)arg2 toUnitGranularity:(unsigned long long)arg3;
- (bool)isDate:(id)arg1 inSameDayAsDate:(id)arg2;
- (bool)isDateInToday:(id)arg1;
- (bool)isDateInTomorrow:(id)arg1;
- (bool)isDateInWeekend:(id)arg1;
- (bool)isDateInYesterday:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)locale;
- (id)longEraSymbols;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })maximumRangeOfUnit:(unsigned long long)arg1;
- (unsigned long long)minimumDaysInFirstWeek;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })minimumRangeOfUnit:(unsigned long long)arg1;
- (id)monthSymbols;
- (id)nextDateAfterDate:(id)arg1 matchingComponents:(id)arg2 options:(unsigned long long)arg3;
- (id)nextDateAfterDate:(id)arg1 matchingHour:(long long)arg2 minute:(long long)arg3 second:(long long)arg4 options:(unsigned long long)arg5;
- (id)nextDateAfterDate:(id)arg1 matchingUnit:(unsigned long long)arg2 value:(long long)arg3 options:(unsigned long long)arg4;
- (bool)nextWeekendStartDate:(out id*)arg1 interval:(out double*)arg2 options:(unsigned long long)arg3 afterDate:(id)arg4;
- (unsigned long long)ordinalityOfUnit:(unsigned long long)arg1 inUnit:(unsigned long long)arg2 forDate:(id)arg3;
- (id)quarterSymbols;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeOfUnit:(unsigned long long)arg1 inUnit:(unsigned long long)arg2 forDate:(id)arg3;
- (bool)rangeOfUnit:(unsigned long long)arg1 startDate:(id*)arg2 interval:(double*)arg3 forDate:(id)arg4;
- (bool)rangeOfWeekendStartDate:(out id*)arg1 interval:(out double*)arg2 containingDate:(id)arg3;
- (void)setFirstWeekday:(unsigned long long)arg1;
- (void)setGregorianStartDate:(id)arg1;
- (void)setLocale:(id)arg1;
- (void)setMinimumDaysInFirstWeek:(unsigned long long)arg1;
- (void)setTimeZone:(id)arg1;
- (id)shortMonthSymbols;
- (id)shortQuarterSymbols;
- (id)shortStandaloneMonthSymbols;
- (id)shortStandaloneQuarterSymbols;
- (id)shortStandaloneWeekdaySymbols;
- (id)shortWeekdaySymbols;
- (id)standaloneMonthSymbols;
- (id)standaloneQuarterSymbols;
- (id)standaloneWeekdaySymbols;
- (id)startOfDayForDate:(id)arg1;
- (id)timeZone;
- (id)veryShortMonthSymbols;
- (id)veryShortStandaloneMonthSymbols;
- (id)veryShortStandaloneWeekdaySymbols;
- (id)veryShortWeekdaySymbols;
- (id)weekdaySymbols;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

- (Class)classForCoder;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (id)hk_canonicalDateOfBirthDateComponentsWithDate:(id)arg1;
+ (id)hk_gregorianCalendar;
+ (id)hk_gregorianCalendarWithCupertinoTimeZone;
+ (id)hk_gregorianCalendarWithLocalTimeZone;
+ (id)hk_gregorianCalendarWithUTCTimeZone;

- (double)_hk_cachedLengthOfUnitForUnitStartDate:(id)arg1 calendarUnit:(unsigned long long)arg2;
- (long long)_hk_cachedValueSinceTimeZoneDependentReferenceDateForUnitStartDate:(id)arg1 calendarUnit:(unsigned long long)arg2;
- (id)hk_activitySummaryDateComponentsFromDate:(id)arg1;
- (id)hk_dateByShiftingFromGregorianCalendarWithUTCTimeZone:(id)arg1;
- (id)hk_dateByShiftingToGregorianCalendarWithUTCTimeZone:(id)arg1;
- (id)hk_dateBySubtractingDays:(unsigned long long)arg1 fromDate:(id)arg2;
- (id)hk_dateFromComponentsWithYear:(long long)arg1 month:(long long)arg2 day:(long long)arg3 hour:(long long)arg4;
- (id)hk_dateFromComponentsWithYear:(long long)arg1 month:(long long)arg2 day:(long long)arg3 hour:(long long)arg4 minute:(long long)arg5;
- (id)hk_dateFromComponentsWithYear:(long long)arg1 month:(long long)arg2 day:(long long)arg3 hour:(long long)arg4 minute:(long long)arg5 second:(long long)arg6;
- (id)hk_dateOfBirthDateComponentsWithDate:(id)arg1;
- (id)hk_dateWithDurationSinceReferenceDate:(double)arg1 calendarUnit:(unsigned long long)arg2;
- (double)hk_durationSinceReferenceDateForDate:(id)arg1 calendarUnit:(unsigned long long)arg2;
- (void)hk_enumerateDateInterval:(id)arg1 byDateComponents:(id)arg2 block:(id /* block */)arg3;
- (id)hk_firstDateWithHour:(long long)arg1 minute:(long long)arg2 afterDate:(id)arg3;
- (double)hk_lengthOfDayForDate:(id)arg1;
- (id)hk_nearestNoonBeforeDateOrEqualToDate:(id)arg1;
- (id)hk_nearestStartOfDayForDate:(id)arg1;
- (id)hk_nearestStartOfMonthForDate:(id)arg1;
- (id)hk_nearestStartOfWeekWithFirstWeekDay:(long long)arg1 date:(id)arg2;
- (id)hk_startOfBedditSleepDayForDate:(id)arg1;
- (id)hk_startOfDateByAddingDays:(long long)arg1 toDate:(id)arg2;
- (id)hk_startOfDateBySubtractingDays:(long long)arg1 fromDate:(id)arg2;
- (id)hk_startOfFitnessWeekBeforeDate:(id)arg1;
- (id)hk_startOfHourForDate:(id)arg1 addingHours:(long long)arg2;
- (id)hk_startOfMinuteForDate:(id)arg1 moduloMinutes:(long long)arg2 addingModuloCount:(long long)arg3;
- (id)hk_startOfMonthForDate:(id)arg1;
- (id)hk_startOfMonthForDate:(id)arg1 addingMonths:(long long)arg2;
- (id)hk_startOfSleepDayForDate:(id)arg1;
- (id)hk_startOfUnitForDate:(id)arg1 calendarUnit:(unsigned long long)arg2;
- (id)hk_startOfWeekWithFirstWeekday:(long long)arg1 beforeDate:(id)arg2 addingWeeks:(long long)arg3;
- (id)hk_startOfYearForDate:(id)arg1 addingYears:(long long)arg2;
- (double)hk_timeIntervalSinceStartOfDayForDate:(id)arg1;
- (id)hk_timeZoneDependentReferenceDate;
- (id)hk_weekendDays;

// Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard

- (id)_dateOnlyComponentsForDate:(id)arg1;
- (id)_timeOnlyComponentsForDate:(id)arg1;
- (unsigned long long)bs_dayPeriodForDate:(id)arg1 inLocale:(id)arg2;
- (bool)date:(id)arg1 isSameDayAsDate:(id)arg2;
- (bool)date:(id)arg1 isSameYearAsDate:(id)arg2;

// Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation

+ (id)CalCalendarWithUnsanitizedCalendarIdentifier:(id)arg1;
+ (id)CalGregorianCalendarForTimeZone:(id)arg1;
+ (id)CalGregorianGMTCalendar;
+ (id)overlayCalendarForCalendarIdentifier:(id)arg1 timezone:(id)arg2;
+ (id)sharedAutoupdatingCurrentCalendar;

- (id)CalDateBySubtractingComponents:(id)arg1 fromDate:(id)arg2;
- (id)CalDateFromComponents:(id)arg1 inTimeZone:(id)arg2;
- (id)CalOccurrencesForBirthday:(id)arg1 inDateRange:(id)arg2;
- (long long)calendarDaysFromDate:(id)arg1 toDate:(id)arg2;
- (id)dateBySanityCheckingDateRoundedToDay:(id)arg1;
- (bool)dateIsFirstOfMonth:(id)arg1;
- (bool)dateIsFirstOfYear:(id)arg1;
- (long long)daysInMonthContainingDate:(id)arg1;
- (long long)daysInWeek;
- (long long)hoursInDay;
- (long long)minutesInHour;
- (long long)monthsInYearForDate:(id)arg1;
- (long long)secondsInDay;
- (long long)secondsInMinute;

// Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit

+ (id)__ck_currentCalendar;
+ (void)__ck_setTestCalendar:(id)arg1;

- (unsigned long long)__ck_unitOfDisambiguityFromDate:(id)arg1 toDate:(id)arg2;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

- (id)hd_predicateForDeletedObjectsCreatedBeforeDate:(id)arg1 minusDays:(unsigned long long)arg2;
- (id)hd_predicateForDeletedObjectsCreatedOnOrAfterDate:(id)arg1 minusDays:(unsigned long long)arg2;
- (id)hd_predicateForSamplesWithTypes:(id)arg1 endingAfterDate:(id)arg2 minusDays:(unsigned long long)arg3;
- (id)hd_predicateForSamplesWithTypes:(id)arg1 endingBeforeDate:(id)arg2 minusDays:(unsigned long long)arg3;

// Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI

- (id)hk_disambiguatedDSTDatesForComponents:(id)arg1;
- (id)hk_startOfTomorrowForDate:(id)arg1;
- (id)hk_yesterdayAtNoonForDate:(id)arg1;

// Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation

- (id)_navigation_dateStringForDate:(id)arg1 withStyle:(unsigned long long)arg2 useRelativeFormatting:(bool)arg3 inTimeZone:(id)arg4;
- (bool)_navigation_isDateInToday:(id)arg1 inTimeZone:(id)arg2;
- (bool)_navigation_isDateInTomorrow:(id)arg1 inTimeZone:(id)arg2;
- (id)_navigation_offsetDate:(id)arg1 toTimeZone:(id)arg2;
- (id)_navigation_relativeDateStringForDate:(id)arg1 context:(long long)arg2 inTimeZone:(id)arg3;
- (id)_navigation_transitRelativeDateStringForDate:(id)arg1 context:(long long)arg2 inTimeZone:(id)arg3 outUsedFormat:(out unsigned long long*)arg4;

@end
