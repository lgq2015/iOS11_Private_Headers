/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBPriceRangeValue : PBCodable <NSCopying> {
    NSString * _currencyCode;
    _INPBDecimalNumberValue * _maximumPrice;
    _INPBDecimalNumberValue * _minimumPrice;
    PBUnknownFields * _unknownFields;
    _INPBValueMetadata * _valueMetadata;
}

@property (nonatomic, retain) NSString *currencyCode;
@property (nonatomic, readonly) bool hasCurrencyCode;
@property (nonatomic, readonly) bool hasMaximumPrice;
@property (nonatomic, readonly) bool hasMinimumPrice;
@property (nonatomic, readonly) bool hasValueMetadata;
@property (nonatomic, retain) _INPBDecimalNumberValue *maximumPrice;
@property (nonatomic, retain) _INPBDecimalNumberValue *minimumPrice;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic, retain) _INPBValueMetadata *valueMetadata;

+ (id)options;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currencyCode;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCurrencyCode;
- (bool)hasMaximumPrice;
- (bool)hasMinimumPrice;
- (bool)hasValueMetadata;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)maximumPrice;
- (void)mergeFrom:(id)arg1;
- (id)minimumPrice;
- (bool)readFrom:(id)arg1;
- (void)setCurrencyCode:(id)arg1;
- (void)setMaximumPrice:(id)arg1;
- (void)setMinimumPrice:(id)arg1;
- (void)setValueMetadata:(id)arg1;
- (id)unknownFields;
- (id)valueMetadata;
- (void)writeTo:(id)arg1;

@end
