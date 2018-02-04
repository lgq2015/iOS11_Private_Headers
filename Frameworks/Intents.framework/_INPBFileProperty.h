/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBFileProperty : PBCodable <NSCopying> {
    struct { 
        unsigned int name : 1; 
        unsigned int qualifier : 1; 
    }  _has;
    int  _name;
    int  _qualifier;
    PBUnknownFields * _unknownFields;
    _INPBFilePropertyValue * _value;
}

@property (nonatomic) bool hasName;
@property (nonatomic) bool hasQualifier;
@property (nonatomic, readonly) bool hasValue;
@property (nonatomic) int name;
@property (nonatomic) int qualifier;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic, retain) _INPBFilePropertyValue *value;

+ (id)options;

- (void).cxx_destruct;
- (int)StringAsName:(id)arg1;
- (int)StringAsQualifier:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasName;
- (bool)hasQualifier;
- (bool)hasValue;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)name;
- (id)nameAsString:(int)arg1;
- (int)qualifier;
- (id)qualifierAsString:(int)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasName:(bool)arg1;
- (void)setHasQualifier:(bool)arg1;
- (void)setName:(int)arg1;
- (void)setQualifier:(int)arg1;
- (void)setValue:(id)arg1;
- (id)unknownFields;
- (id)value;
- (void)writeTo:(id)arg1;

@end