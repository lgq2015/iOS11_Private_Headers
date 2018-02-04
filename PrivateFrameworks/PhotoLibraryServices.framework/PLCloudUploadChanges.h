/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLCloudUploadChanges : NSObject {
    NSMutableSet * _adjustedAssetUuids;
    NSMutableArray * _albumChanges;
    NSMutableArray * _albumInserts;
    NSMutableArray * _albumsToDelete;
    NSMutableArray * _deletedAssets;
    NSMutableSet * _faceChangedAssetUuids;
    NSMutableArray * _faceCropChanges;
    NSMutableArray * _faceCropsToDelete;
    NSMutableArray * _insertedAssets;
    NSMutableArray * _memoriesToDelete;
    NSMutableArray * _memoryChanges;
    NSMutableArray * _personChanges;
    NSMutableArray * _personsToDelete;
    NSMutableSet * _propertyChangedAssetUuids;
    NSMutableArray * _updatedAssets;
    NSMutableSet * _updatedRelationship;
}

@property (nonatomic, retain) NSMutableSet *adjustedAssetUuids;
@property (nonatomic, retain) NSMutableArray *albumChanges;
@property (nonatomic, retain) NSMutableArray *albumInserts;
@property (nonatomic, retain) NSMutableArray *albumsToDelete;
@property (nonatomic, retain) NSMutableArray *deletedAssets;
@property (nonatomic, retain) NSMutableSet *faceChangedAssetUuids;
@property (nonatomic, retain) NSMutableArray *faceCropChanges;
@property (nonatomic, retain) NSMutableArray *faceCropsToDelete;
@property (nonatomic, retain) NSMutableArray *insertedAssets;
@property (nonatomic, retain) NSMutableArray *memoriesToDelete;
@property (nonatomic, retain) NSMutableArray *memoryChanges;
@property (nonatomic, retain) NSMutableArray *personChanges;
@property (nonatomic, retain) NSMutableArray *personsToDelete;
@property (nonatomic, retain) NSMutableSet *propertyChangedAssetUuids;
@property (nonatomic, retain) NSMutableArray *updatedAssets;
@property (nonatomic, retain) NSMutableSet *updatedRelationship;

- (id)adjustedAssetUuids;
- (id)albumChanges;
- (id)albumInserts;
- (id)albumsToDelete;
- (void)dealloc;
- (id)deletedAssets;
- (id)faceChangedAssetUuids;
- (id)faceCropChanges;
- (id)faceCropsToDelete;
- (id)init;
- (id)insertedAssets;
- (bool)isEmpty;
- (id)memoriesToDelete;
- (id)memoryChanges;
- (id)personChanges;
- (id)personsToDelete;
- (id)propertyChangedAssetUuids;
- (void)setAdjustedAssetUuids:(id)arg1;
- (void)setAlbumChanges:(id)arg1;
- (void)setAlbumInserts:(id)arg1;
- (void)setAlbumsToDelete:(id)arg1;
- (void)setDeletedAssets:(id)arg1;
- (void)setFaceChangedAssetUuids:(id)arg1;
- (void)setFaceCropChanges:(id)arg1;
- (void)setFaceCropsToDelete:(id)arg1;
- (void)setInsertedAssets:(id)arg1;
- (void)setMemoriesToDelete:(id)arg1;
- (void)setMemoryChanges:(id)arg1;
- (void)setPersonChanges:(id)arg1;
- (void)setPersonsToDelete:(id)arg1;
- (void)setPropertyChangedAssetUuids:(id)arg1;
- (void)setUpdatedAssets:(id)arg1;
- (void)setUpdatedRelationship:(id)arg1;
- (id)summaryDescription;
- (id)updatedAssets;
- (id)updatedRelationship;

@end
