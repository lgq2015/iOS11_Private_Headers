/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
 */

@interface WFForecastDataParser : NSObject

+ (id /* block */)ascendingTimeComparator;
+ (id)componentsForCurrentForecast;
+ (id)componentsForDailyForecasts;
+ (id)componentsForHourlyForecasts;
+ (unsigned long long)expectedDailyForecastCount;
+ (unsigned long long)expectedHourlyForecastCount;

- (id)parseForecastData:(id)arg1 date:(id)arg2 error:(id*)arg3;
- (id)stringFromKeyPath:(id)arg1;

@end