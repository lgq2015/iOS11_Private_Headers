/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDShardedId : PBCodable <NSCopying> {
    GEOLatLng * _center;
    struct { 
        unsigned int muid : 1; 
        unsigned int resultProviderId : 1; 
    }  _has;
    unsigned long long  _muid;
    int  _resultProviderId;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) GEOLatLng *center;
@property (nonatomic, readonly) bool hasCenter;
@property (nonatomic) bool hasMuid;
@property (nonatomic) bool hasResultProviderId;
@property (nonatomic) unsigned long long muid;
@property (nonatomic) int resultProviderId;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (id)center;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCenter;
- (bool)hasMuid;
- (bool)hasResultProviderId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)muid;
- (bool)readFrom:(id)arg1;
- (int)resultProviderId;
- (void)setCenter:(id)arg1;
- (void)setHasMuid:(bool)arg1;
- (void)setHasResultProviderId:(bool)arg1;
- (void)setMuid:(unsigned long long)arg1;
- (void)setResultProviderId:(int)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
