/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPlacesMapInfoViewController : UIViewController {
    PXPlacesMapView * _mapView;
}

@property PXPlacesMapView *mapView;

- (void).cxx_destruct;
- (id)initWithMapView:(id)arg1;
- (void)mapTypeChanged:(id)arg1;
- (id)mapView;
- (long long)segmentIndexFor:(unsigned long long)arg1;
- (void)setMapView:(id)arg1;
- (void)tapped3dButton:(id)arg1;
- (void)tappedDimView:(id)arg1;
- (void)tappedDone:(id)arg1;
- (void)viewDidLoad;

@end
