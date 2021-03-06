/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDDirectionIntent : PBCodable <NSCopying> {
    GEOPDResolvedItem * _destination;
    GEOPDResolvedItem * _origin;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) GEOPDResolvedItem *destination;
@property (nonatomic, readonly) bool hasDestination;
@property (nonatomic, readonly) bool hasOrigin;
@property (nonatomic, retain) GEOPDResolvedItem *origin;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)destination;
- (id)dictionaryRepresentation;
- (bool)hasDestination;
- (bool)hasOrigin;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)origin;
- (bool)readFrom:(id)arg1;
- (void)setDestination:(id)arg1;
- (void)setOrigin:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
