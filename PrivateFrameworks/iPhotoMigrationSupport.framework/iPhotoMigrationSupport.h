/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iPhotoMigrationSupport.framework/iPhotoMigrationSupport
 */

@interface iPhotoMigrationSupport : NSObject {
    int  _inFlightMigrationCount;
    PLPhotoLibrary * _pl_library;
}

@property (nonatomic, readonly) bool migrationWasInterrupted;
@property (setter=setPL_library:, nonatomic, retain) PLPhotoLibrary *pl_library;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (bool)_createParentDirectoryIfNecessaryWithPath:(id)arg1;
- (void)_decrementInFlightMigrationCount;
- (void)_deleteiPhotoSubDirectoryWithDirectoryPath:(id)arg1 subDirectoryName:(id)arg2 description:(id)arg3;
- (id)_displayableUuidWithUuid:(id)arg1;
- (id)_firstFilePathWithAnyExtensionAtPath:(id)arg1 extension:(id*)arg2;
- (id)_iPhotoMediaDirUuidListSortedByDateCreatedWithDir:(id)arg1;
- (id)_iPhotoToPhotosUuidMapTable;
- (id)_iPhotoUuidsWithProjectDict:(id)arg1 type:(unsigned long long)arg2;
- (id)_inFlightMigrationMarkerFilePath;
- (void)_incrementInFlightMigrationCount;
- (bool)_isMigrating;
- (id)_migratediPhotoDir;
- (void)_migrateiPhotoLibraryWorkerWithProgressHandler:(id /* block */)arg1 iPhotoLibraryDir:(id)arg2;
- (id)_preMigratediPhotoDir;
- (id)_premigratedProjectUuidMapTable;
- (bool)_validateUuid:(id)arg1;
- (void)addKeywordIfDoesNotExist:(id)arg1 forAsset:(id)arg2;
- (void)checkForUnmigratediPhotoContentWithCompletion:(id /* block */)arg1;
- (void)fireMigrationOfiPhotoLibraryWithProgressHandler:(id /* block */)arg1;
- (bool)migrationWasInterrupted;
- (id)pl_library;
- (void)setCaption:(id)arg1 forAsset:(id)arg2;
- (void)setPL_library:(id)arg1;

@end
