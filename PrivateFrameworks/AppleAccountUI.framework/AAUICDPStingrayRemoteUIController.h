/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

@interface AAUICDPStingrayRemoteUIController : NSObject {
    ACAccount * _account;
    AAUIServerUIHookHandler * _serverHookHandler;
}

- (void).cxx_destruct;
- (void)attachAllHandlers;
- (void)attachAuthHandler:(id /* block */)arg1;
- (void)attachPasscodeHandler:(id /* block */)arg1;
- (void)attachRecoveryKeyHandler:(id /* block */)arg1;
- (void)attachRepairHandler:(id /* block */)arg1;
- (id)initWithRemoteUIController:(id)arg1;
- (id)initWithRemoteUIController:(id)arg1 appleAccount:(id)arg2;
- (void)processObjectModel:(id)arg1 isModal:(bool)arg2;
- (void)processObjectModel:(id)arg1 isModal:(bool)arg2 completion:(id /* block */)arg3;
- (void)setPresentingController:(id)arg1;

@end
