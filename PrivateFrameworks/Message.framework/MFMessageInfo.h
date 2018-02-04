/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFMessageInfo : NSObject <MFBaseMessage, NSCopying> {
    long long  _conversationHash;
    unsigned int  _dateReceivedInterval;
    unsigned int  _dateSentInterval;
    unsigned int  _deleted;
    unsigned int  _flagged;
    long long  _generationNumber;
    unsigned int  _hasAttachments;
    unsigned int  _isHighPriority;
    unsigned int  _isVIP;
    unsigned int  _mailboxID;
    long long  _messageIDHash;
    unsigned int  _read;
    unsigned int  _sortDateReceivedInterval;
    unsigned int  _sortUid;
    unsigned int  _uid;
    unsigned int  _uidIsLibraryID;
}

@property (nonatomic, readonly) long long conversationHash;
@property (nonatomic) long long conversationHash;
@property (nonatomic, readonly) unsigned int dateReceivedInterval;
@property (nonatomic) unsigned int dateReceivedInterval;
@property (nonatomic, readonly) unsigned int dateSentInterval;
@property (nonatomic) unsigned int dateSentInterval;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) bool deleted;
@property (nonatomic) bool deleted;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool flagged;
@property (nonatomic) bool flagged;
@property (nonatomic, readonly) long long generationNumber;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isVIP;
@property (getter=isKnownToHaveAttachments, nonatomic, readonly) bool knownToHaveAttachments;
@property (getter=isKnownToHaveAttachments, nonatomic) bool knownToHaveAttachments;
@property (nonatomic, readonly) unsigned int libraryID;
@property (getter=isLibraryMessage, nonatomic, readonly) bool libraryMessage;
@property (nonatomic, readonly) unsigned int mailboxID;
@property (nonatomic) unsigned int mailboxID;
@property (nonatomic, readonly) long long messageIDHash;
@property (nonatomic) long long messageIDHash;
@property (nonatomic, readonly) bool read;
@property (nonatomic) bool read;
@property (nonatomic, readonly) bool senderVIP;
@property (nonatomic) unsigned int sortDateReceivedInterval;
@property (nonatomic) unsigned int sortUid;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned int uid;
@property (nonatomic) unsigned int uid;
@property (nonatomic) bool uidIsLibraryID;

+ (long long)newGenerationNumber;

- (id)_flagDescription;
- (long long)conversationHash;
- (id)copyMessageInfo;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)dateReceivedInterval;
- (unsigned int)dateSentInterval;
- (bool)deleted;
- (id)description;
- (bool)flagged;
- (long long)generationCompare:(id)arg1;
- (long long)generationNumber;
- (unsigned long long)hash;
- (id)init;
- (id)initWithUid:(unsigned int)arg1 mailboxID:(unsigned int)arg2 messageID:(long long)arg3 dateReceivedInterval:(unsigned int)arg4 dateSentInterval:(unsigned int)arg5 conversationHash:(long long)arg6 read:(bool)arg7 knownToHaveAttachments:(bool)arg8 flagged:(bool)arg9 isVIP:(bool)arg10;
- (bool)isEqual:(id)arg1;
- (bool)isKnownToHaveAttachments;
- (bool)isLibraryMessage;
- (bool)isVIP;
- (unsigned int)libraryID;
- (unsigned int)mailboxID;
- (long long)messageIDHash;
- (bool)read;
- (bool)senderVIP;
- (void)setConversationHash:(long long)arg1;
- (void)setDateReceivedInterval:(unsigned int)arg1;
- (void)setDateSentInterval:(unsigned int)arg1;
- (void)setDeleted:(bool)arg1;
- (void)setFlagged:(bool)arg1;
- (void)setIsVIP:(bool)arg1;
- (void)setKnownToHaveAttachments:(bool)arg1;
- (void)setMailboxID:(unsigned int)arg1;
- (void)setMessageIDHash:(long long)arg1;
- (void)setRead:(bool)arg1;
- (void)setSortDateReceivedInterval:(unsigned int)arg1;
- (void)setSortUid:(unsigned int)arg1;
- (void)setUid:(unsigned int)arg1;
- (void)setUidIsLibraryID:(bool)arg1;
- (unsigned int)sortDateReceivedInterval;
- (unsigned int)sortUid;
- (unsigned int)uid;
- (bool)uidIsLibraryID;

@end
