/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDIpGeoLookupResult : PBCodable <NSCopying> {
    NSString * _countryCode;
    struct { 
        unsigned int status : 1; 
    }  _has;
    NSString * _ipAddress;
    GEOLatLng * _location;
    int  _status;
    NSString * _timeZome;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSString *countryCode;
@property (nonatomic, readonly) bool hasCountryCode;
@property (nonatomic, readonly) bool hasIpAddress;
@property (nonatomic, readonly) bool hasLocation;
@property (nonatomic) bool hasStatus;
@property (nonatomic, readonly) bool hasTimeZome;
@property (nonatomic, retain) NSString *ipAddress;
@property (nonatomic, retain) GEOLatLng *location;
@property (nonatomic) int status;
@property (nonatomic, retain) NSString *timeZome;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (int)StringAsStatus:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)countryCode;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCountryCode;
- (bool)hasIpAddress;
- (bool)hasLocation;
- (bool)hasStatus;
- (bool)hasTimeZome;
- (unsigned long long)hash;
- (id)ipAddress;
- (bool)isEqual:(id)arg1;
- (id)location;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCountryCode:(id)arg1;
- (void)setHasStatus:(bool)arg1;
- (void)setIpAddress:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setStatus:(int)arg1;
- (void)setTimeZome:(id)arg1;
- (int)status;
- (id)statusAsString:(int)arg1;
- (id)timeZome;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
