/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDSQLiteMigrationStep : NSObject {
    long long  _finalSchemaVersion;
    id /* block */  _migrationHandler;
    bool  _shouldDisableForeignKeys;
    long long  _startingSchemaVersion;
}

@property (nonatomic, readonly) long long finalSchemaVersion;
@property (nonatomic, readonly, copy) id /* block */ migrationHandler;
@property (nonatomic) bool shouldDisableForeignKeys;
@property (nonatomic, readonly) long long startingSchemaVersion;

+ (id)migrationStepFrom:(long long)arg1 to:(long long)arg2 handler:(id /* block */)arg3;
+ (id)migrationStepWithForeignKeysDisabledFrom:(long long)arg1 to:(long long)arg2 handler:(id /* block */)arg3;

- (void).cxx_destruct;
- (long long)finalSchemaVersion;
- (id /* block */)migrationHandler;
- (void)setShouldDisableForeignKeys:(bool)arg1;
- (bool)shouldDisableForeignKeys;
- (long long)startingSchemaVersion;

@end
