/* made by EzioChiu
   Image: /System/Library/Frameworks/Social.framework/Social
 */

@interface SLFacebookAudienceTableViewController : UITableViewController <SLFacebookAudienceViewController> {
    UINavigationItem * _navigationItem;
    NSArray * _privacySettings;
    SLFacebookPostPrivacySetting * _selectedSetting;
    <SLFacebookAudienceViewControllerDelegate> * _selectionDelegate;
}

- (void).cxx_destruct;
- (id)_privacySettingForIndexPath:(id)arg1;
- (void)cancelButtonTapped:(id)arg1;
- (void)didReceiveMemoryWarning;
- (id)initWithStyle:(long long)arg1;
- (void)loadView;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setCurrentPrivacySetting:(id)arg1;
- (void)setPrivacySettings:(id)arg1;
- (void)setSelectionDelegate:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewDidUnload;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillLayoutSubviews;

@end
