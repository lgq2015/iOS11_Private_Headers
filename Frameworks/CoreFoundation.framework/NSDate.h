/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface NSDate : NSObject <AFSecurityDigestibleChunksProviding, CKLParsedObject, CKRecordValue, FCKeyValueStoreCoding, HFPropertyListConvertible, NSCopying, NSSecureCoding, PQLValuable, TSCHChartGridValue>

@property (nonatomic, readonly) NSString *briefFormattedDate;
@property (nonatomic, readonly) int chartGridValueType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool fc_isWeekend;
@property (readonly) double fc_timeIntervalUntilNow;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isToday;
@property (nonatomic, readonly) bool isYesterday;
@property (nonatomic, readonly) NSString *shortFormattedDate;
@property (readonly) Class superclass;
@property (readonly) double timeIntervalSinceReferenceDate;
@property (nonatomic, readonly) struct { unsigned short x1; unsigned short x2; } tsu_DOSTime;

// Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)date;
+ (id)dateWithDate:(id)arg1;
+ (id)dateWithString:(id)arg1;
+ (id)dateWithTimeInterval:(double)arg1 sinceDate:(id)arg2;
+ (id)dateWithTimeIntervalSince1970:(double)arg1;
+ (id)dateWithTimeIntervalSinceNow:(double)arg1;
+ (id)dateWithTimeIntervalSinceReferenceDate:(double)arg1;
+ (id)distantFuture;
+ (id)distantPast;
+ (bool)supportsSecureCoding;
+ (double)timeIntervalSinceReferenceDate;

- (unsigned long long)_cfTypeID;
- (id)addTimeInterval:(double)arg1;
- (long long)compare:(id)arg1;
- (long long)compare:(id)arg1 toUnitGranularity:(unsigned long long)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateByAddingTimeInterval:(double)arg1;
- (id)description;
- (id)descriptionWithLocale:(id)arg1;
- (id)earlierDate:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDate:(id)arg1;
- (id)initWithString:(id)arg1;
- (id)initWithTimeInterval:(double)arg1 sinceDate:(id)arg2;
- (id)initWithTimeIntervalSince1970:(double)arg1;
- (id)initWithTimeIntervalSinceNow:(double)arg1;
- (id)initWithTimeIntervalSinceReferenceDate:(double)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqual:(id)arg1 toUnitGranularity:(unsigned long long)arg2;
- (bool)isEqualToDate:(id)arg1;
- (bool)isInSameDayAsDate:(id)arg1;
- (bool)isInToday;
- (bool)isInTomorrow;
- (bool)isInYesterday;
- (bool)isNSDate__;
- (id)laterDate:(id)arg1;
- (double)timeIntervalSince1970;
- (double)timeIntervalSinceDate:(id)arg1;
- (double)timeIntervalSinceNow;
- (double)timeIntervalSinceReferenceDate;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (id)dateWithNaturalLanguageString:(id)arg1;
+ (id)dateWithNaturalLanguageString:(id)arg1 date:(id)arg2 locale:(id)arg3;
+ (id)dateWithNaturalLanguageString:(id)arg1 locale:(id)arg2;

- (id)_web_RFC1123DateString;
- (long long)_web_compareDay:(id)arg1;
- (bool)_web_isToday;
- (Class)classForCoder;
- (id)dateWithCalendarFormat:(id)arg1 timeZone:(id)arg2;
- (id)descriptionWithCalendarFormat:(id)arg1 timeZone:(id)arg2 locale:(id)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)replacementObjectForPortCoder:(id)arg1;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

- (id)asNumber;
- (id)hk_convertedToLocalTimeZone;
- (bool)hk_isAfterDate:(id)arg1;
- (bool)hk_isAfterOrEqualToDate:(id)arg1;
- (bool)hk_isBeforeDate:(id)arg1;
- (bool)hk_isBeforeOrEqualToDate:(id)arg1;
- (id)hk_nearestDate:(id)arg1;
- (id)hk_rfc3339String;
- (bool)isEqualToDateToSecondAccuracy:(id)arg1;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

+ (unsigned char)dayOfTheWeek;
+ (id)iso8601dateFromString:(id)arg1;

// Image: /System/Library/Frameworks/ReplayKit.framework/ReplayKit

+ (id)_srGetStringFromDate:(id)arg1;

// Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount

+ (id)vs_currentDate;
+ (id)vs_dateAccessQueue;
+ (id)vs_recordedDates;
+ (void)vs_startRecordingDates;
+ (id)vs_stopRecordingDates;

// Image: /System/Library/PrivateFrameworks/AdCore.framework/AdCore

+ (id)dateFromServerTime:(double)arg1;

- (bool)isAfterDate:(id)arg1;
- (bool)isBeforeDate:(id)arg1;
- (double)toServerTime;

// Image: /System/Library/PrivateFrameworks/AggregateDictionary.framework/AggregateDictionary

+ (id)dateForDaysSince1970:(int)arg1;
+ (int)daysSince1970;

- (int)daysSince1970;

// Image: /System/Library/PrivateFrameworks/AggregateDictionaryHistory.framework/AggregateDictionaryHistory

+ (id)dateForDaysSince1970:(int)arg1;
+ (int)daysSince1970;

// Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal

- (bool)isAfterDate:(id)arg1;
- (bool)isBeforeDate:(id)arg1;
- (bool)isInclusiveBetweenDate:(id)arg1 andDate:(id)arg2;

// Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI

- (id)aaui_dayComponentsWithCalendar:(id)arg1;
- (bool)aaui_isTodayWithCalendar:(id)arg1;

// Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices

- (bool)_af_isSameDayAsDate:(id)arg1;
- (void)af_enumerateDigestibleChunksWithOptions:(unsigned long long)arg1 usingBlock:(id /* block */)arg2;
- (bool)af_isToday;
- (bool)af_isTomorrow;

// Image: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI

- (id)_afui_dateStringUsingCurrentLocaleFromTemplate:(id)arg1;
- (bool)_afui_isSameDayAsDate:(id)arg1;
- (bool)afui_isToday;
- (bool)afui_isTomorrow;
- (id)afui_longYearString;

// Image: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit

- (id)ak_serverFriendlyString;

// Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard

- (id)bs_dateByAddingDays:(long long)arg1;
- (bool)isAfterDate:(id)arg1;
- (bool)isBeforeDate:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation

+ (id)CalDateForBeginningOfToday;
+ (id)CalDateForBeginningOfTomorrow;
+ (id)CalDateForEndOfToday;
+ (id)CalDateForEndOfTomorrow;
+ (id)CalDateForNow;
+ (id)CalSimulatedDateForNow;
+ (id)_nowComponents;
+ (id)_todayComponents;
+ (id)_tomorrowComponents;
+ (id)dateWithDatePartFromDate:(id)arg1 timePartFromDate:(id)arg2 inCalendar:(id)arg3;
+ (long long)daysSpannedFromStartDate:(id)arg1 toEndDate:(id)arg2 allDay:(bool)arg3 inCalendar:(id)arg4;
+ (id)nextRoundedHour;

- (id)CalDateRoundedDownToNearestMinuteIncrement:(long long)arg1 inCalendar:(id)arg2;
- (bool)CalIsAfterDate:(id)arg1;
- (bool)CalIsAfterOrSameAsDate:(id)arg1;
- (bool)CalIsBeforeDate:(id)arg1;
- (bool)CalIsBeforeOrSameAsDate:(id)arg1;
- (bool)CalIsBetweenStartDate:(id)arg1 endDate:(id)arg2;
- (void)_performBlockBehindDispatchSync:(id /* block */)arg1 inTimeZone:(id)arg2;
- (id)_stringWithUseAbbreviatedFormats:(bool)arg1 lowerCase:(bool)arg2;
- (id)allComponentsInCalendar:(id)arg1;
- (long long)compareDateIgnoringTimeComponents:(id)arg1 inCalendar:(id)arg2;
- (id)dateAtHour:(unsigned long long)arg1 minute:(unsigned long long)arg2 second:(unsigned long long)arg3 inTimeZone:(id)arg4;
- (id)dateByAddingCalSimulatedOffset;
- (id)dateByAddingDays:(long long)arg1 inCalendar:(id)arg2;
- (id)dateByAddingHours:(long long)arg1 inCalendar:(id)arg2;
- (id)dateByAddingMinutes:(long long)arg1 inCalendar:(id)arg2;
- (id)dateByAddingMonths:(long long)arg1 inCalendar:(id)arg2;
- (id)dateByAddingWeeks:(long long)arg1 inCalendar:(id)arg2;
- (id)dateByAddingYears:(long long)arg1 inCalendar:(id)arg2;
- (id)dateBySubtractingCalSimulatedOffset;
- (id)dateForDayInTimeZone:(id)arg1;
- (id)dateForDayInTimeZone:(id)arg1 fromTimeZone:(id)arg2;
- (id)dateForEndOfDayInTimeZone:(id)arg1;
- (id)dateForEndOfDayInTimeZone:(id)arg1 fromTimeZone:(id)arg2;
- (id)dateForStartOfDayInTimeZone:(id)arg1;
- (id)dateInTimeZone:(id)arg1 fromTimeZone:(id)arg2;
- (id)dateOnlyByTranslatingFrom:(id)arg1 toCalendar:(id)arg2;
- (id)dateOnlyComponentsInCalendar:(id)arg1;
- (id)dateRemovingTimeComponentsInCalendar:(id)arg1;
- (id)dateRoundedDownToNearestFiveMinutesInCalendar:(id)arg1;
- (id)dateRoundedToHourOnSameDayInCalendar:(id)arg1;
- (id)dateRoundedToNearestFifteenMinutesInCalendar:(id)arg1;
- (id)dateRoundedToStartOfNextDayInCalendar:(id)arg1;
- (id)dateWithoutTimeComponentsInTimeZone:(id)arg1;
- (long long)dayInCalendar:(id)arg1;
- (id)ek_ios_dateForEndOfDayInTimeZone:(id)arg1;
- (long long)hourInCalendar:(id)arg1;
- (bool)isAfterDate:(id)arg1;
- (bool)isAfterOrSameDayAsDate:(id)arg1 inCalendar:(id)arg2;
- (bool)isBeforeDate:(id)arg1;
- (bool)isBeforeDayForDate:(id)arg1 inCalendar:(id)arg2;
- (bool)isBeforeOrSameDayAsDate:(id)arg1 inCalendar:(id)arg2;
- (bool)isEqualToDateIgnoringTimeComponents:(id)arg1 inCalendar:(id)arg2;
- (bool)isSameDayAsDate:(id)arg1 inCalendar:(id)arg2;
- (bool)isSameMonthAsDate:(id)arg1 inCalendar:(id)arg2;
- (bool)isSameWeekAsDate:(id)arg1 inCalendar:(id)arg2;
- (bool)isSameYearAsDate:(id)arg1 inCalendar:(id)arg2;
- (bool)isTodayInCalendar:(id)arg1;
- (id)localizedDateStringWithTemplate:(id)arg1;
- (id)localizedMonthAndDayStringShortened:(bool)arg1;
- (id)localizedMonthAndYearStringShortened:(bool)arg1;
- (id)localizedMonthShortened:(bool)arg1;
- (id)localizedRelativeDateStringShortened:(bool)arg1;
- (id)localizedRelativeDateStringShortened:(bool)arg1 lowercase:(bool)arg2;
- (id)localizedStringWithFormat:(id)arg1;
- (id)localizedStringWithFormat:(id)arg1 timeZone:(id)arg2;
- (id)localizedWeekNumber;
- (id)localizedWeekdayMonthDayStringShortened:(bool)arg1;
- (id)localizedWeekdayMonthDayYearStringShortened:(bool)arg1;
- (id)localizedWeekdayMonthYearStringShortened:(bool)arg1;
- (id)localizedYearMonthAndDayStringShortened:(bool)arg1;
- (long long)minuteInCalendar:(id)arg1;
- (long long)monthInCalendar:(id)arg1;
- (void)printComparisonToDate:(id)arg1;
- (id)roundSecondsAndMinutesDownInCalendar:(id)arg1;
- (id)roundSecondsAndMinutesUpInCalendar:(id)arg1;
- (id)roundSecondsDownInCalendar:(id)arg1;
- (id)roundToCurrentDayInCalendar:(id)arg1;
- (id)roundToCurrentMondayInCalendar:(id)arg1;
- (id)roundToCurrentMonthInCalendar:(id)arg1;
- (id)roundToCurrentWeekInCalendar:(id)arg1 withFirstWeekdayIndex:(long long)arg2;
- (id)roundToCurrentYearInCalendar:(id)arg1;
- (long long)secondInCalendar:(id)arg1;
- (id)timeOnlyComponentsInCalendar:(id)arg1;
- (id)timeStringAlwaysIncludeMinutes:(bool)arg1;
- (long long)weekInCalendar:(id)arg1;
- (long long)weekdayInCalendar:(id)arg1;
- (long long)yearInCalendar:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit

- (id)localizedShortTimeInTimeZone:(id)arg1;
- (id)nextDateMatchingTimeComponents;

// Image: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory

- (bool)isSameDayAsDate:(id)arg1;

// Image: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst

+ (id)cat_RFC3339Formatters;
+ (id)cat_dateWithInternetTimeString:(id)arg1;
+ (id)cat_dateWithObject:(id)arg1;

- (id)cat_internetTimeString;

// Image: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit

- (id)JSONObjectRepresentation;
- (id)initWithJSONObjectRepresentation:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon

+ (id)CKSharedCalendar;
+ (id)ck_dateFormatterWithString:(id)arg1;
+ (id)ck_dateWithNaturalLanguageString:(id)arg1;

- (void)_CKLogToFileHandle:(id)arg1 atDepth:(int)arg2;

// Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary

- (id)initWithCPLArchiver:(id)arg1;
- (id)plistArchiveWithCPLArchiver:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet

- (id)cd_dateWithCeilingForAlignment:(double)arg1;
- (id)cd_dateWithCeilingForAlignment:(double)arg1 withOffset:(double)arg2 inTimeZone:(id)arg3;
- (id)cd_dateWithFloorForAlignment:(double)arg1;
- (id)cd_dateWithFloorForAlignment:(double)arg1 withOffset:(double)arg2 inTimeZone:(id)arg3;

// Image: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine

+ (id)dateFormatter;
+ (id)dateWithResolution:(unsigned long long)arg1;
+ (id)dateWithResolution:(unsigned long long)arg1 calendar:(id)arg2;
+ (id)endOfDay;
+ (id)startOfDay;
+ (id)stringFromTimestamp:(double)arg1;

- (bool)betweenDate:(id)arg1 andDate:(id)arg2;
- (id)dateByAddingUnit:(unsigned long long)arg1 value:(long long)arg2;
- (id)dateByRoundingWithTimeQuantization:(long long)arg1;
- (id)dateOfTimestampForCalendar:(id)arg1;
- (id)dateOfTimestampForCurrentCalendar;
- (id)dateReducedToResolution:(unsigned long long)arg1;
- (id)dateReducedToResolution:(unsigned long long)arg1 calendar:(id)arg2;
- (id)endOfDay;
- (unsigned long long)hour;
- (id)startOfDay;
- (id)stringFromDate;
- (long long)weekday;
- (id)weekdayStringFromDate;

// Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions

- (id)sg_descriptionForMimeHeaders;

// Image: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS

+ (bool)acceptsTopLevelLeaves;
+ (id)dateWithActiveSyncString:(id)arg1;
+ (id)dateWithActiveSyncStringFromYearMonthDay:(id)arg1;
+ (id)dateWithActiveSyncStringWithoutSeparators:(id)arg1;
+ (bool)frontingBasicTypes;
+ (bool)notifyOfUnknownTokens;
+ (bool)parsingLeafNode;
+ (bool)parsingWithSubItems;

- (id)activeSyncString;
- (id)activeSyncStringForYearMonthDay;
- (id)activeSyncStringWithoutSeparators;
- (id)gmtDateToDateInTimeZone:(id)arg1;
- (id)gmtMidnight;
- (bool)isGMTMidnight;
- (id)nearestMidnight;
- (id)tzDateToDateInGMT:(id)arg1;

// Image: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon

+ (id)_dateWithString:(id)arg1;

- (id)serialize;

// Image: /System/Library/PrivateFrameworks/FMCoreLite.framework/FMCoreLite

+ (id)fm_dateFromEpoch:(long long)arg1;

- (long long)fm_epoch;
- (id)fm_epochObject;

// Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation

+ (id)_gkDateFromScalarServerTimestamp:(unsigned long long)arg1;
+ (id)_gkDateFromServerTimestamp:(id)arg1;
+ (id)_gkServerTimestamp;

- (id)_gkFormatedWhenStringWithOptions:(unsigned long long)arg1;
- (id)_gkFormattedDateForStyle:(unsigned long long)arg1 relative:(bool)arg2;
- (id)_gkServerTimestamp;

// Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices

+ (id)_geo_calendar;
+ (id)geo_dateWithJulianDay:(double)arg1;

- (double)geo_hoursAndMinutes;
- (double)geo_julianDay;
- (double)geo_julianEphemerisDay;

// Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation

+ (id)dateFromFileNameDescription:(id)arg1;
+ (id)timeIntervalDescription:(double)arg1;

- (id)dateComponents;
- (id)fileNameDescription;
- (id)iso8601Description;
- (id)localTimeDescription;
- (id)shortDescription;

// Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI

+ (id)hk_minimumDateForBirthDateWithCalendar:(id)arg1;

- (double)doubleValue;
- (bool)hk_animatable;
- (id)hk_dateBeforeDateForCalendar:(id)arg1 rangeUnit:(unsigned long long)arg2;
- (id)hk_dateWithTruncatedSecond;
- (id)hk_midPointToValue:(id)arg1 percentage:(double)arg2;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

+ (id)hf_dateByAddingComponents:(id)arg1 toDate:(id)arg2 times:(long long)arg3;
+ (id)hf_dateByAddingDays:(long long)arg1 toDate:(id)arg2;
+ (id)hf_dateByAddingHours:(long long)arg1 toDate:(id)arg2;
+ (id)hf_dateByAddingMinutes:(long long)arg1 toDate:(id)arg2;
+ (id)hf_dateByAddingMonths:(long long)arg1 toDate:(id)arg2;
+ (id)hf_dateByAddingNanoseconds:(long long)arg1 toDate:(id)arg2;
+ (id)hf_dateByAddingSeconds:(long long)arg1 toDate:(id)arg2;
+ (id)hf_dateByAddingWeeks:(long long)arg1 toDate:(id)arg2;
+ (id)hf_dateByAddingYears:(long long)arg1 months:(long long)arg2 weeks:(long long)arg3 days:(long long)arg4 hours:(long long)arg5 minutes:(long long)arg6 seconds:(long long)arg7 nanoseconds:(long long)arg8 toDate:(id)arg9;
+ (id)hf_dateByAddingYears:(long long)arg1 toDate:(id)arg2;
+ (id)hf_dateBySubtractingComponents:(id)arg1 fromDate:(id)arg2 times:(long long)arg3;
+ (id)ho_sharedCalendar;
+ (id)ho_sharedTimeZone;

- (bool)hf_isFirstHourOfDay;
- (bool)hf_isWithinInterval:(double)arg1 ofDate:(id)arg2;
- (bool)hf_isWithinOneHourOfDate:(id)arg1;
- (bool)hf_isWithinOneMinuteOfDate:(id)arg1;
- (bool)hf_isWithinOneSecondOfDate:(id)arg1;
- (id)hf_startOfDay;
- (id)hf_startOfHour;
- (id)hf_startOfMinute;
- (id)hf_startOfSecond;

// Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon

+ (unsigned char)dayOfTheWeek;
+ (id)iso8601dateFromString:(id)arg1;

// Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities

+ (id)__im_dateWithNanosecondTimeIntervalSinceReferenceDate:(long long)arg1;

- (long long)__im_nanosecondTimeInterval;
- (long long)differenceFromDate:(id)arg1;
- (bool)isToday;

// Image: /System/Library/PrivateFrameworks/MIME.framework/MIME

+ (id)mf_copyDateInCommonFormatsWithString:(id)arg1;
+ (id)mf_copyLenientDateInCommonFormatsWithString:(id)arg1;

- (bool)mf_isEarlierThanDate:(id)arg1;
- (bool)mf_isLaterThanDate:(id)arg1;

// Image: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI

- (bool)MCUIProfileNearOrPastExpiration;
- (bool)MCUIProfilePastExpiration;

// Image: /System/Library/PrivateFrameworks/Memories.framework/Memories

- (int)approximateDaysOfTheYearFromDate:(id)arg1;
- (id)beginningOfDay;
- (id)beginningOfPreviousDay;
- (long long)compareDay:(id)arg1;
- (id)dateStringWithDotSeparators;
- (int)daysOfTheYearFromDate:(id)arg1;
- (id)displayString;
- (id)displayStringWithTime:(bool)arg1;
- (bool)isBeforeDate:(id)arg1;

// Image: /System/Library/PrivateFrameworks/Message.framework/Message

- (id)mf_descriptionForMimeHeaders;
- (id)mf_replyPrefixForSender:(id)arg1;

// Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer

+ (id /* block */)mtCurrentDateProvider;

- (id)mtDateNearestMatchingComponents:(id)arg1;
- (bool)mtIsAfterDate:(id)arg1;
- (bool)mtIsAfterOrSameDate:(id)arg1;
- (bool)mtIsBeforeDate:(id)arg1;
- (bool)mtIsBeforeOrSameAsDate:(id)arg1;

// Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary

- (void)ml_bindToSQLiteStatement:(struct sqlite3_stmt { }*)arg1 atPosition:(int)arg2;
- (id)ml_stringValueForSQL;

// Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer

+ (id)nnmk_startOfCurrentDay;

- (bool)nnmk_isToday;

// Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation

- (bool)isWholeHour;

// Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore

+ (id)_fr_sharedYearAndMonthDateFormatter;
+ (id)dateWithPBDate:(id)arg1;
+ (id)fc_dateFromString:(id)arg1 possibleFormats:(id)arg2;
+ (id)fc_dateFromStringWithHTTPHeaderFormat:(id)arg1;
+ (id)fc_dateFromStringWithISO8601Format:(id)arg1;
+ (id)fc_dateWithMillisecondTimeIntervalSince1970:(unsigned long long)arg1;
+ (id)fc_earlierDateAllowingNilWithDate:(id)arg1 andDate:(id)arg2;
+ (id)fc_laterDateAllowingNilWithDate:(id)arg1 andDate:(id)arg2;
+ (int)keyValuePairType;
+ (id)pbDate;
+ (id)readValueFromKeyValuePair:(id)arg1;

- (long long)fc_GregorianCalendarDaysSinceDate:(id)arg1;
- (id)fc_dateBySubtractingTimeInterval:(double)arg1;
- (id)fc_dateOfEarliestGregorianCalendarDay;
- (bool)fc_isEarlierThan:(id)arg1;
- (bool)fc_isEarlierThanOrEqualTo:(id)arg1;
- (bool)fc_isLaterThan:(id)arg1;
- (bool)fc_isLaterThanOrEqualTo:(id)arg1;
- (bool)fc_isSameDayAs:(id)arg1;
- (bool)fc_isWeekend;
- (bool)fc_isWithinTimeInterval:(double)arg1 ofDate:(id)arg2;
- (unsigned long long)fc_millisecondTimeIntervalSince1970;
- (unsigned long long)fc_millisecondTimeIntervalSinceDate:(id)arg1;
- (id)fc_stringWithYearAndMonthFormat;
- (double)fc_timeIntervalUntilNow;
- (bool)isToday;
- (id)pbDate;
- (void)writeToKeyValuePair:(id)arg1;

// Image: /System/Library/PrivateFrameworks/NewsServicesInternal.framework/NewsServicesInternal

+ (id)_todayStringDateFormatterForThread;

- (void)nss_gregorianDescriptionWithFlags:(long long)arg1 options:(long long)arg2 completion:(id /* block */)arg3;

// Image: /System/Library/PrivateFrameworks/Notes.framework/Notes

+ (id)modificationDateForNoteBeingEdited;

- (id)briefFormattedDate;
- (bool)isEarlierThanDate:(id)arg1;
- (bool)isLaterThanDate:(id)arg1;
- (bool)isToday;
- (bool)isYesterday;
- (id)shortFormattedDate;

// Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI

+ (id)_notes_fallbackDateFormatter;
+ (id)_notes_relativeDateFormatter;
+ (id)_notes_todayDateFormatter;

- (id)day;
- (id)userFriendlyString;
- (id)userFriendlyStringWithTime;

// Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport

+ (id)tc_dateWithWordDate:(const struct WrdDateTime { int (**x1)(); int x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned short x6; unsigned short x7; }*)arg1;

- (void)tc_copyToWordDate:(struct WrdDateTime { int (**x1)(); int x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned short x6; unsigned short x7; }*)arg1;
- (struct { unsigned short x1; unsigned short x2; })tsu_DOSTime;
- (id)tsu_initWithDOSTime:(struct { unsigned short x1; unsigned short x2; })arg1;

// Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore

+ (id)dateForTomorrow;
+ (id)dateForYesterday;
+ (id)dateWithDaysBeforeNow:(unsigned long long)arg1;
+ (id)dateWithDaysFromNow:(unsigned long long)arg1;

- (bool)isDateEqualToDateIgnoringTime:(id)arg1;
- (bool)isToday;
- (bool)isTomorrow;
- (bool)isYesterday;

// Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/MediaMiningKit.framework/MediaMiningKit

+ (id)dateComponentsFromString:(id)arg1;
+ (id)dateFromString:(id)arg1;

- (id)dateByAddingDays:(long long)arg1;
- (id)nextWeekend;
- (id)previousWeekend;

// Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore

+ (void)px_unionStartDate:(id*)arg1 endDate:(id*)arg2 withDate:(id)arg3;

- (bool)px_isSameDayAsDate:(id)arg1;

// Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared

+ (void)safari_dateFromNTPServerWithTimeout:(double)arg1 completionHandler:(id /* block */)arg2;
+ (id)safari_dateOfMidnightNumberOfDaysAgo:(long long)arg1;
+ (double)safari_oneDayInSeconds;

- (id)_safari_stringWithDashSeparatorWithDateFormatter:(id)arg1;
- (bool)safari_isInSameDayAsDate:(id)arg1;
- (bool)safari_isInToday;
- (bool)safari_isInclusivelyBetweenDate:(id)arg1 andDate:(id)arg2;
- (bool)safari_isNowOrInRecentPast;
- (long long)safari_numberOfWeeksUntilDate:(id)arg1;
- (id)safari_startOfDay;
- (id)safari_stringsFromDateForLocaleIdentifiers:(id)arg1;

// Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation

+ (id)dateFromISO8601String:(id)arg1;
+ (id)dateFromRFC1123String:(id)arg1;
+ (id)dateFromString:(id)arg1;
+ (id)dateFromTWTimeString:(id)arg1;

- (id)shortDescription;
- (id)shortDescriptionSinceNow;
- (id)shortDescriptionWithTime;
- (id)shortWeekDescription;

// Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices

- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;

// Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit

+ (id)wlk_dateWithMillisecondsSince1970:(id)arg1;

// Image: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation

- (id)wf_dateOnlyComponentsInCalendar:(id)arg1;

// Image: /System/Library/PrivateFrameworks/WiFiKitUI.framework/WiFiKitUI

- (bool)isTodayWithCalendar:(id)arg1;
- (id)stringFromDHCPLeaseExpirationDateWithFormatString:(id)arg1;

// Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport

+ (id)tsce_dateWithSerialNumber:(double)arg1 dateMode:(int)arg2;
+ (id)tsce_dateWithYear:(long long)arg1 month:(long long)arg2 day:(long long)arg3 hour:(long long)arg4 minute:(long long)arg5 second:(long long)arg6;

- (int)chartGridValueType;
- (double)doubleValue;
- (id)p_rule1To23HoursAgo:(long long)arg1;
- (id)p_rule1To59MinutesAgo:(long long)arg1;
- (id)p_ruleForOverAWeekAgoForDate:(id)arg1 withDateFormatter:(id)arg2;
- (id)p_ruleForOverAYearAgoForDate:(id)arg1 withDateFormatter:(id)arg2;
- (id)p_ruleForUpToSevenDaysAgoAndNotYesterdayForDate:(id)arg1 withDateFormatter:(id)arg2;
- (id)p_ruleForYesterday:(id)arg1 withDateFormatter:(id)arg2;
- (id)p_ruleForYesterdayShortAsPossible:(id)arg1;
- (long long)tsce_day;
- (long long)tsce_hour;
- (double)tsce_mapToDouble;
- (long long)tsce_minute;
- (long long)tsce_month;
- (long long)tsce_second;
- (long long)tsce_weekday;
- (long long)tsce_year;
- (id)tsp_initWithMessage:(const struct Date { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; double x5; }*)arg1;
- (void)tsp_saveToMessage:(struct Date { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; double x5; }*)arg1;
- (struct { unsigned short x1; unsigned short x2; })tsu_DOSTime;
- (id)tsu_fullFormattedDateWithPeriod;
- (id)tsu_initWithDOSTime:(struct { unsigned short x1; unsigned short x2; })arg1;
- (bool)tsu_isEqualToDate:(id)arg1;
- (id)tsu_relativeAnnotationStringForEarlierDate:(id)arg1;
- (id)tsu_relativeAnnotationStringForEarlierDate:(id)arg1 withDateFormatter:(id)arg2;
- (id)tsu_relativeAnnotationStringForEarlierDate:(id)arg1 withDateFormatter:(id)arg2 shortAsPossible:(bool)arg3;

// Image: /usr/lib/libprequelite.dylib

+ (id)newFromSqliteValue:(struct sqlite3_value { }*)arg1;

- (void)sqliteBind:(struct sqlite3_stmt { }*)arg1 index:(int)arg2;

@end
