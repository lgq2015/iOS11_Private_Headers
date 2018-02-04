/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

@interface NNMKProtoBatchedFetchResult : PBCodable <NSCopying> {
    NSData * _dateForRequestingMoreMessages;
    NSData * _dateSynced;
    unsigned int  _fullSyncVersion;
    struct { 
        unsigned int fullSyncVersion : 1; 
        unsigned int mailboxSyncVersion : 1; 
        unsigned int shouldTrimDatabase : 1; 
    }  _has;
    NSString * _mailboxId;
    unsigned int  _mailboxSyncVersion;
    NSMutableArray * _messageAdditions;
    NSMutableArray * _messageDeletions;
    NSMutableArray * _messageUpdates;
    bool  _shouldTrimDatabase;
}

@property (nonatomic, retain) NSData *dateForRequestingMoreMessages;
@property (nonatomic, retain) NSData *dateSynced;
@property (nonatomic) unsigned int fullSyncVersion;
@property (nonatomic, readonly) bool hasDateForRequestingMoreMessages;
@property (nonatomic, readonly) bool hasDateSynced;
@property (nonatomic) bool hasFullSyncVersion;
@property (nonatomic, readonly) bool hasMailboxId;
@property (nonatomic) bool hasMailboxSyncVersion;
@property (nonatomic) bool hasShouldTrimDatabase;
@property (nonatomic, retain) NSString *mailboxId;
@property (nonatomic) unsigned int mailboxSyncVersion;
@property (nonatomic, retain) NSMutableArray *messageAdditions;
@property (nonatomic, retain) NSMutableArray *messageDeletions;
@property (nonatomic, retain) NSMutableArray *messageUpdates;
@property (nonatomic) bool shouldTrimDatabase;

+ (Class)messageAdditionType;
+ (Class)messageDeletionType;
+ (Class)messageUpdateType;

- (void).cxx_destruct;
- (void)addMessageAddition:(id)arg1;
- (void)addMessageDeletion:(id)arg1;
- (void)addMessageUpdate:(id)arg1;
- (void)clearMessageAdditions;
- (void)clearMessageDeletions;
- (void)clearMessageUpdates;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateForRequestingMoreMessages;
- (id)dateSynced;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)fullSyncVersion;
- (bool)hasDateForRequestingMoreMessages;
- (bool)hasDateSynced;
- (bool)hasFullSyncVersion;
- (bool)hasMailboxId;
- (bool)hasMailboxSyncVersion;
- (bool)hasShouldTrimDatabase;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)mailboxId;
- (unsigned int)mailboxSyncVersion;
- (void)mergeFrom:(id)arg1;
- (id)messageAdditionAtIndex:(unsigned long long)arg1;
- (id)messageAdditions;
- (unsigned long long)messageAdditionsCount;
- (id)messageDeletionAtIndex:(unsigned long long)arg1;
- (id)messageDeletions;
- (unsigned long long)messageDeletionsCount;
- (id)messageUpdateAtIndex:(unsigned long long)arg1;
- (id)messageUpdates;
- (unsigned long long)messageUpdatesCount;
- (bool)readFrom:(id)arg1;
- (void)setDateForRequestingMoreMessages:(id)arg1;
- (void)setDateSynced:(id)arg1;
- (void)setFullSyncVersion:(unsigned int)arg1;
- (void)setHasFullSyncVersion:(bool)arg1;
- (void)setHasMailboxSyncVersion:(bool)arg1;
- (void)setHasShouldTrimDatabase:(bool)arg1;
- (void)setMailboxId:(id)arg1;
- (void)setMailboxSyncVersion:(unsigned int)arg1;
- (void)setMessageAdditions:(id)arg1;
- (void)setMessageDeletions:(id)arg1;
- (void)setMessageUpdates:(id)arg1;
- (void)setShouldTrimDatabase:(bool)arg1;
- (bool)shouldTrimDatabase;
- (void)writeTo:(id)arg1;

@end
