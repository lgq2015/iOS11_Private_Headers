/* made by EzioChiu
   Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

@interface VSRestrictionsCenter : NSObject <MCProfileConnectionObserver> {
    bool  _accountModificationAllowed;
    MCProfileConnection * _profileConnection;
}

@property (getter=isAcountModificationAllowed, nonatomic) bool accountModificationAllowed;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) MCProfileConnection *profileConnection;
@property (readonly) Class superclass;

+ (id)defaultRestrictionsCenter;

- (void).cxx_destruct;
- (bool)_canInstallAppsAtAll;
- (void)_updateAccountModificationAllowed;
- (bool)canInstallAppWithRating:(long long)arg1;
- (void)dealloc;
- (id)init;
- (bool)isAcountModificationAllowed;
- (id)profileConnection;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;
- (void)setAccountModificationAllowed:(bool)arg1;
- (void)setProfileConnection:(id)arg1;

@end
