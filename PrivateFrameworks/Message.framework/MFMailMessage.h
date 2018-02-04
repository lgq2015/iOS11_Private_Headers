/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFMailMessage : MFMessage <ECMessage, MFBaseMessage, MFMailboxPredictionMessage, MFPubliclyDescribable, UIItemProviderWriting> {
    NSURL * _globalMessageURL;
    MFMessageInfo * _info;
    unsigned long long  _messageFlags;
    unsigned long long  _modSequenceNumber;
    bool  _shouldUseMailDrop;
    unsigned char  _subjectPrefixLength;
}

@property (nonatomic, readonly) bool answered;
@property (nonatomic, readonly, copy) NSArray *cc;
@property (nonatomic, readonly) long long conversationHash;
@property (nonatomic, readonly) long long conversationID;
@property (nonatomic, readonly) bool conversationMuted;
@property (nonatomic, readonly) bool conversationVIP;
@property (nonatomic, readonly) NSDate *dateReceived;
@property (nonatomic, readonly) unsigned int dateReceivedInterval;
@property (nonatomic, readonly) unsigned int dateSentInterval;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) bool deleted;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool flagged;
@property (nonatomic, readonly, copy) NSArray *from;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool junk;
@property (getter=isKnownToHaveAttachments, nonatomic, readonly) bool knownToHaveAttachments;
@property (nonatomic, readonly) unsigned int libraryID;
@property (getter=isLibraryMessage, nonatomic, readonly) bool libraryMessage;
@property (nonatomic, readonly, copy) NSArray *listUnsubscribe;
@property (nonatomic, readonly) <ECMailbox> *mailbox;
@property (nonatomic, readonly) MFMailboxUid *mailbox;
@property (nonatomic, readonly) unsigned int mailboxID;
@property (nonatomic, readonly) <ECMimePart> *messageBody;
@property (nonatomic) unsigned long long messageFlags;
@property (nonatomic, readonly) long long messageIDHash;
@property (nonatomic, readonly, copy) NSString *mf_publicDescription;
@property unsigned long long modSequenceNumber;
@property (nonatomic, readonly, copy) NSString *persistentID;
@property (nonatomic, readonly) bool read;
@property (nonatomic, readonly, copy) NSString *remoteID;
@property (nonatomic, readonly) bool senderVIP;
@property (nonatomic) bool shouldUseMailDrop;
@property (nonatomic, readonly, copy) NSString *subject;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSArray *to;
@property (nonatomic, readonly) unsigned int uid;
@property (nonatomic, readonly, copy) NSArray *writableTypeIdentifiersForItemProvider;

// Image: /System/Library/PrivateFrameworks/Message.framework/Message

+ (Class)dataMessageStoreToUse;
+ (unsigned int)displayablePriorityForPriority:(int)arg1;
+ (id)externalDataTypeIdentifiers;
+ (id)forwardedMessagePrefixWithSpacer:(bool)arg1;
+ (unsigned int)validatePriority:(int)arg1;

- (id)URL;
- (id)_privacySafeDescription;
- (id)account;
- (bool)answered;
- (id)bestAlternativePart;
- (id)bestAlternativePart:(bool*)arg1;
- (id)ccAddressList;
- (unsigned long long)conversationFlags;
- (long long)conversationHash;
- (bool)conversationMuted;
- (bool)conversationVIP;
- (id)copyMessageInfo;
- (void)dealloc;
- (bool)deleted;
- (id)description;
- (id)externalConversationID;
- (id)firstSenderAddress;
- (bool)flagged;
- (id)from;
- (id)globalMessageURL;
- (bool)isKnownToHaveAttachments;
- (bool)isSearchResultWithBogusRemoteId;
- (bool)junk;
- (unsigned int)libraryID;
- (id)listUnsubscribe;
- (void)loadCachedHeaderValuesFromHeaders:(id)arg1;
- (id)loadMeetingData;
- (id)loadMeetingExternalID;
- (id)loadMeetingMetadata;
- (id)mailMessageStore;
- (id)mailbox;
- (void)markAsFlagged;
- (void)markAsForwarded;
- (void)markAsNotFlagged;
- (void)markAsNotViewed;
- (void)markAsReplied;
- (void)markAsViewed;
- (unsigned long long)messageFlags;
- (bool)messageNeedsReindexForFlagsUpdateFromOldFlags:(unsigned long long)arg1 toNewFlags:(unsigned long long)arg2;
- (id)messageStore;
- (id)mf_publicDescription;
- (unsigned long long)modSequenceNumber;
- (unsigned short)numberOfAttachments;
- (id)originalMailboxURL;
- (int)priority;
- (bool)read;
- (id)remoteMailboxURL;
- (bool)senderVIP;
- (void)setConversationFlags:(unsigned long long)arg1;
- (void)setMessageFlags:(unsigned long long)arg1;
- (void)setMessageFlagsWithoutCommitting:(unsigned long long)arg1;
- (void)setModSequenceNumber:(unsigned long long)arg1;
- (void)setMutableInfoFromMessage:(id)arg1;
- (void)setPriorityFromHeaders:(id)arg1;
- (void)setShouldUseMailDrop:(bool)arg1;
- (void)setSubject:(id)arg1;
- (void)setSubject:(id)arg1 to:(id)arg2 cc:(id)arg3 bcc:(id)arg4 sender:(id)arg5 dateReceived:(double)arg6 dateSent:(double)arg7 messageIDHash:(long long)arg8 conversationIDHash:(long long)arg9 summary:(id)arg10 withOptions:(unsigned int)arg11;
- (void)setSummary:(id)arg1;
- (bool)shouldSetSummary;
- (bool)shouldUseMailDrop;
- (id)subject;
- (id)subjectAndPrefixLength:(unsigned int*)arg1;
- (id)subjectNotIncludingReAndFwdPrefix;
- (id)toAddressList;

// Image: /System/Library/Frameworks/MessageUI.framework/MessageUI

+ (bool)dragItemsAreAllMessages:(id)arg1;
+ (id)writableTypeIdentifiersForItemProvider;

- (id)_attributedSubject;
- (void)_loadMessageDataWithCompletion:(id /* block */)arg1;
- (id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(id /* block */)arg2;

// Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals

+ (void)_loadMailCoreFramework;
+ (id)sg_messageWithRFC822Data:(id)arg1;

- (id)sg_bestAlternativePart;

@end
