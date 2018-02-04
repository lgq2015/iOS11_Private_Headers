/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface MiroSmartMusicRequestManager : NSObject {
    bool  _allowsDownloads;
    FMSongLibrary * _library;
    NSMutableDictionary * _localSongsByMood;
    NSSet * _moodIDSet;
    NSMutableArray * _moodsDownloading;
}

@property (nonatomic) bool allowsDownloads;
@property (nonatomic, readonly) FMSongLibrary *library;
@property (nonatomic, retain) NSMutableDictionary *localSongsByMood;
@property (nonatomic, retain) NSSet *moodIDSet;
@property (nonatomic, retain) NSMutableArray *moodsDownloading;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_addObserversOnSongLibrary:(id)arg1 indicateNetworkActivity:(bool)arg2;
- (id)_candidateSongMappingsForKeywords:(id)arg1;
- (id)_candidateSongsForMoodID:(id)arg1;
- (void)_downloadInProgressChanged:(id)arg1;
- (id)_fetchSongsWithKeywords:(id)arg1;
- (id)_moodIDforSongUID:(id)arg1;
- (id)_randomSongUIDForCandidateSongs:(id)arg1;
- (id)_randomSongUIDForCandidateSongs:(id)arg1 withPrioritySet:(id)arg2;
- (void)_removeConflicts;
- (void)_removeObserversOnLibrary;
- (void)_requestDownloadForMoodID:(id)arg1;
- (void)_setup;
- (void)_updateLocalSongsByMood;
- (bool)allowsDownloads;
- (void)dealloc;
- (id)fetchAllSongs;
- (id)fetchSongWithUID:(id)arg1;
- (id)init;
- (id)library;
- (void)loadAssetWithID:(id)arg1 forSongID:(id)arg2;
- (id)localSongsByMood;
- (id)localSongsForMoodID:(id)arg1;
- (void)markSongUIDAsRequested:(id)arg1;
- (id)moodIDForSong:(id)arg1;
- (id)moodIDSet;
- (id)moodsDownloading;
- (void)purgeAllLocalCachedAssets;
- (id)randomSongUIDForKeywords:(id)arg1;
- (id)randomSongUIDForMoodID:(id)arg1;
- (id)randomSongUIDForMoodID:(id)arg1 excludingSongs:(id)arg2;
- (void)setAllowsDownloads:(bool)arg1;
- (void)setLocalSongsByMood:(id)arg1;
- (void)setMoodIDSet:(id)arg1;
- (void)setMoodsDownloading:(id)arg1;
- (bool)songHasSpecialKeyword:(id)arg1;
- (id)songLibrary;
- (void)tearDownSongLibrary;
- (id)unusedLocalSongsForMoodID:(id)arg1;

@end
