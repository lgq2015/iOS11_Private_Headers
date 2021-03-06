/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBMessage : PBCodable <NSCopying> {
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _attributes;
    NSString * _content;
    NSString * _conversationIdentifier;
    _INPBDateTime * _dateLastMessageRead;
    _INPBDateTime * _dateSent;
    int  _effect;
    struct { 
        unsigned int effect : 1; 
        unsigned int type : 1; 
    }  _has;
    NSString * _identifier;
    _INPBInteger * _numberOfAttachments;
    NSMutableArray * _recipients;
    _INPBMessage * _referencedMessage;
    _INPBContact * _sender;
    _INPBDataString * _speakableGroupName;
    int  _type;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) int*attributes;
@property (nonatomic, readonly) unsigned long long attributesCount;
@property (nonatomic, retain) NSString *content;
@property (nonatomic, retain) NSString *conversationIdentifier;
@property (nonatomic, retain) _INPBDateTime *dateLastMessageRead;
@property (nonatomic, retain) _INPBDateTime *dateSent;
@property (nonatomic) int effect;
@property (nonatomic, readonly) bool hasContent;
@property (nonatomic, readonly) bool hasConversationIdentifier;
@property (nonatomic, readonly) bool hasDateLastMessageRead;
@property (nonatomic, readonly) bool hasDateSent;
@property (nonatomic) bool hasEffect;
@property (nonatomic, readonly) bool hasIdentifier;
@property (nonatomic, readonly) bool hasNumberOfAttachments;
@property (nonatomic, readonly) bool hasReferencedMessage;
@property (nonatomic, readonly) bool hasSender;
@property (nonatomic, readonly) bool hasSpeakableGroupName;
@property (nonatomic) bool hasType;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) _INPBInteger *numberOfAttachments;
@property (nonatomic, retain) NSMutableArray *recipients;
@property (nonatomic, retain) _INPBMessage *referencedMessage;
@property (nonatomic, retain) _INPBContact *sender;
@property (nonatomic, retain) _INPBDataString *speakableGroupName;
@property (nonatomic) int type;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (id)options;
+ (Class)recipientType;

- (void).cxx_destruct;
- (int)StringAsAttributes:(id)arg1;
- (int)StringAsEffect:(id)arg1;
- (int)StringAsType:(id)arg1;
- (void)addAttribute:(int)arg1;
- (void)addRecipient:(id)arg1;
- (int)attributeAtIndex:(unsigned long long)arg1;
- (int*)attributes;
- (id)attributesAsString:(int)arg1;
- (unsigned long long)attributesCount;
- (void)clearAttributes;
- (void)clearRecipients;
- (id)content;
- (id)conversationIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateLastMessageRead;
- (id)dateSent;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (int)effect;
- (id)effectAsString:(int)arg1;
- (bool)hasContent;
- (bool)hasConversationIdentifier;
- (bool)hasDateLastMessageRead;
- (bool)hasDateSent;
- (bool)hasEffect;
- (bool)hasIdentifier;
- (bool)hasNumberOfAttachments;
- (bool)hasReferencedMessage;
- (bool)hasSender;
- (bool)hasSpeakableGroupName;
- (bool)hasType;
- (unsigned long long)hash;
- (id)identifier;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)numberOfAttachments;
- (bool)readFrom:(id)arg1;
- (id)recipientAtIndex:(unsigned long long)arg1;
- (id)recipients;
- (unsigned long long)recipientsCount;
- (id)referencedMessage;
- (id)sender;
- (void)setAttributes:(int*)arg1 count:(unsigned long long)arg2;
- (void)setContent:(id)arg1;
- (void)setConversationIdentifier:(id)arg1;
- (void)setDateLastMessageRead:(id)arg1;
- (void)setDateSent:(id)arg1;
- (void)setEffect:(int)arg1;
- (void)setHasEffect:(bool)arg1;
- (void)setHasType:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setNumberOfAttachments:(id)arg1;
- (void)setRecipients:(id)arg1;
- (void)setReferencedMessage:(id)arg1;
- (void)setSender:(id)arg1;
- (void)setSpeakableGroupName:(id)arg1;
- (void)setType:(int)arg1;
- (id)speakableGroupName;
- (int)type;
- (id)typeAsString:(int)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
