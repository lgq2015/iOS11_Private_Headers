/* made by EzioChiu.
 */

@protocol SKUISlideshowItemViewControllerDelegate <NSObject>

@required

- (void)slideshowItemViewControllerDidBeginPinchGesture:(SKUISlideshowItemViewController *)arg1;
- (void)slideshowItemViewControllerDidDismissWithPinchGesture:(SKUISlideshowItemViewController *)arg1 ratio:(double)arg2;

@end
