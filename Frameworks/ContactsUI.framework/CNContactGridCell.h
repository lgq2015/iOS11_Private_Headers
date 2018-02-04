/* made by EzioChiu
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNContactGridCell : UICollectionViewCell {
    NSArray * _actionCategories;
    CNContactGridClippingView * _actionsClippingView;
    UIView * _actionsContainerView;
    CNQuickActionsManager * _actionsManager;
    CNQuickActionsView * _actionsView;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _avatarMargins;
    struct CGSize { 
        double width; 
        double height; 
    }  _avatarSize;
    CNAvatarView * _avatarView;
    CNContactFormatter * _contactFormatter;
    <CNAvatarViewDelegate><CNQuickActionsViewDelegate> * _delegate;
    long long  _monogrammerStyle;
    UILabel * _nameLabel;
    NSDictionary * _nameTextAttributes;
    bool  _showsContactOnTap;
}

@property (nonatomic, copy) NSArray *actionCategories;
@property (nonatomic, retain) CNContactGridClippingView *actionsClippingView;
@property (nonatomic, retain) UIView *actionsContainerView;
@property (nonatomic, retain) CNQuickActionsManager *actionsManager;
@property (nonatomic, retain) CNQuickActionsView *actionsView;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } avatarMargins;
@property (nonatomic) struct CGSize { double x1; double x2; } avatarSize;
@property (nonatomic, retain) CNAvatarView *avatarView;
@property (nonatomic, retain) CNContact *contact;
@property (nonatomic, retain) CNContactFormatter *contactFormatter;
@property (nonatomic) <CNAvatarViewDelegate><CNQuickActionsViewDelegate> *delegate;
@property (nonatomic, readonly) double maximumActionsWidth;
@property (nonatomic) long long monogrammerStyle;
@property (nonatomic, retain) UILabel *nameLabel;
@property (nonatomic, copy) NSDictionary *nameTextAttributes;
@property (nonatomic) bool showsContactOnTap;

+ (double)actionsLeftMargin;

- (void).cxx_destruct;
- (void)_createViewsIfNeeded;
- (void)_updateActionsMask;
- (id)actionCategories;
- (id)actionsClippingView;
- (id)actionsContainerView;
- (id)actionsManager;
- (id)actionsView;
- (id /* block */)animationBlockForPreparingToShowActions;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })avatarMargins;
- (struct CGSize { double x1; double x2; })avatarSize;
- (id)avatarView;
- (id /* block */)completionBlockForHidingActions;
- (id)contact;
- (id)contactFormatter;
- (id)delegate;
- (double)maximumActionsWidth;
- (long long)monogrammerStyle;
- (id)nameLabel;
- (id)nameTextAttributes;
- (id)preferredLayoutAttributesFittingAttributes:(id)arg1;
- (void)setActionCategories:(id)arg1;
- (void)setActionsClippingView:(id)arg1;
- (void)setActionsContainerView:(id)arg1;
- (void)setActionsManager:(id)arg1;
- (void)setActionsView:(id)arg1;
- (void)setAvatarMargins:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setAvatarSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setAvatarView:(id)arg1;
- (void)setContact:(id)arg1;
- (void)setContactFormatter:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setMonogrammerStyle:(long long)arg1;
- (void)setNameLabel:(id)arg1;
- (void)setNameTextAttributes:(id)arg1;
- (void)setShowsContactOnTap:(bool)arg1;
- (bool)showsContactOnTap;
- (void)updateConstraints;

@end
