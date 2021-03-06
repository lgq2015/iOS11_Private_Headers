/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBDecimalNumberValue : PBCodable <NSCopying> {
    int  _exponent;
    struct { 
        unsigned int mantissa : 1; 
        unsigned int exponent : 1; 
        unsigned int isNegative : 1; 
    }  _has;
    bool  _isNegative;
    unsigned long long  _mantissa;
    PBUnknownFields * _unknownFields;
    _INPBValueMetadata * _valueMetadata;
}

@property (nonatomic) int exponent;
@property (nonatomic) bool hasExponent;
@property (nonatomic) bool hasIsNegative;
@property (nonatomic) bool hasMantissa;
@property (nonatomic, readonly) bool hasValueMetadata;
@property (nonatomic) bool isNegative;
@property (nonatomic) unsigned long long mantissa;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic, retain) _INPBValueMetadata *valueMetadata;

+ (id)options;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)exponent;
- (bool)hasExponent;
- (bool)hasIsNegative;
- (bool)hasMantissa;
- (bool)hasValueMetadata;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isNegative;
- (unsigned long long)mantissa;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setExponent:(int)arg1;
- (void)setHasExponent:(bool)arg1;
- (void)setHasIsNegative:(bool)arg1;
- (void)setHasMantissa:(bool)arg1;
- (void)setIsNegative:(bool)arg1;
- (void)setMantissa:(unsigned long long)arg1;
- (void)setValueMetadata:(id)arg1;
- (id)unknownFields;
- (id)valueMetadata;
- (void)writeTo:(id)arg1;

@end
