/* made by EzioChiu.
 */

@protocol PROBundleHandlerDelegate

@required

- (void)bundleHandler:(PROBundleHandler *)arg1 didAddPlugIn:(PROPlugIn *)arg2;
- (void)bundleHandler:(PROBundleHandler *)arg1 didError:(NSError *)arg2;
- (bool)bundleHandler:(PROBundleHandler *)arg1 shouldAddPlugIn:(PROPlugIn *)arg2;

@end