/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUIncomingInvitationTableViewCell : UITableViewCell {
    HUPillButton * _acceptButton;
    CNAvatarView * _avatarView;
    CNContact * _contact;
    UIView * _containerView;
    HUPillButton * _declineButton;
    <HUIncomingInvitationTableViewCellDelegate> * _delegate;
    UILabel * _homeNameLabel;
    UILabel * _infoLabel;
    HMIncomingHomeInvitation * _invitation;
    bool  _showSpinner;
    UIActivityIndicatorView * _spinner;
}

@property (nonatomic, retain) HUPillButton *acceptButton;
@property (nonatomic, retain) CNAvatarView *avatarView;
@property (nonatomic, retain) CNContact *contact;
@property (nonatomic, retain) UIView *containerView;
@property (nonatomic, retain) HUPillButton *declineButton;
@property (nonatomic) <HUIncomingInvitationTableViewCellDelegate> *delegate;
@property (nonatomic, retain) UILabel *homeNameLabel;
@property (nonatomic, retain) UILabel *infoLabel;
@property (nonatomic, retain) HMIncomingHomeInvitation *invitation;
@property (nonatomic) bool showSpinner;
@property (nonatomic, retain) UIActivityIndicatorView *spinner;

+ (id)_formatDate:(id)arg1;

- (void).cxx_destruct;
- (void)_hideInvitationSpinner;
- (void)_showInvitationSpinner;
- (id)acceptButton;
- (void)acceptButtonPressed:(id)arg1;
- (id)avatarView;
- (id)contact;
- (id)containerView;
- (id)declineButton;
- (void)declineButtonPressed:(id)arg1;
- (id)delegate;
- (id)homeNameLabel;
- (id)infoLabel;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)invitation;
- (void)prepareForReuse;
- (void)setAcceptButton:(id)arg1;
- (void)setAvatarView:(id)arg1;
- (void)setContact:(id)arg1;
- (void)setContainerView:(id)arg1;
- (void)setDeclineButton:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHomeNameLabel:(id)arg1;
- (void)setInfoLabel:(id)arg1;
- (void)setInvitation:(id)arg1;
- (void)setShowSpinner:(bool)arg1;
- (void)setSpinner:(id)arg1;
- (bool)showSpinner;
- (id)spinner;

@end