/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCloudSyncStoreEntity : HDHealthEntity

+ (id)_propertiesForEntity;
+ (id)columnsDefinition;
+ (id)databaseTable;
+ (bool)persistState:(id)arg1 storeUUID:(id)arg2 shouldReplace:(bool)arg3 healthDatabase:(id)arg4 error:(id*)arg5;
+ (id)persistedStateForStoreUUID:(id)arg1 profile:(id)arg2 error:(id*)arg3;
+ (long long)protectionClass;
+ (bool)rebaseRequiredByDate:(id)arg1 profile:(id)arg2 error:(id*)arg3;
+ (id)storeIdentifierForOwnerIdentifier:(id)arg1 containerIdentifier:(id)arg2 profile:(id)arg3 error:(id*)arg4;

@end
