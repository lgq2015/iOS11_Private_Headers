/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLCloudMaster : PLManagedObject <PLSyncableObject>

@property (nonatomic, retain) NSSet *assets;
@property (nonatomic) short cloudLocalState;
@property (nonatomic, retain) NSString *cloudMasterGUID;
@property (nonatomic, retain) NSDate *creationDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) short fullSizeJPEGSource;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSDate *importDate;
@property (nonatomic, retain) NSString *importSessionID;
@property (nonatomic, readonly, retain) id localID;
@property (nonatomic, retain) NSManagedObject *mediaMetadata;
@property (nonatomic, retain) NSString *mediaMetadataType;
@property (nonatomic, retain) NSString *originalFilename;
@property (nonatomic) short originalOrientation;
@property (nonatomic, copy) NSString *originatingAssetIdentifier;
@property (nonatomic, retain) NSSet *resources;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *uniformTypeIdentifier;

+ (id)_originalTypes;
+ (id)cloudMasterWithGUID:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)cloudMastersByGUID:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)cloudMastersWithGUIDs:(id)arg1 inManagedObjectContext:(id)arg2;
+ (void)deleteAllCloudMastersInManagedObjectContext:(id)arg1;
+ (id)entityInManagedObjectContext:(id)arg1;
+ (id)entityName;
+ (id)insertIntoPhotoLibrary:(id)arg1 withCloudMasterGUID:(id)arg2;
+ (void)resetCloudMastersStateInManagedObjectContext:(id)arg1 hardReset:(bool)arg2;

- (bool)allOriginalsAreLocallyAvailableForAssetUuid:(id)arg1;
- (bool)allOriginalsAreUploaded;
- (void)applyPropertiesFromCPLMasterChange:(id)arg1;
- (void)applyResourcesFromCPLMasterChange:(id)arg1 inPhotoLibrary:(id)arg2;
- (id)assetUUIDToCloudResources;
- (void)awakeFromInsert;
- (id)cloudResourceForResourceType:(unsigned long long)arg1 forAssetUuid:(id)arg2;
- (id)cloudResourcesForResourceType:(unsigned long long)arg1;
- (id)cplFullRecord;
- (id)cplResourceForResourceType:(unsigned long long)arg1 forAssetUuid:(id)arg2;
- (void)deleteAllResourcesForAssetUuid:(id)arg1;
- (id)description;
- (id)localID;
- (unsigned long long)sizeOfOriginal;

@end
