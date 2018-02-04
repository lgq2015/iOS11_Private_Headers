/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
 */

@interface STStartNavigationRequest : AFSiriRequest {
    NSDate * _arrivalDate;
    NSDate * _departureDate;
    STSiriLocation * _destinationLocation;
    long long  _directionsType;
    NSString * _extSessionGuid;
    NSDate * _extSessionGuidCreatedTimestamp;
    STSiriLocation * _startLocation;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithStartLocation:(id)arg1 destinationLocation:(id)arg2 directionsType:(long long)arg3 arrivalDate:(id)arg4 departureDate:(id)arg5 extSessionGuid:(id)arg6 extSessionGuidCreatedTimestamp:(id)arg7;
- (id)arrivalDate;
- (id)createResponse;
- (id)departureDate;
- (id)destinationLocation;
- (long long)directionsType;
- (void)encodeWithCoder:(id)arg1;
- (id)extSessionGuid;
- (id)extSessionGuidCreatedTimestamp;
- (id)initWithCoder:(id)arg1;
- (id)startLocation;

@end
