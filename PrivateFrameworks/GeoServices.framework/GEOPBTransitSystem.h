/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPBTransitSystem : PBCodable <GEOTransitNamedItem, NSCopying> {
    GEOPBTransitArtwork * _artwork;
    struct { 
        unsigned int muid : 1; 
        unsigned int systemIndex : 1; 
    }  _has;
    unsigned long long  _muid;
    NSString * _nameDisplayString;
    GEOStyleAttributes * _styleAttributes;
    unsigned int  _systemIndex;
    PBUnknownFields * _unknownFields;
    NSString * _website;
}

@property (nonatomic, retain) GEOPBTransitArtwork *artwork;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasArtwork;
@property (nonatomic) bool hasMuid;
@property (nonatomic, readonly) bool hasNameDisplayString;
@property (nonatomic, readonly) bool hasStyleAttributes;
@property (nonatomic) bool hasSystemIndex;
@property (nonatomic, readonly) bool hasWebsite;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long muid;
@property (nonatomic, retain) NSString *nameDisplayString;
@property (nonatomic, retain) GEOStyleAttributes *styleAttributes;
@property (readonly) Class superclass;
@property (nonatomic) unsigned int systemIndex;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic, retain) NSString *website;

- (void).cxx_destruct;
- (id)artwork;
- (id)bestName;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)geoTransitSystem;
- (bool)hasArtwork;
- (bool)hasMuid;
- (bool)hasNameDisplayString;
- (bool)hasStyleAttributes;
- (bool)hasSystemIndex;
- (bool)hasWebsite;
- (unsigned long long)hash;
- (id)identifier;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)muid;
- (id)nameDisplayString;
- (bool)readFrom:(id)arg1;
- (void)setArtwork:(id)arg1;
- (void)setHasMuid:(bool)arg1;
- (void)setHasSystemIndex:(bool)arg1;
- (void)setMuid:(unsigned long long)arg1;
- (void)setNameDisplayString:(id)arg1;
- (void)setStyleAttributes:(id)arg1;
- (void)setSystemIndex:(unsigned int)arg1;
- (void)setWebsite:(id)arg1;
- (id)styleAttributes;
- (unsigned int)systemIndex;
- (id)unknownFields;
- (id)website;
- (void)writeTo:(id)arg1;

@end
