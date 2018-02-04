/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFMessageDetails : NSObject <MFBaseMessage> {
    long long  conversationHash;
    unsigned int  dateReceived;
    unsigned int  dateSent;
    NSString * externalID;
    MFMessageLibrary * library;
    unsigned int  libraryID;
    unsigned int  mailboxID;
    unsigned long long  messageFlags;
    long long  messageIDHash;
    unsigned int  uid;
}

@property (nonatomic, readonly) long long conversationHash;
@property (nonatomic, readonly) unsigned int dateReceivedInterval;
@property (nonatomic, readonly) unsigned int dateSentInterval;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) bool deleted;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *externalID;
@property (nonatomic, readonly) bool flagged;
@property (readonly) unsigned long long hash;
@property (getter=isKnownToHaveAttachments, nonatomic, readonly) bool knownToHaveAttachments;
@property (nonatomic, readonly) unsigned int libraryID;
@property (getter=isLibraryMessage, nonatomic, readonly) bool libraryMessage;
@property (nonatomic, readonly) MFMailboxUid *mailbox;
@property (nonatomic, readonly) unsigned int mailboxID;
@property (nonatomic, readonly) unsigned long long messageFlags;
@property (nonatomic, readonly) long long messageIDHash;
@property (nonatomic, readonly) bool read;
@property (nonatomic, readonly) bool senderVIP;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned int uid;

- (long long)conversationHash;
- (id)copyMessageInfo;
- (unsigned int)dateReceivedInterval;
- (unsigned int)dateSentInterval;
- (void)dealloc;
- (bool)deleted;
- (id)description;
- (id)externalID;
- (bool)flagged;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isKnownToHaveAttachments;
- (bool)isLibraryMessage;
- (unsigned int)libraryID;
- (id)mailbox;
- (unsigned int)mailboxID;
- (unsigned long long)messageFlags;
- (id)messageID;
- (long long)messageIDHash;
- (bool)read;
- (id)remoteID;
- (bool)senderVIP;
- (unsigned int)uid;

@end
