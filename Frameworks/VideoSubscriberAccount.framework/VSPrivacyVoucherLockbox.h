/* made by EzioChiu
   Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

@interface VSPrivacyVoucherLockbox : NSObject <VSRemoteNotifierDelegate> {
    VSRemoteNotifier * _remoteNotifier;
    NSUndoManager * _undoManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) VSRemoteNotifier *remoteNotifier;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSUndoManager *undoManager;
@property (nonatomic, readonly, copy) NSArray *unredeemedVouchers;

- (void).cxx_destruct;
- (id)_voucherArchiveURL;
- (id)init;
- (void)issueVouchers:(id)arg1;
- (void)issueVouchersForAppsWithAdamIDs:(id)arg1 providerID:(id)arg2;
- (void)redeemVoucher:(id)arg1;
- (id)remoteNotifier;
- (void)remoteNotifier:(id)arg1 didReceiveRemoteNotificationWithUserInfo:(id)arg2;
- (void)removeAllVouchers;
- (void)setRemoteNotifier:(id)arg1;
- (void)setUndoManager:(id)arg1;
- (void)setUnredeemedVouchers:(id)arg1;
- (id)undoManager;
- (id)unredeemedVouchers;

@end
