/* made by EzioChiu
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface SFPasswordServiceViewController : UIViewController <SFPasswordServiceViewControllerProtocol, _SFAuthenticationClient, _SFAuthenticationContextDelegate> {
    NSString * _applicationIdentifier;
    _SFAuthenticationContext * _context;
    bool  _hasAuthenticationForOtherPasswords;
    WBUPasswordPickerViewController * _passwordPickerViewController;
    bool  _presentInPopover;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_exportedInterface;
+ (id)_remoteViewControllerInterface;

- (void).cxx_destruct;
- (void)_authenticateToViewOtherPasswordsWithCompletion:(id /* block */)arg1;
- (id)_context;
- (void)_dismiss;
- (id)_hintStringsForAppID:(id)arg1 appName:(id)arg2 credentials:(id)arg3;
- (void)_willAppearInRemoteViewController;
- (void)authenticateToPresentInPopover:(bool)arg1 completion:(id /* block */)arg2;
- (id)authenticationCustomUIProgressObserverForContext:(id)arg1;
- (bool)authenticationEnabledForContext:(id)arg1;
- (id)authenticationMessageForContext:(id)arg1;
- (bool)contextRequiresSessionBasedAuthentication:(id)arg1;
- (bool)contextShouldAllowMultipleBiometricFailures:(id)arg1;
- (bool)contextShouldAllowPasscodeFallback:(id)arg1;
- (void)gatherAndShowPasswords;

@end