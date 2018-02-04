/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFFakeMailAccount : MailAccount {
    NSURL * _URL;
    MFIMAPConnection * _cachedConnection;
    DeliveryAccount * _deliveryAccount;
    NSRecursiveLock * _flagChangesLock;
}

@property (nonatomic, retain) DeliveryAccount *deliveryAccount;

- (void).cxx_destruct;
- (id)URLString;
- (id)_URLScheme;
- (id)_mailboxPathPrefix;
- (id)_nameForMailboxUid:(id)arg1;
- (bool)_shouldConfigureMailboxCache;
- (int)cachePolicy;
- (id)connectionForStore:(id)arg1 delegate:(id)arg2 options:(int)arg3;
- (id)debugDescription;
- (id)deliveryAccount;
- (id)description;
- (void)didFinishActionForChokePoint:(id)arg1 coalescePoint:(id)arg2 withResult:(id)arg3;
- (id)displayName;
- (id)flagChangesForMailboxPath:(id)arg1 UID:(unsigned int)arg2 connectTime:(double)arg3;
- (id)flagChangesLock;
- (id)hostname;
- (id)init;
- (id)initWithURL:(id)arg1;
- (id)initWithURL:(id)arg1 rootMailboxUid:(id)arg2;
- (bool)isActive;
- (unsigned int)minID;
- (id)powerAssertionIdentifierWithPrefix:(id)arg1;
- (void)setCachedConnection:(id)arg1;
- (void)setDeliveryAccount:(id)arg1;
- (void)setUnreadCount:(unsigned int)arg1 forMailbox:(id)arg2;
- (bool)shouldFetchAgainWithError:(id)arg1 foregroundRequest:(bool)arg2;
- (bool)supportsFastRemoteBodySearch;
- (bool)supportsRemoteAppend;
- (id)uniqueId;
- (id)username;
- (bool)willPerformActionForChokePoint:(id)arg1 coalescePoint:(id)arg2 result:(id*)arg3;

@end
