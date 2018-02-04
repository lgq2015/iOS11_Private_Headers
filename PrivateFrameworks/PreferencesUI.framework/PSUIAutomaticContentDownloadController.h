/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
 */

@interface PSUIAutomaticContentDownloadController : PSListController {
    NSMutableDictionary * _applicationStates;
    NSMutableArray * _applications;
    id  _settingsChangedObserver;
}

@property (nonatomic, retain) NSMutableDictionary *applicationStates;
@property (nonatomic, retain) NSMutableArray *applications;

- (void).cxx_destruct;
- (id)applicationEnabled:(id)arg1;
- (id)applicationStates;
- (id)applications;
- (id)backgroundRefreshState:(id)arg1;
- (id)init;
- (void)setApplicationEnabled:(id)arg1 forSpecifier:(id)arg2;
- (void)setApplicationStates:(id)arg1;
- (void)setApplications:(id)arg1;
- (void)setBackgroundRefreshState:(id)arg1 withSpecifier:(id)arg2;
- (id)specifiers;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (id)whitelist;

@end
