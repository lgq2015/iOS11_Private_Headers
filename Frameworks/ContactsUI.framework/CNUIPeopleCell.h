/* made by EzioChiu
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNUIPeopleCell : UITableViewCell {
    CNAvatarView * _avatarView;
    UILabel * _titleLabel;
}

@property (nonatomic, retain) CNAvatarView *avatarView;
@property (nonatomic, retain) UILabel *titleLabel;

- (void).cxx_destruct;
- (id)avatarView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setAvatarView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setupConstraints;
- (id)titleLabel;

@end
