/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBStringValue : PBCodable <NSCopying> {
    PBUnknownFields * _unknownFields;
    NSString * _value;
    _INPBValueMetadata * _valueMetadata;
}

@property (nonatomic, readonly) bool hasValue;
@property (nonatomic, readonly) bool hasValueMetadata;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic, retain) NSString *value;
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
- (void)setValue:(id)arg1;
- (void)setValueMetadata:(id)arg1;
- (id)unknownFields;
- (id)value;
- (id)valueMetadata;
- (void)writeTo:(id)arg1;

@end
