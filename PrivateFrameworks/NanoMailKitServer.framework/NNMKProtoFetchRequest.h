/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

@interface NNMKProtoFetchRequest : PBRequest <NSCopying> {
    NSString * _conversationId;
    NSData * _currentDateForRequestingMoreMessages;
    NSData * _currentMessageIdsAndStatus;
    unsigned int  _fullSyncVersion;
    struct { 
        unsigned int fullSyncVersion : 1; 
        unsigned int wantsBatchedResponse : 1; 
        unsigned int willTrimDatabaseAfterResults : 1; 
    }  _has;
    NSString * _mailboxId;
    bool  _wantsBatchedResponse;
    bool  _willTrimDatabaseAfterResults;
}

@property (nonatomic, retain) NSString *conversationId;
@property (nonatomic, retain) NSData *currentDateForRequestingMoreMessages;
@property (nonatomic, retain) NSData *currentMessageIdsAndStatus;
@property (nonatomic) unsigned int fullSyncVersion;
@property (nonatomic, readonly) bool hasConversationId;
@property (nonatomic, readonly) bool hasCurrentDateForRequestingMoreMessages;
@property (nonatomic, readonly) bool hasCurrentMessageIdsAndStatus;
@property (nonatomic) bool hasFullSyncVersion;
@property (nonatomic, readonly) bool hasMailboxId;
@property (nonatomic) bool hasWantsBatchedResponse;
@property (nonatomic) bool hasWillTrimDatabaseAfterResults;
@property (nonatomic, retain) NSString *mailboxId;
@property (nonatomic) bool wantsBatchedResponse;
@property (nonatomic) bool willTrimDatabaseAfterResults;

- (void).cxx_destruct;
- (id)conversationId;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currentDateForRequestingMoreMessages;
- (id)currentMessageIdsAndStatus;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)fullSyncVersion;
- (bool)hasConversationId;
- (bool)hasCurrentDateForRequestingMoreMessages;
- (bool)hasCurrentMessageIdsAndStatus;
- (bool)hasFullSyncVersion;
- (bool)hasMailboxId;
- (bool)hasWantsBatchedResponse;
- (bool)hasWillTrimDatabaseAfterResults;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)mailboxId;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setConversationId:(id)arg1;
- (void)setCurrentDateForRequestingMoreMessages:(id)arg1;
- (void)setCurrentMessageIdsAndStatus:(id)arg1;
- (void)setFullSyncVersion:(unsigned int)arg1;
- (void)setHasFullSyncVersion:(bool)arg1;
- (void)setHasWantsBatchedResponse:(bool)arg1;
- (void)setHasWillTrimDatabaseAfterResults:(bool)arg1;
- (void)setMailboxId:(id)arg1;
- (void)setWantsBatchedResponse:(bool)arg1;
- (void)setWillTrimDatabaseAfterResults:(bool)arg1;
- (bool)wantsBatchedResponse;
- (bool)willTrimDatabaseAfterResults;
- (void)writeTo:(id)arg1;

@end
