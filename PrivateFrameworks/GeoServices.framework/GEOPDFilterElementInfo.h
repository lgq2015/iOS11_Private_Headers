/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDFilterElementInfo : PBCodable <NSCopying> {
    NSMutableArray * _filterIds;
    GEOPDVenueLabel * _label;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSMutableArray *filterIds;
@property (nonatomic, readonly) bool hasLabel;
@property (nonatomic, retain) GEOPDVenueLabel *label;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)filterIdType;

- (void).cxx_destruct;
- (void)addFilterId:(id)arg1;
- (void)clearFilterIds;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)filterIdAtIndex:(unsigned long long)arg1;
- (id)filterIds;
- (unsigned long long)filterIdsCount;
- (bool)hasLabel;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)label;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setFilterIds:(id)arg1;
- (void)setLabel:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
