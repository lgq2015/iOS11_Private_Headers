/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUSearchResultsValue : NSObject <PUSearchResult> {
    NSArray * _additionalUUIDs;
    id  _albumUUID;
    unsigned long long  _approximateCount;
    NSAttributedString * _attributedDisplayTitle;
    <PUSearchResultsValueDelegate> * _delegate;
    NSString * _displaySubtitle;
    PSIGroupResult * _groupResult;
    id  _memoryUUID;
    NSObject<OS_dispatch_queue> * _queue;
    double  _score;
    NSString * _selectedDisplayTitle;
    NSMutableDictionary * _uuidToAssetMap;
    NSArray * _uuids;
}

@property (setter=_setAdditionalUUIDs:, retain) NSArray *additionalUUIDs;
@property (setter=_setAlbumUUID:, retain) id albumUUID;
@property (setter=_setApproximateCount:) unsigned long long approximateCount;
@property (readonly, copy) NSArray *assets;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PUSearchResultsValueDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *displaySubtitle;
@property (readonly, copy) NSString *displayTitle;
@property (setter=_setGroupResult:, retain) PSIGroupResult *groupResult;
@property (readonly) unsigned long long hash;
@property (setter=_setMemoryUUID:, retain) id memoryUUID;
@property (readonly) double score;
@property (readonly) unsigned long long searchCategories;
@property (readonly, copy) NSString *searchString;
@property (nonatomic, readonly) NSArray *searchTokens;
@property (setter=_setSelectedDisplayTitle:, retain) NSString *selectedDisplayTitle;
@property (readonly) Class superclass;
@property (readonly) NSMutableDictionary *uuidToAssetMap;
@property (setter=_setUUIDs:, retain) NSArray *uuids;

- (void).cxx_destruct;
- (void)_computeScoreWithMaxGroupedResultsCount:(unsigned long long)arg1;
- (void)_setAdditionalUUIDs:(id)arg1;
- (void)_setAlbumUUID:(id)arg1;
- (void)_setApproximateCount:(unsigned long long)arg1;
- (void)_setAsset:(id)arg1 forUUID:(id)arg2;
- (void)_setGroupResult:(id)arg1;
- (void)_setMemoryUUID:(id)arg1;
- (void)_setSelectedDisplayTitle:(id)arg1;
- (void)_setUUIDs:(id)arg1;
- (id)additionalUUIDs;
- (id)albumUUID;
- (unsigned long long)approximateCount;
- (id)assetLocalIdentifiersForPreview;
- (id)assets;
- (long long)compare:(id)arg1;
- (id)delegate;
- (id)displaySubtitle;
- (id)displayTitle;
- (id)displayTitleWithDefaultAttributes:(id)arg1 dimmedAttributes:(id)arg2 selectedDisplayTitle:(id*)arg3;
- (void)fetchAdditionalUUIDs:(id /* block */)arg1;
- (void)fetchAllUUIDs:(id /* block */)arg1;
- (void)fetchRemainingUUIDs:(id /* block */)arg1;
- (id)groupResult;
- (bool)hasAdditionalUUIDs;
- (id)init;
- (bool)isFinished;
- (id)memoryUUID;
- (void)performAggdSelectionLog;
- (double)score;
- (unsigned long long)searchCategories;
- (id)searchString;
- (id)searchTokens;
- (id)selectedDisplayTitle;
- (void)setDelegate:(id)arg1;
- (id)uuidToAssetMap;
- (id)uuids;

@end
