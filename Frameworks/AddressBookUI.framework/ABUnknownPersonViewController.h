/* made by EzioChiu
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABUnknownPersonViewController : UIViewController <CNContactViewControllerPrivateDelegate> {
    void * _addressBook;
    bool  _allowsActions;
    bool  _allowsAddingToAddressBook;
    NSString * _alternateName;
    CNContactViewController * _cnContactViewController;
    void * _displayedPerson;
    NSString * _message;
    <ABUnknownPersonViewControllerDelegate> * _unknownPersonViewDelegate;
}

@property (nonatomic) const void*addressBook;
@property (nonatomic) bool allowsActions;
@property (nonatomic) bool allowsAddingToAddressBook;
@property (nonatomic, copy) NSString *alternateName;
@property (nonatomic, retain) CNContactViewController *cnContactViewController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) const void*displayedPerson;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *message;
@property (readonly) Class superclass;
@property (nonatomic) <ABUnknownPersonViewControllerDelegate> *unknownPersonViewDelegate;

- (const void*)addressBook;
- (bool)allowsActions;
- (bool)allowsAddingToAddressBook;
- (id)alternateName;
- (id)cnContactViewController;
- (id)contactStore;
- (void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2;
- (bool)contactViewController:(id)arg1 shouldPerformDefaultActionForContact:(id)arg2 property:(id)arg3 labeledValue:(id)arg4;
- (void)dealloc;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (const void*)displayedPerson;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadContactViewController;
- (void)loadView;
- (id)message;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (void)setAddressBook:(void*)arg1;
- (void)setAllowsActions:(bool)arg1;
- (void)setAllowsAddingToAddressBook:(bool)arg1;
- (void)setAlternateName:(id)arg1;
- (void)setCnContactViewController:(id)arg1;
- (void)setDisplayedPerson:(void*)arg1;
- (void)setMessage:(id)arg1;
- (void)setUnknownPersonViewDelegate:(id)arg1;
- (id)unknownPersonViewDelegate;
- (void)viewDidAppear:(bool)arg1;

@end
