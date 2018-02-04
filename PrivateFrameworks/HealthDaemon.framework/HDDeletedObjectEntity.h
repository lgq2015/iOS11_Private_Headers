/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDDeletedObjectEntity : HDDataEntity

+ (Class)baseDataEntityClass;
+ (bool)deleteEntitiesWithPredicate:(id)arg1 healthDatabase:(id)arg2 error:(id*)arg3;
+ (bool)deleteObjectsWithPredicate:(id)arg1 profile:(id)arg2 error:(id*)arg3;
+ (id)deletedObjectEntityForDeletedObject:(id)arg1 profile:(id)arg2 error:(id*)arg3;
+ (id)insertDeletedObject:(id)arg1 provenanceIdentifier:(id)arg2 deletionDate:(id)arg3 inDatabase:(id)arg4 error:(id*)arg5;
+ (long long)preferredEntityType;
+ (bool)requiresSampleTypePredicate;

@end
