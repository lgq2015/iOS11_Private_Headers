/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDMetadataValueStatement : HDSQLiteStatement

+ (id)metadataValueStatementWithDatabase:(id)arg1;

- (bool)enumerateResultsForObjectID:(long long)arg1 error:(id*)arg2 block:(id /* block */)arg3;
- (id)initWithDatabase:(id)arg1;

@end
