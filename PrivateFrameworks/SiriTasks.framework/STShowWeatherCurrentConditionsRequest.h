/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
 */

@interface STShowWeatherCurrentConditionsRequest : AFSiriRequest {
    STCity * _city;
    STWeatherCurrentConditions * _currentConditions;
    STWeatherUnits * _units;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithCurrentConditions:(id)arg1 city:(id)arg2 units:(id)arg3;
- (id)city;
- (id)createResponse;
- (id)currentConditions;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)units;

@end
