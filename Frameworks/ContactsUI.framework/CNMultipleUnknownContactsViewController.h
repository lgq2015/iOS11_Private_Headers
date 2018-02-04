/* made by EzioChiu
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNMultipleUnknownContactsViewController : UITableViewController <CNContactViewControllerDelegate> {
    CNContactStore * _contactStore;
    NSArray * _contacts;
    NSMutableSet * _createdContactIdentifiers;
    <CNMultipleUnknownContactsViewControllerDelegate> * _delegate;
    CNContactFormatter * _formatter;
}

@property (nonatomic, retain) CNContactStore *contactStore;
@property (nonatomic, copy) NSArray *contacts;
@property (nonatomic, retain) NSMutableSet *createdContactIdentifiers;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CNMultipleUnknownContactsViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CNContactFormatter *formatter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)contactFormatter;
+ (id)descriptorForRequiredKeys;

- (void).cxx_destruct;
- (void)_addToExistingContacts:(id)arg1;
- (void)_createNewContacts:(id)arg1;
- (void)_didComplete;
- (id)_existingMatchForUnknownContact:(id)arg1;
- (void)_presentUnknownContact:(id)arg1;
- (void)_save:(id)arg1;
- (void)_showAddAllToContactsConfirmation;
- (id)_updatedContact:(id)arg1 withPropertiesFromContact:(id)arg2;
- (id)contactStore;
- (void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2;
- (bool)contactViewController:(id)arg1 shouldPerformDefaultActionForContactProperty:(id)arg2;
- (id)contacts;
- (id)createdContactIdentifiers;
- (id)delegate;
- (id)formatter;
- (id)initWithContacts:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setContactStore:(id)arg1;
- (void)setContacts:(id)arg1;
- (void)setCreatedContactIdentifiers:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFormatter:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidLoad;

@end
