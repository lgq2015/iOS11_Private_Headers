/* made by EzioChiu.
 */

@protocol _WKGeolocationCoreLocationProvider <NSObject>

@required

- (void)requestGeolocationAuthorization;
- (void)setEnableHighAccuracy:(bool)arg1;
- (void)setListener:(id <_WKGeolocationCoreLocationListener>)arg1;
- (void)start;
- (void)stop;

@end