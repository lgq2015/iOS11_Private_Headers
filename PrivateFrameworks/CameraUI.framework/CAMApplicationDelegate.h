/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMApplicationDelegate : UIResponder <UIApplicationDelegate> {
    CAMBurstController * _burstController;
    CAMCameraRollController * _cameraRollController;
    CUCaptureController * _captureController;
    CAMIrisVideoController * _irisVideoController;
    CAMKeepAliveController * _keepAliveController;
    CAMLocationController * _locationController;
    CAMMotionController * _motionController;
    CAMNebulaDaemonProxyManager * _nebulaDaemonProxyManager;
    CAMPersistenceController * _persistenceController;
    CAMPowerController * _powerController;
    CAMProtectionController * _protectionController;
    CAMRemoteShutterController * _remoteShutterController;
    CAMTimelapseController * _timelapseController;
    CAMViewfinderViewController * _viewfinderViewController;
    UIWindow * _window;
}

@property (nonatomic, readonly) CAMBurstController *burstController;
@property (nonatomic, readonly) CAMCameraRollController *cameraRollController;
@property (nonatomic, readonly) CUCaptureController *captureController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) CAMIrisVideoController *irisVideoController;
@property (nonatomic, readonly) CAMKeepAliveController *keepAliveController;
@property (nonatomic, readonly) CAMLocationController *locationController;
@property (nonatomic, readonly) CAMMotionController *motionController;
@property (nonatomic, readonly) CAMNebulaDaemonProxyManager *nebulaDaemonProxyManager;
@property (nonatomic, readonly) CAMPersistenceController *persistenceController;
@property (nonatomic, readonly) CAMPowerController *powerController;
@property (nonatomic, readonly) CAMProtectionController *protectionController;
@property (nonatomic, readonly) CAMRemoteShutterController *remoteShutterController;
@property (readonly) Class superclass;
@property (nonatomic, readonly) CAMTimelapseController *timelapseController;
@property (nonatomic, readonly) CAMViewfinderViewController *viewfinderViewController;
@property (nonatomic, retain) UIWindow *window;

- (void).cxx_destruct;
- (bool)_createSubsystemsWithLaunchOptions:(id)arg1;
- (void)_updateShortcutItemsForApplication:(id)arg1;
- (bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;
- (bool)application:(id)arg1 openURL:(id)arg2 options:(id)arg3;
- (void)application:(id)arg1 performActionForShortcutItem:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)applicationWillTerminate:(id)arg1;
- (id)burstController;
- (id)cameraRollController;
- (id)captureController;
- (id)irisVideoController;
- (id)keepAliveController;
- (id)locationController;
- (id)motionController;
- (id)nebulaDaemonProxyManager;
- (id)persistenceController;
- (id)powerController;
- (void)prepareForDefaultImageSnapshotForScreen:(id)arg1;
- (id)protectionController;
- (id)remoteShutterController;
- (void)setWindow:(id)arg1;
- (id)timelapseController;
- (id)viewfinderViewController;
- (id)window;

@end
