/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface FlexCloudManager : NSObject {
    NSMutableArray * _cloudManagedSongs;
    NSMutableDictionary * _cloudManagedSongsByUID;
    FMSongLibrary * _library;
    unsigned long long  _retryCount;
}

@property (readonly) NSMutableArray *cloudManagedSongs;
@property (readonly) NSMutableDictionary *cloudManagedSongsByUID;
@property (readonly) FMSongLibrary *library;
@property (nonatomic) unsigned long long retryCount;

+ (id)createCloudManager:(long long)arg1 withLibrary:(id)arg2 options:(id)arg3;

- (void).cxx_destruct;
- (id)_purgeAndReturnReplacementFor:(id)arg1;
- (void)_registerSongs:(id)arg1;
- (unsigned long long)assetStatus:(id)arg1;
- (void)cancelDownloadOfAllAssets;
- (void)cancelDownloadOfAsset:(id)arg1;
- (id)cloudManagedSongs;
- (id)cloudManagedSongsByUID;
- (void)fetchAllSongsWithCompletion:(id /* block */)arg1;
- (id)initWithLibrary:(id)arg1;
- (id)library;
- (void)loadAssetWithID:(id)arg1 forSongID:(id)arg2;
- (id)loadCachedSongs;
- (void)requestDownloadOfAsset:(id)arg1;
- (void)requestPurgeOfAsset:(id)arg1;
- (unsigned long long)retryCount;
- (void)retryFetchAllSongs;
- (void)setRetryCount:(unsigned long long)arg1;

@end
