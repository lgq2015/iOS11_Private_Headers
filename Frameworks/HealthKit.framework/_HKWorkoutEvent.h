/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface _HKWorkoutEvent : NSObject <NSSecureCoding> {
    NSDateInterval * _dateInterval;
    NSError * _error;
    long long  _eventType;
    NSDictionary * _metadata;
    NSUUID * _sessionId;
}

@property (nonatomic, readonly) NSDateInterval *dateInterval;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) long long eventType;
@property (nonatomic, readonly) NSDictionary *metadata;
@property (nonatomic, readonly) NSUUID *sessionId;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)dateInterval;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (long long)eventType;
- (id)initWithCoder:(id)arg1;
- (id)initWithEventType:(long long)arg1 sessionId:(id)arg2 dateInterval:(id)arg3 metadata:(id)arg4;
- (id)initWithSessionId:(id)arg1 error:(id)arg2;
- (id)metadata;
- (id)sessionId;

@end
