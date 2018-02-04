/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
 */

@interface WFAirPollutant : NSObject <NSSecureCoding> {
    double  _concentration;
    bool  _isPrimary;
    NSLocale * _locale;
    NSString * _localizedDescription;
    NSString * _localizedName;
}

@property double concentration;
@property bool isPrimary;
@property (copy) NSLocale *locale;
@property (copy) NSString *localizedDescription;
@property (copy) NSString *localizedName;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (double)concentration;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isPrimary;
- (id)locale;
- (id)localizedDescription;
- (id)localizedName;
- (void)setConcentration:(double)arg1;
- (void)setIsPrimary:(bool)arg1;
- (void)setLocale:(id)arg1;
- (void)setLocalizedDescription:(id)arg1;
- (void)setLocalizedName:(id)arg1;

@end
