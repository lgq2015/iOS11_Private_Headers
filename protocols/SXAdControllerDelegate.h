/* made by EzioChiu.
 */

@protocol SXAdControllerDelegate <NSObject>

@optional

- (void)adController:(SXAdController *)arg1 componentWithIdentifier:(NSString *)arg2 didLoadBannerView:(ADBannerView *)arg3;
- (void)adController:(SXAdController *)arg1 componentWithIdentifier:(NSString *)arg2 didUnloadBannerView:(ADBannerView *)arg3 withError:(NSError *)arg4;
- (void)adController:(SXAdController *)arg1 componentWithIdentifier:(NSString *)arg2 failedToLoadBannerView:(ADBannerView *)arg3 error:(NSError *)arg4;

@end
