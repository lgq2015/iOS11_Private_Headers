/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface _HKWorkoutDataGap : NSObject <NSSecureCoding> {
    NSUUID * _end;
    NSUUID * _start;
}

@property (nonatomic, retain) NSUUID *end;
@property (nonatomic, retain) NSUUID *start;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)end;
- (id)initWithCoder:(id)arg1;
- (void)setEnd:(id)arg1;
- (void)setStart:(id)arg1;
- (id)start;

@end
