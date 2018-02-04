/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOGenericInstruction : PBCodable <NSCopying> {
    NSString * _maneuver;
}

@property (nonatomic, readonly) bool hasManeuver;
@property (nonatomic, retain) NSString *maneuver;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasManeuver;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)maneuver;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setManeuver:(id)arg1;
- (void)writeTo:(id)arg1;

@end
