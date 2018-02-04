/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
 */

@interface FAFamilyInvitationsViewController : PSListController <AAUIArrowControlsViewDelegate, FAInvitationAcceptanceDelegate, UIAlertViewDelegate> {
    UIBarButtonItem * _acceptButton;
    ACAccount * _account;
    ACAccountStore * _accountStore;
    unsigned long long  _activeInviteIndex;
    AAUIArrowControlsView * _arrowControlsView;
    UIBarButtonItem * _declineButton;
    <FAFamilyInvitationsViewControllerDelegate> * _delegate;
    AAGrandSlamSigner * _grandSlamSigner;
    UIAlertView * _invalidInviteAlert;
    id /* block */  _invalidInviteAlertCompletion;
    UIView<FAInviteViewProtocol> * _inviteContenView;
    NSMutableArray * _invites;
    bool  _isAccepting;
    bool  _isDeclining;
    UIView * _masterView;
    NSOperationQueue * _networkingQueue;
    UIScrollView * _scrollView;
    bool  _shouldHideLocationSharing;
    UIBarButtonItem * _spinner;
    UIToolbar * _toolbar;
}

@property (nonatomic) unsigned long long activeInviteIndex;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <FAFamilyInvitationsViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)shouldPresentAsModalSheet;

- (void).cxx_destruct;
- (void)_acceptButtonWasTapped:(id)arg1;
- (id)_arrowControlsView;
- (void)_declineButtonWasTapped:(id)arg1;
- (void)_didProcessActiveInvite;
- (void)_executeInviteRequestWithType:(long long)arg1 invite:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)_inviteRequestErrorMessageKeyForRequestType:(long long)arg1;
- (id)_inviteRequestErrorTitleKeyForRequestType:(long long)arg1;
- (id)_inviteRequestForType:(long long)arg1 invite:(id)arg2;
- (void)_refreshContentInviteView;
- (void)_refreshNavigationBar;
- (void)_refreshToolbar;
- (void)_setInviteRequestRunning:(bool)arg1 withType:(long long)arg2;
- (void)_showConnectionErrorAlert;
- (void)_showInvalidInviteErrorAlertWithTitle:(id)arg1 message:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_startInvitationAcceptanceFlow;
- (id)_toolbarItemsForAcceptingState;
- (id)_toolbarItemsForDecliningState;
- (id)_toolbarItemsForDefaultState;
- (unsigned long long)activeInviteIndex;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)arrowControlsView:(id)arg1 didTapDownButton:(id)arg2;
- (void)arrowControlsView:(id)arg1 didTapUpButton:(id)arg2;
- (void)dealloc;
- (id)delegate;
- (void)familyInvitationAcceptanceViewController:(id)arg1 didCompleteWithSuccess:(bool)arg2;
- (id)initWithInvites:(id)arg1 appleAccount:(id)arg2 grandSlamSigner:(id)arg3;
- (void)loadView;
- (void)setActiveInviteIndex:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;
- (id)specifiers;
- (id)title;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillLayoutSubviews;

@end
