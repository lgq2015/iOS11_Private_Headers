/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOOriginalRoute : PBCodable <NSCopying> {
    struct { 
        unsigned int originalRoutePurpose : 1; 
        unsigned int routeIndex : 1; 
    }  _has;
    NSData * _originalDirectionsResponseID;
    int  _originalRoutePurpose;
    NSData * _routeHandle;
    unsigned int  _routeIndex;
}

@property (nonatomic, readonly) bool hasOriginalDirectionsResponseID;
@property (nonatomic) bool hasOriginalRoutePurpose;
@property (nonatomic, readonly) bool hasRouteHandle;
@property (nonatomic) bool hasRouteIndex;
@property (nonatomic, retain) NSData *originalDirectionsResponseID;
@property (nonatomic) int originalRoutePurpose;
@property (nonatomic, retain) NSData *routeHandle;
@property (nonatomic) unsigned int routeIndex;

- (void).cxx_destruct;
- (int)StringAsOriginalRoutePurpose:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasOriginalDirectionsResponseID;
- (bool)hasOriginalRoutePurpose;
- (bool)hasRouteHandle;
- (bool)hasRouteIndex;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)originalDirectionsResponseID;
- (int)originalRoutePurpose;
- (id)originalRoutePurposeAsString:(int)arg1;
- (bool)readFrom:(id)arg1;
- (id)routeHandle;
- (unsigned int)routeIndex;
- (void)setHasOriginalRoutePurpose:(bool)arg1;
- (void)setHasRouteIndex:(bool)arg1;
- (void)setOriginalDirectionsResponseID:(id)arg1;
- (void)setOriginalRoutePurpose:(int)arg1;
- (void)setRouteHandle:(id)arg1;
- (void)setRouteIndex:(unsigned int)arg1;
- (void)writeTo:(id)arg1;

@end
