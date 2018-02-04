/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXRootSettings : PXSettings {
    PXAssetsSceneSettings * _assetsScene;
    PXDiagnosticsSettings * _diagnostics;
    PXDragAndDropSettings * _dragAndDrop;
    PXImageModulationSettings * _imageModulationSettings;
    PXKitSettings * _kit;
    PXMemoriesRelatedSettings * _memoriesRelated;
    PXMemoriesFeedSettings * _memoryFeed;
    PXModelSettings * _model;
    PXPeopleDetailSettings * _peopleDetail;
    PXPeopleUISettings * _peopleUISettings;
    PXPhotosDataSourceSettings * _photosDataSource;
    PXPhotosDetailsSettings * _photosDetails;
    PXPhotosDetailsHeaderTileSettings * _photosDetailsHeaderTile;
    PXRelatedSettings * _related;
    PXSharingSettings * _sharingSettings;
    PXSnapBackSettings * _snapBack;
    PXTilingSettings * _tiling;
    PXAssetVariationsSettings * _variationsSettings;
    PXViewControllerTransitionSettings * _viewControllerTransition;
}

@property (nonatomic, retain) PXAssetsSceneSettings *assetsScene;
@property (nonatomic, retain) PXDiagnosticsSettings *diagnostics;
@property (nonatomic, retain) PXDragAndDropSettings *dragAndDrop;
@property (nonatomic, retain) PXImageModulationSettings *imageModulationSettings;
@property (nonatomic, retain) PXKitSettings *kit;
@property (nonatomic, retain) PXMemoriesRelatedSettings *memoriesRelated;
@property (nonatomic, retain) PXMemoriesFeedSettings *memoryFeed;
@property (nonatomic, retain) PXModelSettings *model;
@property (nonatomic, retain) PXPeopleDetailSettings *peopleDetail;
@property (nonatomic, retain) PXPeopleUISettings *peopleUISettings;
@property (nonatomic, retain) PXPhotosDataSourceSettings *photosDataSource;
@property (nonatomic, retain) PXPhotosDetailsSettings *photosDetails;
@property (nonatomic, retain) PXPhotosDetailsHeaderTileSettings *photosDetailsHeaderTile;
@property (nonatomic, retain) PXRelatedSettings *related;
@property (nonatomic, retain) PXSharingSettings *sharingSettings;
@property (nonatomic, retain) PXSnapBackSettings *snapBack;
@property (nonatomic, retain) PXTilingSettings *tiling;
@property (nonatomic, retain) PXAssetVariationsSettings *variationsSettings;
@property (nonatomic, retain) PXViewControllerTransitionSettings *viewControllerTransition;

+ (id)settingsControllerModule;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)assetsScene;
- (id)diagnostics;
- (id)dragAndDrop;
- (id)imageModulationSettings;
- (id)kit;
- (id)memoriesRelated;
- (id)memoryFeed;
- (id)model;
- (id)parentSettings;
- (id)peopleDetail;
- (id)peopleUISettings;
- (id)photosDataSource;
- (id)photosDetails;
- (id)photosDetailsHeaderTile;
- (id)related;
- (void)setAssetsScene:(id)arg1;
- (void)setDiagnostics:(id)arg1;
- (void)setDragAndDrop:(id)arg1;
- (void)setImageModulationSettings:(id)arg1;
- (void)setKit:(id)arg1;
- (void)setMemoriesRelated:(id)arg1;
- (void)setMemoryFeed:(id)arg1;
- (void)setModel:(id)arg1;
- (void)setPeopleDetail:(id)arg1;
- (void)setPeopleUISettings:(id)arg1;
- (void)setPhotosDataSource:(id)arg1;
- (void)setPhotosDetails:(id)arg1;
- (void)setPhotosDetailsHeaderTile:(id)arg1;
- (void)setRelated:(id)arg1;
- (void)setSharingSettings:(id)arg1;
- (void)setSnapBack:(id)arg1;
- (void)setTiling:(id)arg1;
- (void)setVariationsSettings:(id)arg1;
- (void)setViewControllerTransition:(id)arg1;
- (id)sharingSettings;
- (id)snapBack;
- (id)tiling;
- (id)variationsSettings;
- (id)viewControllerTransition;

@end
