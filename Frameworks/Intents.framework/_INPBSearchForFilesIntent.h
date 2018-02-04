/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBSearchForFilesIntent : PBCodable <NSCopying> {
    _INPBString * _appId;
    _INPBString * _entityName;
    int  _entityType;
    struct { 
        unsigned int entityType : 1; 
        unsigned int scope : 1; 
    }  _has;
    _INPBIntentMetadata * _intentMetadata;
    NSMutableArray * _properties;
    int  _scope;
    _INPBString * _scopeEntityName;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) _INPBString *appId;
@property (nonatomic, retain) _INPBString *entityName;
@property (nonatomic) int entityType;
@property (nonatomic, readonly) bool hasAppId;
@property (nonatomic, readonly) bool hasEntityName;
@property (nonatomic) bool hasEntityType;
@property (nonatomic, readonly) bool hasIntentMetadata;
@property (nonatomic) bool hasScope;
@property (nonatomic, readonly) bool hasScopeEntityName;
@property (nonatomic, retain) _INPBIntentMetadata *intentMetadata;
@property (nonatomic, retain) NSMutableArray *properties;
@property (nonatomic) int scope;
@property (nonatomic, retain) _INPBString *scopeEntityName;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (id)options;
+ (Class)propertiesType;

- (void).cxx_destruct;
- (int)StringAsEntityType:(id)arg1;
- (int)StringAsScope:(id)arg1;
- (void)addProperties:(id)arg1;
- (id)appId;
- (void)clearProperties;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)entityName;
- (int)entityType;
- (id)entityTypeAsString:(int)arg1;
- (bool)hasAppId;
- (bool)hasEntityName;
- (bool)hasEntityType;
- (bool)hasIntentMetadata;
- (bool)hasScope;
- (bool)hasScopeEntityName;
- (unsigned long long)hash;
- (id)intentMetadata;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)properties;
- (id)propertiesAtIndex:(unsigned long long)arg1;
- (unsigned long long)propertiesCount;
- (bool)readFrom:(id)arg1;
- (int)scope;
- (id)scopeAsString:(int)arg1;
- (id)scopeEntityName;
- (void)setAppId:(id)arg1;
- (void)setEntityName:(id)arg1;
- (void)setEntityType:(int)arg1;
- (void)setHasEntityType:(bool)arg1;
- (void)setHasScope:(bool)arg1;
- (void)setIntentMetadata:(id)arg1;
- (void)setProperties:(id)arg1;
- (void)setScope:(int)arg1;
- (void)setScopeEntityName:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
