/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SULegacyClientBridge : NSObject <MFMailComposeViewControllerDelegate, SUOverlayBackgroundDelegate> {
    SUClientInterface * _clientInterface;
    SUOverlayBackgroundViewController * _overlayBackgroundViewController;
    SUPreviewOverlayViewController * _previewOverlayViewController;
    UITabBarController * _rootViewController;
}

@property (nonatomic, readonly) SUClientInterface *clientInterface;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) SUOverlayBackgroundViewController *overlayBackgroundViewController;
@property (nonatomic, readonly) SUPreviewOverlayViewController *previewOverlayViewController;
@property (nonatomic, retain) UITabBarController *rootViewController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_previewOverlayViewController;
- (void)_removePreviewOverlayViewController;
- (void)_showPreviewOverlayAnimated:(bool)arg1;
- (id)clientInterface;
- (void)composeEmailWithSubject:(id)arg1 body:(id)arg2;
- (bool)composeReviewWithViewController:(id)arg1 animated:(bool)arg2;
- (void)dealloc;
- (void)dismissOverlayBackgroundViewController;
- (bool)enterAccountFlowWithViewController:(id)arg1 animated:(bool)arg2;
- (void)hidePreviewOverlayAnimated:(bool)arg1;
- (id)initWithClientInterface:(id)arg1;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;
- (id)overlayBackgroundViewController;
- (bool)performActionForDialog:(id)arg1 button:(id)arg2;
- (bool)presentOverlayBackgroundViewController:(id)arg1;
- (id)previewOverlayViewController;
- (id)rootViewController;
- (void)scriptOverlayBackgroundDidDismiss:(id)arg1;
- (void)setRootViewController:(id)arg1;
- (void)showPreviewOverlayAnimated:(bool)arg1;

@end
