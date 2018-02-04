/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
 */

@interface WFAirQualityConditions : NSObject <NSSecureCoding> {
    unsigned long long  _category;
    NSDate * _date;
    NSDate * _expirationDate;
    NSLocale * _locale;
    NSString * _localizedAirQualityCategory;
    long long  _localizedAirQualityIndex;
    WFLocation * _location;
    NSArray * _pollutants;
    NSString * _provider;
}

@property (nonatomic) unsigned long long category;
@property (nonatomic, copy) NSDate *date;
@property (nonatomic, retain) NSDate *expirationDate;
@property (nonatomic, readonly) bool isExpired;
@property (nonatomic, copy) NSLocale *locale;
@property (nonatomic, copy) NSString *localizedAirQualityCategory;
@property (nonatomic) long long localizedAirQualityIndex;
@property (nonatomic, retain) WFLocation *location;
@property (nonatomic, copy) NSArray *pollutants;
@property (nonatomic, copy) NSString *provider;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)airQualityIndex;
- (unsigned long long)category;
- (id)date;
- (void)encodeWithCoder:(id)arg1;
- (id)expirationDate;
- (id)initWithCoder:(id)arg1;
- (bool)isExpired;
- (id)locale;
- (id)localizedAirQualityCategory;
- (long long)localizedAirQualityIndex;
- (id)location;
- (id)pollutants;
- (id)provider;
- (void)setCategory:(unsigned long long)arg1;
- (void)setDate:(id)arg1;
- (void)setExpirationDate:(id)arg1;
- (void)setLocale:(id)arg1;
- (void)setLocalizedAirQualityCategory:(id)arg1;
- (void)setLocalizedAirQualityIndex:(long long)arg1;
- (void)setLocation:(id)arg1;
- (void)setPollutants:(id)arg1;
- (void)setProvider:(id)arg1;

@end
