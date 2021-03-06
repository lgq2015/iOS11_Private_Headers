/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBShareFileIntent : PBCodable <NSCopying> {
    NSMutableArray * _entityNames;
    struct { 
        unsigned int shareMode : 1; 
    }  _has;
    _INPBIntentMetadata * _intentMetadata;
    NSMutableArray * _recipients;
    int  _shareMode;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSMutableArray *entityNames;
@property (nonatomic, readonly) bool hasIntentMetadata;
@property (nonatomic) bool hasShareMode;
@property (nonatomic, retain) _INPBIntentMetadata *intentMetadata;
@property (nonatomic, retain) NSMutableArray *recipients;
@property (nonatomic) int shareMode;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)entityNameType;
+ (id)options;
+ (Class)recipientsType;

- (void).cxx_destruct;
- (int)StringAsShareMode:(id)arg1;
- (void)addEntityName:(id)arg1;
- (void)addRecipients:(id)arg1;
- (void)clearEntityNames;
- (void)clearRecipients;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)entityNameAtIndex:(unsigned long long)arg1;
- (id)entityNames;
- (unsigned long long)entityNamesCount;
- (bool)hasIntentMetadata;
- (bool)hasShareMode;
- (unsigned long long)hash;
- (id)intentMetadata;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)recipients;
- (id)recipientsAtIndex:(unsigned long long)arg1;
- (unsigned long long)recipientsCount;
- (void)setEntityNames:(id)arg1;
- (void)setHasShareMode:(bool)arg1;
- (void)setIntentMetadata:(id)arg1;
- (void)setRecipients:(id)arg1;
- (void)setShareMode:(int)arg1;
- (int)shareMode;
- (id)shareModeAsString:(int)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
