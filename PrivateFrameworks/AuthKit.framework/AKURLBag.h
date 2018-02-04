/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
 */

@interface AKURLBag : NSObject {
    <AKURLBagDictionaryProvider> * _bagProvider;
}

@property (nonatomic, readonly) NSString *APSEnvironment;
@property (nonatomic, readonly) unsigned long long IDMSEnvironment;
@property (nonatomic, readonly) NSURL *absintheCertURL;
@property (nonatomic, readonly) NSURL *absintheSessionURL;
@property (nonatomic, retain) <AKURLBagDictionaryProvider> *bagProvider;
@property (nonatomic, readonly) NSURL *basicAuthURL;
@property (nonatomic, readonly) NSURL *changePasswordURL;
@property (nonatomic, readonly) NSURL *checkInURL;
@property (nonatomic, readonly) NSURL *circleURL;
@property (nonatomic, readonly) NSURL *configurationInfoURL;
@property (nonatomic, readonly) NSURL *createAppleIDURL;
@property (nonatomic, readonly) NSURL *deviceListURL;
@property (nonatomic, readonly) NSURL *endProvisioningURL;
@property (nonatomic, readonly) NSURL *escapeHatchURL;
@property (nonatomic, readonly) NSURL *fetchConfigDataURL;
@property (nonatomic, readonly) NSURL *fetchFollowUps;
@property (nonatomic, readonly) NSURL *fetchUserInfoURL;
@property (nonatomic, readonly) NSURL *iForgotContinuationURL;
@property (nonatomic, readonly) NSURL *iForgotURL;
@property (nonatomic, readonly) unsigned long long lastKnownIDMSEnvironment;
@property (nonatomic, readonly) NSURL *notificationAckURL;
@property (getter=isPhoneNumberSupportedConfig, nonatomic, readonly) bool phoneNumberSupportedConfig;
@property (nonatomic, readonly) NSURL *renewRecoveryTokenURL;
@property (nonatomic, readonly) NSURL *startProvisioningURL;
@property (nonatomic, readonly) NSURL *storeModernRecoveryURL;
@property (nonatomic, readonly) NSURL *syncAnisetteURL;
@property (nonatomic, readonly) NSURL *tokenUpgradeURL;
@property (nonatomic, readonly) NSURL *trustedDevicesSummaryURL;
@property (nonatomic, readonly) NSURL *trustedDevicesURL;
@property (nonatomic, readonly) NSURL *upgradeEligibilityCheckURL;
@property (nonatomic, readonly) NSURL *upgradeUIURL;
@property (nonatomic, readonly) NSURL *validateCodeURL;
@property (nonatomic, readonly) NSURL *validateVettingTokenURL;

+ (unsigned long long)IDMSEnvironmentFromBag:(id)arg1;
+ (unsigned long long)_IDMSEnvironmentFromString:(id)arg1;
+ (id)_requestEnvironmentsWithBag:(id)arg1;
+ (id)keyForEscapeHatchURL;
+ (bool)looksLikeiForgotURLKey:(id)arg1;
+ (id)sharedBag;

- (void).cxx_destruct;
- (id)APSEnvironment;
- (unsigned long long)IDMSEnvironment;
- (void)_fetchURLBagWithCompletion:(id /* block */)arg1;
- (id)_requestConfigurationsWithError:(id*)arg1;
- (id)_requestEnvironmentsWithError:(id*)arg1;
- (id)_requestNewURLBagIfNecessaryWithError:(id*)arg1;
- (id)_urlAtKey:(id)arg1;
- (id)_urlBag:(id*)arg1;
- (id)absintheCertURL;
- (id)absintheSessionURL;
- (id)bagProvider;
- (id)basicAuthURL;
- (id)changePasswordURL;
- (id)checkInURL;
- (id)circleURL;
- (id)configurationAtKey:(id)arg1;
- (id)configurationInfoURL;
- (id)createAppleIDURL;
- (id)deviceListURL;
- (id)endProvisioningURL;
- (id)escapeHatchURL;
- (id)fetchConfigDataURL;
- (id)fetchFollowUps;
- (id)fetchUserInfoURL;
- (id)iForgotContinuationURL;
- (id)iForgotURL;
- (bool)isPhoneNumberSupportedConfig;
- (unsigned long long)lastKnownIDMSEnvironment;
- (id)notificationAckURL;
- (id)renewRecoveryTokenURL;
- (void)requestNewURLBagIfNecessaryWithCompletion:(id /* block */)arg1;
- (bool)requestNewURLBagIfNecessaryWithError:(id*)arg1;
- (void)setBagProvider:(id)arg1;
- (id)startProvisioningURL;
- (id)storeModernRecoveryURL;
- (id)syncAnisetteURL;
- (id)tokenUpgradeURL;
- (id)trustedDevicesSummaryURL;
- (id)trustedDevicesURL;
- (id)upgradeEligibilityCheckURL;
- (id)upgradeUIURL;
- (id)urlAtKey:(id)arg1;
- (id)validateCodeURL;
- (id)validateVettingTokenURL;

@end
