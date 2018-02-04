/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
 */

@interface CNFRegListController : PSListController <CNFRegAccountAuthorizationDelegate, CNFRegChangeAccountPasswordDelegate, IMSystemMonitorListener> {
    id /* block */  _appearBlock;
    bool  _appeared;
    CNFRegController * _regController;
    bool  _shouldRerootPreferences;
    bool  _showingChildController;
}

@property (nonatomic, copy) id /* block */ appearBlock;
@property (nonatomic, readonly) bool appeared;
@property (nonatomic, readonly) long long currentAppearanceStyle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CNFRegController *regController;
@property (nonatomic) bool shouldRerootPreferences;
@property (nonatomic) bool showingChildController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_existingLabelForSection:(long long)arg1 header:(bool)arg2;
- (id)_existingLabelForSpecifier:(id)arg1 header:(bool)arg2;
- (bool)_handleURLDictionary:(id)arg1;
- (void)_performAppearBlock;
- (void)_setFieldsEnabled:(bool)arg1 animated:(bool)arg2;
- (void)_setLabel:(id)arg1 forSpecifier:(id)arg2 header:(bool)arg3;
- (void)_setSpecifierEnabled:(id)arg1 enabled:(bool)arg2 animated:(bool)arg3;
- (void)_setupEventHandlers;
- (bool)_showWiFiAlertIfNecessary;
- (void)_updateExistingLabelForSpecifier:(id)arg1 header:(bool)arg2;
- (void)_updateTableLabel:(id)arg1 withTableView:(id)arg2 isTopMostHeader:(bool)arg3;
- (void)_updateTitle;
- (id /* block */)appearBlock;
- (bool)appeared;
- (void)applicationDidResume;
- (void)authorizationController:(id)arg1 authorizedAccount:(bool)arg2;
- (void)changePasswordControllerDidCancel:(id)arg1;
- (void)changePasswordControllerDidFinish:(id)arg1 withAppleID:(id)arg2 authID:(id)arg3 authToken:(id)arg4;
- (long long)currentAppearanceStyle;
- (id)customTitle;
- (void)dealloc;
- (void)handleURL:(id)arg1;
- (id)initWithParentController:(id)arg1;
- (id)initWithRegController:(id)arg1;
- (void)loadView;
- (id)logName;
- (id)regController;
- (void)removeAllHandlers;
- (void)setAppearBlock:(id /* block */)arg1;
- (void)setRegController:(id)arg1;
- (void)setShouldRerootPreferences:(bool)arg1;
- (void)setShowingChildController:(bool)arg1;
- (void)setSpecifier:(id)arg1;
- (bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (bool)shouldRerootPreferences;
- (bool)shouldSelectResponderOnAppearance;
- (bool)showingChildController;
- (id)specifierList;
- (id)specifiers;
- (void)systemApplicationDidBecomeActive;
- (void)systemApplicationDidEnterBackground;
- (void)systemApplicationDidResume;
- (void)systemApplicationDidSuspend;
- (void)systemApplicationWillEnterForeground;
- (void)systemApplicationWillResignActive;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (bool)wantsWiFiChooser;

@end