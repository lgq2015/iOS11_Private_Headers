/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBHomeAttribute : PBCodable <NSCopying> {
    int  _attributeType;
    _INPBHomeAttributeValue * _attributeValue;
    struct { 
        unsigned int attributeType : 1; 
    }  _has;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) int attributeType;
@property (nonatomic, retain) _INPBHomeAttributeValue *attributeValue;
@property (nonatomic) bool hasAttributeType;
@property (nonatomic, readonly) bool hasAttributeValue;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (id)options;

- (void).cxx_destruct;
- (int)StringAsAttributeType:(id)arg1;
- (int)attributeType;
- (id)attributeTypeAsString:(int)arg1;
- (id)attributeValue;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAttributeType;
- (bool)hasAttributeValue;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAttributeType:(int)arg1;
- (void)setAttributeValue:(id)arg1;
- (void)setHasAttributeType:(bool)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
