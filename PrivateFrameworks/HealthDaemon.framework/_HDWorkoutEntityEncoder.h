/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface _HDWorkoutEntityEncoder : HDEntityEncoder {
    HDSQLiteStatement * _workoutEntryLookupStatement;
}

+ (long long)estimatedEncodedSize;

- (void).cxx_destruct;
- (bool)_applyPropertiesToObject:(id)arg1 persistentID:(long long)arg2 row:(struct HDSQLiteRow { }*)arg3 error:(id*)arg4;
- (void)applyPropertiesToObject:(id)arg1 persistentID:(long long)arg2 row:(struct HDSQLiteRow { }*)arg3;
- (id)codableRepresentationForPersistentID:(long long)arg1 row:(struct HDSQLiteRow { }*)arg2 error:(id*)arg3;
- (id)initWithHealthEntityClass:(Class)arg1 profile:(id)arg2 database:(id)arg3 purpose:(long long)arg4 encodingOptions:(id)arg5 authorizationFilter:(id /* block */)arg6;
- (id)objectForPersistentID:(long long)arg1 row:(struct HDSQLiteRow { }*)arg2 error:(id*)arg3;
- (id)orderedProperties;

@end
