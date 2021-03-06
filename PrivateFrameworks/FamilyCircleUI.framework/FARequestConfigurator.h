/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
 */

@interface FARequestConfigurator : NSObject {
    ACAccount * _account;
    ACAccountStore * _accountStore;
    bool  _attachSetupHeader;
    AAGrandSlamSigner * _familyGrandSlamSigner;
    ACAccount * _grandSlamAccount;
    AAGrandSlamSigner * _grandSlamSigner;
    AIDAServiceOwnersManager * _serviceOwnersManager;
}

@property (nonatomic) bool attachSetupHeader;

+ (unsigned char)_isUsingV2Flows;

- (void).cxx_destruct;
- (id)_account;
- (id)_accountStore;
- (void)_addAccountForServiceType:(id)arg1 toPayload:(id)arg2 forKey:(id)arg3;
- (id)_familyGrandSlamSigner;
- (id)_familyTokenForGrandSlamAccount:(id)arg1 andTokenID:(id)arg2;
- (id)_fresnoPayloadWithAdditionalHeaders:(id)arg1;
- (id)_grandSlamAccount;
- (id)_grandSlamSigner;
- (id)_serviceOwnersManager;
- (id)_urlForEventType:(id)arg1;
- (void)addFresnoHeadersToRequest:(id)arg1;
- (void)addFresnoPayloadToRequest:(id)arg1 additionalHeaders:(id)arg2;
- (void)addPayload:(id)arg1 toRequest:(id)arg2;
- (bool)attachSetupHeader;
- (id)initWithAccount:(id)arg1;
- (void)renewCredentialsWithCompletion:(id /* block */)arg1;
- (id)requestForEventType:(id)arg1;
- (void)setAttachSetupHeader:(bool)arg1;

@end
