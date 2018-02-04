/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
 */

@interface PSUIPrefsRootController : PSRootController {
    PSUIPrefsListController * _rootListController;
}

+ (bool)isPlayingRingtone;
+ (void)playRingtoneWithIdentifier:(id)arg1 loop:(bool)arg2;
+ (void)stopRingtoneWithFadeOut:(float)arg1;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithTitle:(id)arg1 identifier:(id)arg2;
- (void)loadView;
- (void)mediaServerDiedNotification:(id)arg1;
- (void)pushViewController:(id)arg1 animated:(bool)arg2;
- (id)rootListController;
- (void)setViewControllers:(id)arg1 animated:(bool)arg2;
- (void)setupControllerForToolbar:(id)arg1;

@end
