/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
 */

@interface VSViewServiceRequestPreparationOperation : VSAsyncOperation {
    bool  _accountModificationAllowed;
    VSAuditToken * _auditToken;
    VSIdentityProviderAvailabilityInfoCenter * _availabilityInfoCenter;
    VSStoreURLBag * _bag;
    VSOptional * _currentAccount;
    NSArray * _featuredIdentityProviderIdentifiers;
    struct { 
        unsigned int val[8]; 
    }  _hostAuditToken;
    int  _hostProcessIdentifier;
    NSXPCConnection * _privacyServiceConnection;
    NSOperationQueue * _privateQueue;
    bool  _requestAllowsPrivacyUI;
    bool  _requestRequiresPrivacyUI;
    VSOptional * _result;
    bool  _shouldInferFeaturedProviders;
    NSArray * _supportedIdentityProviderIdentifiers;
}

@property (getter=isAccountModificationAllowed, nonatomic) bool accountModificationAllowed;
@property (nonatomic, copy) VSAuditToken *auditToken;
@property (nonatomic, retain) VSIdentityProviderAvailabilityInfoCenter *availabilityInfoCenter;
@property (nonatomic, retain) VSStoreURLBag *bag;
@property (nonatomic, retain) VSOptional *currentAccount;
@property (nonatomic, copy) NSArray *featuredIdentityProviderIdentifiers;
@property (nonatomic) struct { unsigned int x1[8]; } hostAuditToken;
@property (nonatomic) int hostProcessIdentifier;
@property (nonatomic, retain) NSXPCConnection *privacyServiceConnection;
@property (nonatomic, retain) NSOperationQueue *privateQueue;
@property (nonatomic) bool requestAllowsPrivacyUI;
@property (nonatomic) bool requestRequiresPrivacyUI;
@property (nonatomic, retain) VSOptional *result;
@property (nonatomic) bool shouldInferFeaturedProviders;
@property (nonatomic, copy) NSArray *supportedIdentityProviderIdentifiers;

- (void).cxx_destruct;
- (void)_checkAvailability;
- (void)_checkEntitlement;
- (void)_checkPrivacy;
- (void)_checkSupportedProviders;
- (void)_determineProviderDisplayName;
- (void)_finishWithError:(id)arg1;
- (void)_finishWithSupportedProviders:(id)arg1;
- (id)_privacyServiceWithErrorHandler:(id /* block */)arg1;
- (void)_promptForPrivacyWithDisplayName:(id)arg1 providerID:(id)arg2;
- (id)auditToken;
- (id)availabilityInfoCenter;
- (id)bag;
- (void)cancel;
- (id)currentAccount;
- (void)dealloc;
- (void)executionDidBegin;
- (id)featuredIdentityProviderIdentifiers;
- (struct { unsigned int x1[8]; })hostAuditToken;
- (int)hostProcessIdentifier;
- (id)init;
- (bool)isAccountModificationAllowed;
- (id)privacyServiceConnection;
- (id)privateQueue;
- (bool)requestAllowsPrivacyUI;
- (bool)requestRequiresPrivacyUI;
- (id)result;
- (void)setAccountModificationAllowed:(bool)arg1;
- (void)setAuditToken:(id)arg1;
- (void)setAvailabilityInfoCenter:(id)arg1;
- (void)setBag:(id)arg1;
- (void)setCurrentAccount:(id)arg1;
- (void)setFeaturedIdentityProviderIdentifiers:(id)arg1;
- (void)setHostAuditToken:(struct { unsigned int x1[8]; })arg1;
- (void)setHostProcessIdentifier:(int)arg1;
- (void)setPrivacyServiceConnection:(id)arg1;
- (void)setPrivateQueue:(id)arg1;
- (void)setRequestAllowsPrivacyUI:(bool)arg1;
- (void)setRequestRequiresPrivacyUI:(bool)arg1;
- (void)setResult:(id)arg1;
- (void)setShouldInferFeaturedProviders:(bool)arg1;
- (void)setSupportedIdentityProviderIdentifiers:(id)arg1;
- (bool)shouldInferFeaturedProviders;
- (id)supportedIdentityProviderIdentifiers;

@end
