/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXDebugAssetBadgeManager : PXAssetBadgeManager <PXPhotosDataSourceChangeObserver> {
    NSSet * __miroCurationAssets;
    PHFetchResult * __photosGraphCurationAssets;
    PXPhotosDataSource * _curatedPhotosDataSource;
    PXMiroMovieProvider * _miroMovieProvider;
    PXPhotosDataSource * _photosDataSource;
}

@property (setter=_setMiroCurationAssets:, nonatomic, retain) NSSet *_miroCurationAssets;
@property (setter=_setPhotosGraphCurationAssets:, nonatomic, retain) PHFetchResult *_photosGraphCurationAssets;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PXPhotosDataSource *photosDataSource;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_isAssetContainedInMiroCuration:(id)arg1;
- (bool)_isAssetContainedInPhotosGraphCuration:(id)arg1;
- (id)_miroCurationAssets;
- (id)_photosGraphCurationAssets;
- (void)_setMiroCurationAssets:(id)arg1;
- (void)_setPhotosGraphCurationAssets:(id)arg1;
- (void)_updateAssets;
- (struct PXAssetBadgeInfo { unsigned long long x1; double x2; long long x3; })badgeInfoForAsset:(id)arg1 inCollection:(id)arg2 options:(unsigned long long)arg3;
- (void)dealloc;
- (id)photosDataSource;
- (void)photosDataSource:(id)arg1 didChange:(id)arg2;
- (void)setPhotosDataSource:(id)arg1;

@end
