/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOMapLayerDataServiceVersion : PBCodable <NSCopying> {
    unsigned int  _dataVersion;
    unsigned int  _formatVersion;
    struct { 
        unsigned int dataVersion : 1; 
        unsigned int formatVersion : 1; 
        unsigned int patchVersion : 1; 
    }  _has;
    unsigned int  _patchVersion;
}

@property (nonatomic) unsigned int dataVersion;
@property (nonatomic) unsigned int formatVersion;
@property (nonatomic) bool hasDataVersion;
@property (nonatomic) bool hasFormatVersion;
@property (nonatomic) bool hasPatchVersion;
@property (nonatomic) unsigned int patchVersion;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)dataVersion;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)formatVersion;
- (bool)hasDataVersion;
- (bool)hasFormatVersion;
- (bool)hasPatchVersion;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)patchVersion;
- (bool)readFrom:(id)arg1;
- (void)setDataVersion:(unsigned int)arg1;
- (void)setFormatVersion:(unsigned int)arg1;
- (void)setHasDataVersion:(bool)arg1;
- (void)setHasFormatVersion:(bool)arg1;
- (void)setHasPatchVersion:(bool)arg1;
- (void)setPatchVersion:(unsigned int)arg1;
- (void)writeTo:(id)arg1;

@end
