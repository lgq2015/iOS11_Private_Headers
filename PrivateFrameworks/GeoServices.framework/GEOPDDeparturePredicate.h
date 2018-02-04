/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDDeparturePredicate : PBCodable <NSCopying> {
    struct { 
        unsigned int timeRange : 1; 
        unsigned int numAdditionalDepartures : 1; 
    }  _has;
    unsigned int  _numAdditionalDepartures;
    struct GEOPDTimeRange { 
        unsigned int _duration; 
        unsigned int _startTime; 
        struct { 
            unsigned int duration : 1; 
            unsigned int startTime : 1; 
        } _has; 
    }  _timeRange;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) bool hasNumAdditionalDepartures;
@property (nonatomic) bool hasTimeRange;
@property (nonatomic) unsigned int numAdditionalDepartures;
@property (nonatomic) struct GEOPDTimeRange { unsigned int x1; unsigned int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; } timeRange;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasNumAdditionalDepartures;
- (bool)hasTimeRange;
- (unsigned long long)hash;
- (id)initWithTraitsTransitModeFilter:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)numAdditionalDepartures;
- (bool)readFrom:(id)arg1;
- (void)setHasNumAdditionalDepartures:(bool)arg1;
- (void)setHasTimeRange:(bool)arg1;
- (void)setNumAdditionalDepartures:(unsigned int)arg1;
- (void)setTimeRange:(struct GEOPDTimeRange { unsigned int x1; unsigned int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; })arg1;
- (struct GEOPDTimeRange { unsigned int x1; unsigned int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; })timeRange;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
