/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUCloudPhotoWelcomeViewController : PUWelcomeViewController <AAUIGenericTermsRemoteUIDelegate, PSCloudStorageOffersManagerDelegate, PUCloudPhotoWelcomeNavigationControllerDismissDelegate, PUCloudPhotoWelcomeViewDelegate> {
    id /* block */  __completionHandler;
    bool  _enableOnAppear;
    PSCloudStorageOffersManager * _offersManager;
    bool  _requireStorageUpgrade;
    AAUIGenericTermsRemoteUI * _termsManager;
    PUCloudPhotoWelcomeView * _welcomeView;
}

@property (setter=_setCompletionHandler:, nonatomic, copy) id /* block */ _completionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) PUCloudPhotoWelcomeView *welcomeView;

+ (bool)_isPhotoStreamEnabled;
+ (void)_showWithPresentingViewController:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)presentIfNecessaryFromViewController:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)resetLastPresentationInfo;

- (void).cxx_destruct;
- (void)_applicationWillEnterForeground:(id)arg1;
- (id /* block */)_completionHandler;
- (void)_continueWithoutStoragePurchase:(id)arg1;
- (void)_dismiss;
- (void)_enableButtons;
- (void)_enableCPLDataClass;
- (void)_enableCloudPhotoLibrary;
- (void)_handleEnableError:(id)arg1;
- (void)_handleGoButtonTapped;
- (void)_presentStoragePurchaseController;
- (void)_setCompletionHandler:(id /* block */)arg1;
- (void)_updateCurrentActivity;
- (void)cloudPhotoWelcomeViewGoButtonTapped:(id)arg1;
- (void)cloudPhotoWelcomeViewLearnMoreTapped:(id)arg1;
- (void)cloudPhotoWelcomeViewNotNowButtonTapped:(id)arg1;
- (void)dismissViewControllerAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (void)genericTermsRemoteUI:(id)arg1 didFinishWithSuccess:(bool)arg2;
- (void)manager:(id)arg1 loadDidFailWithError:(id)arg2;
- (void)manager:(id)arg1 willPresentViewController:(id)arg2;
- (void)managerDidCancel:(id)arg1;
- (void)navigationControllerDidDismissViewController:(id)arg1;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (long long)preferredInterfaceOrientationForPresentation;
- (void)setWelcomeView:(id)arg1;
- (bool)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (id)welcomeView;

@end
