/* made by EzioChiu.
 */

@protocol PUOverOneUpPresentationSessionBarsDelegate <NSObject>

@optional

- (UIBarButtonItem *)overOneUpPresentationSession:(PUOverOneUpPresentationSession *)arg1 barButtonItemForActivityType:(NSString *)arg2;
- (void)overOneUpPresentationSession:(PUOverOneUpPresentationSession *)arg1 didCompleteWithActivityType:(NSString *)arg2 assetsByAssetCollection:(NSDictionary *)arg3 success:(bool)arg4;

@end
