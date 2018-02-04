/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDDataExternalSyncIdentifierEntity : HDHealthEntity

+ (id)columnsDefinition;
+ (id)databaseTable;
+ (bool)enumerateValuesWithProfile:(id)arg1 error:(id*)arg2 handler:(id /* block */)arg3;
+ (id)indices;
+ (bool)insertSyncIdentifierWithProfile:(id)arg1 objectID:(long long)arg2 localSourceID:(long long)arg3 externalSyncObjectCode:(long long)arg4 syncIdentifier:(id)arg5 syncVersion:(id)arg6 deleted:(bool)arg7 errorOut:(id*)arg8;
+ (bool)populateSyncInfoForProfile:(id)arg1 localSourceID:(long long)arg2 externalSyncObjectCode:(long long)arg3 syncIdentifier:(id)arg4 deleted:(bool)arg5 objectIDOut:(id*)arg6 errorOut:(id*)arg7;
+ (bool)populateSyncInfoForProfile:(id)arg1 objectID:(long long)arg2 localSourceIDOut:(long long*)arg3 externalSyncObjectCodeOut:(long long*)arg4 syncIdentifierOut:(id*)arg5 syncVersionOut:(id*)arg6 deletedOut:(bool*)arg7 errorOut:(id*)arg8;
+ (long long)protectionClass;

@end
