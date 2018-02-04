/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBMoveFileIntent : PBCodable <NSCopying> {
    _INPBString * _destinationName;
    int  _destinationType;
    NSMutableArray * _entityNames;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _entityTypes;
    struct { 
        unsigned int destinationType : 1; 
        unsigned int sourceType : 1; 
    }  _has;
    _INPBIntentMetadata * _intentMetadata;
    NSMutableArray * _properties;
    _INPBString * _sourceName;
    int  _sourceType;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) _INPBString *destinationName;
@property (nonatomic) int destinationType;
@property (nonatomic, retain) NSMutableArray *entityNames;
@property (nonatomic, readonly) int*entityTypes;
@property (nonatomic, readonly) unsigned long long entityTypesCount;
@property (nonatomic, readonly) bool hasDestinationName;
@property (nonatomic) bool hasDestinationType;
@property (nonatomic, readonly) bool hasIntentMetadata;
@property (nonatomic, readonly) bool hasSourceName;
@property (nonatomic) bool hasSourceType;
@property (nonatomic, retain) _INPBIntentMetadata *intentMetadata;
@property (nonatomic, retain) NSMutableArray *properties;
@property (nonatomic, retain) _INPBString *sourceName;
@property (nonatomic) int sourceType;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)entityNameType;
+ (id)options;
+ (Class)propertiesType;

- (void).cxx_destruct;
- (int)StringAsDestinationType:(id)arg1;
- (int)StringAsEntityTypes:(id)arg1;
- (int)StringAsSourceType:(id)arg1;
- (void)addEntityName:(id)arg1;
- (void)addEntityType:(int)arg1;
- (void)addProperties:(id)arg1;
- (void)clearEntityNames;
- (void)clearEntityTypes;
- (void)clearProperties;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)destinationName;
- (int)destinationType;
- (id)destinationTypeAsString:(int)arg1;
- (id)dictionaryRepresentation;
- (id)entityNameAtIndex:(unsigned long long)arg1;
- (id)entityNames;
- (unsigned long long)entityNamesCount;
- (int)entityTypeAtIndex:(unsigned long long)arg1;
- (int*)entityTypes;
- (id)entityTypesAsString:(int)arg1;
- (unsigned long long)entityTypesCount;
- (bool)hasDestinationName;
- (bool)hasDestinationType;
- (bool)hasIntentMetadata;
- (bool)hasSourceName;
- (bool)hasSourceType;
- (unsigned long long)hash;
- (id)intentMetadata;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)properties;
- (id)propertiesAtIndex:(unsigned long long)arg1;
- (unsigned long long)propertiesCount;
- (bool)readFrom:(id)arg1;
- (void)setDestinationName:(id)arg1;
- (void)setDestinationType:(int)arg1;
- (void)setEntityNames:(id)arg1;
- (void)setEntityTypes:(int*)arg1 count:(unsigned long long)arg2;
- (void)setHasDestinationType:(bool)arg1;
- (void)setHasSourceType:(bool)arg1;
- (void)setIntentMetadata:(id)arg1;
- (void)setProperties:(id)arg1;
- (void)setSourceName:(id)arg1;
- (void)setSourceType:(int)arg1;
- (id)sourceName;
- (int)sourceType;
- (id)sourceTypeAsString:(int)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
