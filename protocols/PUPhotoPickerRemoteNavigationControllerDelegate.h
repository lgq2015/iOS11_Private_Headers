/* made by EzioChiu.
 */

@protocol PUPhotoPickerRemoteNavigationControllerDelegate <NSObject>

@required

- (void)photoPickerRemoteNavigationController:(PUPhotoPickerRemoteNavigationController *)arg1 popViewController:(UIViewController *)arg2 animated:(bool)arg3;
- (void)photoPickerRemoteNavigationController:(PUPhotoPickerRemoteNavigationController *)arg1 viewControllerToPush:(UIViewController *)arg2;

@end