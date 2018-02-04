/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOSignificantLocation : PBCodable <NSCopying> {
    double  _confidence;
    struct { 
        unsigned int confidence : 1; 
        unsigned int locationIndex : 1; 
        unsigned int numberOfVisitsBucket : 1; 
    }  _has;
    NSString * _identifier;
    GEOLocation * _location;
    unsigned int  _locationIndex;
    unsigned int  _numberOfVisitsBucket;
}

@property (nonatomic) double confidence;
@property (nonatomic) bool hasConfidence;
@property (nonatomic, readonly) bool hasIdentifier;
@property (nonatomic, readonly) bool hasLocation;
@property (nonatomic) bool hasLocationIndex;
@property (nonatomic) bool hasNumberOfVisitsBucket;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) GEOLocation *location;
@property (nonatomic) unsigned int locationIndex;
@property (nonatomic) unsigned int numberOfVisitsBucket;

- (void).cxx_destruct;
- (double)confidence;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasConfidence;
- (bool)hasIdentifier;
- (bool)hasLocation;
- (bool)hasLocationIndex;
- (bool)hasNumberOfVisitsBucket;
- (unsigned long long)hash;
- (id)identifier;
- (bool)isEqual:(id)arg1;
- (id)location;
- (unsigned int)locationIndex;
- (void)mergeFrom:(id)arg1;
- (unsigned int)numberOfVisitsBucket;
- (bool)readFrom:(id)arg1;
- (void)setConfidence:(double)arg1;
- (void)setHasConfidence:(bool)arg1;
- (void)setHasLocationIndex:(bool)arg1;
- (void)setHasNumberOfVisitsBucket:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setLocationIndex:(unsigned int)arg1;
- (void)setNumberOfVisitsBucket:(unsigned int)arg1;
- (void)writeTo:(id)arg1;

@end
