/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
 */

@interface MACFormatter : APFormatter {
    NSCharacterSet * _possibleSeparators;
    NSCharacterSet * _possibleSeparatorsInvertedSet;
    NSString * _userPreferredSeparator;
}

+ (id)macAddressSet;
+ (id)macFormatter;
+ (bool)parseMACAddress:(const char *)arg1 intoHexString:(char *)arg2;
+ (id)sharedMACFormatter;

- (void)dealloc;
- (id)init;
- (bool)isPartialStringValid:(id*)arg1 proposedSelectedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2 originalString:(id)arg3 originalSelectedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4 errorDescription:(id*)arg5;
- (id)possibleSeparators;
- (id)possibleSeparatorsInvertedSet;
- (void)removeMACAddressSeparatorsFromString:(id)arg1;
- (void)setPossibleSeparators:(id)arg1;
- (void)setPossibleSeparatorsInvertedSet:(id)arg1;
- (void)setUserPreferredSeparator:(id)arg1;
- (id)userPreferredSeparator;

@end
