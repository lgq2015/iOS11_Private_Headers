/* made by EzioChiu
   Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

@interface VSPrivacyInfoCenter : NSObject <MCProfileConnectionObserver> {
    long long  _accountAccessStatus;
    int  _registrationToken;
}

@property (nonatomic) long long accountAccessStatus;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) int registrationToken;
@property (readonly) Class superclass;

+ (id)sharedPrivacyInfoCenter;

- (void)_invalidateAccountAccessStatus;
- (long long)accountAccessStatus;
- (void)dealloc;
- (id)init;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;
- (int)registrationToken;
- (void)setAccountAccessStatus:(long long)arg1;
- (void)setRegistrationToken:(int)arg1;
- (id)updateAccountAccessStatusWithError:(id)arg1;
- (void)updateAccountAccessStatusWithResponse:(id)arg1;

@end
