/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLCloudResource : PLManagedObject

@property (nonatomic, retain) PLManagedAsset *asset;
@property (nonatomic, retain) NSString *assetUuid;
@property (nonatomic) short cloudLocalState;
@property (nonatomic, retain) PLCloudMaster *cloudMaster;
@property (nonatomic, retain) NSDate *dateCreated;
@property (nonatomic, retain) NSString *filePath;
@property (nonatomic) unsigned long long fileSize;
@property (nonatomic, retain) NSString *fingerprint;
@property (nonatomic) long long height;
@property (nonatomic) bool isAvailable;
@property (nonatomic) bool isLocallyAvailable;
@property (nonatomic, retain) NSString *itemIdentifier;
@property (nonatomic, retain) NSDate *lastOnDemandDownloadDate;
@property (nonatomic, retain) NSDate *lastPrefetchDate;
@property (nonatomic) short prefetchCount;
@property (nonatomic, retain) NSDate *prunedAt;
@property (nonatomic) int type;
@property (nonatomic, retain) NSString *uniformTypeIdentifier;
@property (nonatomic) long long width;

+ (unsigned long long)bytesNeededToDownloadOriginalResourcesInLibrary:(id)arg1;
+ (bool)countNonLocalOriginalResourcesInLibrary:(id)arg1 outCount:(unsigned long long*)arg2 photoCount:(unsigned long long*)arg3 videoCount:(unsigned long long*)arg4;
+ (bool)countOfLocalCloudResourcesOfType:(unsigned long long)arg1 inManagedObjectContext:(id)arg2 localCount:(unsigned long long*)arg3 unavailableCount:(unsigned long long*)arg4 error:(id*)arg5;
+ (id)duplicateCloudResource:(id)arg1 forAsset:(id)arg2 withFilePath:(id)arg3 inManagedObjectContext:(id)arg4;
+ (id)entityInManagedObjectContext:(id)arg1;
+ (id)entityName;
+ (id)insertIntoPhotoLibrary:(id)arg1 forAsset:(id)arg2 withCPLResource:(id)arg3 adjusted:(bool)arg4 withCreationDate:(id)arg5;
+ (id)nonLocalResourcesInManagedObjectContext:(id)arg1 forAssetUUIDs:(id)arg2 cplResourceTypes:(id)arg3;
+ (void)resetCloudResourcesStateForCloudInManagedObjectContext:(id)arg1 hardReset:(bool)arg2;
+ (void)resetPrefetchStateForResourcesWithResourceType:(long long)arg1 itemIdentifiers:(id)arg2 inLibrary:(id)arg3;

- (void)_duplicatePropertiesFromCloudResource:(id)arg1 withFilePath:(id)arg2 forAssetUuid:(id)arg3;
- (void)applyPropertiesFromCloudResource:(id)arg1;
- (id)cplResourceIncludeFile:(bool)arg1;
- (id)description;
- (void)prepareForDeletion;
- (void)setIsLocallyAvailable:(bool)arg1;

@end
