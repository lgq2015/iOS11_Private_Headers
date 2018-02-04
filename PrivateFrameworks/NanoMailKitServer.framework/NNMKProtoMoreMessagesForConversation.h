/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

@interface NNMKProtoMoreMessagesForConversation : PBCodable <NSCopying> {
    NSMutableArray * _addedMessages;
    NSString * _conversationId;
    NSData * _dateSynced;
    unsigned int  _fullSyncVersion;
    struct { 
        unsigned int fullSyncVersion : 1; 
        unsigned int mailboxSyncVersion : 1; 
    }  _has;
    NSString * _mailboxId;
    unsigned int  _mailboxSyncVersion;
}

@property (nonatomic, retain) NSMutableArray *addedMessages;
@property (nonatomic, retain) NSString *conversationId;
@property (nonatomic, retain) NSData *dateSynced;
@property (nonatomic) unsigned int fullSyncVersion;
@property (nonatomic, readonly) bool hasConversationId;
@property (nonatomic, readonly) bool hasDateSynced;
@property (nonatomic) bool hasFullSyncVersion;
@property (nonatomic, readonly) bool hasMailboxId;
@property (nonatomic) bool hasMailboxSyncVersion;
@property (nonatomic, retain) NSString *mailboxId;
@property (nonatomic) unsigned int mailboxSyncVersion;

+ (Class)addedMessageType;

- (void).cxx_destruct;
- (void)addAddedMessage:(id)arg1;
- (id)addedMessageAtIndex:(unsigned long long)arg1;
- (id)addedMessages;
- (unsigned long long)addedMessagesCount;
- (void)clearAddedMessages;
- (id)conversationId;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateSynced;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)fullSyncVersion;
- (bool)hasConversationId;
- (bool)hasDateSynced;
- (bool)hasFullSyncVersion;
- (bool)hasMailboxId;
- (bool)hasMailboxSyncVersion;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)mailboxId;
- (unsigned int)mailboxSyncVersion;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAddedMessages:(id)arg1;
- (void)setConversationId:(id)arg1;
- (void)setDateSynced:(id)arg1;
- (void)setFullSyncVersion:(unsigned int)arg1;
- (void)setHasFullSyncVersion:(bool)arg1;
- (void)setHasMailboxSyncVersion:(bool)arg1;
- (void)setMailboxId:(id)arg1;
- (void)setMailboxSyncVersion:(unsigned int)arg1;
- (void)writeTo:(id)arg1;

@end
