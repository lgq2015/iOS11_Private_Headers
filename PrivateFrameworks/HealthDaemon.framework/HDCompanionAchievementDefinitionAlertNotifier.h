/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCompanionAchievementDefinitionAlertNotifier : NSObject <HDAchievementDefinitionAlertNotifier, HDFitnessAppBadgeCountProvider> {
    unsigned long long  _achievementDefinitionCount;
    HDFitnessAppBadgeManager * _badgeManager;
}

@property (nonatomic, readonly) unsigned long long badgeCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (unsigned long long)badgeCount;
- (id)initWithFitnessAppBadgeManager:(id)arg1;
- (void)notifyAchievementDefinitions:(id)arg1;

@end
