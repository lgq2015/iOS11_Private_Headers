/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface _HDCorrelationSampleEntityEncoder : HDEntityEncoder

+ (long long)estimatedEncodedSize;

- (bool)_applyPropertiesToObject:(id)arg1 persistentID:(long long)arg2 row:(struct HDSQLiteRow { }*)arg3 error:(id*)arg4;
- (void)applyPropertiesToObject:(id)arg1 persistentID:(long long)arg2 row:(struct HDSQLiteRow { }*)arg3;
- (id)codableRepresentationForPersistentID:(long long)arg1 row:(struct HDSQLiteRow { }*)arg2 error:(id*)arg3;
- (id)objectForPersistentID:(long long)arg1 row:(struct HDSQLiteRow { }*)arg2 error:(id*)arg3;

@end
