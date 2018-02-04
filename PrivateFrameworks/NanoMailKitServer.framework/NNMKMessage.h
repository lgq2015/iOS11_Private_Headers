/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

@interface NNMKMessage : NSObject <NNMKMailboxItem, NSCopying, NSSecureCoding> {
    NSString * _accountId;
    NSArray * _bcc;
    NSArray * _cc;
    NSString * _conversationId;
    NSDate * _dateReceived;
    NSDate * _dateSent;
    NSString * _from;
    unsigned long long  _isSpecialMailboxSpecific;
    bool  _isThreadSpecific;
    NSString * _mailboxId;
    NSString * _messageId;
    NSString * _messageIdHeader;
    NSString * _notificationMessageId;
    NSString * _preview;
    unsigned long long  _source;
    unsigned long long  _status;
    unsigned long long  _statusVersion;
    NSString * _subject;
    NSArray * _to;
    unsigned long long  _visibleStatus;
}

@property (nonatomic, copy) NSString *accountId;
@property (nonatomic, copy) NSArray *bcc;
@property (nonatomic, copy) NSArray *cc;
@property (nonatomic, copy) NSString *conversationId;
@property (nonatomic, copy) NSDate *dateReceived;
@property (nonatomic, copy) NSDate *dateSent;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *from;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long isSpecialMailboxSpecific;
@property (nonatomic) bool isThreadSpecific;
@property (nonatomic, copy) NSString *mailboxId;
@property (nonatomic, copy) NSString *messageId;
@property (nonatomic, copy) NSString *messageIdHeader;
@property (nonatomic, copy) NSString *notificationMessageId;
@property (nonatomic, retain) NSString *preview;
@property (nonatomic) unsigned long long source;
@property (nonatomic) unsigned long long status;
@property (nonatomic) unsigned long long statusVersion;
@property (nonatomic, retain) NSString *subject;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSArray *to;
@property (nonatomic) unsigned long long visibleStatus;

+ (id)URLForMessageId:(id)arg1;
+ (id)URLForMessageId:(id)arg1 attachmentID:(id)arg2;
+ (unsigned long long)addState:(unsigned long long)arg1 toStatus:(unsigned long long)arg2;
+ (id)attachmentIdForURL:(id)arg1;
+ (bool)checkStatus:(unsigned long long)arg1 stateToCheck:(unsigned long long)arg2;
+ (bool)isMessageURL:(id)arg1;
+ (bool)messageHasMultipleRecipients:(id)arg1;
+ (id)messageIdForURL:(id)arg1;
+ (id)messageIdsFromMessages:(id)arg1;
+ (unsigned long long)removeState:(unsigned long long)arg1 fromStatus:(unsigned long long)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accountId;
- (void)addState:(unsigned long long)arg1;
- (id)bcc;
- (id)cc;
- (bool)checkState:(unsigned long long)arg1;
- (id)conversationId;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateReceived;
- (id)dateSent;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)from;
- (id)initWithCoder:(id)arg1;
- (bool)isFromSource:(unsigned long long)arg1;
- (unsigned long long)isSpecialMailboxSpecific;
- (bool)isThreadSpecific;
- (id)mailboxId;
- (id)messageId;
- (id)messageIdHeader;
- (id)notificationMessageId;
- (id)preview;
- (void)removeState:(unsigned long long)arg1;
- (void)setAccountId:(id)arg1;
- (void)setBcc:(id)arg1;
- (void)setCc:(id)arg1;
- (void)setConversationId:(id)arg1;
- (void)setDateReceived:(id)arg1;
- (void)setDateSent:(id)arg1;
- (void)setFrom:(id)arg1;
- (void)setIsSpecialMailboxSpecific:(unsigned long long)arg1;
- (void)setIsThreadSpecific:(bool)arg1;
- (void)setMailboxId:(id)arg1;
- (void)setMessageId:(id)arg1;
- (void)setMessageIdHeader:(id)arg1;
- (void)setNotificationMessageId:(id)arg1;
- (void)setPreview:(id)arg1;
- (void)setSource:(unsigned long long)arg1;
- (void)setStatus:(unsigned long long)arg1;
- (void)setStatusVersion:(unsigned long long)arg1;
- (void)setSubject:(id)arg1;
- (void)setTo:(id)arg1;
- (void)setVisibleStatus:(unsigned long long)arg1;
- (unsigned long long)source;
- (unsigned long long)status;
- (unsigned long long)statusVersion;
- (id)subject;
- (id)to;
- (unsigned long long)visibleStatus;

@end
