/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TUPhoneNumber : NSObject <NSCoding, NSSecureCoding> {
    struct __CFPhoneNumber { } * _phoneNumberRef;
}

@property (readonly) NSString *countryCode;
@property (readonly) NSString *digits;
@property (readonly) NSString *formattedInternationalRepresentation;
@property (readonly) NSString *formattedRepresentation;
@property struct __CFPhoneNumber { }*phoneNumberRef;
@property (readonly) NSString *unformattedInternationalRepresentation;

+ (bool)areDigits:(id)arg1 equalToDigits:(id)arg2 usingCountryCode:(id)arg3;
+ (id)phoneNumberWithCFPhoneNumberRef:(struct __CFPhoneNumber { }*)arg1;
+ (id)phoneNumberWithDigits:(id)arg1 countryCode:(id)arg2;
+ (bool)supportsSecureCoding;

- (id)countryCode;
- (void)dealloc;
- (id)digits;
- (void)encodeWithCoder:(id)arg1;
- (id)formattedInternationalRepresentation;
- (id)formattedRepresentation;
- (id)initWithCFPhoneNumberRef:(struct __CFPhoneNumber { }*)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDigits:(id)arg1 countryCode:(id)arg2;
- (bool)isEqual:(id)arg1;
- (struct __CFPhoneNumber { }*)phoneNumberRef;
- (void)setPhoneNumberRef:(struct __CFPhoneNumber { }*)arg1;
- (id)unformattedInternationalRepresentation;

@end
