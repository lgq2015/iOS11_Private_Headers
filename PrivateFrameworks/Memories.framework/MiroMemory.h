/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface MiroMemory : NSObject <NSCopying, NSSecureCoding> {
    long long  _allAssetCount;
    PHAssetCollection * _assetCollection;
    NSDictionary * _assetsRanges;
    NSArray * _autoPickedAssetIDs;
    MiroBlueprint * _blueprint;
    NSMutableDictionary * _blueprints;
    struct Buckets { 
        long long shortCount; 
        long long mediumCount; 
        long long longCount; 
        double shortDuration; 
        double mediumDuration; 
        double longDuration; 
        int defaultBucketIsNotShort; 
    }  _buckets;
    MiroBlueprint * _customBlueprint;
    double  _customDuration;
    double  _duration;
    long long  _durationRange;
    NSArray * _featuredPeople;
    NSDictionary * _freezeRanges;
    bool  _hasBuildingPosterImageBegun;
    PHAsset * _initalKeyAsset;
    bool  _isPregenerating;
    PHAsset * _keyAsset;
    NSString * _keyAssetID;
    NSString * _keywordedSongID;
    NSDictionary * _loadedFreezeRanges;
    NSURL * _localPersistentFile;
    NSString * _localizedSubTitle;
    NSString * _localizedTitle;
    NSSet * _manuallyAddedAssetIDs;
    NSSet * _manuallyRemovedAssetIDs;
    double  _maximumPossibleMemoryDuration;
    MiroPickList * _pickList;
    long long  _pickedItemCount;
    NSArray * _requestedKeywords;
    NSString * _requestedMoodID;
    NSObject<OS_dispatch_queue> * _saveQueue;
    double  _savedDuration;
    long long  _savedMaxDurationRange;
    long long  _schema;
    bool  _storedPosterExists;
    NSDate * _viewedDate;
}

@property (nonatomic) long long allAssetCount;
@property (nonatomic, readonly) PHFetchResult *allAssets;
@property (nonatomic, retain) PHAssetCollection *assetCollection;
@property (nonatomic, retain) NSDictionary *assetsRanges;
@property (nonatomic, retain) NSArray *autoPickedAssetIDs;
@property (nonatomic, retain) MiroBlueprint *blueprint;
@property (nonatomic, retain) NSMutableDictionary *blueprints;
@property (nonatomic) struct Buckets { long long x1; long long x2; long long x3; double x4; double x5; double x6; int x7; } buckets;
@property (nonatomic, retain) MiroBlueprint *customBlueprint;
@property (nonatomic) double customDuration;
@property (nonatomic, retain) NSString *displayName;
@property (nonatomic, retain) NSString *displaySubtitle;
@property (nonatomic) double duration;
@property (nonatomic) long long durationRange;
@property (nonatomic, retain) NSArray *featuredPeople;
@property (nonatomic, retain) NSDictionary *freezeRanges;
@property (nonatomic) bool hasBuildingPosterImageBegun;
@property (nonatomic, retain) PHAsset *initalKeyAsset;
@property (nonatomic) bool isPregenerating;
@property (nonatomic, retain) PHAsset *keyAsset;
@property (retain) NSString *keyAssetID;
@property (nonatomic, retain) NSString *keywordedSongID;
@property (nonatomic, retain) NSDictionary *loadedFreezeRanges;
@property (nonatomic, retain) NSURL *localPersistentFile;
@property (retain) NSString *localizedSubTitle;
@property (retain) NSString *localizedTitle;
@property (nonatomic, retain) NSSet *manuallyAddedAssetIDs;
@property (nonatomic, retain) NSSet *manuallyRemovedAssetIDs;
@property (nonatomic, readonly) long long maxDurationRange;
@property (nonatomic) double maximumPossibleMemoryDuration;
@property (nonatomic, readonly) double minimumPossibleMemoryDuration;
@property (nonatomic, retain) NSString *moodID;
@property (nonatomic, readonly) NSArray *moodIDs;
@property (nonatomic, readonly) bool needsTitleCard;
@property (nonatomic, retain) MiroPickList *pickList;
@property (nonatomic) long long pickedItemCount;
@property (nonatomic, retain) NSArray *requestedKeywords;
@property (nonatomic, retain) NSString *requestedMoodID;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *saveQueue;
@property (nonatomic) double savedDuration;
@property (nonatomic) long long schema;
@property (nonatomic) bool storedPosterExists;
@property (nonatomic, retain) NSDate *viewedDate;

+ (id)_assetCollectionUniqueLocalIdentifier:(id)arg1;
+ (id)_displayableUuidWithUuid:(id)arg1;
+ (id)_miroMoodIDForPHMemoryMood:(unsigned long long)arg1;
+ (id)_saveURL;
+ (id)fileURLWithUuid:(id)arg1;
+ (id)grabTestKeywords;
+ (void)initialize;
+ (id)memoryWithPHAssetCollection:(id)arg1;
+ (id)memoryWithPHAssetCollection:(id)arg1 keyAsset:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_deleteMetadata;
- (void)_initAllAssetMetadata;
- (id)_newBlueprintWithMoodID:(id)arg1;
- (void)_persistentRangesChanged:(id)arg1;
- (void)_saveMetadata;
- (void)_updateAddedRemovedLists;
- (void)_writeMetadata:(id)arg1;
- (long long)allAssetCount;
- (id)allAssets;
- (id)allAssetsAsArray;
- (id)allAssetsIncludingAllMomentsAssets:(bool)arg1;
- (id)assetCollection;
- (bool)assetHasFaces:(id)arg1;
- (id)assetsRanges;
- (id)autoPickedAssetIDs;
- (id)blueprint;
- (id)blueprintForMoodID:(id)arg1;
- (id)blueprints;
- (struct Buckets { long long x1; long long x2; long long x3; double x4; double x5; double x6; int x7; })buckets;
- (void)clearFreezeDataForPregenerate;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currentVideoFreezeRangeForAssetID:(id)arg1 index:(int)arg2;
- (id)customBlueprint;
- (double)customDuration;
- (void)dealloc;
- (id)description;
- (id)displayName;
- (id)displaySubtitle;
- (double)duration;
- (long long)durationRange;
- (void)encodeWithCoder:(id)arg1;
- (id)featuredPeople;
- (id)featuredPersonsInMemoryAsFaceRangesInAsset:(id)arg1;
- (id)freezeRanges;
- (id)freezeRangesToEncode;
- (bool)hasBuildingPosterImageBegun;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initalKeyAsset;
- (void)invalidateCustomDuration;
- (void)invalidateDuration;
- (bool)isEqual:(id)arg1;
- (bool)isPersistable;
- (bool)isPosterEqual:(id)arg1;
- (bool)isPregenerating;
- (id)keyAsset;
- (id)keyAssetID;
- (id)keywordedSongID;
- (id)loadedFreezeRanges;
- (id)localPersistentFile;
- (id)localizedSubTitle;
- (id)localizedTitle;
- (void)manuallyAdd:(id)arg1 remove:(id)arg2;
- (id)manuallyAddedAssetIDs;
- (void)manuallyModify:(id)arg1 changeInSegmentCount:(long long)arg2;
- (id)manuallyRemovedAssetIDs;
- (long long)maxDurationRange;
- (double)maximumPossibleMemoryDuration;
- (bool)memoryClassificationBased;
- (id)memoryClassificationKeys;
- (bool)memoryFeaturesPeople;
- (bool)memoryFeaturesPersonInAsset:(id)arg1;
- (bool)memoryTypeDisablesCropping;
- (double)minimumPossibleMemoryDuration;
- (id)moodID;
- (id)moodIDs;
- (bool)needsTitleCard;
- (void)persist;
- (void)persistWithoutFreeze;
- (id)pickList;
- (id)pickedAssets;
- (long long)pickedItemCount;
- (id)pickedLocallyAvailableScenes;
- (id)rangesWithType:(unsigned long long)arg1 forAssetID:(id)arg2;
- (id)requestedKeywords;
- (id)requestedMoodID;
- (id)saveQueue;
- (double)savedDuration;
- (long long)schema;
- (void)setAllAssetCount:(long long)arg1;
- (void)setAssetCollection:(id)arg1;
- (void)setAssetsRanges:(id)arg1;
- (void)setAutoPickedAssetIDs:(id)arg1;
- (void)setBlueprint:(id)arg1;
- (void)setBlueprints:(id)arg1;
- (void)setBuckets:(struct Buckets { long long x1; long long x2; long long x3; double x4; double x5; double x6; int x7; })arg1;
- (void)setCustomBlueprint:(id)arg1;
- (void)setCustomDuration:(double)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setDisplaySubtitle:(id)arg1;
- (void)setDuration:(double)arg1;
- (void)setDurationRange:(long long)arg1;
- (void)setFeaturedPeople:(id)arg1;
- (void)setFreezeRanges:(id)arg1;
- (void)setHasBuildingPosterImageBegun:(bool)arg1;
- (void)setInitalKeyAsset:(id)arg1;
- (void)setIsPregenerating:(bool)arg1;
- (void)setKeyAsset:(id)arg1;
- (void)setKeyAssetID:(id)arg1;
- (void)setKeywordedSongID:(id)arg1;
- (void)setLoadedFreezeRanges:(id)arg1;
- (void)setLocalPersistentFile:(id)arg1;
- (void)setLocalizedSubTitle:(id)arg1;
- (void)setLocalizedTitle:(id)arg1;
- (void)setManuallyAddedAssetIDs:(id)arg1;
- (void)setManuallyRemovedAssetIDs:(id)arg1;
- (void)setMaximumPossibleMemoryDuration:(double)arg1;
- (void)setMoodID:(id)arg1;
- (void)setPickList:(id)arg1;
- (void)setPickedItemCount:(long long)arg1;
- (void)setRanges:(id)arg1 replaceType:(unsigned long long)arg2 forAssetID:(id)arg3;
- (void)setRequestedKeywords:(id)arg1;
- (void)setRequestedMoodID:(id)arg1;
- (void)setSaveQueue:(id)arg1;
- (void)setSavedDuration:(double)arg1;
- (void)setSchema:(long long)arg1;
- (void)setStoredPosterExists:(bool)arg1;
- (void)setViewedDate:(id)arg1;
- (bool)storedPosterExists;
- (double)titleCardDuration;
- (id)trimRangesForAsset:(id)arg1;
- (void)unPersist;
- (id)viewedDate;
- (bool)wasManuallyAdded:(id)arg1;
- (bool)wasManuallyRemoved:(id)arg1;

@end
