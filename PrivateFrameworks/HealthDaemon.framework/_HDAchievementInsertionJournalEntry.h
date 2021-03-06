/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface _HDAchievementInsertionJournalEntry : HDJournalEntry {
    _HKAchievement * _achievement;
}

@property (nonatomic, readonly) _HKAchievement *achievement;

+ (void)applyEntries:(id)arg1 withProfile:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)achievement;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAchievement:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
