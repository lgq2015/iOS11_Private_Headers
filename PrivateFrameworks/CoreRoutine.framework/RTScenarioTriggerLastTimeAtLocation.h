/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
 */

@interface RTScenarioTriggerLastTimeAtLocation : RTScenarioTrigger {
    NSDate * _lastEntryDate;
    NSDate * _lastExitDate;
    RTLocationOfInterest * _locationOfInterest;
}

@property (nonatomic, readonly) NSDate *lastEntryDate;
@property (nonatomic, readonly) NSDate *lastExitDate;
@property (nonatomic, readonly) RTLocationOfInterest *locationOfInterest;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithLocationOfInterest:(id)arg1 lastEntryDate:(id)arg2 lastExitDate:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)lastEntryDate;
- (id)lastExitDate;
- (id)locationOfInterest;

@end
