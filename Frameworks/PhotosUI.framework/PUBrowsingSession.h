/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUBrowsingSession : NSObject <PUAssetActionManagerDelegate, PUAssetsDataSourceManagerDelegate, PULoadingStatusManagerDelegate, PXAssetEditOperationManagerObserver, PXAutoloopSchedulerDelegate> {
    PUAssetActionManager * _actionManager;
    bool  _active;
    PUContentTileProvider * _contentTileProvider;
    PUAssetsDataSourceManager * _dataSourceManager;
    PXAssetEditOperationManager * _editOperationManager;
    PULoadingStatusManager * _loadingStatusManager;
    PUMediaProvider * _mediaProvider;
    PXPhotosDetailsContext * _photosDetailsContext;
    PUTileAnimator * _tileAnimator;
    PUBrowsingViewModel * _viewModel;
}

@property (nonatomic, readonly) PUAssetActionManager *actionManager;
@property (getter=isActive, nonatomic) bool active;
@property (nonatomic, retain) PUContentTileProvider *contentTileProvider;
@property (nonatomic, readonly) PUAssetsDataSourceManager *dataSourceManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) PXAssetEditOperationManager *editOperationManager;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PULoadingStatusManager *loadingStatusManager;
@property (nonatomic, retain) PUMediaProvider *mediaProvider;
@property (nonatomic, readonly) PXPhotosDetailsContext *photosDetailsContext;
@property (readonly) Class superclass;
@property (nonatomic, retain) PUTileAnimator *tileAnimator;
@property (nonatomic, retain) PUBrowsingViewModel *viewModel;

- (void).cxx_destruct;
- (id)actionManager;
- (id)assetActionManagerCurrentAssetsDataSource:(id)arg1;
- (void)assetEditOperationManager:(id)arg1 didChangeEditOperationStatusForAsset:(id)arg2 context:(void*)arg3;
- (void)assetEditOperationManager:(id)arg1 didChangeEditOperationsPerformedOnAsset:(id)arg2 context:(void*)arg3;
- (id)assetUUIDToFavorizeForAutoloopScheduler:(id)arg1;
- (void)assetsDataSourceManager:(id)arg1 didChangeAssetsDataSource:(id)arg2;
- (id)assetsDataSourceManagerInterestingAssetReferences:(id)arg1;
- (void)configureTilingView:(id)arg1;
- (id)contentTileProvider;
- (id)dataSourceManager;
- (id)editOperationManager;
- (id)init;
- (id)initWithDataSourceManager:(id)arg1 actionManager:(id)arg2 mediaProvider:(id)arg3;
- (id)initWithDataSourceManager:(id)arg1 actionManager:(id)arg2 mediaProvider:(id)arg3 photosDetailsContext:(id)arg4;
- (bool)isActive;
- (id)loadingStatusManager;
- (void)loadingStatusManager:(id)arg1 didUpdateLoadingStatus:(id)arg2 forItem:(id)arg3;
- (id)mediaProvider;
- (id)photosDetailsContext;
- (void)setActive:(bool)arg1;
- (void)setContentTileProvider:(id)arg1;
- (void)setMediaProvider:(id)arg1;
- (void)setTileAnimator:(id)arg1;
- (void)setViewModel:(id)arg1;
- (id)tileAnimator;
- (id)viewModel;

@end
