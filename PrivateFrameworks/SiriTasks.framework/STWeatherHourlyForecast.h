/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
 */

@interface STWeatherHourlyForecast : STSiriModelObject {
    NSNumber * _chanceOfPrecipitation;
    long long  _conditionCode;
    NSNumber * _temperature;
    long long  _timeIndex;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithConditionCodeIndex:(long long)arg1 timeIndex:(long long)arg2 temperature:(id)arg3 chanceOfPrecipitation:(id)arg4;
- (id)chanceOfPrecipitation;
- (long long)conditionCode;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)temperature;
- (long long)timeIndex;

@end
