/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
 */

@interface CNFRegLocaleController : CNFRegFirstRunController <CNFRegRegionChooserDelegate> {
    id /* block */  _completionBlock;
    PSSpecifier * _countryFieldSpecifier;
    NSString * _currentPhoneValue;
    NSString * _currentRegionID;
    bool  _isError;
    bool  _isLoading;
    PSSpecifier * _phoneNumberFieldSpecifier;
    PSSpecifier * _phoneNumberGroupSpecifier;
    NSArray * _phoneNumberSpecifiers;
    NSArray * _regionData;
    id  _regionListChangeObserver;
}

@property (copy) id /* block */ completionBlock;
@property (nonatomic, copy) NSString *currentPhoneValue;
@property (nonatomic, copy) NSString *currentRegionID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *regionData;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_buildCountryFieldSpecifierCache:(id)arg1;
- (void)_buildPhoneNumberSpecifierCache:(id)arg1;
- (void)_buildSpecifierCache:(id)arg1;
- (id)_currentRegion;
- (void)_failValidationWithError:(id)arg1;
- (void)_finishValidation;
- (void)_handleRegionListLoad;
- (void)_handleTimeout;
- (void)_hideCountryPickerAnimated:(bool)arg1;
- (void)_loadInitialValues;
- (void)_loadRegionsIfNecessary;
- (id)_phoneTextField;
- (void)_refreshCountryFieldAnimated:(bool)arg1;
- (void)_refreshPhoneFieldAnimated:(bool)arg1;
- (id)_rightButtonItem;
- (void)_rightButtonTapped;
- (void)_setFieldsEnabled:(bool)arg1 animated:(bool)arg2;
- (void)_setupEventHandlers;
- (void)_showCountryPickerAnimated:(bool)arg1;
- (void)_showPhoneField:(bool)arg1 animated:(bool)arg2;
- (void)_startListeningForRegionListChanges;
- (void)_startTimeout;
- (void)_stopListeningForRegionListChanges;
- (id)_unformattedPhoneNumber:(id)arg1;
- (void)_updateControllerState;
- (void)_updateUI;
- (id)bundle;
- (id /* block */)completionBlock;
- (id)controllerForSpecifier:(id)arg1;
- (id)countryList;
- (id)currentCountryValueForSpecifier:(id)arg1;
- (id)currentPhoneCompatibleCountryCode;
- (id)currentPhoneNumberForSpecifier:(id)arg1;
- (id)currentPhoneValue;
- (id)currentRegionID;
- (void)dismiss;
- (void)hideCountryPicker;
- (id)initWithRegController:(id)arg1;
- (id)logName;
- (void)regionChooser:(id)arg1 selectedRegionID:(id)arg2;
- (id)regionData;
- (void)setCompletionBlock:(id /* block */)arg1;
- (void)setCurrentPhoneNumber:(id)arg1 forSpecifier:(id)arg2;
- (void)setCurrentPhoneValue:(id)arg1;
- (void)setCurrentRegionID:(id)arg1;
- (void)setRegionData:(id)arg1;
- (void)showCountryPicker;
- (id)specifierList;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)titleString;
- (id)validationString;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
