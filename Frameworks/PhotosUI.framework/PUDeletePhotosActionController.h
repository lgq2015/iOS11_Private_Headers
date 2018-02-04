/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUDeletePhotosActionController : NSObject {
    NSArray * __additionalAssetsToDelete;
    NSArray * __assets;
    UIAlertController * __mainAlertController;
    UIAlertController * __oneTimeConfirmationAlertController;
    UIAlertController * __overQuotaConfirmationAlertController;
    long long  _action;
    id /* block */  _completionHandler;
    <PUDeletePhotosActionControllerDelegate> * _delegate;
    bool  _shouldSkipDeleteConfirmation;
    id /* block */  _willDeleteHandler;
}

@property (nonatomic, readonly, copy) NSArray *_additionalAssetsToDelete;
@property (nonatomic, readonly, copy) NSArray *_assets;
@property (setter=_setMainAlertController:, nonatomic, retain) UIAlertController *_mainAlertController;
@property (setter=_setOneTimeConfirmationAlertController:, nonatomic, retain) UIAlertController *_oneTimeConfirmationAlertController;
@property (setter=_setOverQuotaConfirmationAlertController:, nonatomic, retain) UIAlertController *_overQuotaConfirmationAlertController;
@property (nonatomic, readonly) long long action;
@property (nonatomic, readonly) <PUDeletePhotosActionControllerDelegate> *delegate;
@property (nonatomic) bool shouldSkipDeleteConfirmation;

- (void).cxx_destruct;
- (id)_additionalAssetsToDelete;
- (id)_assets;
- (void)_ensureMainAlertController;
- (void)_ensureOneTimeConfirmationAlertController;
- (void)_ensureOverQuotaConfirmationAlertController;
- (void)_getDeleteActionSheetTitle:(id*)arg1 destructiveButtonTitle:(id*)arg2 cancelButtonTitle:(id*)arg3 forAssets:(id)arg4 additionalPhotoStreamAssets:(id)arg5;
- (void)_handleFinalUserDecisionShouldDelete:(bool)arg1;
- (void)_handleMainAlertConfirmed:(bool)arg1;
- (void)_handleOneTimeAlertConfirmed;
- (void)_handleOverQuotaAlertConfirmed:(bool)arg1;
- (id)_mainAlertController;
- (id)_oneTimeConfirmationAlertController;
- (id)_overQuotaConfirmationAlertController;
- (void)_runDestructiveActionWithCompletion:(id /* block */)arg1;
- (void)_setMainAlertController:(id)arg1;
- (void)_setOneTimeConfirmationAlertController:(id)arg1;
- (void)_setOverQuotaConfirmationAlertController:(id)arg1;
- (void)_showOnetimeConfirmation;
- (void)_showOverQuotaConfirmationSheet;
- (long long)action;
- (id)delegate;
- (id)initWithAction:(long long)arg1 assets:(id)arg2 delegate:(id)arg3;
- (void)performWithWillDeleteHandler:(id /* block */)arg1 completionHandler:(id /* block */)arg2;
- (void)ppt_performDeleteWithoutUserConfirmationWithCompletionHandler:(id /* block */)arg1;
- (void)setShouldSkipDeleteConfirmation:(bool)arg1;
- (bool)shouldSkipDeleteConfirmation;

@end
