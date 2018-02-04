/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUMomentsZoomLevelManager : NSObject <PXPhotosDataSourceChangeObserver> {
    NSMutableArray * _allLevelInfos;
    bool  _isInvalidatingLayoutOfZoomLevels;
    PXPhotosDataSource * _momentsDataSource;
    PUSessionInfo * _sessionInfo;
    PUCollectionViewIntermediateDataSource * _sharedIntermediateDataSource;
    PUZoomableGridViewControllerSpec * _zoomableGridSpec;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long highestZoomLevel;
@property (nonatomic, readonly) unsigned long long lowestZoomLevel;
@property (nonatomic, readonly) unsigned long long preferredDefaultZoomLevel;
@property (nonatomic, retain) PUSessionInfo *sessionInfo;
@property (nonatomic, readonly) PUCollectionViewIntermediateDataSource *sharedIntermediateDataSource;
@property (readonly) Class superclass;
@property (nonatomic, readonly) PUZoomableGridViewControllerSpec *zoomableGridSpec;

- (void).cxx_destruct;
- (void)_defaultsDidChange:(id)arg1;
- (void)_updateSummarizeSectionsOnZoomLevelInfos;
- (void)dealloc;
- (id)existingViewControllerForZoomLevel:(unsigned long long)arg1 inNavigationController:(id)arg2;
- (unsigned long long)highestZoomLevel;
- (id)initWithSpec:(id)arg1;
- (id)jumpToZoomLevel:(unsigned long long)arg1 inNavigationController:(id)arg2 usingTopControllerConfigurationBlock:(id /* block */)arg3;
- (unsigned long long)lowestZoomLevel;
- (void)markZoomInfosInvalidWithWidth:(double)arg1;
- (id)momentsDataSource;
- (id)newViewControllerForZoomLevel:(unsigned long long)arg1;
- (void)photosDataSource:(id)arg1 didReceivePhotoLibraryChange:(id)arg2;
- (unsigned long long)preferredDefaultZoomLevel;
- (id)sessionInfo;
- (void)setSessionInfo:(id)arg1;
- (id)sharedIntermediateDataSource;
- (void)updateZoomableGridSpecForTraitCollection:(id)arg1 referenceSize:(struct CGSize { double x1; double x2; })arg2;
- (bool)zoomLevel:(unsigned long long)arg1 isHigherThanZoomLevel:(unsigned long long)arg2;
- (unsigned long long)zoomLevelAboveZoomLevel:(unsigned long long)arg1;
- (unsigned long long)zoomLevelBelowZoomLevel:(unsigned long long)arg1;
- (void)zoomLevelInfo:(id)arg1 didInvalidateLayoutWithContext:(id)arg2;
- (id)zoomLevelInfoForZoomLevel:(unsigned long long)arg1;
- (id)zoomableGridSpec;

@end
