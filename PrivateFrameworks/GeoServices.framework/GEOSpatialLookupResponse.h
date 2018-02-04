/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOSpatialLookupResponse : PBCodable <NSCopying> {
    struct { 
        unsigned int statusCode : 1; 
    }  _has;
    NSMutableArray * _places;
    int  _statusCode;
}

@property (nonatomic) bool hasStatusCode;
@property (nonatomic, retain) NSMutableArray *places;
@property (nonatomic) int statusCode;

+ (Class)placeType;

- (void).cxx_destruct;
- (int)StringAsStatusCode:(id)arg1;
- (void)addPlace:(id)arg1;
- (void)clearPlaces;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasStatusCode;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)placeAtIndex:(unsigned long long)arg1;
- (id)places;
- (unsigned long long)placesCount;
- (bool)readFrom:(id)arg1;
- (void)setHasStatusCode:(bool)arg1;
- (void)setPlaces:(id)arg1;
- (void)setStatusCode:(int)arg1;
- (int)statusCode;
- (id)statusCodeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
