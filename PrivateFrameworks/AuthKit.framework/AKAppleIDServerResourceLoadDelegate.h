/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
 */

@interface AKAppleIDServerResourceLoadDelegate : NSObject <NSSecureCoding> {
    NSString * _altDSID;
    NSString * _clientAppName;
    NSString * _continuationToken;
    NSNumber * _hasEmptyPasswordOverride;
    NSString * _heartbeatToken;
    NSString * _identityToken;
    NSArray * _loggedInServices;
    NSString * _passwordResetToken;
    AKDevice * _proxiedDevice;
    AKAnisetteData * _proxiedDeviceAnisetteData;
    NSString * _proxyAppName;
    NSString * _securityUpgradeContext;
    NSString * _serviceToken;
    long long  _serviceType;
    bool  _shouldSendAbsintheHeader;
    bool  _shouldSendEphemeralAuthHeader;
    bool  _shouldSendICSCIntentHeader;
    bool  _shouldSendLocalUserHasAppleIDLoginHeader;
}

@property (nonatomic, copy) NSString *altDSID;
@property (nonatomic, copy) NSString *clientAppName;
@property (nonatomic, copy) NSString *continuationToken;
@property (nonatomic, retain) NSNumber *hasEmptyPasswordOverride;
@property (nonatomic, copy) NSString *heartbeatToken;
@property (nonatomic, copy) NSString *identityToken;
@property (nonatomic, copy) NSArray *loggedInServices;
@property (nonatomic, copy) NSString *passwordResetToken;
@property (nonatomic, retain) AKDevice *proxiedDevice;
@property (nonatomic, retain) AKAnisetteData *proxiedDeviceAnisetteData;
@property (nonatomic, copy) NSString *proxyAppName;
@property (nonatomic, copy) NSString *securityUpgradeContext;
@property (nonatomic, copy) NSString *serviceToken;
@property (nonatomic) long long serviceType;
@property (nonatomic) bool shouldSendAbsintheHeader;
@property (nonatomic) bool shouldSendEphemeralAuthHeader;
@property (nonatomic) bool shouldSendICSCIntentHeader;
@property (nonatomic) bool shouldSendLocalUserHasAppleIDLoginHeader;

+ (id)sharedController;
+ (unsigned long long)signalFromServerResponse:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_signWithFeatureOptInHeaders:(id)arg1;
- (id)altDSID;
- (id)clientAppName;
- (id)continuationToken;
- (void)encodeWithCoder:(id)arg1;
- (id)hasEmptyPasswordOverride;
- (id)heartbeatToken;
- (id)identityToken;
- (id)initWithAltDSID:(id)arg1 identityToken:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (bool)isAuthenticationRequired:(id)arg1;
- (bool)isResponseActionable:(id)arg1;
- (bool)isResponseFinal:(id)arg1;
- (bool)isResponseFinalForHSA2ServerFlow:(id)arg1;
- (id)loggedInServices;
- (id)passwordResetToken;
- (id)proxiedDevice;
- (id)proxiedDeviceAnisetteData;
- (id)proxyAppName;
- (id)securityUpgradeContext;
- (id)serviceToken;
- (long long)serviceType;
- (void)setAltDSID:(id)arg1;
- (void)setClientAppName:(id)arg1;
- (void)setContinuationToken:(id)arg1;
- (void)setHasEmptyPasswordOverride:(id)arg1;
- (void)setHeartbeatToken:(id)arg1;
- (void)setIdentityToken:(id)arg1;
- (void)setLoggedInServices:(id)arg1;
- (void)setPasswordResetToken:(id)arg1;
- (void)setProxiedDevice:(id)arg1;
- (void)setProxiedDeviceAnisetteData:(id)arg1;
- (void)setProxyAppName:(id)arg1;
- (void)setSecurityUpgradeContext:(id)arg1;
- (void)setServiceToken:(id)arg1;
- (void)setServiceType:(long long)arg1;
- (void)setShouldSendAbsintheHeader:(bool)arg1;
- (void)setShouldSendEphemeralAuthHeader:(bool)arg1;
- (void)setShouldSendICSCIntentHeader:(bool)arg1;
- (void)setShouldSendLocalUserHasAppleIDLoginHeader:(bool)arg1;
- (bool)shouldSendAbsintheHeader;
- (bool)shouldSendEphemeralAuthHeader;
- (bool)shouldSendICSCIntentHeader;
- (bool)shouldSendLocalUserHasAppleIDLoginHeader;
- (void)signRequest:(id)arg1;
- (void)signRequestWithCommonHeaders:(id)arg1;

@end
