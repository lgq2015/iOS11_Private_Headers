/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DAEASOAuthFramework.framework/DAEASOAuthFramework
 */

@interface DAEASOAuthWebViewController : UIViewController <UIWebViewDelegate> {
    ACAccount * _account;
    ACAccountStore * _accountStore;
    NSString * _authURI;
    id /* block */  _completion;
    NSExtension * _extension;
    NSError * _extensionCancellationError;
    bool  _extensionRequestDidComplete;
    bool  _isFirstTimeSetup;
    unsigned long long  _oauthType;
    id /* block */  _presentationBlock;
    UIViewController * _serviceViewController;
}

@property (nonatomic, copy) id /* block */ completion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)presentInternetOfflineError;

- (void).cxx_destruct;
- (void)_commonInitializationWithAccount:(id)arg1 accountStore:(id)arg2 username:(id)arg3 accountDescription:(id)arg4 presentationBlock:(id /* block */)arg5;
- (void)_didInstantiateRemoteViewController;
- (void)_dismissAndCompleteWithIdentity:(id)arg1 error:(id)arg2 extensionCompletion:(id /* block */)arg3;
- (void)_extensionRequestDidCancelWithError:(id)arg1;
- (void)_extensionRequestDidCompleteWithTokens:(id)arg1 extensionCompletion:(id /* block */)arg2;
- (void)_presentUsernameMismatchAlert;
- (id /* block */)completion;
- (id)initWithAccount:(id)arg1 accountStore:(id)arg2 authURI:(id)arg3 accountType:(unsigned long long)arg4 userName:(id)arg5 accountDescription:(id)arg6 isFirstTimeSetup:(bool)arg7 presentationBlock:(id /* block */)arg8;
- (id)initWithAccount:(id)arg1 accountStore:(id)arg2 presentationBlock:(id /* block */)arg3;
- (id)initWithAccountDescription:(id)arg1 presentationBlock:(id /* block */)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (void)setCompletion:(id /* block */)arg1;

@end
