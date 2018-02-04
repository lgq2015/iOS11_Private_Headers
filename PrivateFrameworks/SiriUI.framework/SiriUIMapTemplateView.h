/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

@interface SiriUIMapTemplateView : SiriUIBaseTemplateView <MKMapViewDelegate> {
    CLPlacemark * _currentPlacemark;
    <SiriUIMapTemplateViewDelegate> * _delegate;
    UILabel * _footnoteDescriptorLabel;
    UILabel * _footnoteLabel;
    CLGeocoder * _geocoder;
    UIButton * _mapButton;
    MKMapView * _mapView;
    bool  _needsToNotifyDelegateOfLocationUpdate;
    MKPinAnnotationView * _pinAnnotationView;
    UITapGestureRecognizer * _tapRecognizer;
}

@property (nonatomic) <SiriUIMapTemplateModel> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SiriUIMapTemplateViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_configuredFootnoteDescriptorLabel;
- (id)_configuredFootnoteLabel;
- (id)_configuredLabel;
- (void)_handleTapGesture:(id)arg1;
- (void)_mapButtonPressed:(id)arg1;
- (void)_notifyDelegateOfLocationUpdateIfNeededWithPlacemark:(id)arg1;
- (id)delegate;
- (double)desiredHeight;
- (id)initWithDataSource:(id)arg1;
- (void)layoutSubviews;
- (void)mapView:(id)arg1 regionDidChangeAnimated:(bool)arg2;
- (void)prepareForDismissal;
- (void)reloadData;
- (void)setDelegate:(id)arg1;

@end
