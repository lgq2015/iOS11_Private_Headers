/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OITSUDateFormatter : NSObject {
    NSString * mDateOnlyFormatString;
    struct __CFDateFormatter { } * mFullDateFormatter;
    NSString * mTimeOnlyFormatString;
}

+ (id)dateFormatStringSpecialSymbols;
+ (id)datePortionOfDateTimeFormatString:(id)arg1;
+ (id)defaultDateTimeFormatForLocale:(id)arg1;
+ (unsigned long long)p_DateTimeSplitLocationInFormatString:(id)arg1;
+ (id)shortMonthNamesForNonCachedCurrentLocale;
+ (id)supportedDateFormatsForLocale:(id)arg1;
+ (id)supportedTimeFormatsForLocale:(id)arg1;
+ (id)timePortionOfDateTimeFormatString:(id)arg1;

- (void)dealloc;
- (id)init;
- (id)initWithLocale:(id)arg1;

@end
