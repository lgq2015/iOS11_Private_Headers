/* made by EzioChiu
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNContactDisplayHeaderController : NSObject <CNContactHeaderViewDelegate, CNUIObjectViewController> {
    unsigned long long  _avatarStyle;
    CNContact * _contact;
    CNContactViewCache * _contactViewCache;
    CNContactHeaderDisplayView * _headerView;
    NSLayoutConstraint * _heightConstraint;
    CNContactStyle * _style;
    <CNUIObjectViewControllerDelegate> * objectViewControllerDelegate;
}

@property (nonatomic) unsigned long long avatarStyle;
@property (nonatomic, retain) CNContact *contact;
@property (nonatomic, retain) CNContactViewCache *contactViewCache;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CNContactHeaderDisplayView *headerView;
@property (nonatomic, retain) NSLayoutConstraint *heightConstraint;
@property (nonatomic) <CNUIObjectViewControllerDelegate> *objectViewControllerDelegate;
@property (nonatomic, retain) CNContactStyle *style;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIView *view;

+ (id)descriptorForRequiredKeys;

- (void).cxx_destruct;
- (unsigned long long)avatarStyle;
- (id)contact;
- (id)contactStore;
- (id)contactStoreForHeaderView:(id)arg1;
- (id)contactViewCache;
- (void)createHeaderViewIfNeeded;
- (id)displayAccountForContact:(id)arg1;
- (void)headerPhotoDidSaveEditsForImageDrop;
- (void)headerPhotoDidUpdate;
- (id)headerView;
- (void)headerViewDidUpdateLabelSizes;
- (id)heightConstraint;
- (id)init;
- (id)initWithCache:(id)arg1 style:(id)arg2;
- (id)initWithContactStore:(id)arg1;
- (id)objectViewControllerDelegate;
- (void)reloadData;
- (void)setAvatarStyle:(unsigned long long)arg1;
- (void)setContact:(id)arg1;
- (void)setContactViewCache:(id)arg1;
- (void)setHeaderView:(id)arg1;
- (void)setHeightConstraint:(id)arg1;
- (void)setObjectViewControllerDelegate:(id)arg1;
- (void)setStyle:(id)arg1;
- (id)style;
- (void)updateFontSizes;
- (void)updateWithContact:(id)arg1;
- (id)view;
- (id)viewControllerForHeaderView:(id)arg1;

@end
