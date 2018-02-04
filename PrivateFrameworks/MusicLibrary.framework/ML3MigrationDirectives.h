/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3MigrationDirectives : NSObject {
    int  _currentUserVersion;
    bool  _forceUpdateOriginals;
    bool  _needsAnalyze;
    bool  _needsToAutogenerateArtworkVariants;
    bool  _needsToRecreateIndexes;
    bool  _needsToRecreateTriggers;
    bool  _needsToReloadCollectionRepresentativeItems;
    bool  _needsToReloadContainerMediaTypes;
    bool  _needsToReloadStoreBookmarkMetadataIdentifiers;
    bool  _needsToRemoveLocationsForItemsMissingAssets;
    bool  _needsToUpdateSortMap;
    int  _originalUserVersion;
}

@property (nonatomic) int currentUserVersion;
@property (nonatomic) bool forceUpdateOriginals;
@property (nonatomic) bool needsAnalyze;
@property (nonatomic) bool needsToAutogenerateArtworkVariants;
@property (nonatomic) bool needsToRecreateIndexes;
@property (nonatomic) bool needsToRecreateTriggers;
@property (nonatomic) bool needsToReloadCollectionRepresentativeItems;
@property (nonatomic) bool needsToReloadContainerMediaTypes;
@property (nonatomic) bool needsToReloadStoreBookmarkMetadataIdentifiers;
@property (nonatomic) bool needsToRemoveLocationsForItemsMissingAssets;
@property (nonatomic) bool needsToUpdateSortMap;
@property (nonatomic, readonly) int originalUserVersion;

- (int)currentUserVersion;
- (bool)forceUpdateOriginals;
- (id)initWithOriginalUserVersion:(int)arg1;
- (bool)needsAnalyze;
- (bool)needsToAutogenerateArtworkVariants;
- (bool)needsToRecreateIndexes;
- (bool)needsToRecreateTriggers;
- (bool)needsToReloadCollectionRepresentativeItems;
- (bool)needsToReloadContainerMediaTypes;
- (bool)needsToReloadStoreBookmarkMetadataIdentifiers;
- (bool)needsToRemoveLocationsForItemsMissingAssets;
- (bool)needsToUpdateSortMap;
- (int)originalUserVersion;
- (void)setCurrentUserVersion:(int)arg1;
- (void)setForceUpdateOriginals:(bool)arg1;
- (void)setNeedsAnalyze:(bool)arg1;
- (void)setNeedsToAutogenerateArtworkVariants:(bool)arg1;
- (void)setNeedsToRecreateIndexes:(bool)arg1;
- (void)setNeedsToRecreateTriggers:(bool)arg1;
- (void)setNeedsToReloadCollectionRepresentativeItems:(bool)arg1;
- (void)setNeedsToReloadContainerMediaTypes:(bool)arg1;
- (void)setNeedsToReloadStoreBookmarkMetadataIdentifiers:(bool)arg1;
- (void)setNeedsToRemoveLocationsForItemsMissingAssets:(bool)arg1;
- (void)setNeedsToUpdateSortMap:(bool)arg1;

@end
