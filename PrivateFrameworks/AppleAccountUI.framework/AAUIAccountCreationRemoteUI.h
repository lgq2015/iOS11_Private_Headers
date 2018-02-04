/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

@interface AAUIAccountCreationRemoteUI : NSObject <RUIObjectModelDelegate> {
    AASetupAssistantService * _aaService;
    UINavigationController * _createAccountNavController;
    <AAUIAccountCreationDelegate> * _delegate;
    UIAlertView * _failedToCreateAccountAlert;
    bool  _isModal;
    RUILoader * _loader;
    NSMutableArray * _objectModels;
    bool  _over13;
    UINavigationController * _parentNavController;
    UIAlertView * _tcConfirmationAlert;
    AAAutoAccountVerifier * _verifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AAUIAccountCreationDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addHeadersToRequest:(id)arg1;
- (void)_cleanupCreateAppleID:(id)arg1;
- (void)_cleanupLoader;
- (void)_createAppleAccount;
- (void)_createAppleIDWithParameters:(id)arg1 handler:(id /* block */)arg2;
- (void)_displayConnectionErrorAndDismiss;
- (void)_popObjectModelAnimated:(bool)arg1;
- (void)_userAgreedToTCs:(bool)arg1;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)dealloc;
- (id)delegate;
- (id)initWithNavController:(id)arg1 isModal:(bool)arg2;
- (void)loadURLRequest:(id)arg1;
- (void)loadURLRequest:(id)arg1 addHeaders:(bool)arg2;
- (void)loader:(id)arg1 didFailWithError:(id)arg2;
- (void)loader:(id)arg1 receivedObjectModel:(id)arg2 actionSignal:(unsigned long long)arg3;
- (void)objectModel:(id)arg1 pressedButton:(id)arg2 attributes:(id)arg3;
- (void)objectModel:(id)arg1 pressedLink:(id)arg2 httpMethod:(id)arg3;
- (void)objectModelDidChange:(id)arg1;
- (void)objectModelPressedBack:(id)arg1;
- (id)parentViewControllerForObjectModel:(id)arg1;
- (void)setDelegate:(id)arg1;
- (unsigned long long)supportedInterfaceOrientationsForObjectModel:(id)arg1 page:(id)arg2;

@end
