/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface AssetModel : NSObject {
    NSLock * m_assetLock;
    NSMutableDictionary * m_assetMap;
    NSMutableArray * m_knownAssets;
    double  m_lastAssetsLibraryInvalidationAttempt;
}

+ (id)assetDirectory;
+ (id)builtInAssetDirectoryForClipType:(int)arg1;
+ (id)deviceCharacteristicsDict;
+ (double)imageScale;
+ (double)maxPixelsForImage:(bool)arg1;
+ (id)sharedInstance;
+ (double)thumbnailScale;

- (id)assetPathsForClipType:(int)arg1 inProjectPath:(id)arg2 excludingURLs:(id)arg3;
- (id)assetPathsForProjectAudio;
- (id)assetPathsForRecordedAudio;
- (id)assetPathsForSharedAudio;
- (id)builtInAssetPathsForClipType:(int)arg1;
- (void)clearAssetsList;
- (void)dealloc;
- (id)fileTypesForClipType:(int)arg1;
- (id)files:(id)arg1 atPath:(id)arg2 filteredForTypes:(id)arg3;
- (id)filterURLs:(id)arg1 fromPaths:(id)arg2;
- (id)imageViewWithThemeImageNamed:(id)arg1 renderingIntent:(int)arg2 allowProxies:(bool)arg3;
- (id)ingestMovieAtPath:(id)arg1 intoProject:(id)arg2 asSharedAssets:(bool)arg3;
- (id)init;
- (void)invalidateAssetLibrary;
- (void)loadAssetsListIfNeeded;
- (void)mpMediaLibraryDidChange:(id)arg1;
- (id)pathForBuiltInAssetWithName:(id)arg1;

@end
