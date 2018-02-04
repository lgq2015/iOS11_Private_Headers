/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBStartVideoCallIntent : PBCodable <NSCopying> {
    int  _audioRoute;
    NSMutableArray * _contacts;
    struct { 
        unsigned int audioRoute : 1; 
    }  _has;
    _INPBIntentMetadata * _intentMetadata;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) int audioRoute;
@property (nonatomic, retain) NSMutableArray *contacts;
@property (nonatomic) bool hasAudioRoute;
@property (nonatomic, readonly) bool hasIntentMetadata;
@property (nonatomic, retain) _INPBIntentMetadata *intentMetadata;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)contactType;
+ (id)options;

- (void).cxx_destruct;
- (int)StringAsAudioRoute:(id)arg1;
- (void)addContact:(id)arg1;
- (int)audioRoute;
- (id)audioRouteAsString:(int)arg1;
- (void)clearContacts;
- (id)contactAtIndex:(unsigned long long)arg1;
- (id)contacts;
- (unsigned long long)contactsCount;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAudioRoute;
- (bool)hasIntentMetadata;
- (unsigned long long)hash;
- (id)intentMetadata;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAudioRoute:(int)arg1;
- (void)setContacts:(id)arg1;
- (void)setHasAudioRoute:(bool)arg1;
- (void)setIntentMetadata:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
