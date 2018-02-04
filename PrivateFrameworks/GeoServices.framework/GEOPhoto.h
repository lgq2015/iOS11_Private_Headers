/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPhoto : PBCodable <NSCopying> {
    struct { 
        unsigned int photoType : 1; 
    }  _has;
    NSMutableArray * _photoInfos;
    int  _photoType;
    NSString * _uid;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) bool hasPhotoType;
@property (nonatomic, readonly) bool hasUid;
@property (nonatomic, retain) NSMutableArray *photoInfos;
@property (nonatomic) int photoType;
@property (nonatomic, retain) NSString *uid;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)photoInfoType;

- (void).cxx_destruct;
- (int)StringAsPhotoType:(id)arg1;
- (void)addPhotoInfo:(id)arg1;
- (void)clearPhotoInfos;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasPhotoType;
- (bool)hasUid;
- (unsigned long long)hash;
- (id)initWithPlaceDataPhoto:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)photoInfoAtIndex:(unsigned long long)arg1;
- (id)photoInfos;
- (unsigned long long)photoInfosCount;
- (int)photoType;
- (id)photoTypeAsString:(int)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasPhotoType:(bool)arg1;
- (void)setPhotoInfos:(id)arg1;
- (void)setPhotoType:(int)arg1;
- (void)setUid:(id)arg1;
- (id)uid;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
