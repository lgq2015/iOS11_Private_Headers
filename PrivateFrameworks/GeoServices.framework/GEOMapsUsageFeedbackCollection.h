/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOMapsUsageFeedbackCollection : PBCodable <NSCopying> {
    int  _actionType;
    GEOCarInfo * _carInfo;
    struct { 
        unsigned int sessionID : 1; 
        unsigned int sessionRelativeTimestamp : 1; 
        unsigned int zoomLevel : 1; 
        unsigned int actionType : 1; 
        unsigned int locationBucket : 1; 
        unsigned int sequenceNumber : 1; 
        unsigned int uiTarget : 1; 
    }  _has;
    int  _locationBucket;
    GEOMapRegion * _mapRegion;
    GEOPlaceActionDetails * _placeActionDetails;
    NSString * _providerId;
    GEORouteDetails * _routeDetails;
    int  _sequenceNumber;
    GEOMapsServerMetadata * _serverMetadata;
    struct GEOSessionID { 
        unsigned long long _high; 
        unsigned long long _low; 
    }  _sessionID;
    double  _sessionRelativeTimestamp;
    int  _uiTarget;
    double  _zoomLevel;
}

@property (nonatomic) int actionType;
@property (nonatomic, retain) GEOCarInfo *carInfo;
@property (nonatomic) bool hasActionType;
@property (nonatomic, readonly) bool hasCarInfo;
@property (nonatomic) bool hasLocationBucket;
@property (nonatomic, readonly) bool hasMapRegion;
@property (nonatomic, readonly) bool hasPlaceActionDetails;
@property (nonatomic, readonly) bool hasProviderId;
@property (nonatomic, readonly) bool hasRouteDetails;
@property (nonatomic) bool hasSequenceNumber;
@property (nonatomic, readonly) bool hasServerMetadata;
@property (nonatomic) bool hasSessionID;
@property (nonatomic) bool hasSessionRelativeTimestamp;
@property (nonatomic) bool hasUiTarget;
@property (nonatomic) bool hasZoomLevel;
@property (nonatomic) int locationBucket;
@property (nonatomic, retain) GEOMapRegion *mapRegion;
@property (nonatomic, retain) GEOPlaceActionDetails *placeActionDetails;
@property (nonatomic, retain) NSString *providerId;
@property (nonatomic, retain) GEORouteDetails *routeDetails;
@property (nonatomic) int sequenceNumber;
@property (nonatomic, retain) GEOMapsServerMetadata *serverMetadata;
@property (nonatomic) struct GEOSessionID { unsigned long long x1; unsigned long long x2; } sessionID;
@property (nonatomic) double sessionRelativeTimestamp;
@property (nonatomic) int uiTarget;
@property (nonatomic) double zoomLevel;

+ (id)feedbackCollectionWithTraits:(id)arg1 flyoverAnimationID:(unsigned long long)arg2 timestamp:(double)arg3 resultIndex:(int)arg4;
+ (id)feedbackCollectionWithTraits:(id)arg1 mapItem:(id)arg2 timestamp:(double)arg3 resultIndex:(int)arg4;
+ (id)feedbackCollectionWithTraits:(id)arg1 placeActionDetails:(id)arg2 routeDetails:(id)arg3;
+ (id)feedbackCollectionWithTraits:(id)arg1 placeActionDetails:(id)arg2 uiTarget:(int)arg3;

- (void).cxx_destruct;
- (int)StringAsActionType:(id)arg1;
- (int)StringAsLocationBucket:(id)arg1;
- (int)StringAsUiTarget:(id)arg1;
- (int)actionType;
- (id)actionTypeAsString:(int)arg1;
- (id)carInfo;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasActionType;
- (bool)hasCarInfo;
- (bool)hasLocationBucket;
- (bool)hasMapRegion;
- (bool)hasPlaceActionDetails;
- (bool)hasProviderId;
- (bool)hasRouteDetails;
- (bool)hasSequenceNumber;
- (bool)hasServerMetadata;
- (bool)hasSessionID;
- (bool)hasSessionRelativeTimestamp;
- (bool)hasUiTarget;
- (bool)hasZoomLevel;
- (unsigned long long)hash;
- (id)initWithTraits:(id)arg1;
- (id)initWithTraits:(id)arg1 flyoverAnimationID:(unsigned long long)arg2 timestamp:(double)arg3 resultIndex:(int)arg4;
- (id)initWithTraits:(id)arg1 mapItem:(id)arg2 timestamp:(double)arg3 resultIndex:(int)arg4;
- (id)initWithTraits:(id)arg1 placeActionDetails:(id)arg2 routeDetails:(id)arg3;
- (id)initWithTraits:(id)arg1 placeActionDetails:(id)arg2 uiTarget:(int)arg3;
- (bool)isEqual:(id)arg1;
- (int)locationBucket;
- (id)locationBucketAsString:(int)arg1;
- (id)mapRegion;
- (void)mergeFrom:(id)arg1;
- (id)placeActionDetails;
- (id)providerId;
- (bool)readFrom:(id)arg1;
- (id)routeDetails;
- (int)sequenceNumber;
- (id)serverMetadata;
- (struct GEOSessionID { unsigned long long x1; unsigned long long x2; })sessionID;
- (double)sessionRelativeTimestamp;
- (void)setActionType:(int)arg1;
- (void)setCarInfo:(id)arg1;
- (void)setHasActionType:(bool)arg1;
- (void)setHasLocationBucket:(bool)arg1;
- (void)setHasSequenceNumber:(bool)arg1;
- (void)setHasSessionID:(bool)arg1;
- (void)setHasSessionRelativeTimestamp:(bool)arg1;
- (void)setHasUiTarget:(bool)arg1;
- (void)setHasZoomLevel:(bool)arg1;
- (void)setLocationBucket:(int)arg1;
- (void)setMapRegion:(id)arg1;
- (void)setPlaceActionDetails:(id)arg1;
- (void)setProviderId:(id)arg1;
- (void)setRouteDetails:(id)arg1;
- (void)setSequenceNumber:(int)arg1;
- (void)setServerMetadata:(id)arg1;
- (void)setSessionID:(struct GEOSessionID { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setSessionRelativeTimestamp:(double)arg1;
- (void)setUiTarget:(int)arg1;
- (void)setZoomLevel:(double)arg1;
- (int)uiTarget;
- (id)uiTargetAsString:(int)arg1;
- (void)writeTo:(id)arg1;
- (double)zoomLevel;

@end
