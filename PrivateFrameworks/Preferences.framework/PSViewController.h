/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSViewController : UIViewController <PSController> {
    UIViewController<PSController> * _parentController;
    PSRootController * _rootController;
    PSSpecifier * _specifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)canBeShownFromSuspendedState;
- (void)didLock;
- (void)didUnlock;
- (void)didWake;
- (void)formSheetViewDidDisappear;
- (void)formSheetViewWillDisappear;
- (void)handleURL:(id)arg1;
- (id)init;
- (long long)navigationItemLargeTitleDisplayMode;
- (id)parentController;
- (void)popupViewDidDisappear;
- (void)popupViewWillDisappear;
- (void)pushController:(id)arg1;
- (void)pushController:(id)arg1 animate:(bool)arg2;
- (id)readPreferenceValue:(id)arg1;
- (id)rootController;
- (void)setParentController:(id)arg1;
- (void)setPreferenceValue:(id)arg1 specifier:(id)arg2;
- (void)setRootController:(id)arg1;
- (void)setSpecifier:(id)arg1;
- (void)showController:(id)arg1;
- (void)showController:(id)arg1 animate:(bool)arg2;
- (id)specifier;
- (void)statusBarWillAnimateByHeight:(double)arg1;
- (void)suspend;
- (void)willBecomeActive;
- (void)willResignActive;
- (void)willUnlock;

@end
