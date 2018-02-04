/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface _HDStandAchievementState : _HDAchievementState {
    unsigned long long  _previousStandHoursToday;
}

@property (nonatomic) unsigned long long previousStandHoursToday;

- (unsigned long long)previousStandHoursToday;
- (void)setPreviousStandHoursToday:(unsigned long long)arg1;

@end
