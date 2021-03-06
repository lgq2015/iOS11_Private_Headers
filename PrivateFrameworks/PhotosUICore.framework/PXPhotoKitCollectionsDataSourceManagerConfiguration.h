/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPhotoKitCollectionsDataSourceManagerConfiguration : NSObject {
    NSPredicate * _assetFilteringPredicate;
    bool  _canShowMemoriesAlbum;
    bool  _canShowPeopleAlbum;
    bool  _canShowScenesAlbum;
    bool  _canShowVirtualCollections;
    PHCollectionList * _collectionList;
    PHFetchResult * _collectionsFetchResult;
    long long  _filteringAssetTypes;
    bool  _isPickingSession;
    bool  _isRootFolder;
    bool  _isRootSharedAlbum;
    bool  _shouldHideEmptyCollections;
    bool  _shouldHideSmartAlbums;
}

@property (retain) NSPredicate *assetFilteringPredicate;
@property bool canShowMemoriesAlbum;
@property bool canShowPeopleAlbum;
@property bool canShowScenesAlbum;
@property bool canShowVirtualCollections;
@property (retain) PHCollectionList *collectionList;
@property (retain) PHFetchResult *collectionsFetchResult;
@property (readonly) PHFetchOptions *customFetchOptions;
@property (nonatomic) long long filteringAssetTypes;
@property (readonly) bool isPickingSession;
@property bool isRootFolder;
@property bool isRootSharedAlbum;
@property bool shouldHideEmptyCollections;
@property bool shouldHideSmartAlbums;

- (void).cxx_destruct;
- (id)assetFilteringPredicate;
- (bool)canShowMemoriesAlbum;
- (bool)canShowPeopleAlbum;
- (bool)canShowScenesAlbum;
- (bool)canShowVirtualCollections;
- (id)collectionList;
- (id)collectionsFetchResult;
- (id)customFetchOptions;
- (id)dataSourceManagerConfigurationWithCollectionList:(id)arg1;
- (id)dataSourceManagerConfigurationWithCollectionsFetchResult:(id)arg1;
- (long long)filteringAssetTypes;
- (id)init;
- (id)initWithCollectionList:(id)arg1 collectionsFetchResult:(id)arg2;
- (id)initWithCollectionList:(id)arg1 collectionsFetchResult:(id)arg2 isPickingSession:(bool)arg3;
- (bool)isPickingSession;
- (bool)isRootFolder;
- (bool)isRootSharedAlbum;
- (void)setAssetFilteringPredicate:(id)arg1;
- (void)setCanShowMemoriesAlbum:(bool)arg1;
- (void)setCanShowPeopleAlbum:(bool)arg1;
- (void)setCanShowScenesAlbum:(bool)arg1;
- (void)setCanShowVirtualCollections:(bool)arg1;
- (void)setCollectionList:(id)arg1;
- (void)setCollectionsFetchResult:(id)arg1;
- (void)setFilteringAssetTypes:(long long)arg1;
- (void)setIsRootFolder:(bool)arg1;
- (void)setIsRootSharedAlbum:(bool)arg1;
- (void)setShouldHideEmptyCollections:(bool)arg1;
- (void)setShouldHideSmartAlbums:(bool)arg1;
- (bool)shouldHideEmptyCollections;
- (bool)shouldHideSmartAlbums;

@end
