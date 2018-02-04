/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBGenericIntentResponse : PBCodable <NSCopying> {
    _INPBIntentMetadata * _metadata;
    NSMutableArray * _properties;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) bool hasMetadata;
@property (nonatomic, retain) _INPBIntentMetadata *metadata;
@property (nonatomic, retain) NSMutableArray *properties;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (id)options;
+ (Class)propertiesType;

- (void).cxx_destruct;
- (void)addProperties:(id)arg1;
- (void)clearProperties;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasMetadata;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)metadata;
- (id)properties;
- (id)propertiesAtIndex:(unsigned long long)arg1;
- (unsigned long long)propertiesCount;
- (bool)readFrom:(id)arg1;
- (void)setMetadata:(id)arg1;
- (void)setProperties:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
