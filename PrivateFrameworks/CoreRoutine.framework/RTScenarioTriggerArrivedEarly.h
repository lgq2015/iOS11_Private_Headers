/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
 */

@interface RTScenarioTriggerArrivedEarly : RTScenarioTrigger {
    double  _secondsEarly;
}

@property (nonatomic, readonly) double secondsEarly;

+ (bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithSecondsEarly:(double)arg1;
- (bool)isEqual:(id)arg1;
- (double)secondsEarly;

@end
