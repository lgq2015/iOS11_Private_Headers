/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORouteInformation : PBCodable <NSCopying> {
    GEOFormattedString * _detail;
    GEOFormattedString * _duration;
}

@property (nonatomic, retain) GEOFormattedString *detail;
@property (nonatomic, retain) GEOFormattedString *duration;
@property (nonatomic, readonly) bool hasDetail;
@property (nonatomic, readonly) bool hasDuration;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)detail;
- (id)dictionaryRepresentation;
- (id)duration;
- (bool)hasDetail;
- (bool)hasDuration;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDetail:(id)arg1;
- (void)setDuration:(id)arg1;
- (void)writeTo:(id)arg1;

@end
