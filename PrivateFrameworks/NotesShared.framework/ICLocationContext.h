/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface ICLocationContext : NSObject <CLLocationManagerDelegate> {
    CLGeocoder * _geocoder;
    CLLocationManager * _locationManager;
    bool  _requestedAuthorization;
}

@property (nonatomic, readonly) bool canGetLocation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CLGeocoder *geocoder;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) CLLocationManager *locationManager;
@property (nonatomic) bool requestedAuthorization;
@property (readonly) Class superclass;

+ (id)sharedContext;

- (void).cxx_destruct;
- (bool)canGetLocation;
- (id)geocoder;
- (id)locationManager;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)lookupPlaceAtLatitude:(double)arg1 longitude:(double)arg2 handler:(id /* block */)arg3;
- (void)requestAuthorizationIfNeeded;
- (bool)requestedAuthorization;
- (void)setGeocoder:(id)arg1;
- (void)setRequestedAuthorization:(bool)arg1;

@end
