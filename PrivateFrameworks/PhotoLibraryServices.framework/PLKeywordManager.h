/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLKeywordManager : NSObject {
    PLGatekeeperClient * _assetsdClient;
    NSMutableDictionary * _keywordCache;
    PLManagedObjectContext * _libraryContext;
    PLPhotoLibrary * _photoLibrary;
}

+ (id)writeQueue;

- (bool)_assetsdSetKeywords:(id)arg1 forAssetUUID:(id)arg2;
- (id)_keywordObjectsForKeywords:(id)arg1;
- (id)_keywordsForAsset:(id)arg1;
- (void)_loadKeywords;
- (id)allKeywordObjectIDs;
- (id)allKeywords;
- (void)dealloc;
- (id)initWithPhotoLibrary:(id)arg1;
- (id)keywordsForAsset:(id)arg1;
- (id)keywordsForAssetWithUUID:(id)arg1;
- (id)keywordsForAssets:(id)arg1;
- (bool)setKeywords:(id)arg1 forAssetUUID:(id)arg2;

@end
