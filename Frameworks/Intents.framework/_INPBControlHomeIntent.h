/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBControlHomeIntent : PBCodable <NSCopying> {
    _INPBHomeAttribute * _attribute;
    NSMutableArray * _entities;
    _INPBIntentMetadata * _intentMetadata;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) _INPBHomeAttribute *attribute;
@property (nonatomic, retain) NSMutableArray *entities;
@property (nonatomic, readonly) bool hasAttribute;
@property (nonatomic, readonly) bool hasIntentMetadata;
@property (nonatomic, retain) _INPBIntentMetadata *intentMetadata;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)entitiesType;
+ (id)options;

- (void).cxx_destruct;
- (void)addEntities:(id)arg1;
- (id)attribute;
- (void)clearEntities;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)entities;
- (id)entitiesAtIndex:(unsigned long long)arg1;
- (unsigned long long)entitiesCount;
- (bool)hasAttribute;
- (bool)hasIntentMetadata;
- (unsigned long long)hash;
- (id)intentMetadata;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAttribute:(id)arg1;
- (void)setEntities:(id)arg1;
- (void)setIntentMetadata:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
