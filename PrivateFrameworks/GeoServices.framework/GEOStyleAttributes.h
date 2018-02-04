/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOStyleAttributes : PBCodable <NSCopying> {
    NSMutableArray * _attributes;
    unsigned long long  _customIconId;
    struct { 
        unsigned int customIconId : 1; 
    }  _has;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSMutableArray *attributes;
@property (nonatomic) unsigned long long customIconId;
@property (nonatomic) bool hasCustomIconId;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)attributeType;
+ (id)attributesForTransitLine:(id)arg1;
+ (id)attributesForTransitSystem:(id)arg1;

- (void).cxx_destruct;
- (void)addAttribute:(id)arg1;
- (id)attributeAtIndex:(unsigned long long)arg1;
- (id)attributes;
- (unsigned long long)attributesCount;
- (void)clearAttributes;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)customIconId;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCustomIconId;
- (unsigned long long)hash;
- (id)initWithGEOFeatureStyleAttributes:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAttributes:(id)arg1;
- (void)setCustomIconId:(unsigned long long)arg1;
- (void)setHasCustomIconId:(bool)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
