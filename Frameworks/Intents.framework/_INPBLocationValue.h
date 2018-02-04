/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBLocationValue : PBCodable <NSCopying> {
    GEOMapItemStorage * _mapItemStorage;
    GEOPDPlace * _place;
    PBUnknownFields * _unknownFields;
    _INPBValueMetadata * _valueMetadata;
}

@property (nonatomic, readonly) bool hasMapItemStorage;
@property (nonatomic, readonly) bool hasPlace;
@property (nonatomic, readonly) bool hasValueMetadata;
@property (nonatomic, retain) GEOMapItemStorage *mapItemStorage;
@property (nonatomic, retain) GEOPDPlace *place;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic, retain) _INPBValueMetadata *valueMetadata;

+ (id)options;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasMapItemStorage;
- (bool)hasPlace;
- (bool)hasValueMetadata;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)mapItemStorage;
- (void)mergeFrom:(id)arg1;
- (id)place;
- (bool)readFrom:(id)arg1;
- (void)setMapItemStorage:(id)arg1;
- (void)setPlace:(id)arg1;
- (void)setValueMetadata:(id)arg1;
- (id)unknownFields;
- (id)valueMetadata;
- (void)writeTo:(id)arg1;

@end
