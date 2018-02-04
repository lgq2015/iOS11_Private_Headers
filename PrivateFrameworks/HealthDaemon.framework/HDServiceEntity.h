/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDServiceEntity : HDHealthEntity

+ (id)_servicePredicate:(id)arg1;
+ (id)_servicesInDatabase:(id)arg1 profile:(id)arg2 removals:(id*)arg3;
+ (id)allServicesWithProfile:(id)arg1 error:(id*)arg2;
+ (id)columnsDefinition;
+ (id)databaseTable;
+ (bool)deleteService:(id)arg1 healthDatabase:(id)arg2 error:(id*)arg3;
+ (id)entityEncoderForProfile:(id)arg1 database:(id)arg2 purpose:(long long)arg3 encodingOptions:(id)arg4 authorizationFilter:(id /* block */)arg5;
+ (bool)healthUpdatesEnabledForDevice:(id)arg1 inDatabase:(id)arg2 error:(id*)arg3;
+ (id)insertOrUpdateService:(id)arg1 healthDatabase:(id)arg2 error:(id*)arg3;
+ (long long)protectionClass;
+ (bool)setHealthUpdatesEnabled:(bool)arg1 forDevice:(id)arg2 inDatabase:(id)arg3 error:(id*)arg4;
+ (id)tableAliases;
+ (id)uniquedColumns;

@end
