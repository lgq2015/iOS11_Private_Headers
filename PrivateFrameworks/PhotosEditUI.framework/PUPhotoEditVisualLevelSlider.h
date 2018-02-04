/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosEditUI.framework/PhotosEditUI
 */

@interface PUPhotoEditVisualLevelSlider : PUPhotoEditLevelSlider <UICollectionViewDataSource> {
    <PUPhotoEditVisualLevelSliderDataSource> * _dataSource;
    struct CGSize { 
        double width; 
        double height; 
    }  _thumbnailSize;
    UICollectionView * _thumbnailsStripCollectionView;
    UICollectionViewFlowLayout * _thumbnailsStripFlowLayout;
}

@property (nonatomic) <PUPhotoEditVisualLevelSliderDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) struct CGSize { double x1; double x2; } thumbnailSize;

- (void).cxx_destruct;
- (void)_configureCell:(id)arg1 thumbnailIndex:(long long)arg2 animated:(bool)arg3;
- (long long)_intensityIndexForThumbnailIndex:(long long)arg1;
- (long long)_thumbIndexForIntensityIndex:(long long)arg1;
- (void)_updateCollectionViewLayout;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)dataSource;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)preferredSliderContentView;
- (void)reloadAllThumbnails;
- (void)reloadThumbnailForIntensityIndex:(long long)arg1 animated:(bool)arg2;
- (void)setDataSource:(id)arg1;
- (void)setThumbnailSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setupWithLayoutOrientation:(long long)arg1;
- (struct CGSize { double x1; double x2; })thumbnailSize;
- (bool)wantsLevelIndicator;

@end
