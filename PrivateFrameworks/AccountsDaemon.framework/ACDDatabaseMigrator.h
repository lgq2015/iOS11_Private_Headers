/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

@interface ACDDatabaseMigrator : NSObject {
    NSString * _databasePath;
    NSManagedObjectContext * _migrationContext;
    NSPersistentStoreCoordinator * _privateCoordinator;
    NSPersistentStoreCoordinator * _realCoordinator;
    NSMutableDictionary * _realOptions;
}

- (void).cxx_destruct;
- (id)_compatibleModelForStoreAtURL:(id)arg1;
- (id)_fetchAllAuthorizationEntitiesForModelVersion:(long long)arg1;
- (id)_fetchAllDataclassEntitles;
- (void)_migrateAccessAuthorizationsToTCCFromModelVersion:(long long)arg1;
- (void)_migrateNameAttributeOfDataclassEntities;
- (void)_migrateOptionsAttributeOfAuthorizatinEntitiesFromModelVersion:(long long)arg1;
- (void)_postProcessMigrationFromVersion:(long long)arg1 migrationData:(id)arg2;
- (id)_setUpContextForMigration;
- (long long)_versionForModel:(id)arg1;
- (id)initForDatabaseAtPath:(id)arg1 persistentStoreCoordinator:(id)arg2 options:(id)arg3;
- (bool)run;

@end
