/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOVLaneInformation : PBCodable <NSCopying> {
    unsigned int  _style;
    unsigned int  _validityMask;
}

@property (nonatomic) unsigned int style;
@property (nonatomic) unsigned int validityMask;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setStyle:(unsigned int)arg1;
- (void)setValidityMask:(unsigned int)arg1;
- (unsigned int)style;
- (unsigned int)validityMask;
- (void)writeTo:(id)arg1;

@end
