/* made by EzioChiu.
 */

@protocol SFRemoteViewControllerProtocol <NSObject>

@required

- (void)didDecideCookieSharingForURL:(NSURL *)arg1 shouldCancel:(bool)arg2;
- (void)didFinishInitialLoad:(bool)arg1;
- (void)didLoadWebView;
- (void)executeCustomActivityProxyID:(NSNumber *)arg1;
- (void)fetchActivityViewControllerInfoForURL:(NSURL *)arg1 title:(NSString *)arg2;
- (void)initialLoadDidRedirectToURL:(NSURL *)arg1;
- (void)setRemoteSwipeGestureEnabled:(bool)arg1;
- (void)willDismissServiceViewController;
- (void)willOpenURLInHostApplication:(NSURL *)arg1;

@end
