/* made by EzioChiu.
 */

@protocol FCCKDatabaseMigrator <NSObject>

@required

- (void)databaseMigrationDidFinishForDatabase:(FCCKPrivateDatabase *)arg1 result:(long long)arg2;
- (CKRecord *)databaseMigrationMigrateRecord:(CKRecord *)arg1 database:(FCCKPrivateDatabase *)arg2 error:(id*)arg3;
- (NSArray *)databaseMigrationRecordNamesToMigrateInZone:(NSString *)arg1 database:(FCCKPrivateDatabase *)arg2;
- (bool)databaseMigrationShouldDropRecord:(CKRecord *)arg1 database:(FCCKPrivateDatabase *)arg2;
- (NSSet *)databaseMigrationZoneNamesForDatabase:(FCCKPrivateDatabase *)arg1;

@end
