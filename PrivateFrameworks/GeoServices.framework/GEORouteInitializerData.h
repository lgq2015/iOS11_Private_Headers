/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORouteInitializerData : NSObject <NSSecureCoding> {
    GEODirectionsResponse * _directionsResponse;
    GEOETATrafficUpdateResponse * _etaTrafficUpdateResponse;
}

@property (nonatomic, readonly) GEODirectionsResponse *directionsResponse;
@property (nonatomic, readonly) GEOETATrafficUpdateResponse *etaTrafficUpdateResponse;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_MapsCarPlay_isEqual:(id)arg1;
- (id)directionsResponse;
- (void)encodeWithCoder:(id)arg1;
- (id)etaTrafficUpdateResponse;
- (id)initWithCoder:(id)arg1;
- (id)initWithDirectionsResponse:(id)arg1;
- (id)initWithETATrafficUpdateResponse:(id)arg1;

@end
