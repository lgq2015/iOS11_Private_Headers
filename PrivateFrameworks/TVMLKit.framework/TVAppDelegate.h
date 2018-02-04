/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface TVAppDelegate : UIResponder <TVApplicationControllerDelegate, UIApplicationDelegate> {
    TVApplicationController * _appController;
    bool  _headLess;
    BKSProcessAssertion * _launchAssertion;
    bool  _shouldTerminateOnEnterBackground;
    UIWindow * _window;
}

@property (nonatomic, retain) TVApplicationController *appController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) BKSProcessAssertion *launchAssertion;
@property (nonatomic) bool shouldTerminateOnEnterBackground;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIWindow *window;

- (void).cxx_destruct;
- (void)_controllerDidDisplay:(id)arg1;
- (id)_launchContext;
- (void)_presetDialogWithError:(long long)arg1 appController:(id)arg2;
- (void)_runScrollMoveTest:(id)arg1;
- (id)appController;
- (void)appController:(id)arg1 didFailWithError:(id)arg2;
- (void)appController:(id)arg1 evaluateAppJavaScriptInContext:(id)arg2;
- (bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;
- (bool)application:(id)arg1 openURL:(id)arg2 options:(id)arg3;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)launchAssertion;
- (id)launchOptionsWithDefaultOptions:(id)arg1;
- (void)setAppController:(id)arg1;
- (void)setLaunchAssertion:(id)arg1;
- (void)setShouldTerminateOnEnterBackground:(bool)arg1;
- (void)setWindow:(id)arg1;
- (bool)shouldTerminateOnEnterBackground;
- (id)window;

@end
