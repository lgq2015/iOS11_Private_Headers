/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPlacesMapFetchResultViewController : UIViewController <PXOneUpPresentationDelegate, PXPlacesMapControllerChangeDelegate, PXPlacesMapControllerSelectionDelegate, PXPlacesMapFetchResultControllerAccess> {
    <PXPlacesAssetsSelectionDelegate> * _assetSelectionDelegate;
    bool  _autoRefocusOnDataChange;
    <PXPlacesMapBarButtonsDelegate> * _barButtonsDelegate;
    UIBarButtonItem * _filterAssetsBtn;
    <PXPlacesMapGeotaggableInfoDelegate> * _geotaggableInfoDelegate;
    PXPlacesMapFetchResultController * _mapFetchResultsController;
    UIViewController * _pxOneUpPresentationViewController;
    <PXPlacesGeotaggable> * _selectedGeotaggable;
    bool  _showNavigationBar;
    unsigned long long  _style;
}

@property (nonatomic) <PXPlacesAssetsSelectionDelegate> *assetSelectionDelegate;
@property bool autoRefocusOnDataChange;
@property (nonatomic) <PXPlacesMapBarButtonsDelegate> *barButtonsDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIBarButtonItem *filterAssetsBtn;
@property (nonatomic, retain) <PXPlacesMapGeotaggableInfoDelegate> *geotaggableInfoDelegate;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PXPlacesMapFetchResultController *mapFetchResultsController;
@property (nonatomic) UIViewController *pxOneUpPresentationViewController;
@property (retain) <PXPlacesGeotaggable> *selectedGeotaggable;
@property (nonatomic) bool showNavigationBar;
@property (nonatomic) unsigned long long style;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore

- (void).cxx_destruct;
- (void)_commonInit;
- (id)_fetchHydratedAssetForPlacesAsset:(id)arg1;
- (void)_placeBarButtonItems:(id)arg1;
- (void)_reloadContentModeDisplay:(unsigned long long)arg1;
- (void)_selectedGeotaggables:(id)arg1;
- (id)assetSelectionDelegate;
- (bool)autoRefocusOnDataChange;
- (id)barButtonsDelegate;
- (void)dataSourceDidChange:(id)arg1;
- (id)dataSourceForAssets:(id)arg1;
- (void)dealloc;
- (void)didEnterForeground:(id)arg1;
- (void)didSelectGeotaggableItems:(id)arg1 fromMapView:(id)arg2;
- (id)filterAssetsBtn;
- (id)geotaggableInfoDelegate;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (void)locationServiceAuthorizationChanged;
- (id)mapFetchResultsController;
- (void)mapRegionDidChange:(id)arg1;
- (id)oneUpPresentationDataSourceManager:(id)arg1;
- (id)oneUpPresentationMediaProvider:(id)arg1;
- (void)ppt_performPlacesScrollTest:(id)arg1 iterations:(long long)arg2 screenDelta:(long long)arg3 delay:(double)arg4 completion:(id /* block */)arg5;
- (void)ppt_performPlacesZoomTest:(id)arg1 iterations:(long long)arg2 delay:(double)arg3 completion:(id /* block */)arg4;
- (id)pxOneUpPresentationViewController;
- (void)reloadStyle;
- (id)selectedGeotaggable;
- (void)setAssetSelectionDelegate:(id)arg1;
- (void)setAutoRefocusOnDataChange:(bool)arg1;
- (void)setBarButtonsDelegate:(id)arg1;
- (void)setFilterAssetsBtn:(id)arg1;
- (void)setGeotaggableInfoDelegate:(id)arg1;
- (void)setMapFetchResultsController:(id)arg1;
- (void)setPxOneUpPresentationViewController:(id)arg1;
- (void)setSelectedGeotaggable:(id)arg1;
- (void)setShowNavigationBar:(bool)arg1;
- (void)setStyle:(unsigned long long)arg1;
- (bool)showNavigationBar;
- (unsigned long long)style;
- (void)tapCountToolbarButton:(id)arg1;
- (void)tapFilterAssetsBtn:(id)arg1;
- (void)tapInfoToolbarButton:(id)arg1;
- (void)tapShowAll:(id)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

// Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI

- (id)px_gridPresentation;

@end
