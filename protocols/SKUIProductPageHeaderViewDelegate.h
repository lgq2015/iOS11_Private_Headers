/* made by EzioChiu.
 */

@protocol SKUIProductPageHeaderViewDelegate <NSObject>

@optional

- (SKUIMetricsController *)metricsControllerForProductPageHeader:(SKUIProductPageHeaderViewController *)arg1;
- (void)productPageHeaderView:(SKUIProductPageHeaderViewController *)arg1 didReloadItemOffer:(SKUIItemOffer *)arg2;
- (void)productPageHeaderView:(SKUIProductPageHeaderViewController *)arg1 didSelectSectionIndex:(long long)arg2;
- (void)productPageHeaderView:(SKUIProductPageHeaderViewController *)arg1 didSelectURL:(NSURL *)arg2;
- (void)productPageHeaderViewDidWantAskPermissionBanner:(SKUIProductPageHeaderViewController *)arg1;

@end
