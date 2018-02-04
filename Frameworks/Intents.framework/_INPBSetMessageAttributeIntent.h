/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBSetMessageAttributeIntent : PBCodable <NSCopying> {
    int  _attribute;
    struct { 
        unsigned int attribute : 1; 
    }  _has;
    NSMutableArray * _identifiers;
    _INPBIntentMetadata * _intentMetadata;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) int attribute;
@property (nonatomic) bool hasAttribute;
@property (nonatomic, readonly) bool hasIntentMetadata;
@property (nonatomic, retain) NSMutableArray *identifiers;
@property (nonatomic, retain) _INPBIntentMetadata *intentMetadata;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)identifierType;
+ (id)options;

- (void).cxx_destruct;
- (int)StringAsAttribute:(id)arg1;
- (void)addIdentifier:(id)arg1;
- (int)attribute;
- (id)attributeAsString:(int)arg1;
- (void)clearIdentifiers;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAttribute;
- (bool)hasIntentMetadata;
- (unsigned long long)hash;
- (id)identifierAtIndex:(unsigned long long)arg1;
- (id)identifiers;
- (unsigned long long)identifiersCount;
- (id)intentMetadata;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAttribute:(int)arg1;
- (void)setHasAttribute:(bool)arg1;
- (void)setIdentifiers:(id)arg1;
- (void)setIntentMetadata:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
