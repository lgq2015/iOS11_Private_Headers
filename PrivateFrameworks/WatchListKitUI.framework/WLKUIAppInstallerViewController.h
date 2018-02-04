/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WatchListKitUI.framework/WatchListKitUI
 */

@interface WLKUIAppInstallerViewController : UINavigationController {
    id /* block */  _completionBlock;
    NSString * _confirmationBody;
    _WLKUIAppInstallConfirmationViewController * _confirmationController;
    NSString * _confirmationInstallButtonTitle;
    NSString * _confirmationTitle;
    NSString * _contentType;
    bool  _displayAppStoreLink;
    bool  _displaySecondaryLink;
    <WLKInstallable> * _installable;
    double  _lastProgress;
    NSString * _localizedContentTitle;
    id /* block */  _progressBlock;
    id /* block */  _secondaryLinkHandler;
    NSString * _secondaryLinkTitle;
    NSString * _updateBody;
    NSString * _updateTitle;
}

@property (nonatomic, copy) NSString *confirmationBody;
@property (nonatomic, copy) NSString *confirmationInstallButtonTitle;
@property (nonatomic, copy) NSString *confirmationTitle;
@property (nonatomic, copy) NSString *contentType;
@property (nonatomic) bool displayAppStoreLink;
@property (nonatomic) bool displaySecondaryLink;
@property (nonatomic, readonly) <WLKInstallable> *installable;
@property (nonatomic, copy) NSString *localizedContentTitle;
@property (nonatomic, copy) id /* block */ secondaryLinkHandler;
@property (nonatomic, copy) NSString *secondaryLinkTitle;
@property (nonatomic, copy) NSString *updateBody;
@property (nonatomic, copy) NSString *updateTitle;

- (void).cxx_destruct;
- (void)_beginInstallingApp;
- (void)_dismissAppInstallWithCompletion:(id /* block */)arg1;
- (void)_finishInstallationWithCompletion:(id /* block */)arg1;
- (void)_initConfirmation;
- (void)_updateWithInstallProgress:(double)arg1;
- (void)beginInstallingAppWithProgressHandler:(id /* block */)arg1 completion:(id /* block */)arg2;
- (id)confirmationBody;
- (id)confirmationInstallButtonTitle;
- (id)confirmationTitle;
- (id)contentType;
- (bool)displayAppStoreLink;
- (bool)displaySecondaryLink;
- (id)init;
- (id)initWithInstallable:(id)arg1;
- (id)installable;
- (void)loadView;
- (id)localizedContentTitle;
- (id /* block */)secondaryLinkHandler;
- (id)secondaryLinkTitle;
- (void)setConfirmationBody:(id)arg1;
- (void)setConfirmationInstallButtonTitle:(id)arg1;
- (void)setConfirmationTitle:(id)arg1;
- (void)setContentType:(id)arg1;
- (void)setDisplayAppStoreLink:(bool)arg1;
- (void)setDisplaySecondaryLink:(bool)arg1;
- (void)setLocalizedContentTitle:(id)arg1;
- (void)setSecondaryLinkHandler:(id /* block */)arg1;
- (void)setSecondaryLinkTitle:(id)arg1;
- (void)setUpdateBody:(id)arg1;
- (void)setUpdateTitle:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (id)updateBody;
- (id)updateTitle;

@end
