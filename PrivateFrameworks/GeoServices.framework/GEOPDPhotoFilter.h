/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDPhotoFilter : PBCodable <NSCopying> {
    struct GEOPDPhotoSizeFilterValue { unsigned int x1; unsigned int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; } * _photoSizeFilters;
    unsigned long long  _photoSizeFiltersCount;
    unsigned long long  _photoSizeFiltersSpace;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) struct GEOPDPhotoSizeFilterValue { unsigned int x1; unsigned int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; }*photoSizeFilters;
@property (nonatomic, readonly) unsigned long long photoSizeFiltersCount;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (void)addPhotoSizeFilter:(struct GEOPDPhotoSizeFilterValue { unsigned int x1; unsigned int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; })arg1;
- (void)clearPhotoSizeFilters;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (struct GEOPDPhotoSizeFilterValue { unsigned int x1; unsigned int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; })photoSizeFilterAtIndex:(unsigned long long)arg1;
- (struct GEOPDPhotoSizeFilterValue { unsigned int x1; unsigned int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; }*)photoSizeFilters;
- (unsigned long long)photoSizeFiltersCount;
- (bool)readFrom:(id)arg1;
- (void)setPhotoSizeFilters:(struct GEOPDPhotoSizeFilterValue { unsigned int x1; unsigned int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; }*)arg1 count:(unsigned long long)arg2;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
