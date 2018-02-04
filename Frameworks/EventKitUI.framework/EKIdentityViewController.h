/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKIdentityViewController : UIViewController <EKEditItemViewControllerProtocol> {
    <EKIdentityProtocol> * _identity;
    CNContactViewController * _personViewController;
    CNContactStore * _store;
}

@property (nonatomic) <EKEditItemViewControllerDelegate> *editDelegate;
@property (nonatomic) bool editItemShouldBeAskedForInjectableViewController;
@property (nonatomic) bool presentModally;
@property (nonatomic) bool useCustomBackButton;

- (void).cxx_destruct;
- (id)CNContactEmailAddressesKey;
- (id)CNContactPhoneNumbersKey;
- (id)CNLabelWork;
- (Class)_CNContactClass;
- (Class)_CNContactStoreClass;
- (Class)_CNContactViewControllerClass;
- (Class)_CNLabeledValueClass;
- (Class)_CNMutableContactClass;
- (id)contactForIdentity:(id)arg1;
- (id)initWithIdentity:(id)arg1;
- (void)loadView;
- (void)setIdentity:(id)arg1;
- (void)updateControllerWithContact:(id)arg1 isNew:(bool)arg2;

@end
