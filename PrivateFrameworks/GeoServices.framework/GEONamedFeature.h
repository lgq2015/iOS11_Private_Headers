/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEONamedFeature : PBCodable <NSCopying> {
    NSString * _name;
    PBUnknownFields * _unknownFields;
    double  _value;
}

@property (nonatomic, retain) NSString *name;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic) double value;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)name;
- (bool)readFrom:(id)arg1;
- (void)setName:(id)arg1;
- (void)setValue:(double)arg1;
- (id)unknownFields;
- (double)value;
- (void)writeTo:(id)arg1;

@end
