/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface _HKAchievementLocalizationContext : NSObject {
    bool  _isWheelchairUser;
    NSString * _keyPrefix;
    long long  _timesEarned;
    NSString * _userName;
}

@property (nonatomic, readonly) bool isWheelchairUser;
@property (nonatomic, readonly) NSString *keyPrefix;
@property (nonatomic, readonly) long long timesEarned;
@property (nonatomic, readonly) NSString *userName;

+ (id)contextWithKeyPrefix:(id)arg1 timesEarned:(long long)arg2 userName:(id)arg3 isWheelchairUser:(bool)arg4;

- (void).cxx_destruct;
- (bool)isWheelchairUser;
- (id)keyPrefix;
- (long long)timesEarned;
- (id)userName;

@end
