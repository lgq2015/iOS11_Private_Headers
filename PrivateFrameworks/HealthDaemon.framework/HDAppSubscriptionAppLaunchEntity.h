/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDAppSubscriptionAppLaunchEntity : HDHealthEntity

+ (bool)_getLaunchTimesWithArray:(id)arg1 predicate:(id)arg2 profile:(id)arg3 error:(id*)arg4;
+ (id)_predicateForBundleID:(id)arg1;
+ (id)columnsDefinition;
+ (id)databaseTable;
+ (id)launchTimeForBundleID:(id)arg1 profile:(id)arg2 error:(id*)arg3;
+ (long long)protectionClass;
+ (bool)removeBundleIdentifier:(id)arg1 profile:(id)arg2 error:(id*)arg3;
+ (bool)setLaunchTime:(id)arg1 forBundleID:(id)arg2 profile:(id)arg3 error:(id*)arg4;
+ (id)tableAliases;

@end
