/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface FMSong : NSObject {
    NSObject<FlexSongProtocol> * _flexSong;
}

@property (readonly) NSObject<FlexSongProtocol> *flexSong;

+ (id)availableTagIDs;
+ (bool)hasValidTagIDs:(id)arg1;
+ (id)loadSongBundleAtPath:(id)arg1;
+ (id)loadSongsAndArtworkInFolderAtPath:(id)arg1;
+ (id)localizedNameForTagWithID:(id)arg1;
+ (long long)versionFromArtworkFilename:(id)arg1;

- (void).cxx_destruct;
- (id)_impl;
- (void)_notifySongAssetsChanged;
- (id)artistName;
- (id)artwork;
- (id)assetWithID:(id)arg1;
- (id)audioEncoderPresetName;
- (bool)canPlay;
- (void)cancelDownloadOfAllAssetsWithIDs:(id)arg1;
- (id)customOptions;
- (id)description;
- (id)flexSong;
- (bool)hidden;
- (id)initWithFlexSong:(id)arg1;
- (id)keywords;
- (long long)metadataVersion;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })minimumDuration;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })naturalDuration;
- (bool)recalled;
- (id)renditionForDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 withOptions:(id)arg2 usePreRenderedFades:(bool)arg3;
- (id)renditionForDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 withOptions:(id)arg2 usePreRenderedFades:(bool)arg3 testingContext:(id)arg4;
- (void)requestDownloadOfAllAssetsWithIDs:(id)arg1;
- (long long)sampleRate;
- (id)songName;
- (id)tagIDs;
- (id)uid;
- (void)updateAsset:(id)arg1 downloadProgress:(double)arg2;
- (void)updateAssets:(id)arg1;
- (void)updateFlexSongBackend:(id)arg1;

@end
