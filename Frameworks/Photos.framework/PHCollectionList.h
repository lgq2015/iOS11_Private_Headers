/* made by EzioChiu
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHCollectionList : PHCollection {
    id /* block */  _childCollectionsSortingComparator;
    long long  _collectionListSubtype;
    long long  _collectionListType;
    NSArray * _collections;
    NSDate * _endDate;
    unsigned long long  _estimatedChildCollectionCount;
    NSArray * _localizedLocationNames;
    NSString * _localizedTitle;
    int  _plAlbumKind;
    PHQuery * _query;
    NSDate * _startDate;
    NSString * _transientIdentifier;
    unsigned long long  _unreadAssetCollectionsCount;
}

@property (nonatomic, readonly, copy) id /* block */ childCollectionsSortingComparator;
@property (nonatomic, readonly) long long collectionListSubtype;
@property (nonatomic, readonly) long long collectionListType;
@property (nonatomic, readonly) NSArray *collections;
@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) unsigned long long estimatedChildCollectionCount;
@property (nonatomic, readonly) bool keyCollectionsAtEnd;
@property (nonatomic, readonly) NSArray *localizedLocationNames;
@property (nonatomic, readonly) PHQuery *query;
@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) NSString *transientIdentifier;
@property (nonatomic, readonly) unsigned long long unreadAssetCollectionsCount;

+ (id)entityKeyForPropertyKey:(id)arg1;
+ (id)fetchCollectionListsContainingCollection:(id)arg1 options:(id)arg2;
+ (id)fetchCollectionListsWithCloudIdentifiers:(id)arg1 options:(id)arg2;
+ (id)fetchCollectionListsWithLocalIdentifiers:(id)arg1 options:(id)arg2;
+ (id)fetchCollectionListsWithType:(long long)arg1 localIdentifiers:(id)arg2 options:(id)arg3;
+ (id)fetchCollectionListsWithType:(long long)arg1 subtype:(long long)arg2 options:(id)arg3;
+ (id)fetchMomentListsWithSubtype:(long long)arg1 containingMoment:(id)arg2 options:(id)arg3;
+ (id)fetchMomentListsWithSubtype:(long long)arg1 options:(id)arg2;
+ (id)fetchPredicateFromComparisonPredicate:(id)arg1 options:(id)arg2;
+ (id)fetchRootAlbumCollectionListWithOptions:(id)arg1;
+ (id)fetchType;
+ (id)identifierCode;
+ (id)managedEntityName;
+ (bool)managedObjectSupportsTrashedState;
+ (id)propertiesToFetchWithHint:(unsigned long long)arg1;
+ (id)transientCollectionListWithAssetCollections:(id)arg1 title:(id)arg2;
+ (id)transientCollectionListWithAssetCollections:(id)arg1 title:(id)arg2 identifier:(id)arg3;
+ (id)transientCollectionListWithAssetCollectionsFetchResult:(id)arg1 title:(id)arg2;
+ (id)transientCollectionListWithAssetCollectionsFetchResult:(id)arg1 title:(id)arg2 identifier:(id)arg3;
+ (id)transientCollectionListWithCollections:(id)arg1 title:(id)arg2;
+ (id)transientCollectionListWithCollections:(id)arg1 title:(id)arg2 identifier:(id)arg3;
+ (id)transientCollectionListWithCollectionsFetchResult:(id)arg1 title:(id)arg2;
+ (id)transientCollectionListWithCollectionsFetchResult:(id)arg1 title:(id)arg2 identifier:(id)arg3;

- (void).cxx_destruct;
- (bool)canContainCollections;
- (bool)canPerformEditOperation:(long long)arg1;
- (Class)changeRequestClass;
- (id /* block */)childCollectionsSortingComparator;
- (unsigned long long)collectionFixedOrderPriority;
- (bool)collectionHasFixedOrder;
- (long long)collectionListSubtype;
- (long long)collectionListType;
- (id)collections;
- (id)description;
- (id)endDate;
- (unsigned long long)estimatedChildCollectionCount;
- (bool)hasLocationInfo;
- (id)initTransientWithCollections:(id)arg1 orQuery:(id)arg2 title:(id)arg3 identifier:(id)arg4;
- (id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3;
- (bool)keyCollectionsAtEnd;
- (id)localizedLocationNames;
- (id)localizedTitle;
- (id)pl_assetContainerList;
- (id)query;
- (id)startDate;
- (id)transientIdentifier;
- (unsigned long long)unreadAssetCollectionsCount;

@end
