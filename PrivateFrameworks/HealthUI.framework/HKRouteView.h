/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKRouteView : UIView <MKMapViewDelegate> {
    HKLocationReadings * _locationReadings;
    MKMapView * _mapView;
    UIButton * _toggleMapTypeButton;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIButton *toggleMapTypeButton;

- (void).cxx_destruct;
- (void)_clearMapViewIfNeeded;
- (void)_setRouteMapType:(unsigned long long)arg1;
- (void)_toggleMapType;
- (id)init;
- (void)layoutSubviews;
- (id)mapView:(id)arg1 rendererForOverlay:(id)arg2;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
- (void)setLocationReadings:(id)arg1;
- (void)setToggleMapTypeButton:(id)arg1;
- (id)toggleMapTypeButton;

@end
