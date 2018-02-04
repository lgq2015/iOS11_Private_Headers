/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLFetchingAlbum : _PLFetchingAlbum {
    NSPredicate * _ALAssetsGroupFilterPredicate;
    unsigned long long  _batchSize;
    NSArray * _cachedKeyAssets;
    unsigned long long  _countForDisplay;
    int  _emptyState;
    unsigned long long  _photosCount;
    unsigned long long  _videosCount;
}

@property (nonatomic, retain) NSPredicate *ALAssetsGroupFilterPredicate;
@property (nonatomic) unsigned long long batchSize;
@property (nonatomic, retain) NSData *customQueryParameters;
@property (nonatomic, retain) NSString *customQueryType;
@property (nonatomic, readonly, retain) NSPredicate *extraFilterPredicate;
@property (nonatomic, retain) NSFetchRequest *fetchRequest;
@property (nonatomic, retain) NSOrderedSet *fetchedAssets;
@property (nonatomic, readonly) bool hasAssetsCache;

+ (id)_panoramasAlbumPredicate;
+ (bool)contextShouldIgnoreChangesForALAssetsGroupFilterPredicate;
+ (bool)contextShouldIgnoreChangesForFetchRequest;
+ (bool)contextShouldIgnoreChangesForFetchedAssets;
+ (id)predicateForAlbumKind:(int)arg1;
+ (id)sortDescriptorsForAlbumKind:(int)arg1;

- (id)ALAssetsGroupFilterPredicate;
- (id)_cachedKeyAssets;
- (unsigned long long)_fetchedCountForAssetsOfKind:(short)arg1;
- (id)_performFetchWithRequest:(id)arg1;
- (unsigned long long)approximateCount;
- (id)assets;
- (void)awakeFromFetch;
- (void)awakeFromInsert;
- (void)batchFetchAssets:(id)arg1;
- (unsigned long long)batchSize;
- (bool)canPerformEditOperation:(unsigned long long)arg1;
- (unsigned long long)count;
- (unsigned long long)countForAssetsOfKind:(short)arg1;
- (void)dealloc;
- (void)didTurnIntoFault;
- (id)extraFilterPredicate;
- (id)fastPointerAccessSetForAssets:(id)arg1;
- (id)fetchRequest;
- (id)filteredIndexesForPredicate:(id)arg1;
- (bool)hasAssetsCache;
- (bool)isEmpty;
- (id)keyAsset;
- (bool)mayHaveAssetsInCommon:(id)arg1;
- (id)mutableAssets;
- (id)primitiveAssets;
- (id)secondaryKeyAsset;
- (void)setALAssetsGroupFilterPredicate:(id)arg1;
- (void)setAssets:(id)arg1;
- (void)setBatchSize:(unsigned long long)arg1;
- (void)setFetchRequest:(id)arg1;
- (void)setKeyAsset:(id)arg1;
- (void)setSecondaryKeyAsset:(id)arg1;
- (void)setTertiaryKeyAsset:(id)arg1;
- (void)setupFetchRequest;
- (id)tertiaryKeyAsset;
- (void)updateSnapshotAndClearCaches:(id)arg1;

@end
