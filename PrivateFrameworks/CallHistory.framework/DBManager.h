/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
 */

@interface DBManager : CHLogger {
    NSPersistentStoreCoordinator * fPersistentStoreCoordinator;
}

@property (nonatomic, retain) NSPersistentStoreCoordinator *fPersistentStoreCoordinator;

+ (id)dbOptions:(bool)arg1;
+ (bool)destroyDBAtLocation:(id)arg1 withModelAtLocation:(id)arg2;
+ (id)entityDescriptionHavingName:(id)arg1 forContext:(id)arg2;
+ (id)getPersistentCoordinator:(id)arg1;
+ (id)getPropertyValueForKey:(id)arg1 forContext:(id)arg2;
+ (id)getStoreURLforContext:(id)arg1;
+ (long long)getVersionForMappingModel:(id)arg1;
+ (id)instanceWithModelURL:(id)arg1;
+ (long long)isDataStoreAtURLInitialized:(id)arg1 withModelAtURL:(id)arg2;
+ (bool)makeDatabaseAtURLClassCDataProtected:(id)arg1;
+ (id)mangedObjectWithURI:(id)arg1 inContext:(id)arg2;
+ (long long)mapToDBMErrorCode:(id)arg1;
+ (id)migrateDataStoreAtLocation:(id)arg1 withGetDestinationModel:(id /* block */)arg2 isEncrypted:(bool)arg3;
+ (id)modelForDBAtLocation:(id)arg1;
+ (bool)moveDBAtLocation:(id)arg1 toLocation:(id)arg2 withModelAtLocation:(id)arg3;
+ (bool)replacePersistentStore:(id)arg1 withURL:(id)arg2;
+ (void)setPropertyValue:(id)arg1 forKey:(id)arg2 forContext:(id)arg3;
+ (long long)versionForDBAtLocation:(id)arg1;

- (void).cxx_destruct;
- (bool)addDataStoreAtLocation:(id)arg1 isEncrypted:(bool)arg2;
- (id)createManagedObjectContext;
- (id)fPersistentStoreCoordinator;
- (id)init;
- (void)removeDataStoreAtLocation:(id)arg1;
- (void)setFPersistentStoreCoordinator:(id)arg1;

@end
