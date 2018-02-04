/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXContextualMemoriesLocationSetting : NSObject <MKAnnotation, PXContextualMemoriesSetting, _PXCompletionHandlerManagerDelegate> {
    _PXCompletionHandlerManager * _completionHandlerManager;
    struct CLLocationCoordinate2D { 
        double latitude; 
        double longitude; 
    }  _coordinate;
    unsigned long long  _locationState;
    PXLocationStream * _locationStream;
    bool  _monitorsCurrentLocation;
    CLPlacemark * _placemark;
}

@property (nonatomic, retain) _PXCompletionHandlerManager *completionHandlerManager;
@property (nonatomic) struct CLLocationCoordinate2D { double x1; double x2; } coordinate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *headerTitle;
@property (nonatomic, readonly) CLLocation *location;
@property (nonatomic) unsigned long long locationState;
@property (nonatomic, retain) PXLocationStream *locationStream;
@property (nonatomic) bool monitorsCurrentLocation;
@property (nonatomic, retain) CLPlacemark *placemark;
@property (nonatomic, readonly) NSString *subtitle;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *title;

+ (void)_setSimulatedLocationCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1;
+ (struct CLLocationCoordinate2D { double x1; double x2; })_simulatedLocationCoordinate;
+ (bool)automaticallyNotifiesObserversOfCoordinate;
+ (id)keyPathsForValuesAffectingPlacemark;
+ (id)keyPathsForValuesAffectingSubtitle;
+ (id)keyPathsForValuesAffectingTitle;

- (void).cxx_destruct;
- (void)_handleLocationAcquisitionUpdate:(id)arg1;
- (void)_initiateLocationAcquisition;
- (id)_locationForCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1;
- (void)_setCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1;
- (void)_updatePlacemarkForCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1;
- (void)_updatePlacemarkWithPlacemarks:(id)arg1 error:(id)arg2;
- (id)completionHandlerManager;
- (struct CLLocationCoordinate2D { double x1; double x2; })coordinate;
- (void)didCallLastCompletionHandlerForCompletionHandlerManager:(id)arg1;
- (id)headerTitle;
- (id)init;
- (id)location;
- (unsigned long long)locationState;
- (id)locationStream;
- (bool)monitorsCurrentLocation;
- (id)placemark;
- (void)requestLocationUpdateWithCompletionHandler:(id /* block */)arg1;
- (void)resetToDefault;
- (void)setCompletionHandlerManager:(id)arg1;
- (void)setCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1;
- (void)setLocationState:(unsigned long long)arg1;
- (void)setLocationStream:(id)arg1;
- (void)setMonitorsCurrentLocation:(bool)arg1;
- (void)setPlacemark:(id)arg1;
- (id)subtitle;
- (id)title;

@end
