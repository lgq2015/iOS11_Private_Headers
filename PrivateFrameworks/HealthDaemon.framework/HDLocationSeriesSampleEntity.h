/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDLocationSeriesSampleEntity : HDSeriesSampleEntity

+ (bool)_insertCodableSeriesDataFromObject:(id)arg1 persistentID:(id)arg2 database:(id)arg3 error:(id*)arg4;
+ (bool)addCodableObject:(id)arg1 toCollection:(id)arg2;
+ (id)codableObjectsFromObjectCollection:(id)arg1;
+ (id)createTableSQL;
+ (void)didDeleteEntityWithPersistentID:(long long)arg1 database:(id)arg2;
+ (id)entityEncoderForProfile:(id)arg1 database:(id)arg2 purpose:(long long)arg3 encodingOptions:(id)arg4 authorizationFilter:(id /* block */)arg5;
+ (id)insertDataObject:(id)arg1 withProvenance:(id)arg2 inDatabase:(id)arg3 persistentID:(id)arg4 error:(id*)arg5;
+ (bool)insertLocationData:(id)arg1 seriesIdentifier:(id)arg2 profile:(id)arg3 error:(id*)arg4;
+ (bool)isBackedByTable;
+ (id)mergeDataObject:(id)arg1 provenance:(id)arg2 profile:(id)arg3 database:(id)arg4 error:(id*)arg5 insertHandler:(id /* block */)arg6;
+ (bool)participatesInInsertion;
+ (bool)performPostJournalMergeCleanupForDatabase:(id)arg1 error:(id*)arg2;
+ (bool)supportsObjectMerging;

- (bool)deleteFromDatabase:(id)arg1 error:(id*)arg2;
- (bool)enumerateLocationDataFromTimestamp:(double)arg1 toTimestamp:(double)arg2 database:(id)arg3 error:(id*)arg4 handler:(id /* block */)arg5;
- (bool)enumerateLocationDataInDatabase:(id)arg1 error:(id*)arg2 handler:(id /* block */)arg3;
- (bool)freezeWithDatabase:(id)arg1 error:(id*)arg2;
- (bool)insertLocationData:(id)arg1 database:(id)arg2 error:(id*)arg3;
- (id)sampleCountForSeriesInDatabase:(id)arg1 error:(id*)arg2;
- (id)timePeriodForSeriesInDatabase:(id)arg1 error:(id*)arg2;

@end
