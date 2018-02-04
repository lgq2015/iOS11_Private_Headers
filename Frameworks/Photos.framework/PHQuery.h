/* made by EzioChiu
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHQuery : NSObject <NSCopying, NSPredicateVisitor> {
    bool  __includesCameraRoll;
    NSPredicate * _basePredicate;
    NSPredicate * _cachedFetchOptionsPredicate;
    long long  _collectionFetchType;
    id  _combinedQueryGroupKey;
    NSString * _combinedQueryKeyPath;
    NSManagedObjectID * _combinedQuerySeparatingIdentifier;
    PHCollection * _containerCollection;
    NSManagedObjectID * _containerIdentifier;
    NSRelationshipDescription * _containerRelationship;
    unsigned long long  _containerSortingAttributesIndexValue;
    unsigned long long  _containerToObjectRelationshipIndexValue;
    PHFetchOptions * _fetchOptions;
    NSFetchRequest * _fetchRequest;
    NSString * _fetchType;
    NSPredicate * _filterPredicate;
    unsigned long long  _filteringAttributesIndexValue;
    NSMutableSet * _filteringKeys;
    NSMutableSet * _filteringObjectKeyPaths;
    NSMutableSet * _filteringOids;
    unsigned long long  _filteringRelationshipsIndexValue;
    NSMutableDictionary * _filteringRelationshipsIndexValueByBaseEntityName;
    unsigned long long  _objectToContainerRelationshipIndexValue;
    PHPhotoLibrary * _photoLibrary;
    bool  _preparedCombinedQueryKeys;
    bool  _preparedContainerInfo;
    bool  _preparedFilteringAttributes;
    NSArray * _seedOIDs;
}

@property (setter=_setIncludesCameraRoll:, nonatomic) bool _includesCameraRoll;
@property (readonly) NSPredicate *basePredicate;
@property (readonly) id combinedQueryGroupKey;
@property (readonly) NSString *combinedQueryKeyPath;
@property (readonly) NSManagedObjectID *combinedQuerySeparatingIdentifier;
@property (nonatomic, copy) PHFetchOptions *fetchOptions;
@property (readonly) NSFetchRequest *fetchRequest;
@property (readonly) NSString *fetchType;
@property (readonly) NSPredicate *filterPredicate;
@property (nonatomic, readonly) NSSet *filteringOids;
@property (nonatomic, readonly) NSDictionary *filteringRelationshipsIndexValueByBaseEntityName;
@property (readonly) PHPhotoLibrary *photoLibrary;
@property (readonly) NSArray *seedOIDs;

+ (id)_containerIdentifierForFetchType:(id)arg1 predicate:(id)arg2 outRelationship:(id*)arg3;
+ (id)_defaultFetchOptionsForIdentifiedAssetsQuery;
+ (id)_fetchOptionsForFetchingAssetsFromAssetCollection:(id)arg1 options:(id)arg2;
+ (id)_fetchTypeForLocalIdentifiers:(id)arg1;
+ (id)_filterPredicateFromFetchOptionsPredicate:(id)arg1 options:(id)arg2 phClass:(Class)arg3;
+ (id)_queryForPersonsInAssetsWithObjectIDs:(id)arg1 withOptions:(id)arg2;
+ (id)_queryForPersonsWithFaceRelationshipPredicate:(id)arg1 options:(id)arg2;
+ (id)_relationshipForFetchType:(id)arg1 predicate:(id)arg2;
+ (id)_rootFolderID;
+ (id)_transformedSortDescriptors:(id)arg1 forFetchType:(id)arg2;
+ (bool)_validateLocalIdentifiers:(id)arg1 compatibilityWithFetchType:(id)arg2;
+ (id)combinedFetchRequestForQueries:(id)arg1;
+ (id)defaultSortDescriptorForFetchType:(id)arg1 predicate:(id)arg2;
+ (id)queryForAssetCollectionsContainingAsset:(id)arg1 withType:(long long)arg2;
+ (id)queryForAssetCollectionsContainingAssets:(id)arg1 withType:(long long)arg2;
+ (id)queryForAssetCollectionsWithCloudIdentifiers:(id)arg1;
+ (id)queryForAssetCollectionsWithLocalIdentifiers:(id)arg1;
+ (id)queryForAssetCollectionsWithObjectIDs:(id)arg1;
+ (id)queryForAssetCollectionsWithType:(long long)arg1 localIdentifiers:(id)arg2;
+ (id)queryForAssetCollectionsWithType:(long long)arg1 subtype:(long long)arg2 options:(id)arg3;
+ (id)queryForAssetsForFaceGroups:(id)arg1 options:(id)arg2;
+ (id)queryForAssetsForFaces:(id)arg1 options:(id)arg2;
+ (id)queryForAssetsForPersons:(id)arg1 options:(id)arg2;
+ (id)queryForAssetsInAssetCollection:(id)arg1 options:(id)arg2;
+ (id)queryForAssetsInBoundingBoxWithTopLeftLocation:(id)arg1 bottomRightLocation:(id)arg2 options:(id)arg3;
+ (id)queryForAssetsWithBurstIdentifier:(id)arg1 options:(id)arg2;
+ (id)queryForAssetsWithCloudIdentifiers:(id)arg1 options:(id)arg2;
+ (id)queryForAssetsWithLocalIdentifiers:(id)arg1 options:(id)arg2;
+ (id)queryForAssetsWithMediaType:(long long)arg1 options:(id)arg2;
+ (id)queryForAssetsWithObjectIDs:(id)arg1 options:(id)arg2;
+ (id)queryForAssetsWithOptions:(id)arg1;
+ (id)queryForAssociatedPersonForFaceGroup:(id)arg1 withOptions:(id)arg2;
+ (id)queryForCloudSharedAlbums;
+ (id)queryForCollectionListContainingCollection:(id)arg1;
+ (id)queryForCollectionListsWithCloudIdentifiers:(id)arg1;
+ (id)queryForCollectionListsWithType:(long long)arg1 localIdentifiers:(id)arg2;
+ (id)queryForCollectionListsWithType:(long long)arg1 subtype:(long long)arg2 options:(id)arg3;
+ (id)queryForCollectionsInCollectionList:(id)arg1 options:(id)arg2;
+ (id)queryForCuratedAssetsInMemory:(id)arg1 options:(id)arg2;
+ (id)queryForCustomKeyAssetsInAssetCollection:(id)arg1 options:(id)arg2;
+ (id)queryForEmptyFaceGroupsWithOptions:(id)arg1;
+ (id)queryForExtendedCuratedAssetsInMemory:(id)arg1 options:(id)arg2;
+ (id)queryForFaceCropsWithLocalIdentifiers:(id)arg1 options:(id)arg2;
+ (id)queryForFaceCropsWithOptions:(id)arg1;
+ (id)queryForFaceGroupsForPerson:(id)arg1 options:(id)arg2;
+ (id)queryForFaceGroupsWithFace:(id)arg1 options:(id)arg2;
+ (id)queryForFaceGroupsWithLocalIdentifiers:(id)arg1 options:(id)arg2;
+ (id)queryForFaceGroupsWithOptions:(id)arg1;
+ (id)queryForFacesForPerson:(id)arg1 options:(id)arg2;
+ (id)queryForFacesForPersonsAssociatedWithFaceGroupsContainingFacesWithClusterSequenceNumbers:(id)arg1 options:(id)arg2;
+ (id)queryForFacesInAsset:(id)arg1 options:(id)arg2;
+ (id)queryForFacesInFaceGroup:(id)arg1 options:(id)arg2;
+ (id)queryForFacesOnAssetWithFace:(id)arg1 options:(id)arg2;
+ (id)queryForFacesOnFaceCrop:(id)arg1 options:(id)arg2;
+ (id)queryForFacesWithLocalIdentifiers:(id)arg1 options:(id)arg2;
+ (id)queryForFacesWithOptions:(id)arg1;
+ (id)queryForInvalidMergeCandidatePersonsForPerson:(id)arg1 options:(id)arg2;
+ (id)queryForKeyAssetInMemory:(id)arg1 options:(id)arg2;
+ (id)queryForKeyAssetsInAssetCollection:(id)arg1 options:(id)arg2;
+ (id)queryForKeyFaceForFaceGroup:(id)arg1 options:(id)arg2;
+ (id)queryForKeyFaceOnPerson:(id)arg1 options:(id)arg2;
+ (id)queryForMergeCandidatePersonsForPerson:(id)arg1 options:(id)arg2;
+ (id)queryForMomentListsWithSubType:(long long)arg1 containingMoment:(id)arg2;
+ (id)queryForMomentListsWithSubType:(long long)arg1 options:(id)arg2;
+ (id)queryForMomentsBackingMemory:(id)arg1;
+ (id)queryForMomentsContainingAssetsWithLocalIdentifiers:(id)arg1;
+ (id)queryForMomentsInMomentList:(id)arg1 options:(id)arg2;
+ (id)queryForMomentsWithOptions:(id)arg1;
+ (id)queryForMovieCuratedAssetsInMemory:(id)arg1 options:(id)arg2;
+ (id)queryForPersonsInAsset:(id)arg1 options:(id)arg2;
+ (id)queryForPersonsInAssets:(id)arg1 withOptions:(id)arg2;
+ (id)queryForPersonsWithFace:(id)arg1 options:(id)arg2;
+ (id)queryForPersonsWithLocalIdentifiers:(id)arg1 options:(id)arg2;
+ (id)queryForPersonsWithOptions:(id)arg1;
+ (id)queryForPersonsWithType:(long long)arg1 options:(id)arg2;
+ (id)queryForRejectedFacesOnPerson:(id)arg1 options:(id)arg2;
+ (id)queryForRejectedPersonsForFace:(id)arg1 options:(id)arg2;
+ (id)queryForRepresentativeAssetsInMemory:(id)arg1 options:(id)arg2;
+ (id)queryForRootAlbumCollectionList;
+ (id)queryForSingletonFacesWithOptions:(id)arg1;
+ (id)queryForTopLevelUserCollections;
+ (id)queryForType:(id)arg1 withBasePredicate:(id)arg2 inLibrary:(id)arg3;
+ (id)queryForType:(id)arg1 withBasePredicate:(id)arg2 seedOIDs:(id)arg3 inLibrary:(id)arg4;
+ (id)queryForType:(id)arg1 withIdentifiers:(id)arg2 local:(bool)arg3;

- (void).cxx_destruct;
- (id)_containerRelationship;
- (id)_createFetchRequestIncludingBasePredicate:(bool)arg1;
- (id)_effectiveSortDescriptors;
- (id)_globalPredicatesForPHClass:(Class)arg1;
- (bool)_includesCameraRoll;
- (bool)_isAlbumContentSort;
- (bool)_isAlbumContentTitleSort;
- (void)_prepareCombinedQueryKeys;
- (void)_prepareContainerInfo;
- (void)_prepareFilteringAttributes;
- (void)_setCollectionFetchType:(long long)arg1;
- (void)_setContainerCollection:(id)arg1;
- (void)_setIncludesCameraRoll:(bool)arg1;
- (id)basePredicate;
- (long long)collectionFetchType;
- (id)combinedQueryGroupKey;
- (id)combinedQueryKeyPath;
- (id)combinedQuerySeparatingIdentifier;
- (id)containerIdentifier;
- (unsigned long long)containerSortingAttributesIndexValue;
- (unsigned long long)containerToObjectRelationshipIndexValue;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)effectivePredicateForPHClass:(Class)arg1 request:(id)arg2 includingBasePredicate:(bool)arg3;
- (id)executeQuery;
- (id)fetchOptions;
- (id)fetchRequest;
- (id)fetchType;
- (id)filterPredicate;
- (unsigned long long)filteringAttributesIndexValue;
- (id)filteringOids;
- (unsigned long long)filteringRelationshipsIndexValue;
- (id)filteringRelationshipsIndexValueByBaseEntityName;
- (id)initForType:(id)arg1 withBasePredicate:(id)arg2 inLibrary:(id)arg3;
- (id)initForType:(id)arg1 withBasePredicate:(id)arg2 seedOIDs:(id)arg3 inLibrary:(id)arg4;
- (unsigned long long)objectToContainerRelationshipIndexValue;
- (id)photoLibrary;
- (id)seedOIDs;
- (void)setFetchOptions:(id)arg1;
- (id)updatedQueryWithChange:(id)arg1;
- (void)visitPredicate:(id)arg1;
- (void)visitPredicateExpression:(id)arg1;
- (void)visitPredicateOperator:(id)arg1;

@end
