/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDMetadataValueEntity : HDHealthEntity

+ (id)_insertMetadataValueWithKeyID:(id)arg1 objectID:(id)arg2 value:(id)arg3 database:(id)arg4 error:(id*)arg5;
+ (id)_predicateForEntityWithKeyID:(id)arg1;
+ (id)_predicateForEntityWithObjectID:(id)arg1;
+ (id)columnsDefinition;
+ (id)databaseTable;
+ (id)deleteStatementForObjectMetadataWithDatabase:(id)arg1;
+ (id)indices;
+ (long long)protectionClass;

@end
