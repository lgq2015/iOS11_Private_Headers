/* made by EzioChiu.
 */

@protocol SKUIDocumentViewController <NSObject>

@required

- (void)documentDidUpdate:(IKAppDocument *)arg1;

@optional

- (void)delayPresentationIfNeededForParentViewController:(UIViewController *)arg1;
- (void)documentMediaQueriesDidUpdate:(IKAppDocument *)arg1;
- (NSArray *)impressionableViewElements;
- (NSArray *)leftBarButtonItemsForDocument:(IKAppDocument *)arg1;
- (bool)managesNavigationBarContents;
- (UIView *)navigationPaletteView;

@end
