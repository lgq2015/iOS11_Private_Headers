/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

@interface SGPostalAddressComponents : NSObject <NSCopying, NSSecureCoding> {
    NSString * _city;
    NSString * _country;
    NSString * _isoCountryCode;
    NSString * _postalCode;
    NSString * _state;
    NSString * _street;
    NSString * _subAdministrativeArea;
    NSString * _subLocality;
}

@property (nonatomic, readonly) NSString *city;
@property (nonatomic, readonly) NSString *country;
@property (nonatomic, readonly) NSString *isoCountryCode;
@property (nonatomic, readonly) NSString *postalCode;
@property (nonatomic, readonly) NSString *state;
@property (nonatomic, readonly) NSString *street;
@property (nonatomic, readonly) NSString *subAdministrativeArea;
@property (nonatomic, readonly) NSString *subLocality;

+ (id)components:(id)arg1 city:(id)arg2 state:(id)arg3 postalCode:(id)arg4 country:(id)arg5;
+ (id)components:(id)arg1 subLocality:(id)arg2 city:(id)arg3 subAdministrativeArea:(id)arg4 state:(id)arg5 postalCode:(id)arg6 country:(id)arg7 isoCountryCode:(id)arg8;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)city;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)country;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithStreet:(id)arg1 subLocality:(id)arg2 city:(id)arg3 subAdministrativeArea:(id)arg4 state:(id)arg5 postalCode:(id)arg6 country:(id)arg7 isoCountryCode:(id)arg8;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToPostalAddressComponents:(id)arg1;
- (id)isoCountryCode;
- (id)postalCode;
- (id)state;
- (id)street;
- (id)subAdministrativeArea;
- (id)subLocality;

@end
