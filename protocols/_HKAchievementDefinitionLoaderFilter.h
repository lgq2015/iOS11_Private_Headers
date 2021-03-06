/* made by EzioChiu.
 */

@protocol _HKAchievementDefinitionLoaderFilter

@required

- (bool)areAssetsNeededForAchievementDefinition:(_HKAchievementDefinition *)arg1;
- (bool)areStickersEarnedForAchievementDefinition:(_HKAchievementDefinition *)arg1;
- (bool)areStickersNeededAtAll;
- (bool)areStickersNeededForAchievementDefinition:(_HKAchievementDefinition *)arg1;

@end
