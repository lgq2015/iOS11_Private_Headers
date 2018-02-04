/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDExternalAction : PBCodable <NSCopying> {
    int  _componentType;
    NSMutableArray * _externalActionDetails;
    struct { 
        unsigned int componentType : 1; 
    }  _has;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) int componentType;
@property (nonatomic, retain) NSMutableArray *externalActionDetails;
@property (nonatomic) bool hasComponentType;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)externalActionDetailType;

- (void).cxx_destruct;
- (int)StringAsComponentType:(id)arg1;
- (void)addExternalActionDetail:(id)arg1;
- (void)clearExternalActionDetails;
- (int)componentType;
- (id)componentTypeAsString:(int)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)externalActionDetailAtIndex:(unsigned long long)arg1;
- (id)externalActionDetails;
- (unsigned long long)externalActionDetailsCount;
- (bool)hasComponentType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setComponentType:(int)arg1;
- (void)setExternalActionDetails:(id)arg1;
- (void)setHasComponentType:(bool)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
