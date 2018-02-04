/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDSyncStoreEntity : HDHealthEntity

+ (id)_predicateWithStoreUUID:(id)arg1 type:(long long)arg2;
+ (id)columnsDefinition;
+ (id)databaseTable;
+ (id)existingSyncStoreEntityWithUUID:(id)arg1 database:(id)arg2 error:(id*)arg3;
+ (long long)protectionClass;
+ (id)syncStoreEntityWithUUID:(id)arg1 type:(long long)arg2 healthDatabase:(id)arg3 error:(id*)arg4;

- (long long)syncProvenance;

@end
