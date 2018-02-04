/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOBatchPlaceResult : PBCodable <NSCopying> {
    struct { 
        unsigned int statusCode : 1; 
    }  _has;
    GEOPlaceResult * _placeResult;
    int  _statusCode;
}

@property (nonatomic, readonly) bool hasPlaceResult;
@property (nonatomic) bool hasStatusCode;
@property (nonatomic, retain) GEOPlaceResult *placeResult;
@property (nonatomic) int statusCode;

- (void).cxx_destruct;
- (int)StringAsStatusCode:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasPlaceResult;
- (bool)hasStatusCode;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)placeResult;
- (bool)readFrom:(id)arg1;
- (void)setHasStatusCode:(bool)arg1;
- (void)setPlaceResult:(id)arg1;
- (void)setStatusCode:(int)arg1;
- (int)statusCode;
- (id)statusCodeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
