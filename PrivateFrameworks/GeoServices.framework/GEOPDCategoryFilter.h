/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDCategoryFilter : PBCodable <NSCopying> {
    NSData * _categoryMetadata;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSData *categoryMetadata;
@property (nonatomic, readonly) bool hasCategoryMetadata;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (id)categoryMetadata;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCategoryMetadata;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCategoryMetadata:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
