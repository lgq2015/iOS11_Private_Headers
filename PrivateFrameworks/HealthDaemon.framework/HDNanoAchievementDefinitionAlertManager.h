/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDNanoAchievementDefinitionAlertManager : HDAchievementDefinitionAlertManager

+ (id)_availableDefinitionIdentifiersWithProfile:(id)arg1 error:(id*)arg2;
+ (id)_definitionIdentifiersInAlertedState:(unsigned long long)arg1 amongDefinitions:(id)arg2 withProfile:(id)arg3 error:(id*)arg4;
+ (id)_findDefinitionsToAlertWithProfile:(id)arg1 currentDate:(id)arg2 amongDefinitions:(id)arg3 getExpiredDefinitions:(id*)arg4;
+ (id)_findNextDefinitionToScheduleAmongDefinitions:(id)arg1 withCurrentDate:(id)arg2 getTaskDate:(id*)arg3;
+ (bool)_markDefinitionIdentifiers:(id)arg1 asAlertedState:(unsigned long long)arg2 withProfile:(id)arg3 error:(id*)arg4;
+ (bool)_markDefinitionIdentifiers:(id)arg1 asAvailable:(bool)arg2 withProfile:(id)arg3 error:(id*)arg4;
+ (bool)_needsUpdateForUserDefaultKey:(id)arg1;
+ (bool)_resetAlertedStatesWithProfile:(id)arg1 error:(id*)arg2;
+ (bool)_resetAvailabilityStatesWithProfile:(id)arg1 error:(id*)arg2;
+ (bool)isDefinitionIdentifierAvailableOnCompanion:(id)arg1 withProfile:(id)arg2 error:(id*)arg3;

- (void)_beginObservingDefinitionAvailabilityFactors;

@end
