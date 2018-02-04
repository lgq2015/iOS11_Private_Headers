/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
 */

@interface CHPhoneNumber : CHLogger {
    NSString * _ISOCountryCode;
    bool  _formatted;
    NSString * _formattedPhoneNumber;
    NSString * _originalPhoneNumber;
}

@property (copy) NSString *ISOCountryCode;
@property bool formatted;
@property (copy) NSString *formattedPhoneNumber;
@property (copy) NSString *originalPhoneNumber;

- (void).cxx_destruct;
- (id)ISOCountryCode;
- (bool)formatted;
- (id)formattedNumber;
- (id)formattedPhoneNumber;
- (id)initWithPhoneNumber:(id)arg1 andISOCountryCode:(id)arg2;
- (id)originalPhoneNumber;
- (void)setFormatted:(bool)arg1;
- (void)setFormattedPhoneNumber:(id)arg1;
- (void)setISOCountryCode:(id)arg1;
- (void)setOriginalPhoneNumber:(id)arg1;

@end
