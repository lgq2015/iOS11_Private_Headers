/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ControlCenterUIKit.framework/ControlCenterUIKit
 */

@interface CCUIAppLauncherViewController : CCUIMenuModuleViewController {
    SBFApplication * _application;
    SCUIAssetProvider * _assetProvider;
    CCUIAppLauncherModule * _module;
}

@property (nonatomic) CCUIAppLauncherModule *module;

- (void).cxx_destruct;
- (void)_activateApplicationForShortcutItem:(id)arg1;
- (void)_addActionForShortcutItem:(id)arg1;
- (void)_updateApplicationShortcutsActions;
- (void)buttonTapped:(id)arg1 forEvent:(id)arg2;
- (id)module;
- (void)setModule:(id)arg1;
- (bool)shouldBeginTransitionToExpandedContentModule;
- (void)viewDidLoad;

@end
