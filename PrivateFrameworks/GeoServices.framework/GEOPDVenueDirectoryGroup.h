/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDVenueDirectoryGroup : PBCodable <NSCopying> {
    unsigned long long  _directoryGroupingId;
    struct { 
        unsigned int directoryGroupingId : 1; 
        unsigned int muid : 1; 
    }  _has;
    GEOPDVenueLabel * _label;
    unsigned long long  _muid;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) unsigned long long directoryGroupingId;
@property (nonatomic) bool hasDirectoryGroupingId;
@property (nonatomic, readonly) bool hasLabel;
@property (nonatomic) bool hasMuid;
@property (nonatomic, retain) GEOPDVenueLabel *label;
@property (nonatomic) unsigned long long muid;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)directoryGroupingId;
- (bool)hasDirectoryGroupingId;
- (bool)hasLabel;
- (bool)hasMuid;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)label;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)muid;
- (bool)readFrom:(id)arg1;
- (void)setDirectoryGroupingId:(unsigned long long)arg1;
- (void)setHasDirectoryGroupingId:(bool)arg1;
- (void)setHasMuid:(bool)arg1;
- (void)setLabel:(id)arg1;
- (void)setMuid:(unsigned long long)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
