/* made by EzioChiu.
 */

@protocol SCNCameraControllerDelegate <NSObject>

@optional

- (void)cameraInertiaDidEndForController:(SCNCameraController *)arg1;
- (void)cameraInertiaWillStartForController:(SCNCameraController *)arg1;

@end
