/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
 */

@interface MSCLAccountDatabase : SSSQLiteDatabase

+ (id)sharedDatabase;

- (void)_createDatabaseSchema;
- (void)_migrateToSchemaVersion2;
- (void)_migrateToSchemaVersion3;
- (void)_migrateToSchemaVersion4;
- (id)init;

@end
