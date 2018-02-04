/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUPhotosPanoramaViewController : PUPhotosGridViewController {
    PUPhotosPanoramaViewControllerSpec * _panoramaSpec;
    PHAssetCollection * _userPanoAlbum;
}

@property (nonatomic, readonly) PUSectionedGridLayout *mainGridLayout;
@property (nonatomic, retain) PUPhotosPanoramaViewControllerSpec *panoramaSpec;
@property (nonatomic, retain) PHAssetCollection *userPanoAlbum;

- (void).cxx_destruct;
- (void)_configureCollectionViewGridLayout:(id)arg1;
- (void)_updatePhotoDecorationForCell:(id)arg1 animated:(bool)arg2;
- (bool)canBeginStackCollapseTransition;
- (long long)cellFillMode;
- (void)configureGlobalFooterView:(id)arg1;
- (void)configureGridCell:(id)arg1 forItemAtIndexPath:(id)arg2;
- (void)configureSupplementaryView:(id)arg1 ofKind:(id)arg2 forIndexPath:(id)arg3 animated:(bool)arg4;
- (id)imageRequestOptionsForAsset:(id)arg1 pixelSize:(inout struct CGSize { double x1; double x2; }*)arg2;
- (id)initWithSpec:(id)arg1;
- (id)newGridLayout;
- (id)panoramaSpec;
- (void)rotatePhotoViewToHorizontalIfNeeded:(id)arg1 withAsset:(id)arg2;
- (void)setPanoramaSpec:(id)arg1;
- (void)setUserPanoAlbum:(id)arg1;
- (void)updateLayoutMetrics;
- (void)updatePhotoViewContent:(id)arg1 withThumbnailImage:(id)arg2;
- (bool)updateSpec;
- (id)userPanoAlbum;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (bool)wantsGlobalFooter;

@end
