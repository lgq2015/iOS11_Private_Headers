/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBRidePartySizeOption : PBCodable <NSCopying> {
    _INPBRangeValue * _partySizeRange;
    _INPBPriceRangeValue * _priceRange;
    NSString * _sizeDescription;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) bool hasPartySizeRange;
@property (nonatomic, readonly) bool hasPriceRange;
@property (nonatomic, readonly) bool hasSizeDescription;
@property (nonatomic, retain) _INPBRangeValue *partySizeRange;
@property (nonatomic, retain) _INPBPriceRangeValue *priceRange;
@property (nonatomic, retain) NSString *sizeDescription;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (id)options;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasPartySizeRange;
- (bool)hasPriceRange;
- (bool)hasSizeDescription;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)partySizeRange;
- (id)priceRange;
- (bool)readFrom:(id)arg1;
- (void)setPartySizeRange:(id)arg1;
- (void)setPriceRange:(id)arg1;
- (void)setSizeDescription:(id)arg1;
- (id)sizeDescription;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
