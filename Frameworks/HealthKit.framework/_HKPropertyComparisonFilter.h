/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface _HKPropertyComparisonFilter : _HKFilter {
    NSString * _lhPropertyName;
    unsigned long long  _operatorType;
    NSString * _rhPropertyName;
}

@property (nonatomic, readonly) NSString *lhPropertyName;
@property (nonatomic, readonly) unsigned long long operatorType;
@property (nonatomic, readonly) NSString *rhPropertyName;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (id)filterWithLeftHandPropertyName:(id)arg1 rightHandPropertyName:(id)arg2 operator:(unsigned long long)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLeftHandPropertyName:(id)arg1 rightHandPropertyName:(id)arg2 operator:(unsigned long long)arg3;
- (id)lhPropertyName;
- (unsigned long long)operatorType;
- (id)rhPropertyName;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

- (id)predicateWithProfile:(id)arg1;

@end
