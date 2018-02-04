/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
 */

@interface WFForecastResponse : WFResponse <NSSecureCoding> {
    WFWeatherConditions * _forecast;
    unsigned long long  _forecastType;
    NSData * _rawAPIData;
    bool  _responseWasFromCache;
}

@property (nonatomic, retain) WFWeatherConditions *forecast;
@property (nonatomic) unsigned long long forecastType;
@property (nonatomic, retain) NSData *rawAPIData;
@property (nonatomic) bool responseWasFromCache;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)forecast;
- (unsigned long long)forecastType;
- (id)initWithCoder:(id)arg1;
- (id)rawAPIData;
- (bool)responseWasFromCache;
- (void)setForecast:(id)arg1;
- (void)setForecastType:(unsigned long long)arg1;
- (void)setRawAPIData:(id)arg1;
- (void)setResponseWasFromCache:(bool)arg1;

@end
