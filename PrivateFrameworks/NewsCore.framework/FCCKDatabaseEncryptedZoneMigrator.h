/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCCKDatabaseEncryptedZoneMigrator : NSObject <FCCKDatabaseMigrator> {
    id /* block */  _deprecatedBlock;
    FCCKDatabaseEncryptionMiddleware * _recordEncryptionMiddleware;
    FCCKPrivateDatabaseSchema * _sourceSchema;
    NSSet * _sourceZoneNames;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, copy) id /* block */ deprecatedBlock;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) FCCKDatabaseEncryptionMiddleware *recordEncryptionMiddleware;
@property (nonatomic, retain) FCCKPrivateDatabaseSchema *sourceSchema;
@property (nonatomic, retain) NSSet *sourceZoneNames;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_isEnabledForDatabase:(id)arg1;
- (bool)_shouldMigrateRecord:(id)arg1 database:(id)arg2;
- (void)databaseMigrationDidFinishForDatabase:(id)arg1 result:(long long)arg2;
- (id)databaseMigrationMigrateRecord:(id)arg1 database:(id)arg2 error:(id*)arg3;
- (id)databaseMigrationRecordNamesToMigrateInZone:(id)arg1 database:(id)arg2;
- (bool)databaseMigrationShouldDropRecord:(id)arg1 database:(id)arg2;
- (id)databaseMigrationZoneNamesForDatabase:(id)arg1;
- (id /* block */)deprecatedBlock;
- (id)initWithSourceSchema:(id)arg1 recordEncryptionMiddleware:(id)arg2 deprecatedBlock:(id /* block */)arg3;
- (id)recordEncryptionMiddleware;
- (void)setDeprecatedBlock:(id /* block */)arg1;
- (void)setRecordEncryptionMiddleware:(id)arg1;
- (void)setSourceSchema:(id)arg1;
- (void)setSourceZoneNames:(id)arg1;
- (id)sourceSchema;
- (id)sourceZoneNames;

@end
