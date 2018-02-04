/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFLibraryMessage : MFMailMessage {
    unsigned long long  _conversationFlags;
    unsigned int  _libraryID;
    unsigned int  _mailboxID;
    NSString * _messageID;
    NSMutableDictionary * _metadata;
    NSMutableSet * _metadataChangedKeys;
    MFLock * _metadataLock;
    unsigned int  _originalMailboxID;
    NSString * _remoteID;
    unsigned long long  _size;
    unsigned int  _uid;
    unsigned long long  _uniqueRemoteId;
}

+ (id)messageWithLibraryID:(unsigned int)arg1;

- (id)_attachmentStorageLocation;
- (void)_forceLoadOfMessageSummaryFromProtectedStore;
- (void)_initializeMetadata;
- (id)_privacySafeDescription;
- (void)_updateUID;
- (id)account;
- (id)attachmentStorageLocation;
- (void)commit;
- (long long)compareByUidWithMessage:(id)arg1;
- (unsigned long long)conversationFlags;
- (id)copyMessageInfo;
- (id)dataConsumerForMimePart:(id)arg1;
- (id)dataPathForMimePart:(id)arg1;
- (void)dealloc;
- (bool)hasTemporaryUid;
- (unsigned long long)hash;
- (id)initWithLibraryID:(unsigned int)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isLibraryMessage;
- (bool)isMessageContentsLocallyAvailable;
- (bool)isPartial;
- (id)library;
- (unsigned int)libraryID;
- (void)loadCachedHeaderValuesFromHeaders:(id)arg1;
- (id)mailbox;
- (unsigned int)mailboxID;
- (id)mailboxName;
- (void)markAsFlagged;
- (void)markAsForwarded;
- (void)markAsNotFlagged;
- (void)markAsNotViewed;
- (void)markAsReplied;
- (void)markAsViewed;
- (id)messageID;
- (unsigned long long)messageSize;
- (id)messageStore;
- (id)metadataValueForKey:(id)arg1;
- (unsigned int)originalMailboxID;
- (id)originalMailboxURL;
- (id)path;
- (id)persistentID;
- (id)preferredEmailAddressToReplyWith;
- (id)remoteID;
- (void)setConversationFlags:(unsigned long long)arg1;
- (void)setFlags:(unsigned long long)arg1;
- (void)setHasTemporaryUid:(bool)arg1;
- (void)setIsPartial:(bool)arg1;
- (void)setMailboxID:(unsigned int)arg1;
- (void)setMessageData:(id)arg1 isPartial:(bool)arg2;
- (void)setMessageFlags:(unsigned long long)arg1;
- (void)setMessageFlagsWithoutCommitting:(unsigned long long)arg1;
- (void)setMessageSize:(unsigned long long)arg1;
- (void)setMetadataValue:(id)arg1 forKey:(id)arg2;
- (void)setMutableInfoFromMessage:(id)arg1;
- (void)setOriginalMailboxID:(unsigned int)arg1;
- (void)setPreferredEncoding:(unsigned int)arg1;
- (void)setRemoteID:(id)arg1;
- (void)setRemoteID:(const char *)arg1 flags:(unsigned long long)arg2 size:(unsigned int)arg3 mailboxID:(unsigned int)arg4 originalMailboxID:(unsigned int)arg5;
- (void)setSummary:(id)arg1;
- (void)setUid:(unsigned int)arg1;
- (void)setUniqueRemoteId:(unsigned long long)arg1;
- (unsigned int)uid;
- (unsigned long long)uniqueRemoteId;

@end
