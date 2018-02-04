/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

@interface ACDAuthenticationDialogRequest : NSObject {
    ACAccount * _account;
    NSString * _authDelegateClassBundlePath;
    NSString * _authDelegateClassName;
    id /* block */  _completion;
    bool  _confirmationRequired;
    NSURL * _url;
}

@property (nonatomic, retain) ACAccount *account;
@property (nonatomic, copy) NSString *authDelegateClassBundlePath;
@property (nonatomic, copy) NSString *authDelegateClassName;
@property (nonatomic, copy) id /* block */ completion;
@property (nonatomic) bool confirmationRequired;
@property (nonatomic, copy) NSURL *url;

- (void).cxx_destruct;
- (id)account;
- (id)authDelegateClassBundlePath;
- (id)authDelegateClassName;
- (id /* block */)completion;
- (bool)confirmationRequired;
- (void)setAccount:(id)arg1;
- (void)setAuthDelegateClassBundlePath:(id)arg1;
- (void)setAuthDelegateClassName:(id)arg1;
- (void)setCompletion:(id /* block */)arg1;
- (void)setConfirmationRequired:(bool)arg1;
- (void)setUrl:(id)arg1;
- (id)url;

@end
