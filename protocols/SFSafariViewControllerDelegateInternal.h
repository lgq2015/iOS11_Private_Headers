/* made by EzioChiu.
 */

@protocol SFSafariViewControllerDelegateInternal <SFSafariViewControllerDelegate>

@optional

- (void)safariViewController:(SFSafariViewController *)arg1 didDecideCookieSharingForURL:(NSURL *)arg2 shouldCancel:(bool)arg3;
- (void)safariViewController:(SFSafariViewController *)arg1 hostApplicationOpenURL:(NSURL *)arg2;

@end
