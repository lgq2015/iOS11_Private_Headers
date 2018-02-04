/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
 */

@interface VSAutoAuthenticationViewController_iOS : UIViewController <VSAutoAuthenticationViewController> {
    UILabel * _accountNameLabel;
    bool  _cancellationAllowed;
    <VSAuthenticationViewControllerDelegate> * _delegate;
    VSFontCenter * _fontCenter;
    VSIdentityProviderLogoView * _logoView;
    UIButton * _manualSignInButton;
    UILabel * _manualSignInTitleLabel;
    UILabel * _messageLabel;
    UILabel * _messageTitleLabel;
    UILabel * _noticeLabel;
    UIScrollView * _scrollView;
    VSAutoAuthenticationViewModel * _viewModel;
}

@property (nonatomic, retain) UILabel *accountNameLabel;
@property (getter=isCancellationAllowed, nonatomic) bool cancellationAllowed;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <VSAuthenticationViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) VSFontCenter *fontCenter;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) VSIdentityProviderLogoView *logoView;
@property (nonatomic, retain) UIButton *manualSignInButton;
@property (nonatomic, retain) UILabel *manualSignInTitleLabel;
@property (nonatomic, retain) UILabel *messageLabel;
@property (nonatomic, retain) UILabel *messageTitleLabel;
@property (nonatomic, retain) UILabel *noticeLabel;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } preferredLogoSize;
@property (nonatomic, retain) UIScrollView *scrollView;
@property (readonly) Class superclass;
@property (nonatomic, readonly) VSViewModel *viewModel;

- (void).cxx_destruct;
- (void)_manualSignInButtonPressed:(id)arg1;
- (void)_startObservingViewModel:(id)arg1;
- (void)_stopObservingViewModel:(id)arg1;
- (id)accountNameLabel;
- (void)dealloc;
- (id)delegate;
- (id)fontCenter;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (bool)isCancellationAllowed;
- (id)logoView;
- (id)manualSignInButton;
- (id)manualSignInTitleLabel;
- (id)messageLabel;
- (id)messageTitleLabel;
- (id)noticeLabel;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (struct CGSize { double x1; double x2; })preferredLogoSize;
- (id)scrollView;
- (void)setAccountNameLabel:(id)arg1;
- (void)setCancellationAllowed:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFontCenter:(id)arg1;
- (void)setLogoView:(id)arg1;
- (void)setManualSignInButton:(id)arg1;
- (void)setManualSignInTitleLabel:(id)arg1;
- (void)setMessageLabel:(id)arg1;
- (void)setMessageTitleLabel:(id)arg1;
- (void)setNoticeLabel:(id)arg1;
- (void)setScrollView:(id)arg1;
- (void)setViewModel:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)viewModel;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
