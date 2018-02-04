/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLDateRangeFormatter : NSObject {
    NSLocale * __currentLocale;
    NSDateFormatter * __dayOfTheWeekDateFormatter;
    struct UDateIntervalFormat { } * __dayOfTheWeekIntervalFormat;
    struct UDateIntervalFormat { } * __differentMonthDayIntervalFormat;
    struct UDateIntervalFormat { } * __differentMonthDayNoYearIntervalFormat;
    struct UDateIntervalFormat { } * __monthDayIntervalFormat;
    struct UDateIntervalFormat { } * __monthDayNoYearIntervalFormat;
    NSDateFormatter * __relativeDateFormatterDay;
    NSDateFormatter * __sameDayDateFormatter;
    NSDateFormatter * __sameDayNoYearDateFormatter;
    struct UDateIntervalFormat { } * __timeIntervalFormat;
    NSDateFormatter * __yearDateFormatter;
    struct UDateIntervalFormat { } * __yearIntervalFormat;
    bool  _autoUpdateOnChanges;
    bool  _includeDayNumbers;
    bool  _includeDayNumbersWhenMonthsDiffer;
    bool  _timeOnly;
    bool  _useRelativeDayFormatting;
    bool  _useShortDaysInRanges;
    bool  _useShortMonths;
    bool  _useTime;
    bool  _yearOnly;
}

@property (setter=_setCurrentLocale:, nonatomic, retain) NSLocale *_currentLocale;
@property (nonatomic, readonly, retain) NSDateFormatter *_dayOfTheWeekDateFormatter;
@property (nonatomic, readonly) struct UDateIntervalFormat { }*_dayOfTheWeekIntervalFormat;
@property (nonatomic, readonly) struct UDateIntervalFormat { }*_differentMonthDayIntervalFormat;
@property (nonatomic, readonly) struct UDateIntervalFormat { }*_differentMonthDayNoYearIntervalFormat;
@property (nonatomic, readonly) struct UDateIntervalFormat { }*_monthDayIntervalFormat;
@property (nonatomic, readonly) struct UDateIntervalFormat { }*_monthDayNoYearIntervalFormat;
@property (nonatomic, readonly, retain) NSDateFormatter *_relativeDateFormatterDay;
@property (nonatomic, readonly, retain) NSDateFormatter *_sameDayDateFormatter;
@property (nonatomic, readonly, retain) NSDateFormatter *_sameDayNoYearDateFormatter;
@property (nonatomic, readonly) struct UDateIntervalFormat { }*_timeIntervalFormat;
@property (nonatomic, readonly, retain) NSDateFormatter *_yearDateFormatter;
@property (nonatomic, readonly) struct UDateIntervalFormat { }*_yearIntervalFormat;
@property (nonatomic) bool autoUpdateOnChanges;
@property (nonatomic) bool includeDayNumbers;
@property (nonatomic) bool includeDayNumbersWhenMonthsDiffer;
@property (nonatomic) bool timeOnly;
@property (nonatomic) bool useRelativeDayFormatting;
@property (nonatomic) bool useShortDaysInRanges;
@property (nonatomic) bool useShortMonths;
@property (nonatomic) bool useTime;
@property (nonatomic) bool yearOnly;

- (id)_currentLocale;
- (bool)_date:(id)arg1 isWithinDaysInThePast:(long long)arg2;
- (id)_dayDifferentMonthsTemplate;
- (id)_dayOfTheWeekDateFormatter;
- (struct UDateIntervalFormat { }*)_dayOfTheWeekIntervalFormat;
- (id)_dayTemplate;
- (struct UDateIntervalFormat { }*)_differentMonthDayIntervalFormat;
- (struct UDateIntervalFormat { }*)_differentMonthDayNoYearIntervalFormat;
- (id)_formattedDateRangeWithStartDate:(id)arg1 endDate:(id)arg2 currentDate:(id)arg3;
- (id)_formattedDateWithUDateFormatter:(struct UDateIntervalFormat { }*)arg1 startDate:(id)arg2 endDate:(id)arg3;
- (void)_invalidateFormats;
- (void)_localeChanged:(id)arg1;
- (struct UDateIntervalFormat { }*)_monthDayIntervalFormat;
- (struct UDateIntervalFormat { }*)_monthDayNoYearIntervalFormat;
- (struct UDateIntervalFormat { }*)_newUDateFormatterForLocale:(id)arg1 template:(id)arg2;
- (void)_postChangeNotification;
- (id)_relativeDateFormatterDay;
- (void)_releaseUDateFormatter:(struct UDateIntervalFormat { }*)arg1;
- (id)_sameDayDateFormatter;
- (id)_sameDayNoYearDateFormatter;
- (id)_sameMonthTemplate;
- (void)_setCurrentLocale:(id)arg1;
- (void)_significantTimeChange:(id)arg1;
- (struct UDateIntervalFormat { }*)_timeIntervalFormat;
- (id)_yearDateFormatter;
- (struct UDateIntervalFormat { }*)_yearIntervalFormat;
- (bool)autoUpdateOnChanges;
- (void)configureForFormatPreset:(unsigned long long)arg1;
- (void)dealloc;
- (id)formattedDate:(id)arg1;
- (id)formattedDateRangeWithStartDate:(id)arg1 endDate:(id)arg2;
- (bool)includeDayNumbers;
- (bool)includeDayNumbersWhenMonthsDiffer;
- (id)init;
- (void)setAutoUpdateOnChanges:(bool)arg1;
- (void)setIncludeDayNumbers:(bool)arg1;
- (void)setIncludeDayNumbersWhenMonthsDiffer:(bool)arg1;
- (void)setTimeOnly:(bool)arg1;
- (void)setUseRelativeDayFormatting:(bool)arg1;
- (void)setUseShortDaysInRanges:(bool)arg1;
- (void)setUseShortMonths:(bool)arg1;
- (void)setUseTime:(bool)arg1;
- (void)setYearOnly:(bool)arg1;
- (bool)timeOnly;
- (bool)useRelativeDayFormatting;
- (bool)useShortDaysInRanges;
- (bool)useShortMonths;
- (bool)useTime;
- (bool)yearOnly;

@end
