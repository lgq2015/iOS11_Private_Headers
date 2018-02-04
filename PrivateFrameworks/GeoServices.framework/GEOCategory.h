/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOCategory : PBCodable <NSCopying> {
    NSString * _alias;
    long long  _geoOntologyId;
    struct { 
        unsigned int geoOntologyId : 1; 
    }  _has;
    int  _level;
    NSMutableArray * _localizedNames;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSString *alias;
@property (nonatomic) long long geoOntologyId;
@property (nonatomic) bool hasGeoOntologyId;
@property (nonatomic) int level;
@property (nonatomic, retain) NSMutableArray *localizedNames;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)localizedNamesType;

- (void).cxx_destruct;
- (void)addLocalizedNames:(id)arg1;
- (id)alias;
- (void)clearLocalizedNames;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (long long)geoOntologyId;
- (bool)hasGeoOntologyId;
- (unsigned long long)hash;
- (id)initWithPlaceDataCategory:(id)arg1;
- (bool)isEqual:(id)arg1;
- (int)level;
- (id)localizedNames;
- (id)localizedNamesAtIndex:(unsigned long long)arg1;
- (unsigned long long)localizedNamesCount;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAlias:(id)arg1;
- (void)setGeoOntologyId:(long long)arg1;
- (void)setHasGeoOntologyId:(bool)arg1;
- (void)setLevel:(int)arg1;
- (void)setLocalizedNames:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
