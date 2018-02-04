/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDSearchResultsForCategoryEntry : PBCodable <NSCopying> {
    GEOPDBrowseCategory * _category;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _placeIndexs;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) GEOPDBrowseCategory *category;
@property (nonatomic, readonly) bool hasCategory;
@property (nonatomic, readonly) unsigned int*placeIndexs;
@property (nonatomic, readonly) unsigned long long placeIndexsCount;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (void)addPlaceIndex:(unsigned int)arg1;
- (id)category;
- (void)clearPlaceIndexs;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCategory;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)placeIndexAtIndex:(unsigned long long)arg1;
- (unsigned int*)placeIndexs;
- (unsigned long long)placeIndexsCount;
- (bool)readFrom:(id)arg1;
- (void)setCategory:(id)arg1;
- (void)setPlaceIndexs:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
