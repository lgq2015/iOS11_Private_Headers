/* made by EzioChiu
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKLegacyCoreLocationProvider : NSObject <WebGeolocationCoreLocationUpdateListener, _WKGeolocationCoreLocationProvider> {
    <_WKGeolocationCoreLocationListener> * _listener;
    struct RetainPtr<WebGeolocationCoreLocationProvider> { 
        void *m_ptr; 
    }  _provider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)errorOccurred:(id)arg1;
- (void)geolocationAuthorizationDenied;
- (void)geolocationAuthorizationGranted;
- (void)positionChanged:(struct GeolocationPosition { unsigned int x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; bool x10; bool x11; bool x12; bool x13; }*)arg1;
- (void)requestGeolocationAuthorization;
- (void)resetGeolocation;
- (void)setEnableHighAccuracy:(bool)arg1;
- (void)setListener:(id)arg1;
- (void)start;
- (void)stop;

@end
