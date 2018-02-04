/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@interface BBBehaviorOverrideFixedEffectivePeriod : NSObject <BBBehaviorOverrideEffectivePeriod> {
    double  _effectiveInterval;
    NSUUID * _identifier;
    NSDate * _startDate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double effectiveInterval;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSUUID *identifier;
@property (nonatomic, copy) NSDate *startDate;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)containsDate:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)effectiveInterval;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithStartDate:(id)arg1 effectiveInterval:(double)arg2 identifier:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)nextTransitionDateAfterDate:(id)arg1;
- (void)setEffectiveInterval:(double)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setStartDate:(id)arg1;
- (id)startDate;

@end
