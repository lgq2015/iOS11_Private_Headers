/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBPaymentMethodValue : PBCodable <NSCopying> {
    struct { 
        unsigned int type : 1; 
    }  _has;
    _INPBImageValue * _icon;
    NSString * _identificationHint;
    NSString * _name;
    int  _type;
    PBUnknownFields * _unknownFields;
    _INPBValueMetadata * _valueMetadata;
}

@property (nonatomic, readonly) bool hasIcon;
@property (nonatomic, readonly) bool hasIdentificationHint;
@property (nonatomic, readonly) bool hasName;
@property (nonatomic) bool hasType;
@property (nonatomic, readonly) bool hasValueMetadata;
@property (nonatomic, retain) _INPBImageValue *icon;
@property (nonatomic, retain) NSString *identificationHint;
@property (nonatomic, retain) NSString *name;
@property (nonatomic) int type;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic, retain) _INPBValueMetadata *valueMetadata;

+ (id)options;

- (void).cxx_destruct;
- (int)StringAsType:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIcon;
- (bool)hasIdentificationHint;
- (bool)hasName;
- (bool)hasType;
- (bool)hasValueMetadata;
- (unsigned long long)hash;
- (id)icon;
- (id)identificationHint;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)name;
- (bool)readFrom:(id)arg1;
- (void)setHasType:(bool)arg1;
- (void)setIcon:(id)arg1;
- (void)setIdentificationHint:(id)arg1;
- (void)setName:(id)arg1;
- (void)setType:(int)arg1;
- (void)setValueMetadata:(id)arg1;
- (int)type;
- (id)typeAsString:(int)arg1;
- (id)unknownFields;
- (id)valueMetadata;
- (void)writeTo:(id)arg1;

@end
