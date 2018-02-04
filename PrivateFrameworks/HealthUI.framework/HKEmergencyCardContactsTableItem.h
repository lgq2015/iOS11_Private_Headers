/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKEmergencyCardContactsTableItem : HKEmergencyCardTableItem <CNContactPickerDelegate, HKMedicalIDEditorCellEditDelegate, _HKEmergencyContactRelationshipPickerDelegate> {
    HKCoreTelephonyUtilities * _coreTelephonyUtilities;
    UITableViewCell * _lastDequeuedAddContactCell;
    _HKEmergencyContact * _selectedContact;
    bool  _selectedContactIsBeingAdded;
}

@property (nonatomic, retain) HKCoreTelephonyUtilities *coreTelephonyUtilities;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addEmergencyContactToData:(id)arg1;
- (id)_dequeueAndConfigureContactEditCellForIndex:(long long)arg1 inTableView:(id)arg2;
- (id)_dequeueAndConfigureContactViewCellForIndex:(long long)arg1 inTableView:(id)arg2;
- (void)_didSelectContact:(id)arg1 property:(id)arg2;
- (id)_emergencyContactWithContact:(id)arg1 property:(id)arg2;
- (void)_presentEmergencyContactDeletionAlertIfNecessary;
- (void)_presentEmergencyContactPicker;
- (void)callEmergencyContact:(id)arg1;
- (bool)canEditRowAtIndex:(long long)arg1;
- (long long)commitEditingStyle:(long long)arg1 forRowAtIndex:(long long)arg2;
- (long long)contactIndexForRowIndex:(long long)arg1;
- (void)contactPicker:(id)arg1 didSelectContact:(id)arg2;
- (void)contactPicker:(id)arg1 didSelectContactProperty:(id)arg2;
- (id)coreTelephonyUtilities;
- (long long)editingStyleForRowAtIndex:(long long)arg1;
- (void)emergencyContactRelationshipPicker:(id)arg1 didChooseRelationshipNamed:(id)arg2;
- (void)emergencyContactRelationshipPickerDidCancel:(id)arg1;
- (bool)hasPresentableData;
- (long long)itemTypeForRowIndex:(long long)arg1;
- (id)meContactIdentifier;
- (void)medicalIDEditorCellDidChangeValue:(id)arg1;
- (void)medicalIDEditorCellDidTapLabel:(id)arg1;
- (long long)numberOfRows;
- (bool)refreshFromData;
- (void)setCoreTelephonyUtilities:(id)arg1;
- (bool)shouldHighlightRowAtIndex:(long long)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndex:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndex:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndex:(long long)arg2;
- (id)title;
- (id)titleForFooter;
- (id)titleForHeader;
- (id)viewOnlyTitle;

@end