/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTransitEnterExitInfo : PBCodable <NSCopying> {
    unsigned int  _accessPointIndex;
    bool  _displayStop;
    struct { 
        unsigned int accessPointIndex : 1; 
        unsigned int stopIndex : 1; 
        unsigned int transferTime : 1; 
        unsigned int displayStop : 1; 
        unsigned int uncertainArrival : 1; 
    }  _has;
    unsigned int  _stopIndex;
    unsigned int  _transferTime;
    bool  _uncertainArrival;
}

@property (nonatomic) unsigned int accessPointIndex;
@property (nonatomic) bool displayStop;
@property (nonatomic) bool hasAccessPointIndex;
@property (nonatomic) bool hasDisplayStop;
@property (nonatomic) bool hasStopIndex;
@property (nonatomic) bool hasTransferTime;
@property (nonatomic) bool hasUncertainArrival;
@property (nonatomic) unsigned int stopIndex;
@property (nonatomic) unsigned int transferTime;
@property (nonatomic) bool uncertainArrival;

- (unsigned int)accessPointIndex;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)displayStop;
- (bool)hasAccessPointIndex;
- (bool)hasDisplayStop;
- (bool)hasStopIndex;
- (bool)hasTransferTime;
- (bool)hasUncertainArrival;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAccessPointIndex:(unsigned int)arg1;
- (void)setDisplayStop:(bool)arg1;
- (void)setHasAccessPointIndex:(bool)arg1;
- (void)setHasDisplayStop:(bool)arg1;
- (void)setHasStopIndex:(bool)arg1;
- (void)setHasTransferTime:(bool)arg1;
- (void)setHasUncertainArrival:(bool)arg1;
- (void)setStopIndex:(unsigned int)arg1;
- (void)setTransferTime:(unsigned int)arg1;
- (void)setUncertainArrival:(bool)arg1;
- (unsigned int)stopIndex;
- (unsigned int)transferTime;
- (bool)uncertainArrival;
- (void)writeTo:(id)arg1;

@end