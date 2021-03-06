/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPerRouteInfo : PBCodable <NSCopying> {
    unsigned long long  _etaServiceTravelTime;
    struct { 
        unsigned int routeUuid : 1; 
        unsigned int etaServiceTravelTime : 1; 
        unsigned int originalTravelTime : 1; 
    }  _has;
    unsigned long long  _originalTravelTime;
    struct GEOSessionID { 
        unsigned long long _high; 
        unsigned long long _low; 
    }  _routeUuid;
}

@property (nonatomic) unsigned long long etaServiceTravelTime;
@property (nonatomic) bool hasEtaServiceTravelTime;
@property (nonatomic) bool hasOriginalTravelTime;
@property (nonatomic) bool hasRouteUuid;
@property (nonatomic) unsigned long long originalTravelTime;
@property (nonatomic) struct GEOSessionID { unsigned long long x1; unsigned long long x2; } routeUuid;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)etaServiceTravelTime;
- (bool)hasEtaServiceTravelTime;
- (bool)hasOriginalTravelTime;
- (bool)hasRouteUuid;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)originalTravelTime;
- (bool)readFrom:(id)arg1;
- (struct GEOSessionID { unsigned long long x1; unsigned long long x2; })routeUuid;
- (void)setEtaServiceTravelTime:(unsigned long long)arg1;
- (void)setHasEtaServiceTravelTime:(bool)arg1;
- (void)setHasOriginalTravelTime:(bool)arg1;
- (void)setHasRouteUuid:(bool)arg1;
- (void)setOriginalTravelTime:(unsigned long long)arg1;
- (void)setRouteUuid:(struct GEOSessionID { unsigned long long x1; unsigned long long x2; })arg1;
- (void)writeTo:(id)arg1;

@end
