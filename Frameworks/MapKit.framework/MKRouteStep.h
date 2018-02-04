/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKRouteStep : NSObject {
    GEOComposedRouteStep * _geoComposedRouteStep;
    NSString * _instructions;
    MKRouteStepPolyline * _polyline;
    unsigned long long  _transportType;
}

@property (nonatomic, readonly) double distance;
@property (getter=_geoComposedRouteStep, nonatomic, readonly) GEOComposedRouteStep *geoComposedRouteStep;
@property (nonatomic, readonly) NSString *instructions;
@property (nonatomic, readonly) NSString *notice;
@property (nonatomic, readonly) MKPolyline *polyline;
@property (nonatomic, readonly) unsigned long long transportType;

- (void).cxx_destruct;
- (id)_geoComposedRouteStep;
- (id)_initWithGEOComposedRouteStep:(id)arg1 instructions:(id)arg2 transportType:(unsigned long long)arg3 polyline:(id)arg4;
- (double)distance;
- (id)instructions;
- (id)notice;
- (id)polyline;
- (unsigned long long)transportType;

@end
