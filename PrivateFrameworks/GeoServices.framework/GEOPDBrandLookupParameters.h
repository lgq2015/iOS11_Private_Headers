/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDBrandLookupParameters : PBCodable <NSCopying> {
    NSString * _imessageUid;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) bool hasImessageUid;
@property (nonatomic, retain) NSString *imessageUid;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasImessageUid;
- (unsigned long long)hash;
- (id)imessageUid;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setImessageUid:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
