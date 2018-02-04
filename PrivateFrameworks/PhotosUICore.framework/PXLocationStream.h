/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXLocationStream : NSObject <CLLocationManagerDelegate> {
    double  _accuracy;
    id /* block */  _handler;
    CLLocationManager * _locationManager;
    unsigned long long  _state;
}

@property (getter=isClosed, nonatomic) bool closed;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cleanup;
- (void)_closeStreamWithError;
- (void)_emitLocation:(id)arg1;
- (void)_open;
- (void)_requestAuthorization;
- (void)_requestLocation;
- (void)dealloc;
- (id)initWithAccuracy:(double)arg1 handler:(id /* block */)arg2;
- (bool)isClosed;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)setClosed:(bool)arg1;

@end
