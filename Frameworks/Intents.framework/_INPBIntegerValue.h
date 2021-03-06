/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBIntegerValue : PBCodable <NSCopying> {
    struct { 
        unsigned int value : 1; 
    }  _has;
    PBUnknownFields * _unknownFields;
    int  _value;
    _INPBValueMetadata * _valueMetadata;
}

@property (nonatomic) bool hasValue;
@property (nonatomic, readonly) bool hasValueMetadata;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic) int value;
@property (nonatomic, retain) _INPBValueMetadata *valueMetadata;

+ (id)options;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasValue;
- (bool)hasValueMetadata;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasValue:(bool)arg1;
- (void)setValue:(int)arg1;
- (void)setValueMetadata:(id)arg1;
- (id)unknownFields;
- (int)value;
- (id)valueMetadata;
- (void)writeTo:(id)arg1;

@end
