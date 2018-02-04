/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKMedicalIDRegisteredOrganDonorTableItem : HKEmergencyCardTableItem {
    <HKMedicalIDRegisteredOrganDonorTableItemDelegate> * _delegate;
    HKOrganDonationCallToActionTableViewCell * _notRegisteredCell;
    long long  _organization;
}

@property (nonatomic) <HKMedicalIDRegisteredOrganDonorTableItemDelegate> *delegate;
@property (nonatomic, retain) HKOrganDonationCallToActionTableViewCell *notRegisteredCell;

- (void).cxx_destruct;
- (bool)canEditRowAtIndex:(long long)arg1;
- (id)delegate;
- (bool)hasPresentableData;
- (id)initInEditMode:(bool)arg1 organDonationOrganization:(long long)arg2;
- (id)notRegisteredCell;
- (id)organizationLogo;
- (void)presentDonateLifeRegistrationSequence;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })separatorInset;
- (void)setDelegate:(id)arg1;
- (void)setNotRegisteredCell:(id)arg1;
- (bool)shouldHighlightRowAtIndex:(long long)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndex:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndex:(long long)arg2;
- (id)title;
- (id)titleForFooter;

@end
