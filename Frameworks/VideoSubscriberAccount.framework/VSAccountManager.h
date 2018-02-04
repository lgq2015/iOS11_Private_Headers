/* made by EzioChiu
   Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

@interface VSAccountManager : NSObject <VSViewServiceRequestOperationDelegate> {
    <VSAccountManagerDelegate> * _delegate;
    VSLinkedOnOrAfterChecker * _linkedOnOrAfterChecker;
    VSPrivacyInfoCenter * _privacyInfoCenter;
    VSViewServiceRequestCenter * _requestCenter;
    VSSecurityTask * _securityTask;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <VSAccountManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) VSLinkedOnOrAfterChecker *linkedOnOrAfterChecker;
@property (nonatomic, retain) VSPrivacyInfoCenter *privacyInfoCenter;
@property (nonatomic, retain) VSViewServiceRequestCenter *requestCenter;
@property (nonatomic, retain) VSSecurityTask *securityTask;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_enqueueViewServiceRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)checkAccessStatusWithOptions:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)delegate;
- (id)enqueueAccountMetadataRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)init;
- (id)linkedOnOrAfterChecker;
- (id)privacyInfoCenter;
- (id)requestCenter;
- (id)securityTask;
- (void)setDelegate:(id)arg1;
- (void)setLinkedOnOrAfterChecker:(id)arg1;
- (void)setPrivacyInfoCenter:(id)arg1;
- (void)setRequestCenter:(id)arg1;
- (void)setSecurityTask:(id)arg1;
- (void)viewServiceRequestOperation:(id)arg1 dismissViewController:(id)arg2;
- (void)viewServiceRequestOperation:(id)arg1 presentViewController:(id)arg2;
- (bool)viewServiceRequestOperation:(id)arg1 shouldAuthenticateAccountProviderWithIdentifier:(id)arg2;

@end
