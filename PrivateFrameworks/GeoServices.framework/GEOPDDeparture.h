/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDDeparture : PBCodable <GEOTransitDeparture, NSCopying> {
    double  _absDepartureTime;
    struct { 
        unsigned int absDepartureTime : 1; 
    }  _has;
    PBUnknownFields * _unknownFields;
    NSString * _vehicleNumber;
}

@property (nonatomic) double absDepartureTime;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) NSDate *departureDate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasAbsDepartureTime;
@property (nonatomic, readonly) bool hasVehicleNumber;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic, readonly) NSString *vehicleIdentifier;
@property (nonatomic, retain) NSString *vehicleNumber;

- (void).cxx_destruct;
- (double)absDepartureTime;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)departureDate;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAbsDepartureTime;
- (bool)hasVehicleNumber;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAbsDepartureTime:(double)arg1;
- (void)setHasAbsDepartureTime:(bool)arg1;
- (void)setVehicleNumber:(id)arg1;
- (id)unknownFields;
- (id)vehicleIdentifier;
- (id)vehicleNumber;
- (void)writeTo:(id)arg1;

@end
