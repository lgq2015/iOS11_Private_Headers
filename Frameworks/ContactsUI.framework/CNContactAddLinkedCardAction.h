/* made by EzioChiu
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNContactAddLinkedCardAction : CNContactAction <CNContactContentViewControllerDelegate, CNContactPickerDelegate> {
    CNContact * _chosenContact;
    CNContactPickerViewController * _contactPicker;
    NSArray * _editingLinkedContacts;
    CNContact * _selectedContact;
}

@property (nonatomic, retain) CNContact *chosenContact;
@property (nonatomic, retain) CNContactPickerViewController *contactPicker;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSArray *editingLinkedContacts;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CNContact *selectedContact;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)chosenContact;
- (id)contactPicker;
- (void)contactPicker:(id)arg1 didSelectContact:(id)arg2;
- (void)contactPickerDidCancel:(id)arg1;
- (bool)contactViewController:(id)arg1 shouldPerformDefaultActionForContact:(id)arg2 propertyKey:(id)arg3 labeledValue:(id)arg4;
- (id)editingLinkedContacts;
- (void)peoplePickerLinkButtonTapped;
- (void)performActionWithSender:(id)arg1;
- (id)selectedContact;
- (void)setChosenContact:(id)arg1;
- (void)setContactPicker:(id)arg1;
- (void)setEditingLinkedContacts:(id)arg1;
- (void)setSelectedContact:(id)arg1;

@end
