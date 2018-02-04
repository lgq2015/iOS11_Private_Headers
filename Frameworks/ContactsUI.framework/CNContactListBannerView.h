/* made by EzioChiu
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNContactListBannerView : UIView <UIDragInteractionDelegate> {
    UIView * _avatarView;
    UIView * _avatarViewContainer;
    UIView * _bottomSeparator;
    NSArray * _constraintsPendingActivation;
    <CNContactListBannerViewDelegate> * _delegate;
    UIDragInteraction * _dragInteraction;
    UIView * _footnoteContainer;
    UILabel * _footnoteLabel;
    NSLayoutConstraint * _footnoteTitleToTitleVerticalConstraint;
    NSLayoutConstraint * _footnoteTitleToValueHorizontalSpaceConstraint;
    UILabel * _footnoteValueLabel;
    CNContactFormatter * _formatter;
    UIGestureRecognizer * _longPress;
    CNContact * _meContact;
    UILabel * _titleLabel;
}

@property (nonatomic, retain) UIView *avatarView;
@property (nonatomic, readonly) UIView *avatarViewContainer;
@property (nonatomic, readonly) UIView *bottomSeparator;
@property (nonatomic, retain) NSArray *constraintsPendingActivation;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CNContactListBannerViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIDragInteraction *dragInteraction;
@property (nonatomic, readonly) UIView *footnoteContainer;
@property (nonatomic, readonly) UILabel *footnoteLabel;
@property (nonatomic, retain) NSLayoutConstraint *footnoteTitleToTitleVerticalConstraint;
@property (nonatomic, retain) NSLayoutConstraint *footnoteTitleToValueHorizontalSpaceConstraint;
@property (nonatomic, readonly) UILabel *footnoteValueLabel;
@property (nonatomic, readonly) CNContactFormatter *formatter;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIGestureRecognizer *longPress;
@property (nonatomic, retain) CNContact *meContact;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UILabel *titleLabel;

+ (id)descriptorForRequiredKeys;

- (void).cxx_destruct;
- (void)activatePendingConstraints;
- (id)avatarView;
- (id)avatarViewContainer;
- (id)bottomSeparator;
- (bool)canBecomeFirstResponder;
- (bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)cellWasLongPressed:(id)arg1;
- (void)cellWasSingleTapped:(id)arg1;
- (void)configureDragInteraction;
- (id)constraintsPendingActivation;
- (void)copy:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (bool)displaysContactInfo;
- (id)dragInteraction;
- (id)dragInteraction:(id)arg1 itemsForBeginningSession:(id)arg2;
- (id)footnoteContainer;
- (id)footnoteFont;
- (id)footnoteLabel;
- (id)footnoteTextColor;
- (id)footnoteTitleToTitleVerticalConstraint;
- (id)footnoteTitleToValueHorizontalSpaceConstraint;
- (id)footnoteValueLabel;
- (id)formatter;
- (id)init;
- (id)longPress;
- (id)meContact;
- (void)menuDidHide:(id)arg1;
- (void)setAvatarView:(id)arg1;
- (void)setConstraintsPendingActivation:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDragInteraction:(id)arg1;
- (void)setFootnoteTitleToTitleVerticalConstraint:(id)arg1;
- (void)setFootnoteTitleToValueHorizontalSpaceConstraint:(id)arg1;
- (void)setMeContact:(id)arg1;
- (void)setMeContact:(id)arg1 footnoteTitle:(id)arg2 footnoteValue:(id)arg3;
- (void)showMenu;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)titleLabel;
- (void)updateFontRelatedConstraints;

@end
