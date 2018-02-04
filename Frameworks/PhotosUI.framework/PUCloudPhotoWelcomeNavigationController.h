/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUCloudPhotoWelcomeNavigationController : UINavigationController {
    <PUCloudPhotoWelcomeNavigationControllerDismissDelegate> * _dismissDelegate;
}

@property (nonatomic) <PUCloudPhotoWelcomeNavigationControllerDismissDelegate> *dismissDelegate;

- (void).cxx_destruct;
- (id)dismissDelegate;
- (void)dismissViewControllerAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (long long)preferredInterfaceOrientationForPresentation;
- (void)setDismissDelegate:(id)arg1;
- (bool)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;

@end
