/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOMapsSearchResult : PBCodable <NSCopying> {
    GEOAddress * _address;
    struct { 
        unsigned int muid : 1; 
    }  _has;
    unsigned long long  _muid;
    GEOPlaceActionDetails * _placeActionDetails;
}

@property (nonatomic, retain) GEOAddress *address;
@property (nonatomic, readonly) bool hasAddress;
@property (nonatomic) bool hasMuid;
@property (nonatomic, readonly) bool hasPlaceActionDetails;
@property (nonatomic) unsigned long long muid;
@property (nonatomic, retain) GEOPlaceActionDetails *placeActionDetails;

- (void).cxx_destruct;
- (id)address;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAddress;
- (bool)hasMuid;
- (bool)hasPlaceActionDetails;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)muid;
- (id)placeActionDetails;
- (bool)readFrom:(id)arg1;
- (void)setAddress:(id)arg1;
- (void)setHasMuid:(bool)arg1;
- (void)setMuid:(unsigned long long)arg1;
- (void)setPlaceActionDetails:(id)arg1;
- (void)writeTo:(id)arg1;

@end
