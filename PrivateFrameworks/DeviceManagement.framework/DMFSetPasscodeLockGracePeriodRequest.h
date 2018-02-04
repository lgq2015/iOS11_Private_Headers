/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

@interface DMFSetPasscodeLockGracePeriodRequest : CATTaskRequest {
    double  _seconds;
}

@property (nonatomic) double seconds;

+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (double)seconds;
- (void)setSeconds:(double)arg1;

@end
