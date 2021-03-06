/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideosExtras.framework/VideosExtras
 */

@interface VideosExtrasRootViewController : UIViewController <IKAppContextDelegate, IKAppDeviceConfig, IKApplication, MPVideoOverlayDelegate, UICollectionViewDelegate, UINavigationControllerDelegate> {
    IKAppContext * _applicationContext;
    VideosExtrasArtworkDataSource * _artworkDataSource;
    NSLayoutConstraint * _bottomConstraint;
    VideosExtrasContext * _context;
    bool  _didAttemptRestartAfterAppContextFailure;
    VideosExtrasFeatureContainerViewController * _featureContainer;
    NSObject<OS_dispatch_queue> * _imageRequestQueue;
    NSArray * _lastSelectedSnapshotViewControllers;
    <IKAppDataStoring> * _localStorage;
    VideosExtrasMainTemplateViewController * _mainTemplateViewController;
    VideosExtrasNavigationController * _navigationController;
    <IKAppUserDefaultsStoring> * _userDefaultsStorage;
    <IKAppDataStoring> * _vendorStorage;
}

@property (nonatomic, retain) IKAppContext *applicationContext;
@property (nonatomic, retain) VideosExtrasArtworkDataSource *artworkDataSource;
@property (nonatomic, readonly) VideosExtrasContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) VideosExtrasFeatureContainerViewController *featureContainer;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *lastSelectedSnapshotViewControllers;
@property (nonatomic, retain) <IKAppDataStoring> *localStorage;
@property (nonatomic, readonly) UIView *mainMenuBar;
@property (nonatomic, retain) VideosExtrasMainTemplateViewController *mainTemplateViewController;
@property (nonatomic, readonly) UINavigationController *navigationController;
@property (nonatomic, copy) UITraitCollection *overrideTraitCollection;
@property (readonly) Class superclass;
@property (nonatomic, retain) <IKAppUserDefaultsStoring> *userDefaultsStorage;
@property (nonatomic, retain) <IKAppDataStoring> *vendorStorage;

+ (id)currentController;

- (void).cxx_destruct;
- (void)_adjustExtrasVisibilityForViewSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_applyMainTemplateOffset:(struct CGPoint { double x1; double x2; })arg1 animated:(bool)arg2;
- (bool)_areExtrasVisible;
- (void)_attemptRestart;
- (id)_createDataStorageForIdentifier:(id)arg1;
- (void)_finalizeMainTemplateOffset:(bool)arg1;
- (void)_playbackWillEndNotification:(id)arg1;
- (bool)_setMainDocumentWithViewController:(id)arg1;
- (void)_setNavigationController:(id)arg1;
- (void)_setUpForApplication;
- (bool)_shouldExtrasBeVisibleForViewSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_showExtrasBar:(bool)arg1;
- (void)_stopOldContextIfNeeded;
- (void)appContext:(id)arg1 didFailWithError:(id)arg2;
- (void)appContext:(id)arg1 didStartWithOptions:(id)arg2;
- (void)appContext:(id)arg1 didStopWithOptions:(id)arg2;
- (void)appContext:(id)arg1 evaluateAppJavaScriptInContext:(id)arg2;
- (id)appIdentifier;
- (bool)appIsTrusted;
- (id)appJSURL;
- (id)appLaunchParams;
- (bool)appUsesDefaultStyleSheets;
- (id)applicationContext;
- (id)artworkDataSource;
- (id)childViewControllerForHomeIndicatorAutoHidden;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)context;
- (void)dealloc;
- (id)detectMainDocument:(id)arg1;
- (id)deviceConfigForContext:(id)arg1;
- (id)featureContainer;
- (id)initWithContext:(id)arg1;
- (bool)isTimeZoneSet;
- (id)lastSelectedSnapshotViewControllers;
- (id)localStorage;
- (id)mainMenuBar;
- (id)mainTemplateViewController;
- (id)navigationController;
- (id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (id)navigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2;
- (id)navigationControllerForContext:(id)arg1;
- (void)overlayTappedBackButton:(id)arg1;
- (void)popToFeatureOrMain;
- (unsigned long long)preferredVideoFormat;
- (unsigned long long)preferredVideoPreviewFormat;
- (bool)prefersStatusBarHidden;
- (struct CGSize { double x1; double x2; })screenSize;
- (void)setApplicationContext:(id)arg1;
- (void)setArtworkDataSource:(id)arg1;
- (void)setFeatureContainer:(id)arg1;
- (void)setLastSelectedSnapshotViewControllers:(id)arg1;
- (void)setLocalStorage:(id)arg1;
- (void)setMainTemplateViewController:(id)arg1;
- (void)setUserDefaultsStorage:(id)arg1;
- (void)setVendorStorage:(id)arg1;
- (bool)shouldAutorotate;
- (bool)shouldIgnoreJSValidation;
- (void)start;
- (id)storeFrontCountryCode;
- (unsigned long long)supportedInterfaceOrientations;
- (id)systemLanguage;
- (id)timeZone;
- (void)traitCollectionDidChange:(id)arg1;
- (id)userDefaultsStorage;
- (id)vendorIdentifier;
- (id)vendorStorage;
- (void)viewDidLoad;
- (id)viewElementRegistry;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
