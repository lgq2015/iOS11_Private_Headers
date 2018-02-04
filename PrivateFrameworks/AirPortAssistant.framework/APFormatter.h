/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
 */

@interface APFormatter : NSFormatter {
    NSCharacterSet * _characterSet;
    NSCharacterSet * _invertedCharacterSet;
    unsigned long long  _maxLength;
}

@property (nonatomic) unsigned long long maxLength;

+ (id)asciiFormatter:(unsigned long long)arg1;
+ (id)asciiSet;
+ (id)formatterForBSFormatter:(int)arg1 withMaxLen:(long long)arg2;
+ (id)hexFormatter:(unsigned long long)arg1;
+ (id)hexSet;
+ (id)ipFormatter:(unsigned long long)arg1;
+ (id)ipOctetFormatter:(unsigned long long)arg1;
+ (id)ipv4AddressSet;
+ (id)ipv4AddressWithPrefixSet;
+ (id)ipv6AddressSet;
+ (id)maxLengthFormatter:(unsigned long long)arg1;
+ (id)multipleIPFormatter:(unsigned long long)arg1;
+ (id)multipleIpAddressesSet;
+ (id)nonZeroNumberOnly:(unsigned long long)arg1;
+ (id)numberOnlyFormatter:(unsigned long long)arg1;
+ (id)phoneNumberFormatter:(unsigned long long)arg1;
+ (id)phoneNumberSet;
+ (id)pogoPasswordSet;
+ (id)portRangeFormatter:(unsigned long long)arg1;
+ (id)portRangeSet;
+ (id)romanFormatter:(unsigned long long)arg1;
+ (id)romanSet;
+ (id)sharedIPFormatter;
+ (id)sharedIPv4PrefixFormatter;
+ (id)sharedIPv6Formatter;
+ (id)sharedMultipleIPFormatter;
+ (id)sharedPhoneNumberFormatter;

- (id)characterSet;
- (void)dealloc;
- (bool)getObjectValue:(id*)arg1 forString:(id)arg2 errorDescription:(id*)arg3;
- (id)initWithCharacterSet:(id)arg1 withMaxLength:(unsigned long long)arg2;
- (id)initWithMaxLength:(unsigned long long)arg1;
- (id)initWithStringOfValidCharacters:(id)arg1 withMaxLength:(unsigned long long)arg2;
- (id)invertedCharacterSet;
- (bool)isPartialStringValid:(id)arg1 newEditingString:(id*)arg2 errorDescription:(id*)arg3;
- (bool)isPartialStringValid:(id*)arg1 proposedSelectedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2 originalString:(id)arg3 originalSelectedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4 errorDescription:(id*)arg5;
- (unsigned long long)maxLength;
- (void)setCharacterSet:(id)arg1;
- (void)setInvertedCharacterSet:(id)arg1;
- (void)setMaxLength:(unsigned long long)arg1;
- (id)stringForObjectValue:(id)arg1;

@end
