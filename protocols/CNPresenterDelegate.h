/* made by EzioChiu.
 */

@protocol CNPresenterDelegate <NSObject>

@required

- (bool)isPresentingModalViewController;
- (void)sender:(id)arg1 dismissViewController:(UIViewController *)arg2;
- (void)sender:(id)arg1 presentViewController:(UIViewController *)arg2;

@end
