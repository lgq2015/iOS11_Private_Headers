/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface MiroEditorController : NSObject <MiroAssetPropertyEditing, MiroProjectEditing> {
    <MiroEditorControllerDelegate> * _delegate;
    NSArray * _displayedClips;
    NSArray * _displayedClipsInfo;
    MiroMemory * _memory;
    NSMutableDictionary * _modifiedAssetsMetadata;
    NSMutableDictionary * _previousAssetsMetadata;
    NSArray * _previousDisplayedClips;
    int  _projectFrameRate;
}

@property (nonatomic, readonly) NSArray *assetsFilteredForSuggestions;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MiroEditorControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSArray *displayedClips;
@property (nonatomic, retain) NSArray *displayedClipsInfo;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) MiroMemory *memory;
@property (nonatomic, readonly) NSString *memoryLocalizedTitle;
@property (nonatomic, retain) NSMutableDictionary *modifiedAssetsMetadata;
@property (nonatomic, retain) NSMutableDictionary *previousAssetsMetadata;
@property (nonatomic, retain) NSArray *previousDisplayedClips;
@property (nonatomic) int projectFrameRate;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSSet *usedAssetIDs;

- (void).cxx_destruct;
- (void)_addAssetToModifiedAssets:(id)arg1;
- (id)_computeNewDislikedRangesWithExistingDislikedRanges:(id)arg1 proposedTrimRanges:(id)arg2 previousClipRanges:(id)arg3 currentClipRanges:(id)arg4;
- (id)_computeNewPickedRangesWithPreviousClipRanges:(id)arg1 currentClipRanges:(id)arg2;
- (id)_freezeRangeForClip:(id)arg1;
- (id)_indexesOfClips:(id)arg1;
- (void)_invalidateGainForClip:(id)arg1;
- (id)_makeTrimRangesWithClips:(id)arg1;
- (id)_mergeRanges:(id)arg1 withRanges:(id)arg2;
- (id)_otherSplitClipsForClip:(id)arg1;
- (id)_pickedLocallyAvailableAssetIDs;
- (void)_removeUserRangesOfType:(unsigned long long)arg1 fromAsset:(id)arg2;
- (void)_replaceRangesOnAsset:(id)arg1 trimmed:(id)arg2 disliked:(id)arg3;
- (id)_replaceRangesThatOverlap:(id)arg1 withOverlappingRanges:(id)arg2 discardedRanges:(id*)arg3;
- (void)_restoreModifiedAssets;
- (id)_trimRangesForAssetBeforeEditing:(id)arg1;
- (void)_updateDisplayedClipsInsertingClip:(id)arg1 afterClip:(id)arg2;
- (void)_updateDisplayedClipsWithRemovedClips:(id)arg1;
- (void)_updateTrimRangesOnAsset:(id)arg1;
- (void)addAssets:(id)arg1 removeAssets:(id)arg2;
- (bool)assetHasUserModifiedAudioLevel:(id)arg1;
- (bool)assetIsPartOfMultiUp:(id)arg1;
- (id)assetsFilteredForSuggestions;
- (unsigned long long)audioLevelForClip:(id)arg1;
- (id)clipAtIndex:(unsigned long long)arg1;
- (unsigned long long)clipIndexForSequenceTime:(int)arg1;
- (bool)clipIsKeyAsset:(id)arg1;
- (bool)clipIsPartOfMultiUp:(id)arg1;
- (bool)clipIsPartOfSplit:(id)arg1;
- (id)delegate;
- (id)displayedClips;
- (id)displayedClipsInfo;
- (id)indexesForClipsOfAssetID:(id)arg1;
- (id)initWithSequence:(id)arg1 memory:(id)arg2;
- (id)memory;
- (id)memoryLocalizedTitle;
- (id)modifiedAssetsMetadata;
- (void)moveClipAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfClips;
- (id)pickListSplitDistanceForAsset:(id)arg1;
- (bool)pickedLocallyAvailableScenesContainAsset:(id)arg1;
- (id)previousAssetsMetadata;
- (id)previousDisplayedClips;
- (int)projectFrameRate;
- (void)removeClip:(id)arg1;
- (void)revertEditedRanges;
- (void)setAudioLevel:(unsigned long long)arg1 forClip:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setDisplayedClips:(id)arg1;
- (void)setDisplayedClipsInfo:(id)arg1;
- (void)setMemory:(id)arg1;
- (void)setModifiedAssetsMetadata:(id)arg1;
- (void)setPreviousAssetsMetadata:(id)arg1;
- (void)setPreviousDisplayedClips:(id)arg1;
- (void)setProjectFrameRate:(int)arg1;
- (bool)shouldRemoveClip:(id)arg1;
- (bool)shouldTrimClip:(id)arg1 startTime:(float)arg2 endTime:(float)arg3;
- (bool)trimClip:(id)arg1 startTime:(float)arg2 endTime:(float)arg3;
- (void)updateClipsFromSequence:(id)arg1;
- (id)usedAssetIDs;
- (id)usedAssetsForMemory;

@end