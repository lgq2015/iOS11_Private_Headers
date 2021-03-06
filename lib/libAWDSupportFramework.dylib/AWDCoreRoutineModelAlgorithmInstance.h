/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDCoreRoutineModelAlgorithmInstance : PBCodable <NSCopying> {
    unsigned long long  _addressComponentMatches;
    double  _distanceFromTruth;
    unsigned int  _efficacy;
    struct { 
        unsigned int addressComponentMatches : 1; 
        unsigned int distanceFromTruth : 1; 
        unsigned int uncertainty : 1; 
        unsigned int efficacy : 1; 
        unsigned int source : 1; 
        unsigned int type : 1; 
    }  _has;
    unsigned int  _source;
    unsigned int  _type;
    double  _uncertainty;
}

@property (nonatomic) unsigned long long addressComponentMatches;
@property (nonatomic) double distanceFromTruth;
@property (nonatomic) unsigned int efficacy;
@property (nonatomic) bool hasAddressComponentMatches;
@property (nonatomic) bool hasDistanceFromTruth;
@property (nonatomic) bool hasEfficacy;
@property (nonatomic) bool hasSource;
@property (nonatomic) bool hasType;
@property (nonatomic) bool hasUncertainty;
@property (nonatomic) unsigned int source;
@property (nonatomic) unsigned int type;
@property (nonatomic) double uncertainty;

- (unsigned long long)addressComponentMatches;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (double)distanceFromTruth;
- (unsigned int)efficacy;
- (bool)hasAddressComponentMatches;
- (bool)hasDistanceFromTruth;
- (bool)hasEfficacy;
- (bool)hasSource;
- (bool)hasType;
- (bool)hasUncertainty;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAddressComponentMatches:(unsigned long long)arg1;
- (void)setDistanceFromTruth:(double)arg1;
- (void)setEfficacy:(unsigned int)arg1;
- (void)setHasAddressComponentMatches:(bool)arg1;
- (void)setHasDistanceFromTruth:(bool)arg1;
- (void)setHasEfficacy:(bool)arg1;
- (void)setHasSource:(bool)arg1;
- (void)setHasType:(bool)arg1;
- (void)setHasUncertainty:(bool)arg1;
- (void)setSource:(unsigned int)arg1;
- (void)setType:(unsigned int)arg1;
- (void)setUncertainty:(double)arg1;
- (unsigned int)source;
- (unsigned int)type;
- (double)uncertainty;
- (void)writeTo:(id)arg1;

@end
