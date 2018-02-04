/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface _HKCurrentWorkoutSnapshot : NSObject <NSSecureCoding> {
    NSString * _applicationIdentifier;
    HKWorkoutConfiguration * _configuration;
    long long  _state;
}

@property (nonatomic, readonly, copy) NSString *applicationIdentifier;
@property (nonatomic, readonly) HKWorkoutConfiguration *configuration;
@property (nonatomic, readonly) long long state;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)applicationIdentifier;
- (id)configuration;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithWorkoutConfiguration:(id)arg1 state:(long long)arg2 applicationIdentifier:(id)arg3;
- (long long)state;

@end
