/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPhotoKitAssetActionPerformer : PXAssetActionPerformer {
    NSArray * _assets;
    NSDictionary * _assetsByAssetCollection;
    PHPerson * _person;
    PXPhotoKitAssetsDataSourceManager * _photoKitDataSourceManager;
    bool  _shouldSkipUserConfirmation;
}

@property (nonatomic, readonly) NSArray *assets;
@property (nonatomic, readonly) NSDictionary *assetsByAssetCollection;
@property (nonatomic, retain) PHPerson *person;
@property (nonatomic, retain) PXPhotoKitAssetsDataSourceManager *photoKitDataSourceManager;
@property (nonatomic, readonly) PXPhotosDataSource *photosDataSourceSnapshot;
@property (nonatomic) bool shouldSkipUserConfirmation;

+ (bool)canPerformOnAsset:(id)arg1 inAssetCollection:(id)arg2 person:(id)arg3;
+ (bool)canPerformWithActionManager:(id)arg1;
+ (id)createBarButtonItemWithTarget:(id)arg1 action:(SEL)arg2;
+ (id)createPreviewActionWithTitle:(id)arg1 handler:(id /* block */)arg2;
+ (id)localizedTitleForUseCase:(unsigned long long)arg1 selectionSnapshot:(id)arg2 person:(id)arg3;

- (void).cxx_destruct;
- (id)_indexPathsInPhotosDataSource:(id)arg1;
- (id)assets;
- (id)assetsByAssetCollection;
- (id)createPerformerWithClass:(Class)arg1 actionType:(id)arg2;
- (void)forceIncludeAssetsInDataSource;
- (void)instantlyExcludeAssetsFromDataSource;
- (id)person;
- (id)photoKitDataSourceManager;
- (id)photosDataSourceSnapshot;
- (void)setPerson:(id)arg1;
- (void)setPhotoKitDataSourceManager:(id)arg1;
- (void)setShouldSkipUserConfirmation:(bool)arg1;
- (bool)shouldSkipUserConfirmation;
- (void)stopExcludingAssetsFromDataSource;

@end
