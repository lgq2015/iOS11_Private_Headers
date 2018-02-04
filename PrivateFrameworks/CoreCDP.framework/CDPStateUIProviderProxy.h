/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreCDP.framework/CoreCDP
 */

@interface CDPStateUIProviderProxy : NSObject <CDPStateUIProviderInternal> {
    <CDPStateUIProvider> * _uiProvider;
}

@property (nonatomic, retain) <CDPStateUIProvider> *uiProvider;

- (void).cxx_destruct;
- (void)cdpContext:(id)arg1 beginRemoteApprovalWithValidator:(id)arg2 completion:(id /* block */)arg3;
- (void)cdpContext:(id)arg1 presentRecoveryKeyWithValidator:(id)arg2 completion:(id /* block */)arg3;
- (void)cdpContext:(id)arg1 promptForAdoptionOfMultipleICSC:(id /* block */)arg2;
- (void)cdpContext:(id)arg1 promptForICSCWithIsNumeric:(bool)arg2 numericLength:(id)arg3 isRandom:(bool)arg4 validator:(id)arg5;
- (void)cdpContext:(id)arg1 promptForInteractiveAuthenticationWithCompletion:(id /* block */)arg2;
- (void)cdpContext:(id)arg1 promptForLocalSecretWithHandler:(id)arg2;
- (void)cdpContext:(id)arg1 promptForRecoveryKeyWithValidator:(id)arg2 completion:(id /* block */)arg3;
- (void)cdpContext:(id)arg1 promptForRemoteSecretWithDevices:(id)arg2 offeringRemoteApproval:(bool)arg3 validator:(id)arg4;
- (void)cdpContext:(id)arg1 showError:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)cdpContext:(id)arg1 showError:(id)arg2 withDefaultIndex:(long long)arg3 withCompletion:(id /* block */)arg4;
- (id)initWithUIProvider:(id)arg1;
- (void)setUiProvider:(id)arg1;
- (id)uiProvider;

@end
