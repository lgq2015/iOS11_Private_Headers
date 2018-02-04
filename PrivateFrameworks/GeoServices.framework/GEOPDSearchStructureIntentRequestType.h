/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDSearchStructureIntentRequestType : PBCodable <NSCopying> {
    struct { 
        unsigned int intentType : 1; 
        unsigned int structureType : 1; 
    }  _has;
    int  _intentType;
    int  _structureType;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) bool hasIntentType;
@property (nonatomic) bool hasStructureType;
@property (nonatomic) int intentType;
@property (nonatomic) int structureType;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (int)StringAsIntentType:(id)arg1;
- (int)StringAsStructureType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIntentType;
- (bool)hasStructureType;
- (unsigned long long)hash;
- (int)intentType;
- (id)intentTypeAsString:(int)arg1;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasIntentType:(bool)arg1;
- (void)setHasStructureType:(bool)arg1;
- (void)setIntentType:(int)arg1;
- (void)setStructureType:(int)arg1;
- (int)structureType;
- (id)structureTypeAsString:(int)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end