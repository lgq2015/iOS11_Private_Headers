/* made by EzioChiu
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNUIPeopleViewController : UITableViewController <CNContactListBannerViewDelegate> {
    CNContactStore * _contactStore;
    CNUIContactsEnvironment * _environment;
    CNContactFormatter * _formatter;
    CNContactListBannerView * _meBanner;
    NSArray * _people;
}

@property (nonatomic, retain) CNContactStore *contactStore;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CNUIContactsEnvironment *environment;
@property (nonatomic, retain) CNContactFormatter *formatter;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CNContactListBannerView *meBanner;
@property (nonatomic, retain) NSArray *people;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)bannerView:(id)arg1 wasSelectedToPresentMeContact:(id)arg2;
- (id)contactStore;
- (id)descriptorForRequiredKeys;
- (id)environment;
- (id)formatter;
- (id)initWithEnvironment:(id)arg1 contactStore:(id)arg2;
- (id)meBanner;
- (id)people;
- (void)setContactStore:(id)arg1;
- (void)setEnvironment:(id)arg1;
- (void)setFormatter:(id)arg1;
- (void)setMeBanner:(id)arg1;
- (void)setPeople:(id)arg1;
- (void)showContact:(id)arg1 animated:(bool)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidLoad;

@end
