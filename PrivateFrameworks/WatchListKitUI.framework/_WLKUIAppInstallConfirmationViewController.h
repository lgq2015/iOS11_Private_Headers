/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WatchListKitUI.framework/WatchListKitUI
 */

@interface _WLKUIAppInstallConfirmationViewController : WLKUILoadingViewController {
    UIButton * _actionButton;
    id /* block */  _actionHandler;
    id /* block */  _appStoreHandler;
    UIBarButtonItem * _barButtonItem;
    id /* block */  _cancelationHandler;
    _WLKUIAppInstallConfirmationView * _confirmationView;
    <WLKInstallable> * _installable;
    SSLookupItemOffer * _itemOffer;
    _WLKUIAppInstallLockup * _lockup;
    id /* block */  _secondaryLinkHandler;
    unsigned long long  _state;
    NSString * _updateMessage;
    NSString * _updateTitle;
}

@property (nonatomic, retain) UIButton *actionButton;
@property (nonatomic, copy) id /* block */ actionHandler;
@property (nonatomic, copy) id /* block */ appStoreHandler;
@property (nonatomic, retain) UIBarButtonItem *barButtonItem;
@property (nonatomic, copy) id /* block */ cancelationHandler;
@property (nonatomic, retain) _WLKUIAppInstallLockup *lockup;
@property (nonatomic, copy) id /* block */ secondaryLinkHandler;
@property (nonatomic) unsigned long long state;

- (void).cxx_destruct;
- (void)_fetchAppInfo;
- (id)_fileSizeWithDeviceSizes:(id)arg1;
- (void)_handleAction;
- (void)_handleAppStore;
- (void)_handleCancel;
- (void)_handleSecondaryLink;
- (id)_namedRatingWithRatings:(id)arg1;
- (id)actionButton;
- (id /* block */)actionHandler;
- (id /* block */)appStoreHandler;
- (id)barButtonItem;
- (id /* block */)cancelationHandler;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)init;
- (id)initWithInstallable:(id)arg1;
- (id)itemOffer;
- (void)loadView;
- (id)lockup;
- (id /* block */)secondaryLinkHandler;
- (void)setActionButton:(id)arg1;
- (void)setActionHandler:(id /* block */)arg1;
- (void)setAppStoreHandler:(id /* block */)arg1;
- (void)setBarButtonItem:(id)arg1;
- (void)setCancelationHandler:(id /* block */)arg1;
- (void)setInstallingState;
- (void)setLockup:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setPreInstallState;
- (void)setSecondaryLinkHandler:(id /* block */)arg1;
- (void)setSecondaryLinkTitle:(id)arg1;
- (void)setState:(unsigned long long)arg1;
- (void)setTitle:(id)arg1;
- (void)setUpdateMessage:(id)arg1;
- (void)setUpdateTitle:(id)arg1;
- (unsigned long long)state;

@end
