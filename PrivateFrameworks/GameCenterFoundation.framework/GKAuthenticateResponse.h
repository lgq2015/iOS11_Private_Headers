/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKAuthenticateResponse : GKInternalRepresentation {
    NSString * _alertMessage;
    NSString * _alertTitle;
    GKPlayerCredential * _credential;
    bool  _loginDisabled;
    bool  _passwordChangeRequired;
    NSURL * _passwordChangeURL;
    bool  _shouldShowLinkAccountsUI;
}

@property (nonatomic, retain) NSString *alertMessage;
@property (nonatomic, retain) NSString *alertTitle;
@property (nonatomic, retain) GKPlayerCredential *credential;
@property (nonatomic) bool loginDisabled;
@property (nonatomic) bool passwordChangeRequired;
@property (nonatomic, retain) NSURL *passwordChangeURL;
@property (nonatomic) bool shouldShowLinkAccountsUI;

+ (id)secureCodedPropertyKeys;

- (id)alertMessage;
- (id)alertTitle;
- (id)credential;
- (void)dealloc;
- (bool)loginDisabled;
- (bool)passwordChangeRequired;
- (id)passwordChangeURL;
- (void)setAlertMessage:(id)arg1;
- (void)setAlertTitle:(id)arg1;
- (void)setCredential:(id)arg1;
- (void)setLoginDisabled:(bool)arg1;
- (void)setPasswordChangeRequired:(bool)arg1;
- (void)setPasswordChangeURL:(id)arg1;
- (void)setShouldShowLinkAccountsUI:(bool)arg1;
- (bool)shouldShowLinkAccountsUI;

@end
