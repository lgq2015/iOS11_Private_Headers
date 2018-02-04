/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDPlaceInfo : PBCodable <NSCopying> {
    double  _area;
    GEOLatLng * _center;
    struct { 
        unsigned int area : 1; 
        unsigned int knownAccuracy : 1; 
        unsigned int isApproximateCenter : 1; 
    }  _has;
    bool  _isApproximateCenter;
    int  _knownAccuracy;
    GEOTimezone * _timezone;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) double area;
@property (nonatomic, retain) GEOLatLng *center;
@property (nonatomic) bool hasArea;
@property (nonatomic, readonly) bool hasCenter;
@property (nonatomic) bool hasIsApproximateCenter;
@property (nonatomic) bool hasKnownAccuracy;
@property (nonatomic, readonly) bool hasTimezone;
@property (nonatomic) bool isApproximateCenter;
@property (nonatomic) int knownAccuracy;
@property (nonatomic, retain) GEOTimezone *timezone;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (id)placeInfoForPlaceData:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsKnownAccuracy:(id)arg1;
- (double)area;
- (id)center;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasArea;
- (bool)hasCenter;
- (bool)hasIsApproximateCenter;
- (bool)hasKnownAccuracy;
- (bool)hasTimezone;
- (unsigned long long)hash;
- (bool)isApproximateCenter;
- (bool)isEqual:(id)arg1;
- (int)knownAccuracy;
- (id)knownAccuracyAsString:(int)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setArea:(double)arg1;
- (void)setCenter:(id)arg1;
- (void)setHasArea:(bool)arg1;
- (void)setHasIsApproximateCenter:(bool)arg1;
- (void)setHasKnownAccuracy:(bool)arg1;
- (void)setIsApproximateCenter:(bool)arg1;
- (void)setKnownAccuracy:(int)arg1;
- (void)setTimezone:(id)arg1;
- (id)timezone;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
