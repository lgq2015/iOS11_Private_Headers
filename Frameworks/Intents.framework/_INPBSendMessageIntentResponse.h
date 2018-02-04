/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBSendMessageIntentResponse : PBCodable <NSCopying> {
    _INPBMessage * _sentMessage;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) bool hasSentMessage;
@property (nonatomic, retain) _INPBMessage *sentMessage;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (id)options;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasSentMessage;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)sentMessage;
- (void)setSentMessage:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
