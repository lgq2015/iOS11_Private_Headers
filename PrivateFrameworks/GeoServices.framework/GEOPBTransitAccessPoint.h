/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPBTransitAccessPoint : PBCodable <NSCopying> {
    unsigned int  _accessPointIndex;
    NSString * _entranceNameDisplayString;
    NSMutableArray * _entranceZoomNames;
    NSString * _exitNameDisplayString;
    NSMutableArray * _exitZoomNames;
    struct { 
        unsigned int muid : 1; 
        unsigned int accessPointIndex : 1; 
        unsigned int stationIndex : 1; 
    }  _has;
    GEOLatLng * _location;
    unsigned long long  _muid;
    unsigned int  _stationIndex;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) unsigned int accessPointIndex;
@property (nonatomic, retain) NSString *entranceNameDisplayString;
@property (nonatomic, retain) NSMutableArray *entranceZoomNames;
@property (nonatomic, retain) NSString *exitNameDisplayString;
@property (nonatomic, retain) NSMutableArray *exitZoomNames;
@property (nonatomic) bool hasAccessPointIndex;
@property (nonatomic, readonly) bool hasEntranceNameDisplayString;
@property (nonatomic, readonly) bool hasExitNameDisplayString;
@property (nonatomic, readonly) bool hasLocation;
@property (nonatomic) bool hasMuid;
@property (nonatomic) bool hasStationIndex;
@property (nonatomic, retain) GEOLatLng *location;
@property (nonatomic) unsigned long long muid;
@property (nonatomic) unsigned int stationIndex;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)entranceZoomNameType;
+ (Class)exitZoomNameType;

- (void).cxx_destruct;
- (unsigned int)accessPointIndex;
- (void)addEntranceZoomName:(id)arg1;
- (void)addExitZoomName:(id)arg1;
- (id)bestEntranceName;
- (id)bestEntranceNameWithLocale:(out id*)arg1;
- (id)bestExitName;
- (id)bestExitNameWithLocale:(out id*)arg1;
- (void)clearEntranceZoomNames;
- (void)clearExitZoomNames;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)entranceNameDisplayString;
- (id)entranceZoomNameAtIndex:(unsigned long long)arg1;
- (id)entranceZoomNames;
- (unsigned long long)entranceZoomNamesCount;
- (id)exitNameDisplayString;
- (id)exitZoomNameAtIndex:(unsigned long long)arg1;
- (id)exitZoomNames;
- (unsigned long long)exitZoomNamesCount;
- (bool)hasAccessPointIndex;
- (bool)hasEntranceNameDisplayString;
- (bool)hasExitNameDisplayString;
- (bool)hasLocation;
- (bool)hasMuid;
- (bool)hasStationIndex;
- (unsigned long long)hash;
- (id)identifier;
- (bool)isEqual:(id)arg1;
- (id)location;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)muid;
- (bool)readFrom:(id)arg1;
- (void)setAccessPointIndex:(unsigned int)arg1;
- (void)setEntranceNameDisplayString:(id)arg1;
- (void)setEntranceZoomNames:(id)arg1;
- (void)setExitNameDisplayString:(id)arg1;
- (void)setExitZoomNames:(id)arg1;
- (void)setHasAccessPointIndex:(bool)arg1;
- (void)setHasMuid:(bool)arg1;
- (void)setHasStationIndex:(bool)arg1;
- (void)setLocation:(id)arg1;
- (void)setMuid:(unsigned long long)arg1;
- (void)setStationIndex:(unsigned int)arg1;
- (unsigned int)stationIndex;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
