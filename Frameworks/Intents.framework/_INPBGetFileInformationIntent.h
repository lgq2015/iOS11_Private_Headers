/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBGetFileInformationIntent : PBCodable <NSCopying> {
    _INPBString * _entityName;
    int  _entityType;
    struct { 
        unsigned int entityType : 1; 
        unsigned int propertyName : 1; 
        unsigned int qualifier : 1; 
    }  _has;
    _INPBIntentMetadata * _intentMetadata;
    int  _propertyName;
    int  _qualifier;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) _INPBString *entityName;
@property (nonatomic) int entityType;
@property (nonatomic, readonly) bool hasEntityName;
@property (nonatomic) bool hasEntityType;
@property (nonatomic, readonly) bool hasIntentMetadata;
@property (nonatomic) bool hasPropertyName;
@property (nonatomic) bool hasQualifier;
@property (nonatomic, retain) _INPBIntentMetadata *intentMetadata;
@property (nonatomic) int propertyName;
@property (nonatomic) int qualifier;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (id)options;

- (void).cxx_destruct;
- (int)StringAsEntityType:(id)arg1;
- (int)StringAsPropertyName:(id)arg1;
- (int)StringAsQualifier:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)entityName;
- (int)entityType;
- (id)entityTypeAsString:(int)arg1;
- (bool)hasEntityName;
- (bool)hasEntityType;
- (bool)hasIntentMetadata;
- (bool)hasPropertyName;
- (bool)hasQualifier;
- (unsigned long long)hash;
- (id)intentMetadata;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)propertyName;
- (id)propertyNameAsString:(int)arg1;
- (int)qualifier;
- (id)qualifierAsString:(int)arg1;
- (bool)readFrom:(id)arg1;
- (void)setEntityName:(id)arg1;
- (void)setEntityType:(int)arg1;
- (void)setHasEntityType:(bool)arg1;
- (void)setHasPropertyName:(bool)arg1;
- (void)setHasQualifier:(bool)arg1;
- (void)setIntentMetadata:(id)arg1;
- (void)setPropertyName:(int)arg1;
- (void)setQualifier:(int)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
