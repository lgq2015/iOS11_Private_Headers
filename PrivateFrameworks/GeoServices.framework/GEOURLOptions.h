/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOURLOptions : PBCodable <GEOURLSerializable, NSCopying> {
    GEOURLCamera * _camera;
    GEOURLCenterSpan * _centerSpan;
    bool  _connectedToCar;
    bool  _enableTraffic;
    struct { 
        unsigned int mapType : 1; 
        unsigned int transportType : 1; 
        unsigned int userTrackingMode : 1; 
        unsigned int connectedToCar : 1; 
        unsigned int enableTraffic : 1; 
    }  _has;
    int  _mapType;
    NSString * _referralIdentifier;
    GEOURLRouteHandle * _routeHandle;
    GEOURLTimePoint * _timePoint;
    int  _transportType;
    int  _userTrackingMode;
}

@property (nonatomic, retain) GEOURLCamera *camera;
@property (nonatomic, retain) GEOURLCenterSpan *centerSpan;
@property (nonatomic) bool connectedToCar;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool enableTraffic;
@property (nonatomic, readonly) bool hasCamera;
@property (nonatomic, readonly) bool hasCenterSpan;
@property (nonatomic) bool hasConnectedToCar;
@property (nonatomic) bool hasEnableTraffic;
@property (nonatomic) bool hasMapType;
@property (nonatomic, readonly) bool hasReferralIdentifier;
@property (nonatomic, readonly) bool hasRouteHandle;
@property (nonatomic, readonly) bool hasTimePoint;
@property (nonatomic) bool hasTransportType;
@property (nonatomic) bool hasUserTrackingMode;
@property (readonly) unsigned long long hash;
@property (nonatomic) int mapType;
@property (nonatomic, retain) NSString *referralIdentifier;
@property (nonatomic, retain) GEOURLRouteHandle *routeHandle;
@property (readonly) Class superclass;
@property (nonatomic, retain) GEOURLTimePoint *timePoint;
@property (nonatomic) int transportType;
@property (nonatomic) int userTrackingMode;

// Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices

- (void).cxx_destruct;
- (int)StringAsMapType:(id)arg1;
- (int)StringAsTransportType:(id)arg1;
- (int)StringAsUserTrackingMode:(id)arg1;
- (id)camera;
- (id)centerSpan;
- (bool)connectedToCar;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)enableTraffic;
- (bool)hasCamera;
- (bool)hasCenterSpan;
- (bool)hasConnectedToCar;
- (bool)hasEnableTraffic;
- (bool)hasMapType;
- (bool)hasReferralIdentifier;
- (bool)hasRouteHandle;
- (bool)hasTimePoint;
- (bool)hasTransportType;
- (bool)hasUserTrackingMode;
- (unsigned long long)hash;
- (id)initWithUrlRepresentation:(id)arg1;
- (bool)isEqual:(id)arg1;
- (int)mapType;
- (id)mapTypeAsString:(int)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)referralIdentifier;
- (id)routeHandle;
- (void)setCamera:(id)arg1;
- (void)setCenterSpan:(id)arg1;
- (void)setConnectedToCar:(bool)arg1;
- (void)setEnableTraffic:(bool)arg1;
- (void)setHasConnectedToCar:(bool)arg1;
- (void)setHasEnableTraffic:(bool)arg1;
- (void)setHasMapType:(bool)arg1;
- (void)setHasTransportType:(bool)arg1;
- (void)setHasUserTrackingMode:(bool)arg1;
- (void)setMapType:(int)arg1;
- (void)setReferralIdentifier:(id)arg1;
- (void)setRouteHandle:(id)arg1;
- (void)setTimePoint:(id)arg1;
- (void)setTransportType:(int)arg1;
- (void)setUserTrackingMode:(int)arg1;
- (id)timePoint;
- (int)transportType;
- (id)transportTypeAsString:(int)arg1;
- (id)urlRepresentation;
- (int)userTrackingMode;
- (id)userTrackingModeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

// Image: /System/Library/Frameworks/MapKit.framework/MapKit

- (id)initWithLaunchOptions:(id)arg1;
- (id)launchOptions;

@end
