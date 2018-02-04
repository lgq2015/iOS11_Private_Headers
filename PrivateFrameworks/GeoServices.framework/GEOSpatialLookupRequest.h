/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOSpatialLookupRequest : PBRequest <NSCopying> {
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _categorys;
    GEOLatLng * _center;
    struct { 
        unsigned int maxResults : 1; 
        unsigned int radius : 1; 
    }  _has;
    int  _maxResults;
    int  _radius;
}

@property (nonatomic, readonly) int*categorys;
@property (nonatomic, readonly) unsigned long long categorysCount;
@property (nonatomic, retain) GEOLatLng *center;
@property (nonatomic) bool hasMaxResults;
@property (nonatomic) bool hasRadius;
@property (nonatomic) int maxResults;
@property (nonatomic) int radius;

- (void).cxx_destruct;
- (int)StringAsCategorys:(id)arg1;
- (void)addCategory:(int)arg1;
- (int)categoryAtIndex:(unsigned long long)arg1;
- (int*)categorys;
- (id)categorysAsString:(int)arg1;
- (unsigned long long)categorysCount;
- (id)center;
- (void)clearCategorys;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasMaxResults;
- (bool)hasRadius;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (int)maxResults;
- (void)mergeFrom:(id)arg1;
- (int)radius;
- (bool)readFrom:(id)arg1;
- (void)setCategorys:(int*)arg1 count:(unsigned long long)arg2;
- (void)setCenter:(id)arg1;
- (void)setHasMaxResults:(bool)arg1;
- (void)setHasRadius:(bool)arg1;
- (void)setMaxResults:(int)arg1;
- (void)setRadius:(int)arg1;
- (void)writeTo:(id)arg1;

@end
