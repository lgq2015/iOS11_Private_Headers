/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface _HDAchievementAssetFilter : NSObject <_HKAchievementDefinitionLoaderFilter> {
    NSSet * _allEarnedDefinitionIdentifiers;
}

- (void).cxx_destruct;
- (bool)_isAchievementDefinitionExpired:(id)arg1;
- (bool)_wasAchievementDefinitionEverEarned:(id)arg1;
- (bool)areAssetsNeededForAchievementDefinition:(id)arg1;
- (bool)areStickersEarnedForAchievementDefinition:(id)arg1;
- (bool)areStickersNeededAtAll;
- (bool)areStickersNeededForAchievementDefinition:(id)arg1;
- (id)initWithAllEarnedDefinitionIdentifiers:(id)arg1;

@end
