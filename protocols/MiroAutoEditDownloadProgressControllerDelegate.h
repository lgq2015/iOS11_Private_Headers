/* made by EzioChiu.
 */

@protocol MiroAutoEditDownloadProgressControllerDelegate <NSObject>

@required

- (void)progressController:(MiroAutoEditDownloadProgressController *)arg1 didDismissSuccessfully:(bool)arg2;
- (void)progressController:(MiroAutoEditDownloadProgressController *)arg1 noteUserCancelledDuring:(unsigned long long)arg2;
- (void)progressController:(MiroAutoEditDownloadProgressController *)arg1 willDismissSuccessfully:(bool)arg2;
- (UIViewController *)progressControllerRootViewController:(MiroAutoEditDownloadProgressController *)arg1;

@end
