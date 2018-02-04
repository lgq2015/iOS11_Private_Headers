/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLMomentGenerationDataManager : NSObject <PLMomentGenerationDataManagement_Private> {
    void * _addressBook;
    PLMomentAnalyzer * _analyzer;
    NSDictionary * _generationOptions;
    PLMomentGeneration * _generator;
    bool  _isLightweightMigrationManager;
    PLXPCTransaction * _keepAliveTransaction;
    NSArray * _locationsOfInterest;
    NSManagedObjectContext * _managedObjectContext;
    PLPhotoLibrary * _momentGenerationLibrary;
    bool  _observingReachability;
    id /* block */  _reachabilityBlock;
}

@property (nonatomic, readonly) void*_addressBook;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSManagedObjectContext *managedObjectContext;
@property (nonatomic, retain) PLPhotoLibrary *momentGenerationLibrary;
@property (readonly) Class superclass;

+ (void)_setManagedObjectContextMomentarilyBlessed:(id)arg1;
+ (bool)isManagedObjectContextMomentarilyBlessed:(id)arg1;
+ (bool)isManagerMomentarilyBlessed:(id)arg1;
+ (void)setManagerMomentarilyBlessed:(id)arg1;
+ (id)sharedMomentGenerationDataManager;

- (void*)_addressBook;
- (id)_addressDictionaryForABRecord:(void*)arg1 identifier:(int)arg2;
- (id)_currentHomeAddressDictionary;
- (void)_finalizeInit;
- (id)_locationsOfInterest;
- (id)_metadataPath;
- (void)_networkReachabilityDidChange:(id)arg1;
- (void)_removeKeepAlive;
- (id)_serverVersionInfoFilePath;
- (void)_updateKeepAlive;
- (id)allAssetIDsNeedingLocationShiftWithError:(id*)arg1;
- (id)allAssetIDsToBeIncludedInMomentsWithError:(id*)arg1;
- (id)allAssetsToBeIncludedInMomentsWithError:(id*)arg1;
- (id)allMomentListsForLevel:(short)arg1;
- (id)allMomentListsWithInvalidReverseLocationDataForLevel:(short)arg1;
- (id)allMomentsInLibrary;
- (id)allMomentsWithError:(id*)arg1;
- (id)allMomentsWithInvalidReverseLocationData;
- (id)analysisMetadata;
- (id)analyzer;
- (id)assetWithUniqueID:(id)arg1 error:(id*)arg2;
- (id)assetsWithUniqueIDs:(id)arg1 error:(id*)arg2;
- (void)beginObservingNetworkReachabilityChangesWithBlock:(id /* block */)arg1;
- (void)dealloc;
- (id)deletedObjects;
- (void)enumerateAssetsWithIDs:(id)arg1 usingBlock:(id /* block */)arg2;
- (id)findOrCreateYearMomentListForYear:(long long)arg1;
- (id)generationOptions;
- (id)generator;
- (unsigned long long)hardGenerationBatchSizeLimit;
- (bool)hasChanges;
- (bool)hasLocationsOfInterestInformation;
- (id)homeAddressDictionary;
- (id)initWithManagedObjectContextForLightweightMigration:(id)arg1;
- (void)insertMomentIntoAllMoments:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)insertNewMoment;
- (id)insertNewMomentListForGranularityLevel:(short)arg1;
- (id)insertedObjects;
- (void)invalidateLocationDataForAssetsInMoment:(id)arg1;
- (void)invalidateLocationsOfInterest;
- (void)invalidateShiftedLocationForAllAssetsInMoments;
- (bool)isMomentAnalysisNeeded;
- (bool)isMomentsSupportedOnPlatform;
- (bool)isNetworkReachable;
- (id)locationCoordinatesForAssetIDs:(id)arg1;
- (id)locationsOfInterest;
- (id)managedObjectContext;
- (id)momentAnalysisTransactionWithName:(const char *)arg1;
- (Class)momentAssetDataClass;
- (Class)momentDataClass;
- (id)momentGenerationLibrary;
- (id)momentListContainingDate:(id)arg1 forLevel:(short)arg2 wantsEarliest:(bool)arg3;
- (Class)momentListDataClassForGranularityLevel:(short)arg1;
- (id)momentListWithUniqueID:(id)arg1 forLevel:(short)arg2 error:(id*)arg3;
- (id)momentWithUniqueID:(id)arg1 error:(id*)arg2;
- (id)momentsBetweenDate:(id)arg1 andDate:(id)arg2 sorted:(bool)arg3;
- (id)momentsBetweenDateRanges:(id)arg1;
- (id)momentsSinceDate:(id)arg1;
- (bool)needsLocationsOfInterestProcessing;
- (id)orphanedAssetIDsWithError:(id*)arg1;
- (void)pendingChangesUpdated:(unsigned long long)arg1;
- (void)performBlock:(id /* block */)arg1 synchronously:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)performDataTransaction:(id /* block */)arg1 synchronously:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)refreshAllObjects;
- (void)refreshObject:(id)arg1 mergeChanges:(bool)arg2;
- (void)reloadGenerationOptions;
- (void)removeMomentFromAllMoments:(id)arg1;
- (id)replayLogPath;
- (void)resetOnFailure;
- (bool)save:(id*)arg1;
- (bool)saveAnalysisMetadata:(id)arg1;
- (bool)saveServerVersionInfo:(id)arg1;
- (id)serverVersionInfo;
- (void)setManagedObjectContext:(id)arg1;
- (void)setMomentAnalysisNeeded:(bool)arg1;
- (void)setMomentGenerationLibrary:(id)arg1;
- (void)setupPhotoLibrary;
- (void)stopObservingNetworkReachabilityChanges;
- (id)updatedObjects;
- (void)verifyAndRepairOrphanedAssets:(id)arg1;
- (bool)wantsMomentReplayLogging;
- (id)yearMomentListForYear:(long long)arg1 wantsEarliest:(bool)arg2;

@end
