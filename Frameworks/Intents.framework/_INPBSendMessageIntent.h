/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBSendMessageIntent : PBCodable <NSCopying> {
    _INPBString * _content;
    NSString * _conversationIdentifier;
    _INPBIntentMetadata * _intentMetadata;
    NSMutableArray * _recipients;
    _INPBContact * _sender;
    NSString * _serviceName;
    _INPBDataString * _speakableGroupName;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) _INPBString *content;
@property (nonatomic, retain) NSString *conversationIdentifier;
@property (nonatomic, readonly) bool hasContent;
@property (nonatomic, readonly) bool hasConversationIdentifier;
@property (nonatomic, readonly) bool hasIntentMetadata;
@property (nonatomic, readonly) bool hasSender;
@property (nonatomic, readonly) bool hasServiceName;
@property (nonatomic, readonly) bool hasSpeakableGroupName;
@property (nonatomic, retain) _INPBIntentMetadata *intentMetadata;
@property (nonatomic, retain) NSMutableArray *recipients;
@property (nonatomic, retain) _INPBContact *sender;
@property (nonatomic, retain) NSString *serviceName;
@property (nonatomic, retain) _INPBDataString *speakableGroupName;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (id)options;
+ (Class)recipientType;

- (void).cxx_destruct;
- (void)addRecipient:(id)arg1;
- (void)clearRecipients;
- (id)content;
- (id)conversationIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasContent;
- (bool)hasConversationIdentifier;
- (bool)hasIntentMetadata;
- (bool)hasSender;
- (bool)hasServiceName;
- (bool)hasSpeakableGroupName;
- (unsigned long long)hash;
- (id)intentMetadata;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)recipientAtIndex:(unsigned long long)arg1;
- (id)recipients;
- (unsigned long long)recipientsCount;
- (id)sender;
- (id)serviceName;
- (void)setContent:(id)arg1;
- (void)setConversationIdentifier:(id)arg1;
- (void)setIntentMetadata:(id)arg1;
- (void)setRecipients:(id)arg1;
- (void)setSender:(id)arg1;
- (void)setServiceName:(id)arg1;
- (void)setSpeakableGroupName:(id)arg1;
- (id)speakableGroupName;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
