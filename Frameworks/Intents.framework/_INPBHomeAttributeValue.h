/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBHomeAttributeValue : PBCodable <NSCopying> {
    bool  _booleanValue;
    _INPBDouble * _doubleValue;
    struct { 
        unsigned int valueType : 1; 
        unsigned int booleanValue : 1; 
    }  _has;
    _INPBString * _stringValue;
    PBUnknownFields * _unknownFields;
    int  _valueType;
}

@property (nonatomic) bool booleanValue;
@property (nonatomic, retain) _INPBDouble *doubleValue;
@property (nonatomic) bool hasBooleanValue;
@property (nonatomic, readonly) bool hasDoubleValue;
@property (nonatomic, readonly) bool hasStringValue;
@property (nonatomic) bool hasValueType;
@property (nonatomic, retain) _INPBString *stringValue;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic) int valueType;

+ (id)options;

- (void).cxx_destruct;
- (int)StringAsValueType:(id)arg1;
- (bool)booleanValue;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)doubleValue;
- (bool)hasBooleanValue;
- (bool)hasDoubleValue;
- (bool)hasStringValue;
- (bool)hasValueType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBooleanValue:(bool)arg1;
- (void)setDoubleValue:(id)arg1;
- (void)setHasBooleanValue:(bool)arg1;
- (void)setHasValueType:(bool)arg1;
- (void)setStringValue:(id)arg1;
- (void)setValueType:(int)arg1;
- (id)stringValue;
- (id)unknownFields;
- (int)valueType;
- (id)valueTypeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
