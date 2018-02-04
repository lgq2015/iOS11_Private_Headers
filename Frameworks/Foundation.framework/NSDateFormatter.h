/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSDateFormatter : NSFormatter <NSObservable, NSObserver> {
    NSMutableDictionary * _attributes;
    long long  _cacheGeneration;
    unsigned long long  _counter;
    struct __CFDateFormatter { } * _formatter;
    NSObject<OS_dispatch_semaphore> * _lock;
}

@property (copy) NSString *AMSymbol;
@property (copy) NSString *PMSymbol;
@property (copy) NSCalendar *calendar;
@property (copy) NSString *dateFormat;
@property unsigned long long dateStyle;
@property (readonly, copy) NSString *debugDescription;
@property (copy) NSDate *defaultDate;
@property (readonly, copy) NSString *description;
@property bool doesRelativeDateFormatting;
@property (copy) NSArray *eraSymbols;
@property unsigned long long formatterBehavior;
@property long long formattingContext;
@property bool generatesCalendarDates;
@property (copy) NSDate *gregorianStartDate;
@property (readonly) unsigned long long hash;
@property (getter=isLenient) bool lenient;
@property (copy) NSLocale *locale;
@property (copy) NSArray *longEraSymbols;
@property (copy) NSArray *monthSymbols;
@property (copy) NSArray *quarterSymbols;
@property (copy) NSArray *shortMonthSymbols;
@property (copy) NSArray *shortQuarterSymbols;
@property (copy) NSArray *shortStandaloneMonthSymbols;
@property (copy) NSArray *shortStandaloneQuarterSymbols;
@property (copy) NSArray *shortStandaloneWeekdaySymbols;
@property (copy) NSArray *shortWeekdaySymbols;
@property (copy) NSArray *standaloneMonthSymbols;
@property (copy) NSArray *standaloneQuarterSymbols;
@property (copy) NSArray *standaloneWeekdaySymbols;
@property (readonly) Class superclass;
@property unsigned long long timeStyle;
@property (copy) NSTimeZone *timeZone;
@property (copy) NSDate *twoDigitStartDate;
@property (copy) NSArray *veryShortMonthSymbols;
@property (copy) NSArray *veryShortStandaloneMonthSymbols;
@property (copy) NSArray *veryShortStandaloneWeekdaySymbols;
@property (copy) NSArray *veryShortWeekdaySymbols;
@property (copy) NSArray *weekdaySymbols;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (id)_componentsFromFormatString:(id)arg1;
+ (id)_formatStringFromComponents:(id)arg1;
+ (id)dateFormatFromTemplate:(id)arg1 options:(unsigned long long)arg2 locale:(id)arg3;
+ (unsigned long long)defaultFormatterBehavior;
+ (void)initialize;
+ (id)localizedStringFromDate:(id)arg1 dateStyle:(unsigned long long)arg2 timeStyle:(unsigned long long)arg3;
+ (void)setDefaultFormatterBehavior:(unsigned long long)arg1;

- (id)AMSymbol;
- (id)PMSymbol;
- (id)_attributedStringWithFieldsFromDate:(id)arg1;
- (long long)_cacheGenerationCount;
- (void)_clearFormatter;
- (id)_dateFormat;
- (id)_getLocaleAlreadyLocked:(bool)arg1;
- (void)_invalidateCache;
- (id)_locale_forOldMethods;
- (bool)_mayDecorateAttributedStringForObjectValue:(id)arg1;
- (void)_regenerateFormatter;
- (void)_regenerateFormatterIfAbsent;
- (void)_reset;
- (void)_setDateFormat:(id)arg1;
- (void)_setDateFormat:(id)arg1 alreadyLocked:(bool)arg2;
- (void)_setIsLenient:(bool)arg1;
- (void)_setUsesCharacterDirection:(bool)arg1;
- (id)_timeZone_forOldMethods;
- (bool)_tracksCacheGenerationCount;
- (bool)_usesCharacterDirection;
- (id)calendar;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateFormat;
- (id)dateFromString:(id)arg1;
- (unsigned long long)dateStyle;
- (void)dealloc;
- (id)defaultDate;
- (bool)doesRelativeDateFormatting;
- (void)encodeWithCoder:(id)arg1;
- (id)eraSymbols;
- (unsigned long long)formatterBehavior;
- (long long)formattingContext;
- (bool)generatesCalendarDates;
- (bool)getObjectValue:(out id*)arg1 forString:(id)arg2 errorDescription:(out id*)arg3;
- (bool)getObjectValue:(out id*)arg1 forString:(id)arg2 range:(inout struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg3 error:(out id*)arg4;
- (id)gregorianStartDate;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isLenient;
- (id)locale;
- (id)longEraSymbols;
- (id)monthSymbols;
- (id)quarterSymbols;
- (void)receiveObservedValue:(id)arg1;
- (void)setAMSymbol:(id)arg1;
- (void)setCalendar:(id)arg1;
- (void)setDateFormat:(id)arg1;
- (void)setDateStyle:(unsigned long long)arg1;
- (void)setDefaultDate:(id)arg1;
- (void)setDoesRelativeDateFormatting:(bool)arg1;
- (void)setEraSymbols:(id)arg1;
- (void)setFormatterBehavior:(unsigned long long)arg1;
- (void)setFormattingContext:(long long)arg1;
- (void)setGeneratesCalendarDates:(bool)arg1;
- (void)setGregorianStartDate:(id)arg1;
- (void)setLenient:(bool)arg1;
- (void)setLocale:(id)arg1;
- (void)setLocalizedDateFormatFromTemplate:(id)arg1;
- (void)setLongEraSymbols:(id)arg1;
- (void)setMonthSymbols:(id)arg1;
- (void)setPMSymbol:(id)arg1;
- (void)setQuarterSymbols:(id)arg1;
- (void)setShortMonthSymbols:(id)arg1;
- (void)setShortQuarterSymbols:(id)arg1;
- (void)setShortStandaloneMonthSymbols:(id)arg1;
- (void)setShortStandaloneQuarterSymbols:(id)arg1;
- (void)setShortStandaloneWeekdaySymbols:(id)arg1;
- (void)setShortWeekdaySymbols:(id)arg1;
- (void)setStandaloneMonthSymbols:(id)arg1;
- (void)setStandaloneQuarterSymbols:(id)arg1;
- (void)setStandaloneWeekdaySymbols:(id)arg1;
- (void)setTimeStyle:(unsigned long long)arg1;
- (void)setTimeZone:(id)arg1;
- (void)setTwoDigitStartDate:(id)arg1;
- (void)setVeryShortMonthSymbols:(id)arg1;
- (void)setVeryShortStandaloneMonthSymbols:(id)arg1;
- (void)setVeryShortStandaloneWeekdaySymbols:(id)arg1;
- (void)setVeryShortWeekdaySymbols:(id)arg1;
- (void)setWeekdaySymbols:(id)arg1;
- (id)shortMonthSymbols;
- (id)shortQuarterSymbols;
- (id)shortStandaloneMonthSymbols;
- (id)shortStandaloneQuarterSymbols;
- (id)shortStandaloneWeekdaySymbols;
- (id)shortWeekdaySymbols;
- (id)standaloneMonthSymbols;
- (id)standaloneQuarterSymbols;
- (id)standaloneWeekdaySymbols;
- (id)stringForObjectValue:(id)arg1;
- (id)stringFromDate:(id)arg1;
- (unsigned long long)timeStyle;
- (id)timeZone;
- (id)twoDigitStartDate;
- (id)veryShortMonthSymbols;
- (id)veryShortStandaloneMonthSymbols;
- (id)veryShortStandaloneWeekdaySymbols;
- (id)veryShortWeekdaySymbols;
- (id)weekdaySymbols;

// Image: /System/Library/Frameworks/MapKit.framework/MapKit

- (id)_mapkit_roundedPastUnitsStringFromDate:(id)arg1;

// Image: /System/Library/Frameworks/MessageUI.framework/MessageUI

+ (id)mf_formatDate:(id)arg1 shortStyle:(bool)arg2;

// Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI

+ (id)monthYearStringFromDate:(id)arg1 calendar:(id)arg2;

// Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation

+ (id)CalSharedDateFormatter;

// Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI

- (void)fu_observeTimeZoneAndLocaleChanges;

// Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI

- (id)hk_stringWithAMPMSpaceRemovedFromDate:(id)arg1;

// Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer

- (id)stringFromDate:(id)arg1 withRelativeToTimeZone:(id)arg2;

// Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation

+ (id)_navigation_localizedTimestampStringForDepartureArrivalDate:(id)arg1 inTimeZone:(id)arg2 canIncludeDate:(bool)arg3;
+ (id)_navigation_localizedTimestampStringForDepartureArrivalDate:(id)arg1 inTimeZone:(id)arg2 canIncludeDate:(bool)arg3 relativeToTimeZone:(id)arg4;
+ (id)_navigation_localizedTimestampStringForDepartureArrivalDate:(id)arg1 inTimeZone:(id)arg2 canIncludeDate:(bool)arg3 showTimeZone:(bool)arg4 useShortFormat:(bool)arg5;
+ (id)_navigation_localizedTimestampStringForDepartureArrivalDate:(id)arg1 inTimeZone:(id)arg2 canIncludeDate:(bool)arg3 suppressTimeZoneDisplay:(bool)arg4 useShortFormat:(bool)arg5;
+ (id)_timestampFormatterForTimeZone:(id)arg1 displayTimeZone:(bool)arg2;

// Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore

+ (id)dateFormatterWithFormat:(id)arg1 forReuse:(bool)arg2;
+ (id)dateFormatterWithFormat:(id)arg1 localeIdentifier:(id)arg2 forReuse:(bool)arg3;
+ (id)dateFormatterWithFormat:(id)arg1 localeIdentifier:(id)arg2 timezone:(id)arg3 forReuse:(bool)arg4;
+ (id)dateFormatterWithFormat:(id)arg1 timezone:(id)arg2 forReuse:(bool)arg3;

- (id)initWithFormat:(id)arg1 localeIdentifier:(id)arg2;

// Image: /System/Library/PrivateFrameworks/Silex.framework/Silex

+ (id)dateFormatterWithFormat:(id)arg1;

@end
