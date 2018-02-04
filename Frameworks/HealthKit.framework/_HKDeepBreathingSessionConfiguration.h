/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface _HKDeepBreathingSessionConfiguration : NSObject <NSSecureCoding> {
    NSUUID * _UUID;
    double  _inhaleExhaleRatio;
    double  _respirationsPerMinute;
    double  _sessionDuration;
    NSDate * _startDate;
}

@property (readonly) NSUUID *UUID;
@property (nonatomic) double inhaleExhaleRatio;
@property (nonatomic) double respirationsPerMinute;
@property (nonatomic) double sessionDuration;
@property (nonatomic, retain) NSDate *startDate;

+ (id)sessionConfigurationWithStartDate:(id)arg1 sessionDuration:(double)arg2 inhaleExhaleRatio:(double)arg3 respirationsPerMinute:(double)arg4;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)UUID;
- (id)_initWithStartDate:(id)arg1 sessionDuration:(double)arg2 inhaleExhaleRatio:(double)arg3 respirationsPerMinute:(double)arg4;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (double)inhaleExhaleRatio;
- (id)initWithCoder:(id)arg1;
- (double)respirationsPerMinute;
- (double)sessionDuration;
- (void)setInhaleExhaleRatio:(double)arg1;
- (void)setRespirationsPerMinute:(double)arg1;
- (void)setSessionDuration:(double)arg1;
- (void)setStartDate:(id)arg1;
- (id)startDate;

@end
