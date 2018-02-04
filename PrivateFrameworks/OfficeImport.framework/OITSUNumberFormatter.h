/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OITSUNumberFormatter : NSObject {
    struct __CFString { } * mAdditionalCurrencyCode;
    NSDictionary * mAdditionalCurrencyCodeFormatters;
    NSMutableDictionary * mCurrencyCodeToHalfWidthSymbolMap;
    NSString * mCurrencyDecimalSeparator;
    NSDictionary * mCurrencyFormatters;
    NSString * mCurrencyGroupingSeparator;
    NSString * mCurrencyString;
    struct __CFArray { } * mDecimalFormatters;
    NSString * mDecimalSeparator;
    NSString * mDecimalString;
    struct __CFNumberFormatter { } * mFractionFormatter;
    NSString * mGroupingSeparator;
    unsigned long long  mGroupingSize;
    OITSULocaleStructuredDictionary * mHarmonizedNumberFormatterSymbols;
    struct __CFLocale { } * mLocale;
    NSString * mPercentSymbol;
    struct __CFArray { } * mPercentageFormatters;
    NSString * mPercentageString;
    struct __CFArray { } * mScientificFormatters;
    NSString * mScientificString;
    NSMutableArray * mTransformedCurrencyStrings;
    NSMutableArray * mTransformedDecimalStrings;
    NSMutableArray * mTransformedPercentageStrings;
    NSMutableArray * mTransformedScientificStrings;
}

+ (id)availableCurrencyCodes;
+ (struct __CFNumberFormatter { }*)createHarmonizedCFNumberFormatterWithLocale:(struct __CFLocale { }*)arg1 style:(long long)arg2;
+ (id)currencyDecimalSeparatorForLocale:(struct __CFLocale { }*)arg1;
+ (id)currencyGroupingSeparatorForLocale:(struct __CFLocale { }*)arg1;
+ (id)currencySymbolForCurrencyCode:(id)arg1;
+ (id)currencySymbolForCurrencyCode:(id)arg1 locale:(struct __CFLocale { }*)arg2;
+ (id)currentLocaleCurrencyCode;
+ (id)currentLocaleCurrencyDecimalSeparator;
+ (id)currentLocaleDecimalSeparator;
+ (id)decimalSeparatorForLocale:(struct __CFLocale { }*)arg1;
+ (id)defaultCurrencyCodeForLocale:(struct __CFLocale { }*)arg1;
+ (unsigned short)defaultDecimalPlacesForCurrencyCode:(id)arg1;
+ (id)defaultFormatStringForValueType:(int)arg1;
+ (id)defaultFormatStringForValueType:(int)arg1 negativeStyle:(int)arg2;
+ (id)displayNameForCurrencyCode:(id)arg1;
+ (void)formatString:(id)arg1 replaceOccurencesOfUnescapedString:(id)arg2 withString:(id)arg3;
+ (id)formatString:(id)arg1 transformedForNegativeStyle:(int)arg2;
+ (id)formatterForLocale:(struct __CFLocale { }*)arg1;
+ (id)groupingSeparatorForLocale:(struct __CFLocale { }*)arg1;
+ (unsigned long long)groupingSizeForLocale:(struct __CFLocale { }*)arg1;
+ (void)initialize;
+ (id)numberFormatStringSpecialSymbols;
+ (id)percentSymbolForLocale:(struct __CFLocale { }*)arg1;
+ (int)positionOfCurrencySymbolInNumberFormatSubpattern:(id)arg1;
+ (int)positionOfMinusSignInNumberFormatSubpattern:(id)arg1;
+ (int)positionOfSymbol:(id)arg1 inNumberFormatSubpattern:(id)arg2;
+ (id)stringBySubstitutingCharactersCFNumberFormatterDoesntUnderstand:(id)arg1;
+ (id)userVisibleCurrencyCodes;

- (id)currencyCode;
- (id)currencyDecimalSeparator;
- (bool)currencyFromString:(struct __CFString { }*)arg1 additionalCurrencyCode:(struct __CFString { }*)arg2 value:(double*)arg3 formatString:(const struct __CFString {}**)arg4 currencyCode:(const struct __CFString {}**)arg5;
- (id)currencyGroupingSeparator;
- (id)currencySymbolForCurrencyCode:(id)arg1;
- (void)dealloc;
- (bool)decimalFromString:(struct __CFString { }*)arg1 value:(double*)arg2 formatString:(const struct __CFString {}**)arg3;
- (id)decimalSeparator;
- (id)defaultFormatStringForValueType:(int)arg1;
- (id)defaultFormatStringForValueType:(int)arg1 negativeStyle:(int)arg2;
- (id)displayNameForCurrencyCode:(id)arg1;
- (id)findCurrencySymbolInString:(struct __CFString { }*)arg1 additionalCurrencyCode:(struct __CFString { }*)arg2 successfullString:(const struct __CFString {}**)arg3;
- (bool)fractionFromString:(struct __CFString { }*)arg1 value:(double*)arg2;
- (id)groupingSeparator;
- (unsigned long long)groupingSize;
- (id)halfWidthCurrencySymbolForCurrencyCode:(id)arg1;
- (id)initWithLocale:(const struct __CFLocale { }*)arg1;
- (void)numberPreferencesChanged:(id)arg1;
- (id)p_arrayOfString:(id)arg1 ofCount:(unsigned long long)arg2;
- (id)p_createDictionaryOfCurrencyFormattersForCurrencies:(struct __CFArray { }*)arg1;
- (struct __CFNumberFormatter { }*)p_createHarmonizedCFNumberFormatterOfStyle:(long long)arg1;
- (id)p_currencyFormatters;
- (struct __CFArray { }*)p_decimalFormatters;
- (void)p_loadHarmonizedNumberFormatterSymbols;
- (struct __CFArray { }*)p_percentageFormatters;
- (struct __CFArray { }*)p_scientificFormatters;
- (bool)p_valueFromString:(struct __CFString { }*)arg1 formatters:(struct __CFArray { }*)arg2 formatterCurrencyKeys:(struct __CFArray { }*)arg3 value:(double*)arg4 formatString:(const struct __CFString {}**)arg5 currencyCode:(const struct __CFString {}**)arg6;
- (bool)p_valueFromString:(struct __CFString { }*)arg1 formatters:(struct __CFArray { }*)arg2 value:(double*)arg3 formatString:(const struct __CFString {}**)arg4;
- (id)percentSymbol;
- (bool)percentageFromString:(struct __CFString { }*)arg1 value:(double*)arg2 formatString:(const struct __CFString {}**)arg3;
- (bool)scientificFromString:(struct __CFString { }*)arg1 value:(double*)arg2 formatString:(const struct __CFString {}**)arg3;

@end
