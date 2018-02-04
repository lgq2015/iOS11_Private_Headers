/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDTransitConnection : PBCodable <NSCopying> {
    NSString * _entityNameString;
    struct { 
        unsigned int muid : 1; 
    }  _has;
    GEOPDMapsIdentifier * _mapsId;
    unsigned long long  _muid;
    NSMutableArray * _transitLabels;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSString *entityNameString;
@property (nonatomic, readonly) bool hasEntityNameString;
@property (nonatomic, readonly) bool hasMapsId;
@property (nonatomic) bool hasMuid;
@property (nonatomic, retain) GEOPDMapsIdentifier *mapsId;
@property (nonatomic) unsigned long long muid;
@property (nonatomic, retain) NSMutableArray *transitLabels;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)transitLabelType;

- (void).cxx_destruct;
- (void)addTransitLabel:(id)arg1;
- (void)clearTransitLabels;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)entityNameString;
- (bool)hasEntityNameString;
- (bool)hasMapsId;
- (bool)hasMuid;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)mapsId;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)muid;
- (bool)readFrom:(id)arg1;
- (void)setEntityNameString:(id)arg1;
- (void)setHasMuid:(bool)arg1;
- (void)setMapsId:(id)arg1;
- (void)setMuid:(unsigned long long)arg1;
- (void)setTransitLabels:(id)arg1;
- (id)transitLabelAtIndex:(unsigned long long)arg1;
- (id)transitLabels;
- (unsigned long long)transitLabelsCount;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
