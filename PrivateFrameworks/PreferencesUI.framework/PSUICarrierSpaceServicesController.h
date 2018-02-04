/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
 */

@interface PSUICarrierSpaceServicesController : PSListController {
    NSArray * _appsList;
    PSListController * _phoneSettingsController;
}

@property (nonatomic, retain) NSArray *appsList;
@property (nonatomic, retain) PSListController *phoneSettingsController;

- (void).cxx_destruct;
- (id)appsList;
- (void)carrierSpaceChanged;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)moreAppsTapped:(id)arg1;
- (id)phoneSettingsController;
- (id)primaryAppSpecifier;
- (void)setAppsList:(id)arg1;
- (void)setPhoneSettingsController:(id)arg1;
- (bool)shouldShowMoreApps;
- (void)simStatusChanged;
- (id)specifiers;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)viewDidAppear:(bool)arg1;

@end
