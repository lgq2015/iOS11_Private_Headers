/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUContactDetailsTableViewCell : UITableViewCell {
    CNAvatarView * _avatarView;
    NSArray * _constraints;
    UIView * _containerView;
    UILabel * _descriptionLabel;
    UIImageView * _photoView;
    UILabel * _titleLabel;
}

@property (nonatomic, readonly) CNAvatarView *avatarView;
@property (nonatomic, retain) NSArray *constraints;
@property (nonatomic, retain) CNContact *contact;
@property (nonatomic, readonly) UIView *containerView;
@property (nonatomic, readonly) UILabel *descriptionLabel;
@property (nonatomic, retain) NSString *descriptionText;
@property (nonatomic, retain) UIImage *photo;
@property (nonatomic, readonly) UIImageView *photoView;
@property (nonatomic, readonly) UILabel *titleLabel;
@property (nonatomic, retain) NSString *titleText;

+ (bool)requiresConstraintBasedLayout;

- (void).cxx_destruct;
- (id)avatarView;
- (id)constraints;
- (id)contact;
- (id)containerView;
- (id)descriptionLabel;
- (id)descriptionText;
- (id)initWithCoder:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (id)photo;
- (id)photoView;
- (void)prepareForReuse;
- (void)setConstraints:(id)arg1;
- (void)setContact:(id)arg1;
- (void)setDescriptionText:(id)arg1;
- (void)setPhoto:(id)arg1;
- (void)setTitleText:(id)arg1;
- (id)titleLabel;
- (id)titleText;
- (void)updateConstraints;

@end
