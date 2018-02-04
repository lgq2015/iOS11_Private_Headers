/* made by EzioChiu
   Image: /System/Library/Frameworks/Social.framework/Social
 */

@interface SLSafeLocationManagerDelegate : NSObject <CLLocationManagerDelegate> {
    <CLLocationManagerDelegate> * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property <CLLocationManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)delegate;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)setDelegate:(id)arg1;

@end
