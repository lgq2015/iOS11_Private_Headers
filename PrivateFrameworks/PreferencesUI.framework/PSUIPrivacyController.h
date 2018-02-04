/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
 */

@interface PSUIPrivacyController : PSListController <PSListControllerTestableSpecifiers> {
    ACAccountStore * _accountStore;
    PSSpecifier * _locationSpecifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)booleanCapabilitiesToTest;
+ (void)formatSearchEntries:(id)arg1 parent:(id)arg2;

- (void).cxx_destruct;
- (id)_accountStore;
- (id)capabilityEnabled:(id)arg1;
- (id)locationServicesEnabled:(id)arg1;
- (void)setCapabilityEnabled:(id)arg1 specifier:(id)arg2;
- (bool)shouldReloadSpecifiersOnResume;
- (id)specifiers;
- (void)updateLocationServicesVisibility;

@end
